void __fastcall sub_F30380(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v4; // dl
  char v5; // cl
  unsigned __int8 v6; // cl
  char v7; // al
  bool v8; // zf
  char v9; // si
  __int64 *v10; // rdi
  char v11; // al
  int v12; // edx
  char v13; // cl
  char v14; // al
  void **v15; // r13
  void **v16; // r12
  void **v17; // r13
  void **v18; // r12
  char *v19; // r12
  char *v20; // rdi
  char *v21; // r13
  char *v22; // rdi
  void **v23; // r13
  void **v24; // r12
  void **v25; // r13
  void **v26; // r12
  void **v27; // r13
  void **v28; // r12
  void **v29; // r12
  void **v30; // rbp
  void **v31; // r12
  void **v32; // rbp
  void **v33; // r12
  void **v34; // rbp
  void **v35; // r12
  void **v36; // rbp
  void **v37; // r12
  void **v38; // rbp
  int v39; // [rsp+0h] [rbp-8h] BYREF
  char vars51; // [rsp+59h] [rbp+51h]
  void *varsF0; // [rsp+F8h] [rbp+F0h]
  void **varsF8; // [rsp+100h] [rbp+F8h]
  void *vars108; // [rsp+110h] [rbp+108h]
  void **vars110; // [rsp+118h] [rbp+110h]
  void *vars120; // [rsp+128h] [rbp+120h]
  void **vars128; // [rsp+130h] [rbp+128h]
  void *vars138; // [rsp+140h] [rbp+138h]
  void **vars140; // [rsp+148h] [rbp+140h]
  void *vars150; // [rsp+158h] [rbp+150h]
  void **vars158; // [rsp+160h] [rbp+158h]
  void *vars180; // [rsp+188h] [rbp+180h]
  __int64 _198; // [rsp+198h] [rbp+190h] BYREF
  void *vars1A0; // [rsp+1A8h] [rbp+1A0h]
  __int64 _1B8; // [rsp+1B8h] [rbp+1B0h] BYREF
  void *vars1C0; // [rsp+1C8h] [rbp+1C0h]
  __int64 _1D8; // [rsp+1D8h] [rbp+1D0h] BYREF
  void *vars1E0; // [rsp+1E8h] [rbp+1E0h]
  __int64 _1F8; // [rsp+1F8h] [rbp+1F0h] BYREF
  void *vars200; // [rsp+208h] [rbp+200h]
  void **vars208; // [rsp+210h] [rbp+208h]
  void *vars218; // [rsp+220h] [rbp+218h]
  void **vars220; // [rsp+228h] [rbp+220h]
  void *vars238; // [rsp+240h] [rbp+238h]
  void **vars240; // [rsp+248h] [rbp+240h]
  __int64 _258; // [rsp+258h] [rbp+250h] BYREF
  void *vars260; // [rsp+268h] [rbp+260h]
  void *vars280; // [rsp+288h] [rbp+280h]
  void **vars288; // [rsp+290h] [rbp+288h]
  void *vars298; // [rsp+2A0h] [rbp+298h]
  __int64 _2B0; // [rsp+2B0h] [rbp+2A8h] BYREF
  void *vars2B8; // [rsp+2C0h] [rbp+2B8h]
  __int64 _2D0; // [rsp+2D0h] [rbp+2C8h] BYREF
  void *vars2F0; // [rsp+2F8h] [rbp+2F0h]
  void **vars2F8; // [rsp+300h] [rbp+2F8h]
  void *vars308; // [rsp+310h] [rbp+308h]
  __int64 _320; // [rsp+320h] [rbp+318h] BYREF
  void *vars330; // [rsp+338h] [rbp+330h]
  __int64 _348; // [rsp+348h] [rbp+340h] BYREF

  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x2000000000LL;
  *(_WORD *)(a1 + 1056) = 257;
  *(_QWORD *)(a1 + 1064) = a1 + 1080;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 1096) = a2;
  *(_BYTE *)(a1 + 1104) = a3;
  *(_QWORD *)(a1 + 1112) = &byte_22F0C30;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_BYTE *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1120) = -1;
  *(_OWORD *)(a1 + 1128) = 0;
  sub_FEA220(&v39);
  v4 = BYTE1(v39);
  v5 = *(_BYTE *)(a1 + 1145);
  *(_QWORD *)(a1 + 1152) = 0;
  *(_BYTE *)(a1 + 1145) = (v4 >> 2) & 2 | v5 & 0xFD;
  v6 = HIBYTE(v39);
  v7 = *(_BYTE *)(a1 + 1147);
  v8 = (v39 & 0x1008) == 0;
  *(_BYTE *)(a1 + 1146) = (HIBYTE(v39) >> 2 << 7) | *(_BYTE *)(a1 + 1146) & 0x7F;
  v9 = (((v4 >> 4) ^ 1) & 1) << 6;
  v10 = (__int64 *)vars330;
  v11 = (32 * (((v4 >> 3) ^ 1) & 1))
      | (8 * v39) & 0x10
      | (8 * ((v4 & 0x10) != 0)) & 0xCF
      | (4 * (v39 & 1)) & 0xCF
      | (v4 >> 2) & 2
      | !v8
      | v7 & 0xC0;
  v12 = v39 & 0x10000080;
  *(_BYTE *)(a1 + 1147) = v9 | v11 & 0xBF;
  v13 = (4 * (v12 == 128)) | (v6 >> 2) & 2 | *(_BYTE *)(a1 + 1148) & 0xF9;
  LOBYTE(v12) = vars51;
  v14 = *(_BYTE *)(a1 + 1149) & 0x7F;
  *(_BYTE *)(a1 + 1148) = v13;
  *(_BYTE *)(a1 + 1149) = ((_BYTE)v12 << 7) | v14;
  *(_QWORD *)(a1 + 1144) = *(_QWORD *)(a1 + 1144) & 0xFFFF80067F800200LL | 0x660800442002LL;
  if ( v10 != &_348 )
    operator delete(v10);
  if ( vars308 != &_320 )
    operator delete(vars308);
  v15 = vars2F8;
  v16 = (void **)vars2F0;
  if ( vars2F8 != vars2F0 )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v15 == v16 )
          goto LABEL_8;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_8:
    v16 = (void **)vars2F0;
  }
  if ( v16 )
    operator delete(v16);
  if ( vars2B8 != &_2D0 )
    operator delete(vars2B8);
  if ( vars298 != &_2B0 )
    operator delete(vars298);
  v17 = vars288;
  v18 = (void **)vars280;
  if ( vars288 != vars280 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 7;
        if ( v17 == v18 )
          goto LABEL_18;
      }
      v18 += 7;
    }
    while ( v17 != v18 );
LABEL_18:
    v18 = (void **)vars280;
  }
  if ( v18 )
    operator delete(v18);
  v19 = (char *)vars260;
  if ( vars260 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&_258, *((_QWORD **)v19 + 3));
      v20 = *((char **)v19 + 8);
      v21 = *((char **)v19 + 2);
      if ( v20 != v19 + 80 )
        operator delete(v20);
      v22 = *((char **)v19 + 4);
      if ( v22 == v19 + 48 )
      {
        operator delete(v19);
        if ( !v21 )
          break;
      }
      else
      {
        operator delete(v22);
        operator delete(v19);
        if ( !v21 )
          break;
      }
      v19 = v21;
    }
  }
  v23 = vars240;
  v24 = (void **)vars238;
  if ( vars240 != vars238 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_31;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_31:
    v24 = (void **)vars238;
  }
  if ( v24 )
    operator delete(v24);
  v25 = vars220;
  v26 = (void **)vars218;
  if ( vars220 != vars218 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_37;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_37:
    v26 = (void **)vars218;
  }
  if ( v26 )
    operator delete(v26);
  v27 = vars208;
  v28 = (void **)vars200;
  if ( vars208 != vars200 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v27 == v28 )
          goto LABEL_43;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_43:
    v28 = (void **)vars200;
  }
  if ( v28 )
    operator delete(v28);
  if ( vars1E0 != &_1F8 )
    operator delete(vars1E0);
  if ( vars1C0 != &_1D8 )
    operator delete(vars1C0);
  if ( vars1A0 != &_1B8 )
    operator delete(vars1A0);
  if ( vars180 != &_198 )
    operator delete(vars180);
  v29 = vars158;
  v30 = (void **)vars150;
  if ( vars158 != vars150 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_57;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_57:
    v30 = (void **)vars150;
  }
  if ( v30 )
    operator delete(v30);
  v31 = vars140;
  v32 = (void **)vars138;
  if ( vars140 != vars138 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_63;
      }
      v32 += 4;
    }
    while ( v31 != v32 );
LABEL_63:
    v32 = (void **)vars138;
  }
  if ( v32 )
    operator delete(v32);
  v33 = vars128;
  v34 = (void **)vars120;
  if ( vars128 != vars120 )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 4;
        if ( v34 == v33 )
          goto LABEL_69;
      }
      v34 += 4;
    }
    while ( v33 != v34 );
LABEL_69:
    v34 = (void **)vars120;
  }
  if ( v34 )
    operator delete(v34);
  v35 = vars110;
  v36 = (void **)vars108;
  if ( vars110 != vars108 )
  {
    do
    {
      while ( *v36 != v36 + 2 )
      {
        operator delete(*v36);
        v36 += 4;
        if ( v35 == v36 )
          goto LABEL_75;
      }
      v36 += 4;
    }
    while ( v35 != v36 );
LABEL_75:
    v36 = (void **)vars108;
  }
  if ( v36 )
    operator delete(v36);
  v37 = varsF8;
  v38 = (void **)varsF0;
  if ( varsF8 != varsF0 )
  {
    do
    {
      while ( *v38 != v38 + 2 )
      {
        operator delete(*v38);
        v38 += 4;
        if ( v38 == v37 )
          goto LABEL_81;
      }
      v38 += 4;
    }
    while ( v37 != v38 );
LABEL_81:
    v38 = (void **)varsF0;
  }
  if ( v38 )
    operator delete(v38);
  *(_QWORD *)(a1 + 1160) = 0;
}
