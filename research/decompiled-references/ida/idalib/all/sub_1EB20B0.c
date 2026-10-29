__int64 __fastcall sub_1EB20B0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  _BYTE *v6; // rax
  char v7; // si
  char v8; // cl
  char v9; // di
  char v10; // dl
  char v11; // cl
  char v12; // si
  char v13; // cl
  char v14; // si
  char v15; // dl
  char v16; // cl
  __int64 v17; // rdx
  char v18; // si
  int v19; // ebp
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  int i; // ebp
  unsigned int v24; // ebx
  unsigned int v30; // [rsp+2Ch] [rbp-16Ch] BYREF
  __m128i v31; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v33; // [rsp+50h] [rbp-148h] BYREF
  __int64 v34; // [rsp+58h] [rbp-140h]
  __int64 v35; // [rsp+60h] [rbp-138h]
  unsigned __int64 v36; // [rsp+68h] [rbp-130h]
  __int64 v37; // [rsp+70h] [rbp-128h]
  char v38; // [rsp+78h] [rbp-120h]
  void *v39; // [rsp+80h] [rbp-118h]
  __int64 v40; // [rsp+88h] [rbp-110h]
  _BYTE v41[16]; // [rsp+90h] [rbp-108h] BYREF
  void *v42; // [rsp+A0h] [rbp-F8h]
  __int64 v43; // [rsp+A8h] [rbp-F0h]
  _BYTE v44[16]; // [rsp+B0h] [rbp-E8h] BYREF
  void *v45; // [rsp+C0h] [rbp-D8h]
  __int64 v46; // [rsp+C8h] [rbp-D0h]
  _BYTE v47[16]; // [rsp+D0h] [rbp-C8h] BYREF
  void **v48[3]; // [rsp+E0h] [rbp-B8h] BYREF
  void **v49[3]; // [rsp+F8h] [rbp-A0h] BYREF
  void **v50[3]; // [rsp+110h] [rbp-88h] BYREF
  void **v51[3]; // [rsp+128h] [rbp-70h] BYREF
  void **v52[11]; // [rsp+140h] [rbp-58h] BYREF

  v39 = v41;
  v42 = v44;
  v45 = v47;
  v40 = 0;
  v41[0] = 0;
  v43 = 0;
  v44[0] = 0;
  v46 = 0;
  v47[0] = 0;
  memset(v48, 0, sizeof(v48));
  memset(v49, 0, sizeof(v49));
  memset(v50, 0, sizeof(v50));
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, 24);
  v38 = 0;
  v37 = 8;
  v33 = (unsigned int)v33 & 0xFF800000 | 0x6F0LL;
  v34 = 0xA00000006LL;
  v35 = 0x320000000ALL;
  v36 = v36 & 0xFFFFFFFE00000000LL | 0x100000010LL;
  v6 = (_BYTE *)*a1;
  v7 = *(_BYTE *)*a1;
  v8 = *(_BYTE *)(*a1 + 8);
  v9 = *(_BYTE *)(*a1 + 128);
  v10 = ((v6[48] & 1) << 6)
      | (32 * (v6[40] & 1)) & 0x3F
      | (16 * (v6[32] & 1)) & 0x3F
      | (8 * (v6[24] & 1)) & 0xF
      | (4 * (v6[16] & 1)) & 0xF
      | (2 * (v8 & 1)) & 3
      | v7 & 1;
  v11 = v6[72];
  v12 = v6[64];
  LOBYTE(v33) = (v6[56] << 7) | v10;
  BYTE1(v33) = (v6[120] << 7)
             | ((v6[112] & 1) << 6)
             | (32 * (v6[104] & 1)) & 0x3F
             | (16 * (v6[96] & 1)) & 0x3F
             | (8 * (v6[88] & 1)) & 0xF
             | (4 * (v6[80] & 1)) & 0xF
             | (2 * (v11 & 1)) & 3
             | v12 & 1;
  v13 = v6[144];
  v14 = v6[136];
  v30 = 36;
  v15 = (4 * (v13 & 1)) | v9 & 3 | BYTE2(v33) & 0xF8;
  v16 = (16 * v6[176]) | ((8 * (v6[160] & 1)) | (2 * (v14 & 3))) & 0xE;
  BYTE2(v33) = ((v6[192] & 1) << 6)
             | (32 * (v6[184] & 1))
             | (16 * (v6[168] & 1)) & 0x9F
             | (8 * (v6[152] & 1)) & 0x9F
             | v15 & 0x87;
  HIDWORD(v33) = *((_QWORD *)v6 + 25);
  LODWORD(v34) = *((_QWORD *)v6 + 26);
  HIDWORD(v34) = *((_QWORD *)v6 + 27);
  LODWORD(v35) = *((_QWORD *)v6 + 28);
  HIDWORD(v35) = *((_QWORD *)v6 + 29);
  LODWORD(v36) = *((_QWORD *)v6 + 30);
  v17 = *((_QWORD *)v6 + 32);
  BYTE4(v36) = v6[248] & 1 | BYTE4(v36) & 0xFE;
  v18 = v6[272];
  LODWORD(v37) = v17;
  HIDWORD(v37) = *((_QWORD *)v6 + 33);
  v38 = v18 & 1 | v16;
  if ( (unsigned int)*((_QWORD *)v6 + 35) )
  {
    v19 = *((_QWORD *)v6 + 35);
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)&v31, a1, &v30);
        sub_A82C60((__int64)v48, &v31);
        if ( (_BYTE *)v31.m128i_i64[0] == v32 )
          break;
        operator delete((void *)v31.m128i_i64[0]);
        if ( !--v19 )
          goto LABEL_5;
      }
      --v19;
    }
    while ( v19 );
LABEL_5:
    v6 = (_BYTE *)*a1;
    v20 = v30 + 1;
    v21 = 8LL * v30;
  }
  else
  {
    v21 = 288;
    v20 = 37;
  }
  v22 = *(_QWORD *)&v6[v21];
  v30 = v20;
  for ( i = v22; i; --i )
  {
    while ( 1 )
    {
      sub_1EAC540((__m128i **)&v31, a1, &v30);
      sub_A82C60((__int64)v50, &v31);
      if ( (_BYTE *)v31.m128i_i64[0] == v32 )
        break;
      operator delete((void *)v31.m128i_i64[0]);
      if ( !--i )
        goto LABEL_9;
    }
  }
LABEL_9:
  v24 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD))(*(_QWORD *)a5 + 56LL))(
          a5,
          &v33,
          a2,
          a3,
          a4);
  sub_9B4A30(v52);
  sub_9B4A30(v51);
  sub_9B4A30(v50);
  sub_9B4A30(v49);
  sub_9B4A30(v48);
  if ( v45 != v47 )
    operator delete(v45);
  if ( v42 != v44 )
    operator delete(v42);
  if ( v39 != v41 )
    operator delete(v39);
  return v24;
}
