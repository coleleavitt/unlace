__int64 __fastcall sub_EBD1E0(__int64 a1, unsigned int **a2)
{
  void **v3; // r13
  void **v4; // r12
  void **v5; // r13
  void **v6; // r12
  char *v7; // r12
  char *v8; // rdi
  char *v9; // r13
  char *v10; // rdi
  void **v11; // r13
  void **v12; // r12
  void **v13; // r13
  void **v14; // r12
  void **v15; // r13
  void **v16; // r12
  void **v17; // r12
  void **v18; // rbx
  void **v19; // r12
  void **v20; // rbx
  void **v21; // r12
  void **v22; // rbx
  void **v23; // r12
  void **v24; // rbx
  void **v25; // r12
  void **v26; // rbx
  _QWORD v28[2]; // [rsp+0h] [rbp-398h] BYREF
  int v29; // [rsp+10h] [rbp-388h] BYREF
  char v30; // [rsp+69h] [rbp-32Fh]
  void *v31; // [rsp+108h] [rbp-290h]
  void **v32; // [rsp+110h] [rbp-288h]
  void *v33; // [rsp+120h] [rbp-278h]
  void **v34; // [rsp+128h] [rbp-270h]
  void *v35; // [rsp+138h] [rbp-260h]
  void **v36; // [rsp+140h] [rbp-258h]
  void *v37; // [rsp+150h] [rbp-248h]
  void **v38; // [rsp+158h] [rbp-240h]
  void *v39; // [rsp+168h] [rbp-230h]
  void **v40; // [rsp+170h] [rbp-228h]
  void *v41; // [rsp+198h] [rbp-200h]
  __int64 v42; // [rsp+1A8h] [rbp-1F0h] BYREF
  void *v43; // [rsp+1B8h] [rbp-1E0h]
  __int64 v44; // [rsp+1C8h] [rbp-1D0h] BYREF
  void *v45; // [rsp+1D8h] [rbp-1C0h]
  __int64 v46; // [rsp+1E8h] [rbp-1B0h] BYREF
  void *v47; // [rsp+1F8h] [rbp-1A0h]
  __int64 v48; // [rsp+208h] [rbp-190h] BYREF
  void *v49; // [rsp+218h] [rbp-180h]
  void **v50; // [rsp+220h] [rbp-178h]
  void *v51; // [rsp+230h] [rbp-168h]
  void **v52; // [rsp+238h] [rbp-160h]
  void *v53; // [rsp+250h] [rbp-148h]
  void **v54; // [rsp+258h] [rbp-140h]
  __int64 v55; // [rsp+268h] [rbp-130h] BYREF
  void *v56; // [rsp+278h] [rbp-120h]
  void *v57; // [rsp+298h] [rbp-100h]
  void **v58; // [rsp+2A0h] [rbp-F8h]
  void *v59; // [rsp+2B0h] [rbp-E8h]
  __int64 v60; // [rsp+2C0h] [rbp-D8h] BYREF
  void *v61; // [rsp+2D0h] [rbp-C8h]
  __int64 v62; // [rsp+2E0h] [rbp-B8h] BYREF
  void *v63; // [rsp+308h] [rbp-90h]
  void **v64; // [rsp+310h] [rbp-88h]
  void *v65; // [rsp+320h] [rbp-78h]
  __int64 v66; // [rsp+330h] [rbp-68h] BYREF
  void *v67; // [rsp+348h] [rbp-50h]
  __int64 v68; // [rsp+358h] [rbp-40h] BYREF

  sub_FEA220(&v29);
  v28[1] = 0;
  BYTE1(v28[0]) = (BYTE1(v29) >> 2) & 2 | BYTE1(v28[0]) & 0xFD;
  BYTE2(v28[0]) = (HIBYTE(v29) >> 2 << 7) | BYTE2(v28[0]) & 0x7F;
  BYTE3(v28[0]) = ((((BYTE1(v29) >> 4) ^ 1) & 1) << 6)
                | (32 * (((BYTE1(v29) >> 3) ^ 1) & 1)) & 0xBF
                | (8 * v29) & 0x10
                | (8 * ((v29 & 0x1000) != 0)) & 0x8F
                | (4 * (v29 & 1)) & 0x8F
                | (BYTE1(v29) >> 2) & 2
                | ((v29 & 0x1008) != 0)
                | BYTE3(v28[0]) & 0x80;
  BYTE4(v28[0]) = (4 * ((v29 & 0x10000080) == 128)) | (HIBYTE(v29) >> 2) & 2 | BYTE4(v28[0]) & 0xF9;
  BYTE5(v28[0]) = (v30 << 7) | BYTE5(v28[0]) & 0x7F;
  v28[0] = v28[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  sub_EB75B0(a2, a1, (int)v28);
  if ( v67 != &v68 )
    operator delete(v67);
  if ( v65 != &v66 )
    operator delete(v65);
  v3 = v64;
  v4 = (void **)v63;
  if ( v64 != v63 )
  {
    do
    {
      while ( *v4 != v4 + 2 )
      {
        operator delete(*v4);
        v4 += 4;
        if ( v3 == v4 )
          goto LABEL_8;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_8:
    v4 = (void **)v63;
  }
  if ( v4 )
    operator delete(v4);
  if ( v61 != &v62 )
    operator delete(v61);
  if ( v59 != &v60 )
    operator delete(v59);
  v5 = v58;
  v6 = (void **)v57;
  if ( v58 != v57 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 7;
        if ( v5 == v6 )
          goto LABEL_18;
      }
      v6 += 7;
    }
    while ( v5 != v6 );
LABEL_18:
    v6 = (void **)v57;
  }
  if ( v6 )
    operator delete(v6);
  v7 = (char *)v56;
  if ( v56 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v55, *((_QWORD **)v7 + 3));
      v8 = *((char **)v7 + 8);
      v9 = *((char **)v7 + 2);
      if ( v8 != v7 + 80 )
        operator delete(v8);
      v10 = *((char **)v7 + 4);
      if ( v10 == v7 + 48 )
      {
        operator delete(v7);
        if ( !v9 )
          break;
      }
      else
      {
        operator delete(v10);
        operator delete(v7);
        if ( !v9 )
          break;
      }
      v7 = v9;
    }
  }
  v11 = v54;
  v12 = (void **)v53;
  if ( v54 != v53 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 4;
        if ( v11 == v12 )
          goto LABEL_31;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_31:
    v12 = (void **)v53;
  }
  if ( v12 )
    operator delete(v12);
  v13 = v52;
  v14 = (void **)v51;
  if ( v52 != v51 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_37;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_37:
    v14 = (void **)v51;
  }
  if ( v14 )
    operator delete(v14);
  v15 = v50;
  v16 = (void **)v49;
  if ( v50 != v49 )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v15 == v16 )
          goto LABEL_43;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_43:
    v16 = (void **)v49;
  }
  if ( v16 )
    operator delete(v16);
  if ( v47 != &v48 )
    operator delete(v47);
  if ( v45 != &v46 )
    operator delete(v45);
  if ( v43 != &v44 )
    operator delete(v43);
  if ( v41 != &v42 )
    operator delete(v41);
  v17 = v40;
  v18 = (void **)v39;
  if ( v40 != v39 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v18 == v17 )
          goto LABEL_57;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_57:
    v18 = (void **)v39;
  }
  if ( v18 )
    operator delete(v18);
  v19 = v38;
  v20 = (void **)v37;
  if ( v38 != v37 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v19 == v20 )
          goto LABEL_63;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_63:
    v20 = (void **)v37;
  }
  if ( v20 )
    operator delete(v20);
  v21 = v36;
  v22 = (void **)v35;
  if ( v36 != v35 )
  {
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v22 == v21 )
          goto LABEL_69;
      }
      v22 += 4;
    }
    while ( v21 != v22 );
LABEL_69:
    v22 = (void **)v35;
  }
  if ( v22 )
    operator delete(v22);
  v23 = v34;
  v24 = (void **)v33;
  if ( v34 != v33 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_75;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_75:
    v24 = (void **)v33;
  }
  if ( v24 )
    operator delete(v24);
  v25 = v32;
  v26 = (void **)v31;
  if ( v32 != v31 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v26 == v25 )
          goto LABEL_81;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_81:
    v26 = (void **)v31;
  }
  if ( v26 )
    operator delete(v26);
  return a1;
}
