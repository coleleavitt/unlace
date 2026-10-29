__int64 __fastcall sub_E9CD60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v13; // r14
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  char v17; // al
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // r13
  __int64 v20; // rsi
  bool v21; // cl
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+8h] [rbp-F0h]
  bool v30; // [rsp+8h] [rbp-F0h]
  bool v31; // [rsp+8h] [rbp-F0h]
  int v32; // [rsp+8h] [rbp-F0h]
  __int64 v33; // [rsp+14h] [rbp-E4h] BYREF
  char v34; // [rsp+1Ch] [rbp-DCh]
  _QWORD v35[4]; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v36; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]
  __int64 v38; // [rsp+58h] [rbp-A0h]
  __int64 v39; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v40[17]; // [rsp+70h] [rbp-88h] BYREF

  v8 = a8;
  v37 = a3;
  v9 = *(_QWORD *)(a7 + 40);
  v10 = *(_QWORD *)(a8 + 40);
  v38 = a4;
  v39 = a1;
  v36 = _mm_loadh_ps((const double *)&a7);
  v35[0] = a8;
  v35[1] = a5;
  v35[2] = a6;
  v35[3] = a1;
  if ( v9 != v10 )
  {
    LODWORD(v11) = 1;
    sub_E98B00((__int64)v40, (__int64)&v36, 0);
    sub_E982C0(v40, v9);
    sub_AEA040((__int64)v40);
    sub_E98BB0((__int64)v40, v35, 0);
    sub_E982C0(v40, v10);
    sub_AEA040((__int64)v40);
    return (unsigned int)v11;
  }
  v13 = *(_QWORD *)(a7 + 48);
  v11 = *(_QWORD *)(a8 + 48);
  v29 = sub_E98500(v13);
  if ( v29 != (unsigned int)sub_E98500(v11) )
  {
    sub_E98B00((__int64)v40, (__int64)&v36, 1u);
    sub_E982C0(v40, v9);
    sub_AE9DF0(v40, v13, 8u);
    sub_AEA040((__int64)v40);
    sub_E98BB0((__int64)v40, v35, 1u);
    sub_E982C0(v40, v9);
    sub_AE9DF0(v40, v11, 8u);
    LODWORD(v11) = 1;
    sub_AEA040((__int64)v40);
    return (unsigned int)v11;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 8) == 0 )
  {
LABEL_6:
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  v14 = sub_B73640(a7);
  v15 = sub_B73640(v8);
  v16 = v15;
  if ( (v14 == 0) == (v15 == 0) )
  {
    LOBYTE(v11) = v15 != 0 && v14 != 0;
    if ( (_BYTE)v11 )
    {
      v32 = sub_E985C0(v14);
      if ( v32 != (unsigned int)sub_E985C0(v16) )
      {
        sub_E98B00((__int64)v40, (__int64)&v36, 3u);
        sub_E982C0(v40, v9);
        v34 = 1;
        v33 = sub_EEC8C0(v14);
        sub_AEC610((__int64 *)v40, &v33);
        sub_AEA040((__int64)v40);
        sub_E98BB0((__int64)v40, v35, 3u);
        sub_E982C0(v40, v9);
        v28 = sub_EEC8C0(v16);
        v34 = 1;
        v33 = v28;
        sub_AEC610((__int64 *)v40, &v33);
        sub_AEA040((__int64)v40);
        return (unsigned int)v11;
      }
    }
    v17 = *(_BYTE *)(v8 + 28) & 0x7F;
    if ( (*(_BYTE *)(a7 + 28) & 0x7F) == 0x2B )
    {
      v19 = 0;
      if ( v17 == 43 )
        goto LABEL_6;
    }
    else
    {
      v18 = 0;
      v19 = *(_BYTE *)(a7 + 97) >> 7;
      if ( v17 == 43 )
        goto LABEL_12;
    }
    v18 = *(_BYTE *)(v8 + 97) >> 7;
LABEL_12:
    if ( v18 != v19 )
    {
      sub_E98B00((__int64)v40, (__int64)&v36, 4u);
      sub_E982C0(v40, v9);
      v20 = v19;
      LODWORD(v11) = 1;
      sub_E97E40(v40, v20);
      sub_AEA040((__int64)v40);
      sub_E98BB0((__int64)v40, v35, 4u);
      sub_E982C0(v40, v10);
      sub_E97E40(v40, v18);
      sub_AEA040((__int64)v40);
      return (unsigned int)v11;
    }
    goto LABEL_6;
  }
  v30 = v15 == 0;
  sub_E98B00((__int64)v40, (__int64)&v36, 2u);
  sub_E982C0(v40, v10);
  sub_E97E40(v40, v14 == 0);
  v21 = v30;
  if ( v14 )
  {
    v22 = sub_EEC8C0(v14);
    v21 = v30;
    v23 = v22;
    v24 = HIDWORD(v22);
  }
  else
  {
    LODWORD(v24) = 0;
    v23 = 0;
  }
  v31 = v21;
  v33 = __PAIR64__(v24, v23);
  v34 = 1;
  sub_AEC610((__int64 *)v40, &v33);
  sub_AEA040((__int64)v40);
  sub_E98BB0((__int64)v40, v35, 2u);
  sub_E982C0(v40, v10);
  sub_E97E40(v40, v31);
  if ( v16 )
  {
    v25 = sub_EEC8C0(v16);
    v26 = v25;
    v27 = HIDWORD(v25);
  }
  else
  {
    LODWORD(v27) = 0;
    v26 = 0;
  }
  v33 = __PAIR64__(v27, v26);
  LODWORD(v11) = 1;
  v34 = 1;
  sub_AEC610((__int64 *)v40, &v33);
  sub_AEA040((__int64)v40);
  return (unsigned int)v11;
}
