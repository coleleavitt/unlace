__int64 __fastcall sub_B86360(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rcx
  void **v5; // r13
  void **v6; // r12
  void **v7; // r13
  void **v8; // r12
  char *v9; // r12
  char *v10; // rdi
  char *v11; // r13
  char *v12; // rdi
  void **v13; // r13
  void **v14; // r12
  void **v15; // r13
  void **v16; // r12
  void **v17; // r13
  void **v18; // r12
  void **v19; // r12
  void **v20; // rbx
  void **v21; // r12
  void **v22; // rbx
  void **v23; // r12
  void **v24; // rbx
  void **v25; // r12
  void **v26; // rbx
  void **v27; // r12
  void **v28; // rbx
  __int64 v30; // [rsp+8h] [rbp-3A0h] BYREF
  __m128i v31; // [rsp+10h] [rbp-398h] BYREF
  int v32; // [rsp+20h] [rbp-388h] BYREF
  char v33; // [rsp+79h] [rbp-32Fh]
  void *v34; // [rsp+118h] [rbp-290h]
  void **v35; // [rsp+120h] [rbp-288h]
  void *v36; // [rsp+130h] [rbp-278h]
  void **v37; // [rsp+138h] [rbp-270h]
  void *v38; // [rsp+148h] [rbp-260h]
  void **v39; // [rsp+150h] [rbp-258h]
  void *v40; // [rsp+160h] [rbp-248h]
  void **v41; // [rsp+168h] [rbp-240h]
  void *v42; // [rsp+178h] [rbp-230h]
  void **v43; // [rsp+180h] [rbp-228h]
  void *v44; // [rsp+1A8h] [rbp-200h]
  __int64 v45; // [rsp+1B8h] [rbp-1F0h] BYREF
  void *v46; // [rsp+1C8h] [rbp-1E0h]
  __int64 v47; // [rsp+1D8h] [rbp-1D0h] BYREF
  void *v48; // [rsp+1E8h] [rbp-1C0h]
  __int64 v49; // [rsp+1F8h] [rbp-1B0h] BYREF
  void *v50; // [rsp+208h] [rbp-1A0h]
  __int64 v51; // [rsp+218h] [rbp-190h] BYREF
  void *v52; // [rsp+228h] [rbp-180h]
  void **v53; // [rsp+230h] [rbp-178h]
  void *v54; // [rsp+240h] [rbp-168h]
  void **v55; // [rsp+248h] [rbp-160h]
  void *v56; // [rsp+260h] [rbp-148h]
  void **v57; // [rsp+268h] [rbp-140h]
  __int64 v58; // [rsp+278h] [rbp-130h] BYREF
  void *v59; // [rsp+288h] [rbp-120h]
  void *v60; // [rsp+2A8h] [rbp-100h]
  void **v61; // [rsp+2B0h] [rbp-F8h]
  void *v62; // [rsp+2C0h] [rbp-E8h]
  __int64 v63; // [rsp+2D0h] [rbp-D8h] BYREF
  void *v64; // [rsp+2E0h] [rbp-C8h]
  __int64 v65; // [rsp+2F0h] [rbp-B8h] BYREF
  void *v66; // [rsp+318h] [rbp-90h]
  void **v67; // [rsp+320h] [rbp-88h]
  void *v68; // [rsp+330h] [rbp-78h]
  __int64 v69; // [rsp+340h] [rbp-68h] BYREF
  void *v70; // [rsp+358h] [rbp-50h]
  __int64 v71; // [rsp+368h] [rbp-40h] BYREF

  v30 = a2;
  sub_FEA220(&v32);
  v31.m128i_i64[1] = 0;
  v31.m128i_i8[1] = (BYTE1(v32) >> 2) & 2 | v31.m128i_i8[1] & 0xFD;
  v31.m128i_i8[2] = (HIBYTE(v32) >> 2 << 7) | v31.m128i_i8[2] & 0x7F;
  v3 = v32 & 0x10000080;
  v31.m128i_i8[3] = ((((BYTE1(v32) >> 4) ^ 1) & 1) << 6)
                  | (32 * (((BYTE1(v32) >> 3) ^ 1) & 1)) & 0xBF
                  | (8 * v32) & 0x10
                  | (8 * ((v32 & 0x1000) != 0)) & 0x8F
                  | (4 * (v32 & 1)) & 0x8F
                  | (BYTE1(v32) >> 2) & 2
                  | ((v32 & 0x1008) != 0)
                  | v31.m128i_i8[3] & 0x80;
  LOBYTE(v3) = (v32 & 0x10000080) == 128;
  v4 = (4 * v3) | (HIBYTE(v32) >> 2) & 2 | v31.m128i_i8[4] & 0xF9u;
  v31.m128i_i8[4] = (4 * v3) | (HIBYTE(v32) >> 2) & 2 | v31.m128i_i8[4] & 0xF9;
  v31.m128i_i8[5] = (v33 << 7) | v31.m128i_i8[5] & 0x7F;
  v31.m128i_i64[0] = v31.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  sub_B84F80(&v30, a1, &v31, v4, 8 * (unsigned int)((v32 & 0x1000) != 0));
  if ( v70 != &v71 )
    operator delete(v70);
  if ( v68 != &v69 )
    operator delete(v68);
  v5 = v67;
  v6 = (void **)v66;
  if ( v67 != v66 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_8;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_8:
    v6 = (void **)v66;
  }
  if ( v6 )
    operator delete(v6);
  if ( v64 != &v65 )
    operator delete(v64);
  if ( v62 != &v63 )
    operator delete(v62);
  v7 = v61;
  v8 = (void **)v60;
  if ( v61 != v60 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 7;
        if ( v7 == v8 )
          goto LABEL_18;
      }
      v8 += 7;
    }
    while ( v7 != v8 );
LABEL_18:
    v8 = (void **)v60;
  }
  if ( v8 )
    operator delete(v8);
  v9 = (char *)v59;
  if ( v59 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v58, *((_QWORD **)v9 + 3));
      v10 = *((char **)v9 + 8);
      v11 = *((char **)v9 + 2);
      if ( v10 != v9 + 80 )
        operator delete(v10);
      v12 = *((char **)v9 + 4);
      if ( v12 == v9 + 48 )
      {
        operator delete(v9);
        if ( !v11 )
          break;
      }
      else
      {
        operator delete(v12);
        operator delete(v9);
        if ( !v11 )
          break;
      }
      v9 = v11;
    }
  }
  v13 = v57;
  v14 = (void **)v56;
  if ( v57 != v56 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_31;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_31:
    v14 = (void **)v56;
  }
  if ( v14 )
    operator delete(v14);
  v15 = v55;
  v16 = (void **)v54;
  if ( v55 != v54 )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v15 == v16 )
          goto LABEL_37;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_37:
    v16 = (void **)v54;
  }
  if ( v16 )
    operator delete(v16);
  v17 = v53;
  v18 = (void **)v52;
  if ( v53 != v52 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v17 == v18 )
          goto LABEL_43;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_43:
    v18 = (void **)v52;
  }
  if ( v18 )
    operator delete(v18);
  if ( v50 != &v51 )
    operator delete(v50);
  if ( v48 != &v49 )
    operator delete(v48);
  if ( v46 != &v47 )
    operator delete(v46);
  if ( v44 != &v45 )
    operator delete(v44);
  v19 = v43;
  v20 = (void **)v42;
  if ( v43 != v42 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v20 == v19 )
          goto LABEL_57;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_57:
    v20 = (void **)v42;
  }
  if ( v20 )
    operator delete(v20);
  v21 = v41;
  v22 = (void **)v40;
  if ( v41 != v40 )
  {
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v21 == v22 )
          goto LABEL_63;
      }
      v22 += 4;
    }
    while ( v21 != v22 );
LABEL_63:
    v22 = (void **)v40;
  }
  if ( v22 )
    operator delete(v22);
  v23 = v39;
  v24 = (void **)v38;
  if ( v39 != v38 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v24 == v23 )
          goto LABEL_69;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_69:
    v24 = (void **)v38;
  }
  if ( v24 )
    operator delete(v24);
  v25 = v37;
  v26 = (void **)v36;
  if ( v37 != v36 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_75;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_75:
    v26 = (void **)v36;
  }
  if ( v26 )
    operator delete(v26);
  v27 = v35;
  v28 = (void **)v34;
  if ( v35 != v34 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v28 == v27 )
          goto LABEL_81;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_81:
    v28 = (void **)v34;
  }
  if ( v28 )
    operator delete(v28);
  return a1;
}
