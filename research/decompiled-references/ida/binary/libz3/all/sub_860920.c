__int64 __fastcall sub_860920(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r15
  _DWORD *v8; // rax
  _BYTE *v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  char v11; // al
  __int64 v12; // r13
  char *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  int v16; // r9d
  _DWORD *v17; // r8
  int v18; // ecx
  _BYTE *v19; // r8
  int v20; // eax
  _BYTE *v21; // rdx
  _BYTE *v22; // rcx
  char v23; // si
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rax
  _DWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 i; // rax
  int v35; // [rsp+10h] [rbp-D8h]
  _BYTE *v36; // [rsp+10h] [rbp-D8h]
  _DWORD *v37; // [rsp+18h] [rbp-D0h]
  _BYTE *ptr; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+28h] [rbp-C0h]
  _BYTE v40[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr = v40;
  v39 = 0x1000000000LL;
  result = *(_QWORD *)(a1 + 88);
  if ( !result )
    return result;
  v3 = *(unsigned int *)(result - 4);
  if ( !(_DWORD)v3 )
    return result;
  v5 = 8 * v3;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(result + v6);
    v8 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)v7) + 24);
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 112) == *v8 && !v8[1] )
        break;
    }
LABEL_4:
    v6 += 8;
    if ( v6 == v5 )
      goto LABEL_26;
LABEL_5:
    result = *(_QWORD *)(a1 + 88);
  }
  v9 = *(_BYTE **)(a1 + 80);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 488LL);
  if ( v10 == sub_795570 )
  {
    if ( !v9[168] )
      goto LABEL_13;
    v11 = *(_BYTE *)(v7 + 16);
  }
  else
  {
    v11 = v10((__int64)v9, v7);
  }
  if ( !v11 )
    goto LABEL_4;
LABEL_13:
  v12 = *(_QWORD *)(v7 + 64);
  if ( *(_BYTE *)(v12 + 8) )
    goto LABEL_4;
  if ( (unsigned __int8)sub_79AAE0(*(_QWORD *)(a1 + 80), *(_QWORD *)(v7 + 64)) || (unsigned __int8)sub_860850(a1, v12) )
  {
    v13 = (char *)(v12 + 88);
    if ( *(int *)(v12 + 88) >> 8 == -1 )
    {
LABEL_33:
      v14 = *(_DWORD *)(a2 + 8);
      v15 = *(_DWORD *)(a2 + 12);
      v16 = -1;
      if ( v14 >= v15 )
        goto LABEL_34;
LABEL_21:
      v17 = *(_DWORD **)a2;
    }
    else
    {
      while ( *(_DWORD *)(a1 + 12) != *v13 )
      {
        v13 = *((char **)v13 + 1);
        if ( !v13 )
          goto LABEL_33;
      }
      v14 = *(_DWORD *)(a2 + 8);
      v15 = *(_DWORD *)(a2 + 12);
      v16 = *(int *)v13 >> 8;
      if ( v14 < v15 )
        goto LABEL_21;
LABEL_34:
      v35 = v16;
      v25 = 2 * v15;
      v26 = sub_186B270(4 * v25);
      v14 = *(_DWORD *)(a2 + 8);
      v27 = *(_DWORD **)a2;
      v17 = (_DWORD *)v26;
      v16 = v35;
      if ( v14 )
      {
        if ( v14 - 1 <= 2 || (unsigned __int64)(v26 - (_QWORD)(v27 + 1)) <= 8 )
        {
          for ( i = 0; i != v14; ++i )
            v17[i] = v27[i];
        }
        else
        {
          v28 = 0;
          do
          {
            *(__m128i *)&v17[v28] = _mm_loadu_si128((const __m128i *)&v27[v28]);
            v28 += 4;
          }
          while ( 4LL * (v14 >> 2) != v28 );
          if ( (v14 & 3) != 0 )
          {
            v17[v14 & 0xFFFFFFFC] = v27[v14 & 0xFFFFFFFC];
            v29 = (v14 & 0xFFFFFFFC) + 1;
            if ( (unsigned int)v29 < v14 )
            {
              v30 = (v14 & 0xFFFFFFFC) + 2;
              v17[v29] = v27[v29];
              if ( (unsigned int)v30 < v14 )
                v17[v30] = v27[v30];
            }
          }
        }
      }
      if ( v27 && v27 != (_DWORD *)(a2 + 16) )
      {
        v37 = v17;
        sub_186B220(v27);
        v14 = *(_DWORD *)(a2 + 8);
        v17 = v37;
        v16 = v35;
      }
      *(_QWORD *)a2 = v17;
      *(_DWORD *)(a2 + 12) = v25;
    }
    v17[v14] = v16;
    ++*(_DWORD *)(a2 + 8);
  }
  v18 = v39;
  *(_BYTE *)(v12 + 8) = 1;
  if ( (unsigned int)v39 < HIDWORD(v39) )
  {
    v19 = ptr;
    goto LABEL_25;
  }
  v31 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v39)));
  v18 = v39;
  v19 = (_BYTE *)v31;
  if ( !(_DWORD)v39 )
  {
LABEL_54:
    if ( ptr == v40 )
      goto LABEL_57;
LABEL_55:
    if ( ptr )
    {
      v36 = v19;
      sub_186B220(ptr);
      v18 = v39;
      v19 = v36;
    }
    goto LABEL_57;
  }
  if ( (unsigned int)(v39 - 1) > 2 && (_BYTE *)v31 != ptr + 8 )
  {
    v32 = 0;
    do
    {
      *(__m128i *)&v19[v32] = _mm_loadu_si128((const __m128i *)&ptr[v32]);
      v32 += 16;
    }
    while ( 16LL * ((unsigned int)v39 >> 1) != v32 );
    if ( (v39 & 1) != 0 )
      *(_QWORD *)&v19[8 * (v39 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v39 & 0xFFFFFFFE)];
    goto LABEL_54;
  }
  v33 = 0;
  do
  {
    *(_QWORD *)&v19[v33] = *(_QWORD *)&ptr[v33];
    v33 += 8;
  }
  while ( 8LL * (unsigned int)v39 != v33 );
  if ( ptr != v40 )
    goto LABEL_55;
LABEL_57:
  ptr = v19;
  HIDWORD(v39) *= 2;
LABEL_25:
  v6 += 8;
  *(_QWORD *)&v19[8 * v18] = v12;
  LODWORD(v39) = v18 + 1;
  if ( v6 != v5 )
    goto LABEL_5;
LABEL_26:
  v20 = v39;
  v21 = v40;
  v22 = &ptr[8 * (unsigned int)v39];
  LOBYTE(v20) = ptr == nullptr;
  LOBYTE(v21) = ptr == v40;
  result = (unsigned int)v21 | v20;
  v23 = result;
  if ( v22 != ptr )
  {
    result = (__int64)ptr;
    do
    {
      v24 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v24 + 8) = 0;
    }
    while ( (_BYTE *)result != v22 );
  }
  if ( !v23 )
    return sub_186B220(ptr);
  return result;
}

