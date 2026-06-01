unsigned __int64 __fastcall sub_1B3DD80(__int64 *a1, unsigned int **a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int **v8; // rbx
  unsigned int **v9; // rsi
  unsigned int **v10; // rax
  char v11; // di
  unsigned int *v12; // rsi
  unsigned int v13; // ecx
  unsigned int **v14; // r15
  unsigned int *v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  char v19; // dl
  char v20; // dl
  char *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rdi
  char *v24; // rcx
  char *v25; // rax
  char *v26; // rcx
  char *v27; // rsi
  unsigned __int64 result; // rax
  _QWORD *v29; // rax
  __int64 v30; // r9
  unsigned int v31; // r12d
  __int64 v32; // rbp
  void *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+0h] [rbp-148h]
  unsigned int v39; // [rsp+24h] [rbp-124h] BYREF
  __int64 v40; // [rsp+28h] [rbp-120h] BYREF
  __int128 v41; // [rsp+30h] [rbp-118h] BYREF
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int64 v43; // [rsp+48h] [rbp-100h]
  int v44; // [rsp+50h] [rbp-F8h]
  char v45; // [rsp+54h] [rbp-F4h]
  _BYTE v46[40]; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v47[25]; // [rsp+80h] [rbp-C8h] BYREF

  v9 = &a2[a3];
  v8 = v9;
  if ( v9 == sub_1AE7A80(a2, (__int64)v9, 49)
    && v9 == sub_1AE7A80(a2, (__int64)v9, 109)
    && v9 == sub_1AE7A80(a2, (__int64)v9, 24)
    && v9 == sub_1AE7A80(a2, (__int64)v9, 65) )
  {
    v31 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
    *(_QWORD *)&v41 = "'init', 'use', 'destroy', or 'nowait'";
    *((_QWORD *)&v41 + 1) = 37;
    sub_168B9F0((__int64)v47, a1, a4, 0x11CBu, 0);
    v32 = sub_1682BA0((__int64)v47, (__int64)&v41);
    v33 = (void *)sub_20EAB70(107, v31);
    v43 = v34;
    ptr = v33;
    sub_166BAF0(v32, (__int64)&ptr);
    sub_15F7200(v47);
    return 1;
  }
  if ( a2 != v9 )
  {
    v10 = a2;
    v11 = 0;
    v12 = nullptr;
    do
    {
      v13 = (*v10)[2];
      if ( v13 == 49 )
      {
        if ( *((_BYTE *)*v10 + 25) )
          goto LABEL_6;
        v11 = 1;
      }
      else if ( v13 == 22 )
      {
        v12 = *v10;
      }
      ++v10;
    }
    while ( v8 != v10 );
    if ( v12 && v11 )
    {
      sub_168B9F0((__int64)v47, a1, *v12, 0x119Fu, 0);
      sub_15F7200(v47);
      return 1;
    }
LABEL_6:
    v14 = a2;
    ptr = v46;
    v43 = 4;
    v44 = 0;
    v45 = 1;
    while ( 1 )
    {
      v15 = *v14;
      v39 = 0;
      v40 = 0;
      v16 = v15[2];
      v41 = 0;
      if ( v16 == 49 )
      {
        v17 = *((_QWORD *)v15 + 4);
      }
      else
      {
        if ( v16 != 109 && v16 != 24 )
          goto LABEL_7;
        v17 = *((_QWORD *)v15 + 3);
      }
      v47[0] = v17;
      v18 = sub_1B31D70(*a1, v47, &v39, &v40, (__int64)&byte_22F0C30, 0, 0.0);
      *(_QWORD *)&v41 = v18;
      BYTE8(v41) = v19;
      if ( v18 )
        break;
LABEL_7:
      if ( v8 == ++v14 )
        goto LABEL_41;
    }
    v20 = v45;
    if ( !v45 )
      goto LABEL_36;
    v21 = (char *)ptr;
    v22 = 8LL * HIDWORD(v43);
    v23 = (__int64 *)((char *)ptr + v22);
    if ( ptr != (char *)ptr + v22 )
    {
      v24 = (char *)ptr;
      if ( *(_QWORD *)ptr == v18 )
      {
LABEL_40:
        v20 = 0;
        goto LABEL_21;
      }
      while ( 1 )
      {
        v24 += 8;
        if ( v23 == (__int64 *)v24 )
          break;
        if ( v18 == *(_QWORD *)v24 )
          goto LABEL_40;
      }
    }
    if ( HIDWORD(v43) < (unsigned int)v43 )
    {
      ++HIDWORD(v43);
      *v23 = v18;
      v21 = (char *)ptr;
      v24 = (char *)ptr + v22;
    }
    else
    {
LABEL_36:
      v24 = (char *)sub_2236760(&ptr, v18);
      v21 = (char *)ptr;
      if ( !v45 )
      {
        v25 = (char *)ptr + 8 * (unsigned int)v43;
        goto LABEL_22;
      }
    }
LABEL_21:
    v25 = &v21[8 * HIDWORD(v43)];
LABEL_22:
    if ( v24 != v25 && *(_QWORD *)v24 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v26 = v24 + 8;
      do
      {
        v27 = v26;
        if ( v25 == v26 )
          break;
        v26 += 8;
      }
      while ( *(_QWORD *)v27 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !v20 )
    {
      sub_168B9F0((__int64)v47, a1, v39, 0x11A2u, 0);
      sub_15993D0((__int64)v47, (__int64 *)&v41);
      sub_15F7200(v47);
      result = 1;
      if ( !v45 )
        goto LABEL_29;
      return result;
    }
    goto LABEL_7;
  }
  v44 = 0;
  ptr = v46;
  v43 = 4;
  v45 = 1;
LABEL_41:
  v29 = (_QWORD *)sub_168B6C0((__int64)a1);
  result = sub_F00240(v29, a4, a5, a2, a3, v30);
  if ( !v45 )
  {
LABEL_29:
    v35 = result;
    free(ptr);
    return v35;
  }
  return result;
}
