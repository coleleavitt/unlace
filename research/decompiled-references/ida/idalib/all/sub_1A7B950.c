void __fastcall sub_1A7B950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v7; // rbp
  char v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r12
  char *v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rsi
  char *v15; // rcx
  char *v16; // rdx
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rdx
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r12
  _QWORD *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v34; // [rsp+40h] [rbp-138h]
  unsigned __int64 v35; // [rsp+40h] [rbp-138h]
  _QWORD *v36; // [rsp+48h] [rbp-130h]
  char v38; // [rsp+6Eh] [rbp-10Ah] BYREF
  void *ptr; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-100h]
  unsigned int v41; // [rsp+7Ch] [rbp-FCh]
  _QWORD v42[4]; // [rsp+80h] [rbp-F8h] BYREF
  void *v43; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-D0h]
  int v45; // [rsp+B0h] [rbp-C8h]
  char v46; // [rsp+B4h] [rbp-C4h]
  __int64 v47; // [rsp+B8h] [rbp-C0h] BYREF

  v7 = a3;
  ptr = v42;
  v43 = &v47;
  if ( !a6 )
    v7 = 0;
  v41 = 4;
  v44 = 16;
  v45 = 0;
  v46 = 1;
  v8 = 1;
  v42[0] = a3;
  v9 = 1;
  do
  {
    while ( 1 )
    {
      v10 = v9--;
      v11 = *((_QWORD *)ptr + v10 - 1);
      v40 = v9;
      if ( v8 )
      {
        v12 = (char *)v43;
        v13 = HIDWORD(v44);
        v14 = 8LL * HIDWORD(v44);
        if ( v43 != (char *)v43 + v14 )
        {
          if ( v11 != *(_QWORD *)v43 )
          {
            v15 = (char *)v43;
            do
            {
              v15 += 8;
              if ( (char *)v43 + v14 == v15 )
              {
                v16 = (char *)v43;
                goto LABEL_12;
              }
            }
            while ( v11 != *(_QWORD *)v15 );
          }
          goto LABEL_39;
        }
        v15 = (char *)v43;
        goto LABEL_13;
      }
      if ( !sub_2236570(&v43, v11) )
        break;
      v8 = v46;
      v9 = v40;
LABEL_39:
      if ( !v9 )
      {
        if ( v8 )
          goto LABEL_41;
        goto LABEL_49;
      }
    }
    if ( !v46 )
      goto LABEL_51;
    v12 = (char *)v43;
    v13 = HIDWORD(v44);
    v14 = 8LL * HIDWORD(v44);
    v15 = (char *)v43 + v14;
    if ( v43 != (char *)v43 + v14 )
    {
      v16 = (char *)v43;
      if ( v11 == *(_QWORD *)v43 )
      {
        v17 = (char *)v43 + 8 * HIDWORD(v44);
        goto LABEL_16;
      }
LABEL_12:
      while ( 1 )
      {
        v12 += 8;
        if ( v15 == v12 )
          break;
        if ( v11 == *(_QWORD *)v12 )
          goto LABEL_52;
      }
    }
LABEL_13:
    if ( v13 < (unsigned int)v44 )
    {
      HIDWORD(v44) = v13 + 1;
      *(_QWORD *)v15 = v11;
      v16 = (char *)v43;
      v12 = (char *)v43 + v14;
      if ( v46 )
        goto LABEL_52;
      goto LABEL_15;
    }
LABEL_51:
    v12 = (char *)sub_2236760(&v43, v11);
    v16 = (char *)v43;
    if ( v46 )
    {
LABEL_52:
      v17 = &v16[8 * HIDWORD(v44)];
      goto LABEL_16;
    }
LABEL_15:
    v17 = &v16[8 * (unsigned int)v44];
LABEL_16:
    if ( v12 != v17 && *(_QWORD *)v12 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v18 = v12 + 8;
      do
      {
        v19 = v18;
        if ( v17 == v18 )
          break;
        v18 += 8;
      }
      while ( *(_QWORD *)v19 >= 0xFFFFFFFFFFFFFFFELL );
    }
    sub_FF1730(a2, v11, a5, 1, (__int64)nullsub_1204, (__int64)&v38, (char)nullsub_1205);
    v20 = *(_DWORD *)(v11 + 36);
    if ( v20 > 7 || ((1LL << v20) & 0xBC) == 0 )
    {
LABEL_46:
      v9 = v40;
      goto LABEL_47;
    }
    v9 = v40;
    if ( v20 - 4 > 1 )
    {
      if ( v7 )
      {
        v9 = v40;
        if ( v7 != v11 )
          goto LABEL_47;
      }
      else
      {
        if ( !a4 || *(_DWORD *)(a4 + 36) != 5 || !sub_A956B0(a1, v11, a4) )
          goto LABEL_46;
        v9 = v40;
        v7 = v11;
      }
    }
    v21 = *(_QWORD **)(v11 + 944);
    v22 = *(unsigned int *)(v11 + 952);
    if ( &v21[v22] != v21 )
    {
      v23 = &v21[v22];
      do
      {
        while ( 1 )
        {
          v24 = v9;
          v25 = *v21;
          v26 = v9 + 1LL;
          if ( v26 > v41 )
            break;
          ++v21;
          *((_QWORD *)ptr + v24) = v25;
          v9 = ++v40;
          if ( v23 == v21 )
            goto LABEL_31;
        }
        v36 = v21;
        v34 = *v21;
        sub_2237220(&ptr, v42, v26, 8);
        *((_QWORD *)ptr + v40) = v34;
        v9 = ++v40;
        v21 = v36 + 1;
      }
      while ( v23 != v36 + 1 );
    }
LABEL_31:
    v27 = *(_QWORD *)(v11 + 1032);
    v28 = *(unsigned int *)(v11 + 1040);
    if ( v27 != v27 + 8 * v28 )
    {
      v29 = *(_QWORD **)(v11 + 1032);
      v30 = (_QWORD *)(v27 + 8 * v28);
      do
      {
        v31 = v9;
        v32 = v9 + 1LL;
        if ( v32 <= v41 )
        {
          *((_QWORD *)ptr + v31) = *v29 & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v35 = *v29 & 0xFFFFFFFFFFFFFFF8LL;
          sub_2237220(&ptr, v42, v32, 8);
          *((_QWORD *)ptr + v40) = v35;
        }
        ++v29;
        v9 = ++v40;
      }
      while ( v30 != v29 );
    }
LABEL_47:
    v8 = v46;
  }
  while ( v9 );
  if ( v46 )
    goto LABEL_41;
LABEL_49:
  free(v43);
LABEL_41:
  if ( ptr != v42 )
    free(ptr);
}
