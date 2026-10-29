__int64 __fastcall sub_856400(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rdx
  void *v11; // rdi
  unsigned int v12; // ebp
  char v14; // r12
  __int64 v15; // r15
  void *v16; // r14
  void *v17; // rdi
  __m128i v18; // kr00_16
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // al
  __int16 v23; // ax
  unsigned __int8 **v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rdx
  char v32; // dl
  unsigned int v33; // eax
  void *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int8 **v41; // rax
  __int64 v42; // rdx
  char v43; // al
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-1B0h]
  __int64 v49; // [rsp+10h] [rbp-1A8h]
  char v50; // [rsp+18h] [rbp-1A0h]
  __int64 v51; // [rsp+28h] [rbp-190h] BYREF
  void *v52; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-180h]
  char v54; // [rsp+3Ch] [rbp-17Ch]
  void *v55; // [rsp+50h] [rbp-168h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-160h]
  char v57; // [rsp+5Ch] [rbp-15Ch]
  void *v58; // [rsp+70h] [rbp-148h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-140h]
  char v60; // [rsp+7Ch] [rbp-13Ch]
  void *v61; // [rsp+90h] [rbp-128h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-120h]
  char v63; // [rsp+9Ch] [rbp-11Ch]
  __int64 v64; // [rsp+B0h] [rbp-108h] BYREF
  void *v65; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-F8h]
  __int64 v67; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v68[4]; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v69; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+100h] [rbp-B8h] BYREF
  void *v71; // [rsp+108h] [rbp-B0h]
  unsigned int v72; // [rsp+110h] [rbp-A8h]
  char v73; // [rsp+114h] [rbp-A4h]
  __int64 v74; // [rsp+118h] [rbp-A0h] BYREF
  void *ptr; // [rsp+120h] [rbp-98h]
  __int64 v76; // [rsp+128h] [rbp-90h]
  __int64 v77[8]; // [rsp+130h] [rbp-88h] BYREF
  char v78; // [rsp+170h] [rbp-48h]
  char v79; // [rsp+171h] [rbp-47h]

  v6 = *(_QWORD *)(a3 + 8);
  v51 = v6;
  if ( (*(_BYTE *)(a3 + 1) & 6) != 0
    || (v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL),
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL),
        v9 = *(unsigned __int8 *)(v8 + 16),
        v10 = *(unsigned __int8 *)(v8 + 16),
        (unsigned int)(v9 - 25) <= 1) )
  {
    v64 = a2;
    LOBYTE(v71) = (unsigned __int8)v71 | 1;
    v69 = 0u;
    v70 = 0;
    v74 = 0;
    ptr = v77;
    v76 = 0x800000000LL;
    v79 = 0;
    v65 = &v69;
    LOBYTE(v66) = 0;
    if ( !(unsigned __int8)sub_869D30(&v64, a3) )
      goto LABEL_4;
    v14 = v78 & 1;
    if ( ((unsigned __int8)v71 & 1) != 0 )
    {
      v18 = v69;
      LODWORD(v64) = 0;
      BYTE4(v64) &= ~1u;
      sub_6A37F0((__int64)&v64);
      sub_6A3550((__int64)&v64, v18.m128i_i64[0], v18.m128i_i64[1], &v70, v14);
      sub_6A01B0(a1, (__int64)&v64);
      if ( (unsigned int)v64 <= 1 )
        goto LABEL_10;
    }
    else
    {
      v50 = (char)v71;
      BYTE4(v64) &= ~1u;
      v49 = v69.m128i_i64[0];
      v15 = (unsigned int)v76;
      v16 = ptr;
      v48 = v69.m128i_i64[1];
      LODWORD(v64) = 0;
      sub_6A37F0((__int64)&v64);
      sub_6A3690((__int64)&v64, v49, v48, &v70, v16, v15, (v50 & 2) != 0, v14);
      sub_6A01B0(a1, (__int64)&v64);
      if ( (unsigned int)v64 <= 1 )
        goto LABEL_10;
    }
    sub_69F740((__int64)&v64);
LABEL_10:
    if ( v79 )
      *(_BYTE *)(a1 + 4) |= 1u;
LABEL_12:
    v17 = ptr;
    if ( ptr != v77 )
LABEL_13:
      free(v17);
    return 1;
  }
  if ( (unsigned int)(v9 - 56) <= 1 )
  {
    v69.m128i_i64[0] = a2;
    v69.m128i_i64[1] = a1;
    return (unsigned int)sub_8A87B0(&v69, a3, v10);
  }
  switch ( (_BYTE)v10 )
  {
    case 0xD:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
LABEL_21:
        if ( ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1E7 )
          goto LABEL_22;
        goto LABEL_31;
      }
LABEL_42:
      v69.m128i_i64[0] = a2;
      v69.m128i_i64[1] = a1;
      return (unsigned int)sub_87BEE0(&v69, a3);
    case 0x2E:
      v19 = sub_B14A40(v8);
      if ( (*(_BYTE *)(v19 + 74) & 1) != 0 || *(_QWORD *)(v19 + 128) > 7u )
        goto LABEL_42;
      v7 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v8 = *(_QWORD *)v20;
      v10 = *(unsigned __int8 *)(*(_QWORD *)v20 + 16LL);
      break;
    case 0xA:
      goto LABEL_42;
    case 0x29:
      goto LABEL_22;
  }
  if ( (unsigned __int8)v10 > 0x2Bu )
    goto LABEL_31;
  v25 = 0xFFFFF3FDFFFFF7FFLL;
  if ( !_bittest64((const __int64 *)&v25, v10) )
  {
LABEL_22:
    LOBYTE(v71) = (unsigned __int8)v71 | 1;
    v69 = 0u;
    v70 = 0;
    v74 = 0;
    ptr = v77;
    v76 = 0x800000000LL;
    v79 = 0;
    v64 = a2;
    v65 = &v69;
    LOBYTE(v66) = 0;
    if ( !(unsigned __int8)sub_871080(&v64, a3) )
    {
      v11 = ptr;
      if ( ptr == v77 )
        return 0;
      goto LABEL_5;
    }
    sub_81F730((__int64)&v69, a1);
    v17 = ptr;
    if ( ptr != v77 )
      goto LABEL_13;
    return 1;
  }
  if ( (_BYTE)v10 == 13 )
    goto LABEL_21;
LABEL_31:
  if ( (unsigned __int8)sub_B080B0(v7) )
  {
    sub_8203A0((__int64)&v61);
    v69.m128i_i64[0] = a2;
    v69.m128i_i64[1] = (__int64)&v61;
    if ( !(unsigned __int8)sub_883160(&v69, a3) )
    {
      sub_5FF3B0((__int64 *)&v61);
      return 0;
    }
    sub_835150((__int64)&v64, (__int64 *)&v61, v26);
    sub_835390((__int64)&v69, &v64);
    sub_6A01B0(a1, (__int64)&v69);
    if ( v69.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v69);
    sub_5FF3B0(&v64);
    sub_5FF3B0((__int64 *)&v61);
    return 1;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_BYTE *)(v21 + 16);
  if ( v22 == 14 )
  {
    BYTE4(v70) = 0;
    LODWORD(v70) = 1;
    v69.m128i_i64[1] = 0;
    v72 = 1;
    v71 = nullptr;
    v73 = 0;
    v29 = sub_2575D40();
    if ( v29 == sub_2575D20(v7, v7, v30) )
    {
      sub_257CDE0(&v74, v29);
      sub_257CDE0(v77, v29);
    }
    else
    {
      sub_2579610(&v74);
      sub_2579610(v77);
    }
    v64 = a2;
    v65 = &v69;
    if ( !(unsigned __int8)sub_8811F0(&v64, a3) )
    {
      sub_8336C0((__int64)&v69, a3, v31);
      return 0;
    }
    if ( v69.m128i_i8[0] )
    {
      v56 = v72;
      if ( v72 > 0x40 )
        sub_2585B30(&v55);
      else
        v55 = v71;
      v32 = v73;
      v33 = v70;
      v57 = v73;
      v53 = v70;
      if ( (unsigned int)v70 > 0x40 )
      {
        sub_2585B30(&v52);
        v32 = v57;
        v33 = v53;
        v34 = v52;
      }
      else
      {
        v34 = (void *)v69.m128i_i64[1];
        v52 = (void *)v69.m128i_i64[1];
      }
      v58 = v34;
      BYTE4(v64) &= ~1u;
      v62 = v56;
      v54 = BYTE4(v70);
      v61 = v55;
      v63 = v32;
      v59 = v33;
      v60 = BYTE4(v70);
      LODWORD(v66) = 1;
      v65 = nullptr;
      BYTE4(v66) = 1;
      LODWORD(v68[0]) = 1;
      v67 = 0;
      BYTE4(v68[0]) = 1;
      LODWORD(v64) = 5;
      v56 = 0;
      v53 = 0;
      sub_821230((__int64)&v65, (__int64)&v58);
      sub_821230((__int64)&v67, (__int64)&v61);
      if ( v59 > 0x40 && v58 )
        operator delete[](v58);
      if ( v62 > 0x40 && v61 )
        operator delete[](v61);
      sub_6A01B0(a1, (__int64)&v64);
      if ( (unsigned int)v64 > 1 )
        sub_69F740((__int64)&v64);
      if ( v53 > 0x40 && v52 )
        operator delete[](v52);
      if ( v56 > 0x40 && v55 )
        operator delete[](v55);
    }
    else
    {
      sub_835150((__int64)&v55, v77, v31);
      sub_835150((__int64)&v52, &v74, v36);
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = 0;
      sub_8203A0((__int64)&v65);
      sub_8203A0((__int64)v68);
      LODWORD(v64) = 6;
      sub_835190((__int64)&v61, (__int64 *)&v55, v37);
      sub_835190((__int64)&v58, (__int64 *)&v52, v38);
      sub_834250((__int64 *)&v65, (__int64 *)&v58, v39);
      sub_834250(v68, (__int64 *)&v61, v40);
      sub_5FF3B0((__int64 *)&v58);
      sub_5FF3B0((__int64 *)&v61);
      sub_6A01B0(a1, (__int64)&v64);
      if ( (unsigned int)v64 > 1 )
        sub_69F740((__int64)&v64);
      sub_5FF3B0((__int64 *)&v52);
      sub_5FF3B0((__int64 *)&v55);
    }
    sub_8336C0((__int64)&v69, (__int64)&v64, v35);
    return 1;
  }
  if ( v22 != 13 )
  {
    if ( v22 == 32 )
    {
      v69.m128i_i64[0] = a2;
      v64 = 0;
      v65 = &v67;
      v66 = 0x400000000LL;
      v69.m128i_i64[1] = (__int64)&v64;
      v12 = sub_854640(v69.m128i_i64, a3);
      if ( (_BYTE)v12 )
      {
        v69.m128i_i32[0] = 0;
        v69.m128i_i8[4] &= ~1u;
        sub_6A41C0((__int64)&v69, v64 & 0xFFFFFFFFFFFFFFF8LL, (v64 >> 2) & 1, (__int64)v65, (unsigned int)v66);
        sub_6A01B0(a1, (__int64)&v69);
        if ( v69.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v69);
      }
      if ( v65 != &v67 )
        free(v65);
      return v12;
    }
    if ( (unsigned __int8)(v22 - 2) > 4u )
    {
      if ( v22 == 47 )
      {
        v69 = 0u;
        v70 = 0;
        v47 = *(_QWORD *)(a2 + 32);
        LOBYTE(v71) = (unsigned __int8)v71 | 1;
        v74 = 0;
        ptr = v77;
        v76 = 0x800000000LL;
        v79 = 0;
        v64 = a2;
        v65 = &v69;
        v28 = sub_823B90(v47, a3, v51, &v69);
        v66 = v28;
        if ( (unsigned __int8)sub_887F40(&v64, a3) )
          goto LABEL_53;
      }
      else
      {
        if ( v22 != 7 )
        {
LABEL_36:
          if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 0x10) != 0 )
          {
            v24 = (unsigned __int8 **)sub_A2E130(a2, a3, 2256, 0);
            if ( v24 )
              sub_8356A0(v24, *(_QWORD *)(a3 + 8), 8u);
          }
          else
          {
            sub_A2E130(a2, a3, 110, 0);
          }
          return 0;
        }
        v42 = sub_B0D180(&v51);
        v43 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        if ( (unsigned __int8)(v43 - 2) > 4u && v43 != 47 )
        {
          v69 = (__m128i)(unsigned __int64)a2;
          v70 = a1;
          return (unsigned int)sub_8B3670(&v69, a3, v42);
        }
        v44 = *(_QWORD *)(a2 + 32);
        v69 = 0u;
        v70 = 0;
        v74 = 0;
        LOBYTE(v71) = (unsigned __int8)v71 | 1;
        ptr = v77;
        v76 = 0x800000000LL;
        v79 = 0;
        v45 = sub_823B90(v44, a3, v42, &v69);
        v64 = a2;
        v65 = &v69;
        v28 = v45;
        v66 = v45;
        if ( (unsigned __int8)sub_8B3670(&v64, a3, v46) )
        {
LABEL_53:
          sub_6A63E0(a1, v28);
          goto LABEL_12;
        }
      }
    }
    else
    {
      v27 = *(_QWORD *)(a2 + 32);
      LOBYTE(v71) = (unsigned __int8)v71 | 1;
      v69 = 0u;
      v70 = 0;
      v74 = 0;
      ptr = v77;
      v76 = 0x800000000LL;
      v79 = 0;
      v64 = a2;
      v65 = &v69;
      v28 = sub_823B90(v27, a3, v51, &v69);
      v66 = v28;
      if ( (unsigned __int8)sub_8A19A0(&v64, a3) )
        goto LABEL_53;
    }
LABEL_4:
    v11 = ptr;
    if ( ptr == v77 )
      return 0;
LABEL_5:
    free(v11);
    return 0;
  }
  v23 = (*(_WORD *)(v21 + 18) >> 3) & 0x1FF;
  if ( ((v23 + 57) & 0x1FFu) <= 0x17 )
  {
    v69.m128i_i64[0] = a2;
    v69.m128i_i64[1] = a1;
    return (unsigned int)sub_8ADEA0(&v69, a3);
  }
  if ( v23 != 434 )
    goto LABEL_36;
  if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 0x10) == 0 )
  {
    v41 = (unsigned __int8 **)sub_A2E240(a2, a3, 2256, 0);
    if ( v41 )
      sub_8356A0(v41, *(_QWORD *)(a3 + 8), 8u);
  }
  v69.m128i_i64[0] = a2;
  return (unsigned int)sub_8B6C50(&v69, a3);
}

