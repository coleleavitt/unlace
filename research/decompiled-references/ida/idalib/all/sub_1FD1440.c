__int64 __fastcall sub_1FD1440(__int64 a1, unsigned __int8 *a2, size_t a3, __int64 a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // rax
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // r8d
  _WORD *v17; // rdx
  _WORD *v18; // rax
  int v19; // r9d
  int v20; // ecx
  int *v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // r10d
  int v24; // eax
  int v25; // eax
  int *v26; // r14
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // r15d
  _DWORD *v31; // rdi
  unsigned __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rsi
  _QWORD *v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  unsigned int v42; // ebp
  int v44; // [rsp+0h] [rbp-68h]
  int v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+4h] [rbp-64h]
  int v47; // [rsp+8h] [rbp-60h]
  int v48; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v50; // [rsp+18h] [rbp-50h]
  _DWORD v51[18]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a4 + 20) )
    goto LABEL_6;
  v8 = 4 * (*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 16));
  v9 = *(unsigned int *)(a4 + 8);
  if ( v8 < 0x20 )
    v8 = 32;
  if ( (unsigned int)v9 <= v8 )
  {
    memset(*(void **)a4, -1, 8 * v9);
LABEL_6:
    *(_QWORD *)(a4 + 12) = 0;
    goto LABEL_7;
  }
  sub_22364B0(a4);
LABEL_7:
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
    return 0;
  ++*(_DWORD *)(a1 + 1488);
  v11 = &a2[a3];
  if ( a2 == &a2[a3] )
  {
    v13 = 5381;
  }
  else
  {
    v12 = a2;
    v13 = 5381;
    do
    {
      v14 = *v12++;
      v13 += v14 + 32 * v13;
    }
    while ( v11 != v12 );
  }
  v15 = *(unsigned int *)(*(_QWORD *)(v10 + 8) + 4LL * (v13 & (unsigned int)(*(_DWORD *)v10 - 1)));
  if ( !(_DWORD)v15 )
    return 0;
  v16 = 0;
  v17 = (_WORD *)(*(_QWORD *)(v10 + 16) + v15);
  v18 = v17 + 1;
  v19 = (unsigned __int16)*v17;
  if ( !*v17 )
    return 0;
  while ( 1 )
  {
    v20 = (unsigned __int16)v18[3];
    v21 = (int *)(v18 + 4);
    v22 = (unsigned __int16)v18[2];
    v23 = v20 + v22;
    if ( *(_DWORD *)v18 == v13 && a3 == v22 )
    {
      v47 = v16;
      v46 = v20 + v22;
      v44 = v19;
      if ( !a3 )
        goto LABEL_18;
      v48 = (unsigned __int16)v18[3];
      v24 = memcmp(v18 + 4, a2, a3);
      v20 = v48;
      v19 = v44;
      v23 = v46;
      v16 = v47;
      if ( !v24 )
        break;
    }
    ++v16;
    v18 = (_WORD *)((char *)v21 + v23);
    if ( v19 == v16 )
      return 0;
  }
  v21 = (int *)((char *)v21 + a3);
  if ( v21 )
  {
LABEL_18:
    v50 = 0x200000000LL;
    ptr = v51;
    if ( v20 )
    {
      v25 = *v21;
      v26 = v21 + 1;
      v27 = v20 - 4;
      LODWORD(v50) = 1;
      v28 = v27 + (_DWORD)v26;
      v51[0] = v25;
      v29 = 1;
      if ( !v27 )
      {
        v31 = v51;
        LODWORD(v29) = 1;
        goto LABEL_24;
      }
      do
      {
        v30 = *v26;
        if ( v29 + 1 > (unsigned __int64)HIDWORD(v50) )
        {
          v45 = v28;
          sub_2237220(&ptr, v51, v29 + 1, 4);
          v29 = (unsigned int)v50;
          v28 = v45;
        }
        ++v26;
        *((_DWORD *)ptr + v29) = v30;
        v29 = (unsigned int)(v50 + 1);
        LODWORD(v50) = v50 + 1;
      }
      while ( v28 != (_DWORD)v26 );
      v31 = ptr;
      if ( (_DWORD)v29 )
      {
LABEL_24:
        v32 = 0;
        v33 = 4LL * (unsigned int)(v29 - 1) + 4;
        while ( 1 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL * (unsigned int)v31[v32 / 4]);
          if ( v34 )
            break;
LABEL_41:
          v32 += 4LL;
          if ( v33 == v32 )
            goto LABEL_42;
        }
        if ( !*(_BYTE *)(a4 + 20) )
          goto LABEL_47;
        v35 = *(_QWORD **)a4;
        v36 = *(unsigned int *)(a4 + 12);
        v37 = (_QWORD *)(*(_QWORD *)a4 + 8 * v36);
        if ( *(_QWORD **)a4 != v37 )
        {
          v38 = *(_QWORD **)a4;
          if ( v34 == *v35 )
            goto LABEL_34;
          while ( v37 != ++v38 )
          {
            if ( v34 == *v38 )
              goto LABEL_34;
          }
        }
        if ( (unsigned int)v36 < *(_DWORD *)(a4 + 8) )
        {
          *(_DWORD *)(a4 + 12) = v36 + 1;
          *v37 = v34;
          v35 = *(_QWORD **)a4;
          v38 = (_QWORD *)(*(_QWORD *)a4 + 8 * v36);
        }
        else
        {
LABEL_47:
          v38 = (_QWORD *)sub_2236760(a4, v34);
          v35 = *(_QWORD **)a4;
          if ( !*(_BYTE *)(a4 + 20) )
          {
            v39 = &v35[*(unsigned int *)(a4 + 8)];
LABEL_35:
            if ( v39 != v38 && *v38 >= 0xFFFFFFFFFFFFFFFELL )
            {
              v40 = v38 + 1;
              do
              {
                v41 = v40;
                if ( v39 == v40 )
                  break;
                ++v40;
              }
              while ( *v41 >= 0xFFFFFFFFFFFFFFFELL );
            }
            v31 = ptr;
            goto LABEL_41;
          }
        }
LABEL_34:
        v39 = &v35[*(unsigned int *)(a4 + 12)];
        goto LABEL_35;
      }
LABEL_42:
      v42 = 1;
      ++*(_DWORD *)(a1 + 1492);
      if ( v31 != v51 )
        free(v31);
    }
    else
    {
      ++*(_DWORD *)(a1 + 1492);
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v42;
}
