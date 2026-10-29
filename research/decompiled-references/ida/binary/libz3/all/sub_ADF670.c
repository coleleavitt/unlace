__int64 __fastcall sub_ADF670(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r10
  unsigned int v10; // edx
  int v11; // edi
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  __int64 *v21; // r15
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 *v31; // rbp
  __int64 v32; // rsi
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+10h] [rbp-E8h]
  __int64 v37; // [rsp+20h] [rbp-D8h]
  __int64 *v38; // [rsp+28h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-C8h]
  _BYTE v40[192]; // [rsp+38h] [rbp-C0h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(a3 + 8);
  v38 = (__int64 *)v40;
  v37 = *a1;
  v39 = 0x1000000000LL;
  if ( !v5 )
    goto LABEL_18;
  v35 = v5 + 8LL * *(unsigned int *)(v5 - 4);
  if ( v5 == v35 )
    goto LABEL_18;
  while ( 2 )
  {
    while ( 2 )
    {
      v7 = *(unsigned int *)(a2 + 32);
      v8 = *(__int64 **)(a2 + 24);
      v9 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
      v10 = v7 - 1;
      v7 *= 24;
      v11 = *(_DWORD *)(v9 + 12);
      v12 = (__int64 *)((char *)v8 + v7);
      v13 = 24LL * (v11 & v10);
      v14 = (__int64 *)((char *)v8 + v13);
      if ( v13 == v7 )
      {
LABEL_25:
        while ( v14 != v8 )
        {
          v27 = *v8;
          if ( (unsigned __int64)*v8 > 1 )
          {
            if ( *(_DWORD *)(v27 + 12) == v11 && v9 == v27 )
            {
              v15 = v8;
              goto LABEL_23;
            }
          }
          else if ( !v27 )
          {
            break;
          }
          v8 += 3;
        }
LABEL_10:
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 40LL))(
                a2,
                *(_QWORD *)(v9 + 40),
                v13,
                v8,
                v14);
        if ( v16 )
        {
          v17 = *a1;
          goto LABEL_12;
        }
        v26 = 0;
        goto LABEL_45;
      }
      v15 = (__int64 *)((char *)v8 + v13);
      while ( 1 )
      {
        v13 = *v15;
        if ( (unsigned __int64)*v15 > 1 )
          break;
        if ( !v13 )
          goto LABEL_10;
LABEL_7:
        v15 += 3;
        if ( v12 == v15 )
          goto LABEL_25;
      }
      if ( *(_DWORD *)(v13 + 12) != v11 || v9 != v13 )
        goto LABEL_7;
LABEL_23:
      v16 = v15[2];
      LODWORD(v17) = v4;
      if ( !v16 )
        goto LABEL_10;
LABEL_12:
      ++*(_DWORD *)(v16 + 8);
      sub_15E1B70(v17);
      v18 = sub_15E1A70(v17);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v20 = v39;
      if ( (unsigned int)v39 >= HIDWORD(v39) )
      {
        v36 = v18;
        v28 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v39)));
        v20 = v39;
        v21 = (__int64 *)v28;
        v19 = v36;
        if ( (_DWORD)v39 )
        {
          if ( (unsigned int)(v39 - 1) <= 2 || (__int64 *)v28 == v38 + 1 )
          {
            v34 = 0;
            do
            {
              v21[v34] = v38[v34];
              ++v34;
            }
            while ( v34 != (unsigned int)v39 );
          }
          else
          {
            v29 = 0;
            do
            {
              *(__m128i *)&v21[v29] = _mm_loadu_si128((const __m128i *)&v38[v29]);
              v29 += 2;
            }
            while ( v29 != 2LL * ((unsigned int)v39 >> 1) );
            if ( (v39 & 1) != 0 )
              v21[(unsigned int)v39 & 0xFFFFFFFE] = v38[(unsigned int)v39 & 0xFFFFFFFE];
          }
        }
        if ( v38 != (__int64 *)v40 && v38 )
        {
          sub_186B220(v38);
          v20 = v39;
          v19 = v36;
        }
        v38 = v21;
        HIDWORD(v39) *= 2;
      }
      else
      {
        v21 = v38;
      }
      v21[v20] = v19;
      LODWORD(v39) = v20 + 1;
      v22 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( !v22 )
      {
        v4 = *a1;
        v5 += 8;
        if ( v35 == v5 )
          goto LABEL_18;
        continue;
      }
      break;
    }
    v5 += 8;
    sub_15D7BC0(v4, v16);
    v4 = *a1;
    if ( v35 != v5 )
      continue;
    break;
  }
LABEL_18:
  v23 = sub_15E1AF0(v4);
  v24 = a1[9];
  v25 = v23;
  if ( v23 )
  {
    ++*(_DWORD *)(v23 + 8);
    sub_8F8A20(v24);
    v22 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v4, v25);
  }
  else
  {
    sub_8F8A20(v24);
  }
  v26 = 1;
LABEL_45:
  v30 = v38;
  v31 = &v38[(unsigned int)v39];
  if ( v38 < v31 )
  {
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v22 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_51;
      }
      sub_15D7BC0(v37, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_51:
    v30 = v38;
  }
  if ( v30 && v30 != (__int64 *)v40 )
    sub_186B220(v30);
  return v26;
}

