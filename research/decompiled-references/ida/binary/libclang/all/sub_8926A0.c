__int64 __fastcall sub_8926A0(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4)
{
  unsigned __int64 v7; // r8
  __int64 result; // rax
  __int8 v9; // al
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  void **v19; // rsi
  unsigned __int64 v20; // r9
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  unsigned __int8 **v23; // rax
  __int8 v24; // al
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // rbx
  void *v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r14
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rbx
  char v36; // al
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rcx
  bool v43; // zf
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 **v54; // rax
  unsigned __int8 **v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  char v60; // al
  __int64 v61; // rdi
  int v62; // eax
  __int64 v63; // r14
  __int64 v64; // r13
  __int64 v65; // rax
  unsigned __int8 **v66; // rdi
  unsigned __int8 **v67; // rax
  unsigned __int64 v68; // r9
  unsigned __int8 **v69; // rbx
  __int32 v70; // [rsp+0h] [rbp-A8h]
  __int64 v71; // [rsp+0h] [rbp-A8h]
  __int64 v72; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v73; // [rsp+8h] [rbp-A0h]
  __int64 v74; // [rsp+8h] [rbp-A0h]
  __int64 v75; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+8h] [rbp-A0h]
  __int64 v78; // [rsp+8h] [rbp-A0h]
  __int64 v79; // [rsp+10h] [rbp-98h]
  unsigned __int64 v80; // [rsp+10h] [rbp-98h]
  unsigned __int64 v81; // [rsp+10h] [rbp-98h]
  __int64 v82; // [rsp+10h] [rbp-98h]
  unsigned __int64 v83; // [rsp+10h] [rbp-98h]
  __int64 v84; // [rsp+10h] [rbp-98h]
  _QWORD *v85; // [rsp+10h] [rbp-98h]
  __int64 v86; // [rsp+10h] [rbp-98h]
  __int64 v87; // [rsp+10h] [rbp-98h]
  __int64 v88; // [rsp+10h] [rbp-98h]
  __int64 v89; // [rsp+10h] [rbp-98h]
  __int64 v90; // [rsp+10h] [rbp-98h]
  unsigned __int64 v91; // [rsp+18h] [rbp-90h]
  int v92; // [rsp+18h] [rbp-90h]
  unsigned int v93; // [rsp+18h] [rbp-90h]
  __int64 *v94; // [rsp+18h] [rbp-90h]
  unsigned __int64 v95; // [rsp+18h] [rbp-90h]
  __int64 v96; // [rsp+18h] [rbp-90h]
  unsigned __int64 v97; // [rsp+18h] [rbp-90h]
  unsigned __int64 v98; // [rsp+18h] [rbp-90h]
  __int64 v99; // [rsp+18h] [rbp-90h]
  __int64 v100; // [rsp+18h] [rbp-90h]
  __int64 v101; // [rsp+18h] [rbp-90h]
  _QWORD *v102; // [rsp+20h] [rbp-88h]
  __int64 v103; // [rsp+20h] [rbp-88h]
  __int64 v104; // [rsp+20h] [rbp-88h]
  __int64 v105; // [rsp+28h] [rbp-80h]
  __m128i v106; // [rsp+30h] [rbp-78h] BYREF
  __int64 v107; // [rsp+40h] [rbp-68h]
  unsigned __int64 v108; // [rsp+48h] [rbp-60h]
  void *v109[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v110; // [rsp+60h] [rbp-48h]
  __int64 v111; // [rsp+68h] [rbp-40h]

  sub_83CB20(&v106, a1, a2, 9u, a3, a4);
  v7 = v108;
  if ( (v108 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v9 = a3[1].m128i_i8[8];
  if ( (v9 & 1) != 0 )
    return 0;
  if ( (v9 & 2) != 0 )
    goto LABEL_32;
  v70 = a3[3].m128i_i32[2];
  if ( v70 == 1 )
  {
    if ( (v9 & 4) == 0
      && ((v9 & 8) == 0
       || a3[2].m128i_i64[0] != *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1))) )
    {
      goto LABEL_9;
    }
LABEL_32:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v24 = a3[1].m128i_i8[8];
      v22 = 2169;
      if ( (v24 & 2) == 0 )
      {
        if ( a3[3].m128i_i32[2] != 1 || (v22 = 2173, (v24 & 4) == 0) )
        {
          v22 = 2173;
          if ( (v24 & 8) != 0 )
          {
            v22 = 2169;
            if ( *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) != a3[2].m128i_i64[0] )
              v22 = 2173;
          }
        }
      }
LABEL_27:
      v23 = (unsigned __int8 **)sub_A2E130(a1, a2, v22, 0);
      if ( v23 )
        sub_823450(v23, 9);
    }
    else
    {
LABEL_43:
      sub_A2E130(a1, a2, 110, 0);
    }
    return 0;
  }
  if ( (v9 & 8) != 0
    && *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) == a3[2].m128i_i64[0] )
  {
    goto LABEL_32;
  }
LABEL_9:
  v10 = v107;
  v11 = *(_DWORD *)v107;
  if ( (*(_BYTE *)(v107 + 4) & 1) != 0 )
  {
    if ( v11 <= 1 )
      return 0;
  }
  else if ( !v11 )
  {
LABEL_40:
    if ( !*(_BYTE *)(a1 + 962) )
    {
      v25 = (unsigned __int8 **)sub_A2E130(a1, a2, 2171, 0);
      v26 = v25;
      if ( v25 )
      {
        sub_823450(v25, 9);
        sub_823450(v26, *(_DWORD *)v10 == 1);
        v27 = (void *)sub_AC7B80(a2);
        LOBYTE(v109[1]) = 1;
        v109[0] = v27;
        sub_839C90((__int64 *)v26, (__int64 *)v109);
      }
    }
    return 0;
  }
  v73 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (v7 & 1) != 0
      || (v16 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL], (v16 & 1) != 0)
      || (((unsigned __int8)v7 | (unsigned __int8)v16) & 4) != 0 )
    {
      if ( v15 == 47 )
      {
        v37 = _mm_load_si128(&v106);
        v94 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        v110 = a3[3].m128i_i64[0];
        v83 = v7;
        v111 = v12;
        *(__m128i *)v109 = v37;
        v38 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)v109);
        v7 = v83;
        v13 = (unsigned __int64)v94;
        if ( v38 && *((_DWORD *)v38 + 8) )
        {
          v13 = v94[1] & 0xFFFFFFFFFFFFFFF0LL;
          v7 = v94[1] & 0xFFFFFFFFFFFFFFFALL | v83 & 2;
          if ( v12 != v70 )
          {
            v14 = *(_QWORD *)v13;
            v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
            goto LABEL_17;
          }
LABEL_67:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
            goto LABEL_81;
        }
        else
        {
          v14 = *v94;
          v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v94 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v12 != v70 )
            goto LABEL_17;
          if ( v15 != 47 )
            goto LABEL_81;
        }
        v82 = v7;
        v36 = sub_82E820(&v106, a1, 9u);
        v7 = v82;
        if ( !v36 )
        {
          v60 = sub_836740(a1, (__int64)a2, 9u, v82);
          v7 = v82;
          if ( v60 )
            return 0;
        }
        if ( v12 == v70 )
        {
LABEL_81:
          v71 = v7;
          v39 = sub_AC7B80(a2);
          result = sub_8912C0(a1, v39, (__int64)a3, v10, v71);
          if ( !(_BYTE)result )
            return 0;
          if ( v73 && (*(_BYTE *)(v73 + 68) & 1) != 0 )
            return sub_824FF0(a1, (__int64)a2, v10, v73);
          return result;
        }
        goto LABEL_70;
      }
      if ( v12 == v70 )
        goto LABEL_81;
    }
    else if ( v12 == v70 )
    {
      goto LABEL_67;
    }
LABEL_17:
    if ( v12 == v70 - 1 )
    {
      if ( v15 != 14 )
      {
        if ( (unsigned __int8)(v15 - 2) > 4u )
        {
          v30 = 8LL * v12;
          goto LABEL_60;
        }
LABEL_19:
        v17 = sub_6D9A50(*(_QWORD **)(a1 + 16), v7);
        v18 = v17;
        if ( !v17 || (unsigned int)*(unsigned __int8 *)(v17 + 16) - 2 > 1 )
          BUG();
        v19 = *(void ***)(v17 + 40);
        v20 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * v12);
        v21 = *(_BYTE *)(v17 + 19);
        if ( (v21 & 2) != 0 )
        {
          LODWORD(v109[1]) = *((_DWORD *)v19 + 2);
          if ( LODWORD(v109[1]) <= 0x40 )
          {
            v109[0] = *v19;
            goto LABEL_24;
          }
          v91 = v20;
          v79 = v18;
          sub_2585B30(v109);
          v18 = v79;
          v20 = v91;
        }
        else
        {
          LODWORD(v109[1]) = 8 * ((v21 >> 2) & 0x1F);
          if ( SLODWORD(v109[1]) <= 64 )
          {
            v109[0] = v19;
            goto LABEL_24;
          }
          v95 = v20;
          v84 = v18;
          sub_2585A50(v109, v19, 0);
          v20 = v95;
          v18 = v84;
        }
        v92 = (int)v109[1];
        if ( LODWORD(v109[1]) > 0x40 )
        {
          v80 = v20;
          v74 = v18;
          v28 = sub_2587400(v109);
          v18 = v74;
          v20 = v80;
          if ( (unsigned int)(v92 - v28) <= 0x40 )
          {
            if ( v80 >= *(_QWORD *)v109[0] )
            {
              if ( v109[0] )
                operator delete[](v109[0]);
LABEL_25:
              if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
                goto LABEL_43;
              v22 = 2169;
              goto LABEL_27;
            }
          }
          else if ( !v109[0] )
          {
            goto LABEL_49;
          }
          operator delete[](v109[0]);
          v18 = v74;
          v20 = v80;
LABEL_49:
          v7 = *(_QWORD *)(v18 + 32);
          if ( v20 >= *(unsigned int *)(v10 + 16) )
          {
            v93 = v20;
            v75 = v18;
            v81 = *(_QWORD *)(v18 + 32);
            v29 = sub_8124E0((__int64)a2);
            if ( !(unsigned __int8)sub_838500(a1, v75, v29) )
              return 0;
            sub_81FAA0(v10, v93);
            v73 = 0;
            v7 = v81;
            v10 = *(_QWORD *)(v10 + 8) + 56LL * v93;
          }
          else
          {
            v73 = 0;
            v10 = *(_QWORD *)(v10 + 8) + 56 * v20;
          }
          goto LABEL_51;
        }
LABEL_24:
        if ( (void *)v20 >= v109[0] )
          goto LABEL_25;
        goto LABEL_49;
      }
LABEL_70:
      v13 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      v14 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    if ( (unsigned __int8)(v15 - 2) <= 4u )
      goto LABEL_19;
    v30 = 8LL * v12;
    if ( v15 == 14 )
    {
      if ( *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * v12) <= 1u )
      {
        if ( *(_BYTE *)(v14 + 16) != 14 )
          sub_B0D320(v14);
        sub_A2E130(a1, a2, 2201, 0);
        return 0;
      }
      goto LABEL_116;
    }
LABEL_60:
    if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 56 <= 1 )
      break;
    v96 = v30;
    v85 = (_QWORD *)v13;
    v76 = v7;
    v40 = sub_820370(v14);
    v31 = a3[3].m128i_i64[0];
    v14 = v40;
    v41 = v76;
    v42 = v85;
    v43 = v40 == 0;
    v44 = *(_QWORD *)(v31 + v30);
    if ( !v43 )
      goto LABEL_62;
    v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
    v73 = v44 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v44 <= 7 || (*(_BYTE *)(v45 + 28) & 0x7Fu) - 47 > 2 )
    {
      v78 = v41;
      v56 = sub_B0E910(*v85);
      v57 = *(_QWORD *)(a3[3].m128i_i64[0] + v30) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a3[3].m128i_i64[0] + v96) <= 7u )
      {
        v57 = 0;
      }
      else if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 57 >= 3 )
      {
        v57 = 0;
      }
      v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)sub_84C340(v56, v57);
      v58 = sub_6E8B00(*(_QWORD *)(a1 + 16), v57);
      v59 = sub_81F6C0(v78, v58, 0);
      v73 = 0;
      v7 = v59;
    }
    else
    {
      if ( (*(_BYTE *)(v45 + 68) & 2) != 0 )
      {
        v102 = v85;
        v97 = v44 & 0xFFFFFFFFFFFFFFF8LL;
        v86 = v41;
        v46 = sub_82E820(&v106, a1, 9u);
        v41 = v86;
        v45 = v97;
        v42 = v102;
        if ( !v46 )
        {
          v67 = (unsigned __int8 **)sub_A2E130(a1, a2, 2167, 1);
          v68 = v97;
          v69 = v67;
          if ( v67 )
          {
            sub_823450(v67, 9);
            sub_8356A0(v69, v97, 0xAu);
            v68 = v97;
          }
          sub_A2DD70(a1, *(unsigned int *)(v68 + 24), 105);
          return 0;
        }
      }
      v98 = v45;
      v87 = v41;
      v47 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v42 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      v48 = v87;
      v49 = v98;
      if ( *(_BYTE *)(v47 + 73) >> 5 == 2 )
      {
        v50 = *(_QWORD *)(v10 + 8);
        if ( !v50 )
          goto LABEL_102;
        v51 = *(_QWORD *)(v10 + 8);
        if ( *(char *)(v50 + 29) < 0 )
        {
          v103 = v98;
          v99 = v87;
          v88 = *(_QWORD *)(v10 + 8);
          v52 = sub_77A0C0(v88);
          v49 = v103;
          v48 = v99;
          v50 = v88;
          v51 = v52;
        }
        v53 = v49;
        if ( *(char *)(v49 + 29) < 0 )
        {
          v105 = v51;
          v104 = v50;
          v100 = v48;
          v89 = v49;
          v53 = sub_77A0C0(v49);
          v51 = v105;
          v50 = v104;
          v48 = v100;
          v49 = v89;
        }
        if ( v53 != v51 )
        {
LABEL_102:
          v77 = v50;
          v72 = v49;
          v54 = (unsigned __int8 **)sub_A2E130(a1, a2, 2166, 0);
          v55 = v54;
          if ( v54 )
          {
            sub_823450(v54, 9);
            sub_8356A0(v55, v72, 0xAu);
            sub_823450(v55, v77 == 0);
            sub_8356A0(v55, v77, 0xAu);
          }
          return 0;
        }
        v10 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v61 = v98;
        v101 = v87;
        v90 = v49;
        v62 = sub_83D880(v61);
        v48 = v101;
        v49 = v90;
        v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v10 + 16) + v62);
      }
      v7 = sub_81F6C0(v48, *(_QWORD *)(v49 + 48), (*(_BYTE *)(v49 + 68) & 2) != 0);
    }
LABEL_51:
    ++v12;
    if ( !*(_DWORD *)v10 )
      goto LABEL_40;
  }
  v31 = a3[3].m128i_i64[0];
LABEL_62:
  v32 = *(_QWORD *)(v31 + v30);
  v33 = *(unsigned int *)(v14 + 20);
  if ( v32 != v33 )
  {
    if ( v33 >= v32 )
    {
      v63 = *(_QWORD *)(v14 + 32);
      v64 = *(_QWORD *)(v10 + 8) + 56 * v32;
      v65 = sub_AC7B80(a2);
      return sub_8912C0(a1, v65, (__int64)a3, v64, v63);
    }
    v34 = (unsigned __int8 **)sub_A2E240(a1, a2, 2179, 0);
    v35 = v34;
    if ( v34 )
    {
      sub_8356A0(v34, v32, 3u);
      sub_823450(v35, 0);
      sub_8356A0(v35, v33, 3u);
    }
    return 0;
  }
LABEL_116:
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
    goto LABEL_43;
  v66 = (unsigned __int8 **)sub_A2E130(a1, a2, 2169, 0);
  if ( v66 )
    sub_823450(v66, 9);
  return 0;
}

