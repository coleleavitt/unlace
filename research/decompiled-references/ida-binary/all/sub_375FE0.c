__int64 __fastcall sub_375FE0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // r9
  __int64 *v17; // r8
  bool v18; // r11
  _BOOL4 v19; // r12d
  _BOOL4 v20; // r13d
  char v21; // r15
  _BOOL4 v22; // r10d
  __int64 v23; // rcx
  __int64 *v24; // r10
  unsigned __int8 v25; // bp
  unsigned __int64 v26; // rax
  int v27; // r14d
  unsigned int v28; // eax
  double v29; // xmm4_8
  double v30; // xmm5_8
  char v31; // r11
  bool v33; // al
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 *v36; // r10
  char v37; // al
  bool v38; // al
  bool v39; // al
  char v40; // al
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  char v45; // [rsp+Fh] [rbp-69h]
  char v46; // [rsp+Fh] [rbp-69h]
  __int64 *v47; // [rsp+10h] [rbp-68h]
  bool v48; // [rsp+10h] [rbp-68h]
  char v49; // [rsp+10h] [rbp-68h]
  char v50; // [rsp+10h] [rbp-68h]
  bool v51; // [rsp+10h] [rbp-68h]
  bool v52; // [rsp+10h] [rbp-68h]
  __int64 *v53; // [rsp+18h] [rbp-60h]
  __int64 *v54; // [rsp+20h] [rbp-58h]
  __int64 *v55; // [rsp+20h] [rbp-58h]
  unsigned __int8 *v56; // [rsp+20h] [rbp-58h]
  bool v57; // [rsp+20h] [rbp-58h]
  bool v58; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v59; // [rsp+28h] [rbp-50h]
  __int64 *v60; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v61; // [rsp+30h] [rbp-48h]
  __int64 *v62; // [rsp+30h] [rbp-48h]
  __int64 *v63; // [rsp+38h] [rbp-40h]

  v15 = *(unsigned __int8 **)(a1 + 192);
  v47 = a3 + 34;
  v53 = a2;
  v16 = &v15[20 * *(_QWORD *)(a1 + 200)];
  if ( v15 != v16 )
  {
    v45 = 0;
    v17 = a3;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    LOBYTE(v22) = 0;
    v23 = 0;
    while ( 1 )
    {
      v25 = *v15;
      if ( !*v15 )
        goto LABEL_10;
      v26 = *((int *)v15 + 1);
      v27 = *((_DWORD *)v15 + 1);
      if ( v26 >= v17[35] )
      {
        v23 = *v15;
        goto LABEL_10;
      }
      if ( (_DWORD)v26 )
        break;
      if ( !v20 )
        goto LABEL_16;
      if ( !v19 )
      {
        a3 = (__int64 *)v17[34];
        v24 = &a3[5 * v26];
        v19 = (a3[1] & 4) != 0;
        if ( v45 )
          goto LABEL_6;
        goto LABEL_21;
      }
      v20 = v19;
LABEL_20:
      a3 = (__int64 *)v17[34];
      v24 = &a3[5 * v26];
      if ( v45 )
      {
LABEL_6:
        if ( v18 )
          goto LABEL_7;
LABEL_40:
        a2 = v47;
        v62 = v17;
        v59 = v16;
        v55 = v24;
        v33 = sub_3716E0(v24, (__int64)v47, nullptr);
        v36 = v55;
        v16 = v59;
        v17 = v62;
        if ( !v33 )
          goto LABEL_49;
        if ( v27 )
        {
LABEL_64:
          a2 = v36;
          v60 = v17;
          v56 = v16;
          v40 = sub_371BD0((__int64)v47, v36, *v36, nullptr, a4, a5, a6, a7, v34, v35, a10, a11);
          v16 = v56;
          v17 = v60;
          LOBYTE(v22) = v40;
          if ( v40 )
          {
            if ( v21 )
              goto LABEL_50;
            goto LABEL_52;
          }
        }
LABEL_42:
        if ( v21 )
        {
          v23 = v20;
          LOBYTE(v23) = v19 && v20;
          if ( !v19 || !v20 )
          {
LABEL_67:
            v18 = v21;
            LOBYTE(v22) = v21;
            goto LABEL_10;
          }
          if ( v45 )
          {
LABEL_58:
            v45 = v25;
            v18 = v25;
            LOBYTE(v19) = v25;
            LOBYTE(v20) = v25;
            goto LABEL_59;
          }
          v18 = v19 && v20;
          v19 = v23;
          v20 = v23;
          v21 = v23;
          LOBYTE(v22) = v23;
          v23 = 0;
        }
        else
        {
          v18 = v25;
          LOBYTE(v22) = v25;
          v23 = 0;
        }
        goto LABEL_10;
      }
LABEL_21:
      a2 = v47;
      v63 = v17;
      v61 = v16;
      v58 = v18;
      v54 = v24;
      v28 = sub_371670((__int64)v24, v47);
      v24 = v54;
      v18 = v58;
      v16 = v61;
      v17 = v63;
      v23 = v28;
      if ( (_BYTE)v28 )
      {
        if ( v27 )
        {
          a2 = v54;
          v37 = sub_371B80((__int64)v47, v54, *v54, nullptr, a4, a5, a6, a7, v29, v30, a10, a11);
          v16 = v61;
          v17 = v63;
          v45 = v37 ^ 1;
          if ( !v58 )
          {
            a2 = v47;
            v38 = sub_3716E0(v54, (__int64)v47, nullptr);
            v36 = v54;
            v16 = v61;
            v17 = v63;
            if ( !v38 )
              goto LABEL_49;
            goto LABEL_64;
          }
          goto LABEL_42;
        }
        if ( v58 )
        {
LABEL_7:
          if ( v21 )
            goto LABEL_8;
          v45 = v18;
          LOBYTE(v22) = v18;
          v23 = 0;
          goto LABEL_10;
        }
        a2 = v47;
        v45 = v28;
        v39 = sub_3716E0(v54, (__int64)v47, nullptr);
        v16 = v61;
        v17 = v63;
        LOBYTE(v22) = v39;
        if ( !v39 )
        {
LABEL_49:
          if ( !v21 )
          {
            v18 = 0;
            LOBYTE(v22) = v25;
            v23 = 0;
            goto LABEL_10;
          }
LABEL_50:
          v22 = v20;
          LOBYTE(v22) = v19 && v20;
          if ( !v19 || !v20 )
          {
            v18 = 0;
            v23 = 0;
            LOBYTE(v22) = v21;
            goto LABEL_10;
          }
          v19 = v22;
          v20 = v22;
          v21 = v22;
LABEL_52:
          v18 = 0;
          v23 = 0;
          goto LABEL_10;
        }
        if ( v21 )
        {
LABEL_8:
          v23 = v20;
          LOBYTE(v23) = v19 && v20;
          if ( v19 && v20 )
            goto LABEL_58;
          v45 = v21;
          v18 = v21;
          LOBYTE(v22) = v21;
          goto LABEL_10;
        }
        v45 = v39;
        v18 = v39;
        v23 = 0;
LABEL_10:
        v15 += 20;
        if ( v16 == v15 )
          goto LABEL_26;
      }
      else
      {
        if ( !v58 )
          goto LABEL_40;
        LOBYTE(v22) = v58;
        if ( !v21 )
          goto LABEL_10;
        v22 = v20;
        LOBYTE(v22) = v19 && v20;
        if ( !v19 || !v20 )
          goto LABEL_67;
        v15 += 20;
        v18 = v19 && v20;
        v19 = v22;
        v20 = v22;
        v21 = v22;
        if ( v61 == v15 )
        {
LABEL_26:
          if ( (_BYTE)v23 )
          {
            v57 = v18;
            v52 = v22;
            sub_5399B0(v53, unk_8CA480, 0, 1);
            v18 = v57;
            if ( !v52 )
              goto LABEL_28;
          }
          else if ( !v22 )
          {
            goto LABEL_28;
          }
          v25 = v21;
LABEL_59:
          v21 = v25;
          v51 = v18;
          sub_5399B0(v53, unk_8CA4C8, 0, 1);
          v18 = v51;
LABEL_28:
          v48 = v18;
          sub_5392E0(v53, 0, 1);
          v31 = v48;
          if ( v21 )
          {
            sub_5399B0(v53, unk_8CA4A0, 0, 1);
            v31 = v48;
          }
          if ( v20 )
          {
            v49 = v31;
            sub_5399B0(v53, unk_8CA4A8, 0, 1);
            v31 = v49;
          }
          if ( v19 )
          {
            v50 = v31;
            sub_5399B0(v53, unk_8CA4B0, 0, 1);
            v31 = v50;
          }
          if ( v45 )
          {
            v46 = v31;
            sub_5399B0(v53, unk_8CA4B8, 0, 1);
            v31 = v46;
          }
          if ( v31 )
            sub_5399B0(v53, unk_8CA4C0, 0, 1);
          return 1;
        }
      }
    }
    v21 = v20;
    if ( !v20 )
    {
      v21 = *v15;
LABEL_16:
      a2 = (__int64 *)v17[34];
      a3 = &a2[5 * v26];
      v20 = (a3[1] & 2) != 0;
    }
    if ( !v19 )
    {
      v23 = v17[34];
      a3 = (__int64 *)(v23 + 40 * v26);
      v19 = (a3[1] & 4) != 0;
    }
    if ( (v26 & 0x80000000) != 0LL )
    {
      if ( under_debugger )
        BUG();
      interr(40327, a2, a3, v23, a4);
      return sub_376610(40327, (_DWORD)a2, v41, v42, v43, v44, a15);
    }
    goto LABEL_20;
  }
  sub_5392E0(a2, 0, 1);
  return 1;
}
