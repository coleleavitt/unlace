__int64 __fastcall sub_84E640(__int64 a1, _DWORD *a2, __m128i *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r15d
  _DWORD *v9; // r13
  unsigned int v11; // r12d
  _DWORD *v12; // r9
  __int8 v13; // dl
  unsigned int v14; // edx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r8
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // r13
  unsigned __int8 v25; // al
  void **v26; // rsi
  _DWORD *v27; // r13
  unsigned int v28; // r12d
  unsigned __int8 **v29; // rdi
  __int64 v30; // rdx
  unsigned __int8 **v31; // rax
  __int8 v32; // al
  int v33; // r12d
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rbx
  void *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // r14
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rbx
  unsigned __int8 **v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int8 **v48; // r14
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rsi
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rbx
  unsigned __int8 **v55; // rax
  unsigned __int8 **v56; // rbp
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // rax
  _QWORD *v61; // r8
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r10
  char v64; // al
  __int64 v65; // rax
  __int64 v66; // r10
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r14
  unsigned __int8 **v72; // rax
  unsigned __int8 **v73; // rbx
  __int64 v74; // rdi
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rax
  char v77; // al
  int v78; // eax
  unsigned __int8 **v79; // rax
  unsigned __int64 v80; // r10
  unsigned __int8 **v81; // rbx
  _DWORD *v82; // [rsp+8h] [rbp-100h]
  __int64 v83; // [rsp+8h] [rbp-100h]
  __int32 v84; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v85; // [rsp+10h] [rbp-F8h]
  unsigned int v87; // [rsp+20h] [rbp-E8h]
  __m128i *v88; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v89; // [rsp+30h] [rbp-D8h]
  _QWORD *v90; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v91; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v92; // [rsp+38h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-D0h]
  _QWORD *v94; // [rsp+38h] [rbp-D0h]
  __int64 v95; // [rsp+38h] [rbp-D0h]
  __int64 v96; // [rsp+38h] [rbp-D0h]
  __int64 v97; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v98; // [rsp+40h] [rbp-C8h]
  __int64 v99; // [rsp+40h] [rbp-C8h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __m128i v101; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v102; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+68h] [rbp-A0h]
  void *v104[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v105; // [rsp+80h] [rbp-88h] BYREF
  void *v106[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-68h]
  __int64 v108; // [rsp+A8h] [rbp-60h]

  v5 = a3[8].m128i_u8[1];
  if ( (_BYTE)v5 )
    return 1;
  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return v5;
  v9 = a2;
  v11 = a4;
  sub_83CB20(&v101, a1, a2, a4, a3, 0);
  if ( (v103 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return v5;
  v12 = (_DWORD *)v102;
  v13 = a3[1].m128i_i8[8];
  if ( !v102 )
  {
    if ( (v13 & 2) == 0 )
    {
      if ( a3[3].m128i_i32[2] != 1 )
      {
        if ( (a3[1].m128i_i8[8] & 8) != 0
          && a3[2].m128i_i64[0] == *(_QWORD *)(a3[3].m128i_i64[0]
                                             + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
        {
          goto LABEL_35;
        }
LABEL_41:
        if ( !a5 )
          return 1;
        v85 = v102;
        BYTE4(v106[0]) &= ~1u;
        LODWORD(v106[0]) = 0;
        sub_81F730((__int64)a3, (__int64)v106);
        v39 = a3[3].m128i_u32[2];
        v40 = *(_QWORD *)(a1 + 16);
        v41 = v85;
        if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v39 )
        {
          v43 = a3[2].m128i_u64[1];
        }
        else
        {
          v42 = *(_QWORD *)(a3[3].m128i_i64[0] + 8 * v39 - 8);
          if ( v42 > 7 && (*(_BYTE *)((v42 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 57 <= 2 )
            v41 = v42 & 0xFFFFFFFFFFFFFFF8LL;
          v43 = sub_6E8B00(*(_QWORD *)(a1 + 16), v41);
        }
        v44 = sub_6C4DA0(v40, v43, 1u);
        v45 = (unsigned __int8 **)sub_A2E130(a1, v9, 2277, 0);
        v48 = v45;
        if ( v45 )
        {
          sub_823450(v45, v11);
          sub_6A3290((__int64)v104, (__int64)v106, *(_QWORD *)(a1 + 16), v44, v49, v50);
          sub_838D50(v48, (_BYTE *)v104[0], (size_t)v104[1]);
        }
        else
        {
          sub_6A3290((__int64)v104, (__int64)v106, *(_QWORD *)(a1 + 16), v44, v46, v47);
        }
        if ( v104[0] != &v105 )
          operator delete(v104[0], v105 + 1);
        if ( LODWORD(v106[0]) > 1 )
          sub_69F740((__int64)v106);
        return v5;
      }
      if ( (v13 & 4) != 0 )
        goto LABEL_49;
      if ( (a3[1].m128i_i8[8] & 8) == 0
        || *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) != a3[2].m128i_i64[0] )
      {
        goto LABEL_41;
      }
    }
LABEL_35:
    v30 = 2169;
    goto LABEL_36;
  }
  if ( (v13 & 1) != 0 )
    return v5;
  if ( (v13 & 2) != 0
    || a3[3].m128i_i32[2] == 1 && (v13 & 4) != 0
    || (a3[1].m128i_i8[8] & 8) != 0
    && a3[2].m128i_i64[0] == *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
    {
      sub_A2E130(a1, a2, 110, 0);
      return v5;
    }
    v32 = a3[1].m128i_i8[8];
    v30 = 2169;
    if ( (v32 & 2) != 0
      || a3[3].m128i_i32[2] == 1 && (v30 = 2173, (v32 & 4) != 0)
      || (v30 = 2173, (v32 & 8) == 0)
      || (v30 = 2169,
          *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) == a3[2].m128i_i64[0]) )
    {
LABEL_36:
      v31 = (unsigned __int8 **)sub_A2E130(a1, a2, v30, 0);
      if ( v31 )
        sub_823450(v31, v11);
      return v5;
    }
LABEL_49:
    v30 = 2173;
    goto LABEL_36;
  }
  v14 = *(_DWORD *)v102;
  if ( (*(_BYTE *)(v102 + 4) & 1) != 0 )
  {
    if ( v14 <= 1 )
      return v5;
  }
  else if ( !v14 )
  {
LABEL_59:
    if ( !*(_BYTE *)(a1 + 962) )
    {
      v82 = v12;
      v34 = (unsigned __int8 **)sub_A2E130(a1, v9, 2171, 0);
      v35 = v34;
      if ( v34 )
      {
        sub_823450(v34, v11);
        sub_823450(v35, *v82 == 1);
        v36 = (void *)sub_AC7B80(v9);
        LOBYTE(v106[1]) = 1;
        v106[0] = v36;
        sub_839C90((__int64 *)v35, (__int64 *)v106);
      }
    }
    return v5;
  }
  v89 = 0;
  v15 = 0;
  v84 = a3[3].m128i_i32[2];
  v88 = a3;
  v16 = v102;
  v87 = v11;
  v17 = v103;
  while ( 1 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (v17 & 1) == 0 )
    {
      v21 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v21 & 1) == 0 && (((unsigned __int8)v17 | (unsigned __int8)v21) & 4) == 0 )
        goto LABEL_67;
    }
    if ( v20 != 47 )
    {
      if ( v15 == v84 )
        goto LABEL_71;
LABEL_19:
      if ( v15 != v84 - 1 )
        goto LABEL_20;
      if ( v20 != 14 )
      {
        if ( (unsigned __int8)(v20 - 2) <= 4u )
          goto LABEL_21;
        v51 = 8LL * v15;
        goto LABEL_89;
      }
      goto LABEL_95;
    }
    v92 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v57 = v88[3].m128i_i64[0];
    *(__m128i *)v106 = _mm_load_si128(&v101);
    v107 = v57;
    v108 = v15;
    v58 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)v106);
    v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v58 || !*((_DWORD *)v58 + 8) )
      break;
    v59 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | v17 & 7;
    v19 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = v59 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = v59 & 0xFFFFFFFFFFFFFFFALL;
    v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v15 == v84 )
      goto LABEL_68;
    if ( v15 == v84 - 1 )
    {
      if ( v20 != 14 )
      {
        if ( (unsigned __int8)(v20 - 2) > 4u )
        {
          v51 = 8LL * v15;
          goto LABEL_89;
        }
LABEL_21:
        v22 = sub_6D9A50(*(_QWORD **)(a1 + 16), v17);
        v23 = v22;
        if ( !v22 || (unsigned int)*(unsigned __int8 *)(v22 + 16) - 2 > 1 )
          BUG();
        v24 = *(_QWORD *)(v88[3].m128i_i64[0] + 8LL * v15);
        v25 = *(_BYTE *)(v22 + 19);
        v26 = *(void ***)(v23 + 40);
        if ( (v25 & 2) != 0 )
        {
          LODWORD(v106[1]) = *((_DWORD *)v26 + 2);
          if ( LODWORD(v106[1]) <= 0x40 )
          {
            v106[0] = *v26;
LABEL_26:
            if ( (void *)v24 >= v106[0] )
            {
              v5 = 0;
              v27 = a2;
              v28 = v87;
              goto LABEL_28;
            }
            goto LABEL_55;
          }
          sub_2585B30(v106);
        }
        else
        {
          LODWORD(v106[1]) = 8 * ((v25 >> 2) & 0x1F);
          if ( SLODWORD(v106[1]) <= 64 )
          {
            v106[0] = v26;
            goto LABEL_26;
          }
          sub_2585A50(v106, v26, 0);
        }
        v33 = (int)v106[1];
        if ( LODWORD(v106[1]) <= 0x40 )
          goto LABEL_26;
        if ( v33 - (unsigned int)sub_2587400(v106) <= 0x40 )
        {
          if ( v24 >= *(_QWORD *)v106[0] )
          {
            v5 = 0;
            v27 = a2;
            v28 = v87;
            if ( v106[0] )
              operator delete[](v106[0]);
            goto LABEL_28;
          }
        }
        else if ( !v106[0] )
        {
          goto LABEL_55;
        }
        operator delete[](v106[0]);
LABEL_55:
        v17 = *(_QWORD *)(v23 + 32);
        if ( v24 >= *(unsigned int *)(v16 + 16) )
        {
          v37 = sub_8124E0((__int64)a2);
          if ( !(unsigned __int8)sub_838500(a1, v23, v37) )
            return 0;
          sub_81FAA0(v16, v24);
          v89 = 0;
          v16 = *(_QWORD *)(v16 + 8) + 56LL * (unsigned int)v24;
        }
        else
        {
          v89 = 0;
          v16 = *(_QWORD *)(v16 + 8) + 56 * v24;
        }
        goto LABEL_57;
      }
LABEL_95:
      v19 = *(_QWORD *)v18;
      v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
LABEL_20:
    if ( (unsigned __int8)(v20 - 2) <= 4u )
      goto LABEL_21;
    v51 = 8LL * v15;
    if ( v20 == 14 )
    {
      v5 = 0;
      v27 = a2;
      v28 = v87;
      if ( *(_QWORD *)(v88[3].m128i_i64[0] + 8LL * v15) <= 1u )
      {
        if ( *(_BYTE *)(v19 + 16) != 14 )
          sub_B0D320(v19);
        return 1;
      }
      goto LABEL_28;
    }
LABEL_89:
    if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 56 <= 1 )
    {
      v5 = 0;
      v27 = a2;
      v28 = v87;
      v52 = v88[3].m128i_i64[0];
      goto LABEL_91;
    }
    v93 = v51;
    v90 = (_QWORD *)v18;
    v60 = sub_820370(v19);
    v51 = v93;
    v61 = v90;
    v19 = v60;
    v52 = v88[3].m128i_i64[0];
    v62 = *(_QWORD *)(v52 + v93);
    if ( v19 )
    {
      v5 = 0;
      v27 = a2;
      v28 = v87;
LABEL_91:
      v53 = *(_QWORD *)(v52 + v51);
      v54 = *(unsigned int *)(v19 + 20);
      if ( v53 != v54 )
      {
        if ( v54 >= v53 )
          return 1;
        v55 = (unsigned __int8 **)sub_A2E240(a1, v27, 2179, 0);
        v56 = v55;
        if ( v55 )
        {
          sub_8356A0(v55, v53, 3u);
          sub_823450(v56, 0);
          sub_8356A0(v56, v54, 3u);
        }
        return v5;
      }
LABEL_28:
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      {
        v29 = (unsigned __int8 **)sub_A2E130(a1, v27, 2169, 0);
        if ( v29 )
          sub_823450(v29, v28);
      }
      else
      {
        sub_A2E130(a1, v27, 110, 0);
      }
      return v5;
    }
    v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
    v89 = v62 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v62 <= 7 || (*(_BYTE *)(v63 + 28) & 0x7Fu) - 47 > 2 )
    {
      v74 = sub_B0E910(*v61);
      v75 = *(_QWORD *)(v88[3].m128i_i64[0] + v93) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v88[3].m128i_i64[0] + v93) <= 7u )
      {
        v75 = 0;
      }
      else if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 57 >= 3 )
      {
        v75 = 0;
      }
      v16 = *(_QWORD *)(v16 + 8) + 56LL * (unsigned int)sub_84C340(v74, v75);
      v76 = sub_6E8B00(*(_QWORD *)(a1 + 16), v75);
      v89 = 0;
      v17 = sub_81F6C0(v17, v76, 0);
    }
    else
    {
      if ( (*(_BYTE *)(v63 + 68) & 2) != 0 )
      {
        v98 = v62 & 0xFFFFFFFFFFFFFFF8LL;
        v94 = v61;
        v64 = sub_82E820(&v101, a1, v87);
        v61 = v94;
        v63 = v98;
        if ( !v64 )
        {
          v5 = 0;
          v79 = (unsigned __int8 **)sub_A2E130(a1, a2, 2167, 1);
          v80 = v98;
          v81 = v79;
          if ( v79 )
          {
            sub_823450(v79, v87);
            sub_8356A0(v81, v98, 0xAu);
            v80 = v98;
          }
          sub_A2DD70(a1, *(unsigned int *)(v80 + 24), 105);
          return v5;
        }
      }
      v95 = v63;
      v65 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v61 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      v66 = v95;
      if ( *(_BYTE *)(v65 + 73) >> 5 == 2 )
      {
        v67 = *(_QWORD *)(v16 + 8);
        if ( !v67 )
          goto LABEL_128;
        v68 = *(_QWORD *)(v16 + 8);
        if ( *(char *)(v67 + 29) < 0 )
        {
          v99 = v95;
          v96 = *(_QWORD *)(v16 + 8);
          v69 = sub_77A0C0(v96);
          v66 = v99;
          v67 = v96;
          v68 = v69;
        }
        v70 = v66;
        if ( *(char *)(v66 + 29) < 0 )
        {
          v100 = v67;
          v97 = v66;
          v70 = sub_77A0C0(v66);
          v67 = v100;
          v66 = v97;
        }
        if ( v70 != v68 )
        {
LABEL_128:
          v71 = v67;
          v83 = v66;
          v5 = 0;
          v72 = (unsigned __int8 **)sub_A2E130(a1, a2, 2166, 0);
          v73 = v72;
          if ( v72 )
          {
            sub_823450(v72, v87);
            sub_8356A0(v73, v83, 0xAu);
            sub_823450(v73, v71 == 0);
            sub_8356A0(v73, v71, 0xAu);
          }
          return v5;
        }
        v16 = *(_QWORD *)(v16 + 16);
      }
      else
      {
        v78 = sub_83D880(v95);
        v66 = v95;
        v16 = *(_QWORD *)(v16 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v16 + 16) + v78);
      }
      v17 = sub_81F6C0(v17, *(_QWORD *)(v66 + 48), (*(_BYTE *)(v66 + 68) & 2) != 0);
    }
LABEL_57:
    ++v15;
    if ( !*(_DWORD *)v16 )
    {
      v5 = 0;
      v9 = a2;
      v12 = (_DWORD *)v16;
      v11 = v87;
      goto LABEL_59;
    }
  }
  v19 = *(_QWORD *)v92;
  v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v92 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_67:
  if ( v15 != v84 )
    goto LABEL_19;
LABEL_68:
  if ( v20 == 47 )
  {
    v91 = v18;
    v38 = sub_82E820(&v101, a1, v87);
    v18 = v91;
    if ( !v38 )
    {
      v77 = sub_836740(a1, (__int64)a2, v87, v17);
      v18 = v91;
      if ( v77 )
        return 0;
    }
    if ( v15 != v84 )
      goto LABEL_95;
  }
LABEL_71:
  if ( ((1LL << v87) & 0x4E0) == 0 && v89 && (*(_BYTE *)(v89 + 68) & 1) != 0 )
    return sub_824FF0(a1, (__int64)a2, v16, v89);
  return 1;
}

