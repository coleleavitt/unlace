__int64 __fastcall sub_E79020(
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  char v21; // al
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // r13
  __int64 v24; // rsi
  bool v25; // cl
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // [rsp+8h] [rbp-F0h]
  bool v38; // [rsp+8h] [rbp-F0h]
  bool v39; // [rsp+8h] [rbp-F0h]
  int v40; // [rsp+8h] [rbp-F0h]
  __int64 v41; // [rsp+14h] [rbp-E4h] BYREF
  char v42; // [rsp+1Ch] [rbp-DCh]
  _QWORD v43[4]; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v44; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-A8h]
  __int64 v46; // [rsp+58h] [rbp-A0h]
  __int64 v47; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v48[17]; // [rsp+70h] [rbp-88h] BYREF

  v8 = a8;
  v45 = a3;
  v9 = *(_QWORD *)(a7 + 40);
  v10 = *(_QWORD *)(a8 + 40);
  v46 = a4;
  v47 = a1;
  v44 = _mm_loadh_ps((const double *)&a7);
  v43[0] = a8;
  v43[1] = a5;
  v43[2] = a6;
  v43[3] = a1;
  if ( v9 != v10 )
  {
    LODWORD(v11) = 1;
    sub_E74DC0((__int64)v48, (__int64)&v44, 0);
    sub_E74580(v48, v9);
    sub_AC6300((__int64)v48);
    sub_E74E70((__int64)v48, v43, 0);
    sub_E74580(v48, v10);
    sub_AC6300((__int64)v48);
    return (unsigned int)v11;
  }
  v13 = *(_QWORD *)(a7 + 48);
  v11 = *(_QWORD *)(a8 + 48);
  v37 = sub_E747C0(v13);
  if ( v37 != (unsigned int)sub_E747C0(v11) )
  {
    sub_E74DC0((__int64)v48, (__int64)&v44, 1u);
    sub_E74580(v48, v9);
    sub_AC60B0(v48, v13, 8u);
    sub_AC6300((__int64)v48);
    sub_E74E70((__int64)v48, v43, 1u);
    sub_E74580(v48, v9);
    sub_AC60B0(v48, v11, 8u);
    LODWORD(v11) = 1;
    sub_AC6300((__int64)v48);
    return (unsigned int)v11;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 8) == 0 )
  {
LABEL_6:
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  v14 = sub_B4F900(a7);
  v15 = sub_B4F900(v8);
  v20 = v15;
  if ( (v14 == 0) == (v15 == 0) )
  {
    LOBYTE(v11) = v15 != 0 && v14 != 0;
    if ( (_BYTE)v11 )
    {
      LOBYTE(v17) = v15 == 0;
      v40 = sub_E74880(v14, a2, v16, v17, v18, v19);
      if ( v40 != (unsigned int)sub_E74880(v20, a2, v32, v33, v34, v35) )
      {
        sub_E74DC0((__int64)v48, (__int64)&v44, 3u);
        sub_E74580(v48, v9);
        v42 = 1;
        v41 = sub_EC8B80(v14);
        sub_AC88D0((__int64 *)v48, &v41);
        sub_AC6300((__int64)v48);
        sub_E74E70((__int64)v48, v43, 3u);
        sub_E74580(v48, v9);
        v36 = sub_EC8B80(v20);
        v42 = 1;
        v41 = v36;
        sub_AC88D0((__int64 *)v48, &v41);
        sub_AC6300((__int64)v48);
        return (unsigned int)v11;
      }
    }
    v21 = *(_BYTE *)(v8 + 28) & 0x7F;
    if ( (*(_BYTE *)(a7 + 28) & 0x7F) == 0x2B )
    {
      v23 = 0;
      if ( v21 == 43 )
        goto LABEL_6;
    }
    else
    {
      v22 = 0;
      v23 = *(_BYTE *)(a7 + 97) >> 7;
      if ( v21 == 43 )
        goto LABEL_12;
    }
    v22 = *(_BYTE *)(v8 + 97) >> 7;
LABEL_12:
    if ( v22 != v23 )
    {
      sub_E74DC0((__int64)v48, (__int64)&v44, 4u);
      sub_E74580(v48, v9);
      v24 = v23;
      LODWORD(v11) = 1;
      sub_E74100(v48, v24);
      sub_AC6300((__int64)v48);
      sub_E74E70((__int64)v48, v43, 4u);
      sub_E74580(v48, v10);
      sub_E74100(v48, v22);
      sub_AC6300((__int64)v48);
      return (unsigned int)v11;
    }
    goto LABEL_6;
  }
  v38 = v15 == 0;
  sub_E74DC0((__int64)v48, (__int64)&v44, 2u);
  sub_E74580(v48, v10);
  sub_E74100(v48, v14 == 0);
  v25 = v38;
  if ( v14 )
  {
    v26 = sub_EC8B80(v14);
    v25 = v38;
    v27 = v26;
    v28 = HIDWORD(v26);
  }
  else
  {
    LODWORD(v28) = 0;
    v27 = 0;
  }
  v39 = v25;
  v41 = __PAIR64__(v28, v27);
  v42 = 1;
  sub_AC88D0((__int64 *)v48, &v41);
  sub_AC6300((__int64)v48);
  sub_E74E70((__int64)v48, v43, 2u);
  sub_E74580(v48, v10);
  sub_E74100(v48, v39);
  if ( v20 )
  {
    v29 = sub_EC8B80(v20);
    v30 = v29;
    v31 = HIDWORD(v29);
  }
  else
  {
    LODWORD(v31) = 0;
    v30 = 0;
  }
  v41 = __PAIR64__(v31, v30);
  LODWORD(v11) = 1;
  v42 = 1;
  sub_AC88D0((__int64 *)v48, &v41);
  sub_AC6300((__int64)v48);
  return (unsigned int)v11;
}

