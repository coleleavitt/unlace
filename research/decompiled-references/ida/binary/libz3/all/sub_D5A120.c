__int64 __fastcall sub_D5A120(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  int v11; // r8d
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  void *v15; // r13
  void *v16; // r13
  void *v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdi
  int v20; // r9d
  _BOOL4 v21; // r8d
  __int64 v22; // rbx
  int v24; // r8d
  int v25; // r9d
  _QWORD *v26; // rax
  unsigned int v27; // r14d
  _QWORD *v28; // rax
  void *v29; // r13
  __int64 *v32; // [rsp+28h] [rbp-178h]
  unsigned int v33; // [rsp+30h] [rbp-170h]
  __int64 v35; // [rsp+40h] [rbp-160h]
  int v36; // [rsp+58h] [rbp-148h]
  int v37; // [rsp+5Ch] [rbp-144h]
  _BYTE v38[4]; // [rsp+7Ch] [rbp-124h] BYREF
  __int64 v39; // [rsp+80h] [rbp-120h]
  _QWORD v40[3]; // [rsp+88h] [rbp-118h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-100h]
  _QWORD v42[3]; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-E0h]
  _QWORD v44[3]; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-C0h]
  _QWORD v46[3]; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+108h] [rbp-98h]
  _QWORD v49[2]; // [rsp+110h] [rbp-90h] BYREF
  __int64 v50; // [rsp+120h] [rbp-80h] BYREF
  __int64 v51; // [rsp+128h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+130h] [rbp-70h] BYREF
  __int64 v53; // [rsp+140h] [rbp-60h] BYREF
  __int64 v54; // [rsp+148h] [rbp-58h] BYREF
  __int64 v55; // [rsp+150h] [rbp-50h] BYREF
  __int64 v56; // [rsp+158h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 440);
  v8 = *(_QWORD *)(v7 + 752);
  v35 = v7 + 24;
  v37 = sub_15C5540((int)a1 + 432, a2, a3, a4, a5, a6);
  v36 = sub_15C5560(a1 + 432, a2);
  v39 = v8;
  v53 = 2;
  v40[0] = 0;
  v40[1] = 0;
  v54 = 0;
  sub_18393F0(v8, &v53, (unsigned int)(v37 - 1), v40);
  v47 = 0xFFFFFFFFLL;
  v48 = 0;
  sub_1839610(v8, v40, &v47);
  v41 = v8;
  v42[0] = 0;
  v42[1] = 0;
  v43 = v8;
  v44[0] = 0;
  v44[1] = 0;
  v45 = v8;
  v46[0] = 0;
  v46[1] = 0;
  if ( a4 )
  {
    v47 = 0;
    v48 = 0;
    v49[0] = 1;
    v49[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v49);
    BYTE4(v49[0]) &= ~1u;
    LODWORD(v49[0]) = 1;
    v50 = 0;
    v51 = 0;
    v52[0] = 1;
    v52[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v52);
    BYTE4(v52[0]) &= ~1u;
    LODWORD(v52[0]) = 1;
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    sub_182CBA0(qword_1C7F2C0, &v55);
    BYTE4(v55) &= ~1u;
    LODWORD(v55) = 1;
    sub_1673B50(a1 + 232, a3, (unsigned int)&v47, (unsigned int)v38, v9, v10);
    sub_1673B50(a1 + 232, a4, (unsigned int)&v50, (unsigned int)v38, v11, v12);
    sub_1673B50(a1 + 232, a5, (unsigned int)&v53, (unsigned int)v38, v13, v14);
    if ( (v47 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v8, v42, &v47);
      if ( (v50 & 0x100000000LL) == 0 )
      {
LABEL_4:
        BYTE4(v46[0]) &= ~1u;
        LODWORD(v46[0]) = v50;
        if ( (v53 & 0x100000000LL) == 0 )
        {
LABEL_5:
          BYTE4(v44[0]) &= ~1u;
          LODWORD(v44[0]) = v53;
LABEL_6:
          v15 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v53);
          sub_182CBA0(v15, &v55);
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v50);
          sub_182CBA0(v16, v52);
          v17 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v47);
          sub_182CBA0(v17, v49);
          goto LABEL_7;
        }
LABEL_16:
        sub_182EA00(v8, v44, &v53);
        goto LABEL_6;
      }
    }
    else
    {
      BYTE4(v42[0]) &= ~1u;
      LODWORD(v42[0]) = v47;
      if ( (v50 & 0x100000000LL) == 0 )
        goto LABEL_4;
    }
    sub_182EA00(v8, v46, &v50);
    if ( (v53 & 0x100000000LL) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  BYTE4(v55) &= ~1u;
  v50 = v8;
  LODWORD(v55) = 1;
  v51 = 0;
  v52[0] = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 232, a3, (unsigned int)&v53, (unsigned int)v38, v24, v25) )
  {
    sub_1872CE0("");
    sub_1873130(114, 4501);
  }
  if ( (v53 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v8, &v51, &v53);
  }
  else
  {
    BYTE4(v51) &= ~1u;
    LODWORD(v51) = v53;
  }
  v33 = v37 + v36 - 1;
  if ( (v51 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v8, v42, &v51);
  }
  else
  {
    BYTE4(v42[0]) &= ~1u;
    LODWORD(v42[0]) = v51;
  }
  sub_1830040(v8, v42, v33);
  v32 = (__int64 *)(v7 + 760);
  v26 = sub_D59FE0((__int64 *)(v7 + 760), v33);
  sub_183AEC0(v8, &v51, v26, &v51);
  v27 = v36 - 1;
  if ( (v51 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v8, v46, &v51);
  }
  else
  {
    BYTE4(v46[0]) &= ~1u;
    LODWORD(v46[0]) = v51;
  }
  sub_1830040(v8, v46, v27);
  v28 = sub_D59FE0(v32, v27);
  sub_183AEC0(v8, &v51, v28, &v51);
  if ( (v51 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v8, v44, &v51);
  }
  else
  {
    BYTE4(v44[0]) &= ~1u;
    LODWORD(v44[0]) = v51;
  }
  sub_182EF00(v50, &v51);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  sub_182CBA0(v29, &v55);
LABEL_7:
  v18 = v45;
  v54 = 0;
  v55 = 0;
  v53 = v45;
  if ( (v46[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v45, &v54, v46);
    v18 = v53;
  }
  else
  {
    LODWORD(v54) = v46[0];
  }
  sub_183A580(v18, &v54, v40, &v54);
  v19 = v53;
  v51 = 0;
  v52[0] = 0;
  v50 = v53;
  if ( (v54 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v53, &v51, &v54);
    v19 = v53;
  }
  else
  {
    LODWORD(v51) = v54;
  }
  sub_182EF00(v19, &v54);
  v53 = v35;
  sub_181A6B0(&v54);
  v20 = sub_182F370(v8, &v51);
  v21 = 0;
  if ( (v42[0] & 0x100000000LL) == 0 )
    v21 = LODWORD(v42[0]) == 1;
  sub_181AED0(v35, (unsigned int)&v54, v37, v36, v21, v20, (__int64)v44);
  v22 = sub_15CC210(*(_QWORD *)(a1 + 440), &v54);
  sub_182EF00(*(_QWORD *)(v53 + 728), &v55);
  sub_182EF00(v50, &v51);
  sub_182EF00(v45, v46);
  sub_182EF00(v43, v44);
  sub_182EF00(v41, v42);
  sub_182EF00(v39, v40);
  return v22;
}

