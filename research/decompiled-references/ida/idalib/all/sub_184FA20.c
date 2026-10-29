__int64 __fastcall sub_184FA20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned int v10; // r12d
  char v11; // r13
  void **v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r9
  unsigned int v20; // ebx
  void **v21; // rax
  char *v22; // r11
  void **v23; // rbp
  void **v24; // rdi
  void **v25; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+0h] [rbp-278h]
  char *v36; // [rsp+0h] [rbp-278h]
  char *v37; // [rsp+0h] [rbp-278h]
  unsigned int v38; // [rsp+Ch] [rbp-26Ch]
  __int64 v39; // [rsp+10h] [rbp-268h] BYREF
  __int64 v40; // [rsp+18h] [rbp-260h] BYREF
  void *v41[2]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v42; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v43[144]; // [rsp+40h] [rbp-238h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-1A8h] BYREF
  void *v45[3]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-188h]
  __int64 v47; // [rsp+F8h] [rbp-180h] BYREF
  unsigned int v48; // [rsp+100h] [rbp-178h]
  void *v49[2]; // [rsp+178h] [rbp-100h] BYREF
  int v50; // [rsp+188h] [rbp-F0h]
  char v51; // [rsp+18Ch] [rbp-ECh]
  _QWORD v52[5]; // [rsp+190h] [rbp-E8h] BYREF
  void *ptr; // [rsp+1B8h] [rbp-C0h]
  __int64 v54; // [rsp+1C0h] [rbp-B8h]
  _DWORD v55[26]; // [rsp+1C8h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+230h] [rbp-48h]
  __int16 v57; // [rsp+238h] [rbp-40h]
  char v58; // [rsp+23Ah] [rbp-3Eh]

  v10 = a6;
  v38 = a4;
  v11 = a10;
  v40 = a2;
  v35 = a5;
  v44 = 0;
  v45[2] = nullptr;
  v46 = 1;
  v39 = a3;
  v45[1] = v45;
  v45[0] = v45;
  v12 = (void **)&v47;
  do
  {
    *v12 = nullptr;
    v12 += 2;
  }
  while ( v12 != v49 );
  v49[1] = &byte_4;
  v49[0] = v52;
  ptr = v55;
  v54 = 0x400000000LL;
  v50 = 0;
  v51 = 1;
  v52[4] = 0;
  v55[24] = 0;
  v56 = 0;
  v57 = 257;
  v58 = 0;
  v13 = sub_F63270(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)v49, a4, a5, a6);
  v18 = sub_F63270(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15, v16, v17);
  v20 = sub_183BAC0(a1, v10, (__int64)v18, (__int64)v13, (__int64)&v44, v19);
  if ( !(_BYTE)v20 )
    goto LABEL_12;
  if ( sub_B65DB0(
         (__int64)&v44,
         *(_QWORD *)(*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
      goto LABEL_11;
    v21 = (void **)v45[0];
    goto LABEL_28;
  }
  v21 = (void **)v45[0];
  v22 = (char *)v45[0] + 16;
  if ( v45[0] != (void *)-16LL )
  {
LABEL_6:
    if ( v11 )
    {
      if ( !a9 )
      {
LABEL_9:
        v20 = 0;
        goto LABEL_13;
      }
LABEL_8:
      sub_1838710((__int64)v22, a9);
      goto LABEL_9;
    }
    v37 = v22;
    v29 = sub_16643B0((_QWORD *)a1, v10, v39, v40, (__int64)v22, v38, 0, 0);
    v22 = v37;
    if ( v29 != 1 )
    {
      if ( !a9 )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 )
  {
LABEL_28:
    if ( v21 != v45 )
    {
      while ( *((_DWORD *)v21 + 6) != 1 )
      {
        v21 = (void **)*v21;
        if ( v21 == v45 )
          goto LABEL_11;
      }
      v22 = (char *)(v21 + 2);
      if ( v35 )
      {
        v36 = (char *)(v21 + 2);
        sub_168B9F0((__int64)v43, (__int64 *)(a1 + 8), v10, 0x15EDu, 0);
        v27 = sub_1605D30((__int64)v43, &v39);
        v28 = sub_1605D30(v27, &v40);
        sub_15884C0(v28, &a7);
        sub_15F7200(v43);
        v22 = v36;
      }
      goto LABEL_6;
    }
  }
LABEL_11:
  if ( !v35 )
  {
LABEL_12:
    v20 = 1;
    goto LABEL_13;
  }
  sub_B669E0((__int64)&v44);
  HIBYTE(v57) = 1;
  sub_183BEE0(a1, v10, v40, v39, (__int64)&v44, v30);
  sub_1841240((__int64)v41, a1, &v44);
  sub_168B9F0((__int64)v43, (__int64 *)(a1 + 8), v10, v35, 0);
  v31 = sub_1605D30((__int64)v43, &v40);
  v32 = sub_1605D30(v31, &v39);
  v33 = sub_1682A40(v32, (__int64)v41);
  v34 = sub_15884C0(v33, &a7);
  sub_17B3DD0(v34, &a8);
  sub_15F7200(v43);
  if ( v41[0] != &v42 )
    operator delete(v41[0]);
LABEL_13:
  if ( ptr != v55 )
    free(ptr);
  if ( !v51 )
    free(v49[0]);
  if ( (v46 & 1) == 0 )
    operator delete(v47, 16LL * v48, 8);
  v23 = (void **)v45[0];
  if ( v45[0] != v45 )
  {
    while ( 1 )
    {
      v24 = (void **)v23[2];
      v25 = (void **)*v23;
      if ( v24 == v23 + 4 )
      {
        operator delete(v23);
        if ( v25 == v45 )
          return v20;
      }
      else
      {
        free(v24);
        operator delete(v23);
        if ( v25 == v45 )
          return v20;
      }
      v23 = v25;
    }
  }
  return v20;
}
