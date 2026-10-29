__int64 __fastcall sub_191BDF0(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // r14
  unsigned int v14; // eax
  _BYTE *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  unsigned __int64 v23; // r15
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 result; // rax
  __int64 (__fastcall **v36)(); // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rbx
  unsigned __int8 v40; // al
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 *v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  _QWORD *v66; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rsi
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  _QWORD *v76; // rdi
  unsigned int v77; // eax
  char v78; // al
  unsigned int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 *v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  char v94; // al
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  bool v100; // al
  unsigned int v101; // [rsp+0h] [rbp-148h]
  unsigned __int64 v102; // [rsp+0h] [rbp-148h]
  int v103; // [rsp+Ch] [rbp-13Ch]
  __int64 (__fastcall **v104)(); // [rsp+10h] [rbp-138h]
  __int64 v105; // [rsp+10h] [rbp-138h]
  __int64 v106; // [rsp+10h] [rbp-138h]
  unsigned int v107; // [rsp+10h] [rbp-138h]
  __int64 v108; // [rsp+10h] [rbp-138h]
  __int64 v109; // [rsp+28h] [rbp-120h]
  __int64 v110; // [rsp+30h] [rbp-118h]
  char v111; // [rsp+30h] [rbp-118h]
  unsigned __int64 v112; // [rsp+38h] [rbp-110h]
  __int64 *v113; // [rsp+40h] [rbp-108h]
  unsigned __int64 v114; // [rsp+48h] [rbp-100h]
  __int64 (__fastcall **v115)(); // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v116; // [rsp+58h] [rbp-F0h] BYREF
  __int64 (__fastcall **v117)(); // [rsp+60h] [rbp-E8h] BYREF
  __int64 *v118; // [rsp+68h] [rbp-E0h]
  __int64 (__fastcall **v119)(); // [rsp+70h] [rbp-D8h] BYREF
  __int64 *v120; // [rsp+78h] [rbp-D0h]
  __int64 (__fastcall **v121)(); // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v122; // [rsp+88h] [rbp-C0h]
  __int64 *v123; // [rsp+90h] [rbp-B8h]
  int v124; // [rsp+98h] [rbp-B0h]
  __int64 v125; // [rsp+A0h] [rbp-A8h]

  v11 = a1[29];
  v101 = a2;
  v103 = a5;
  if ( (*(_BYTE *)(v11 + 60) & 0x10) != 0 && (*(_BYTE *)(v11 + 89) & 4) != 0 )
  {
    a2 = a1[68];
    if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 34 <= 5 )
    {
      a2 -= 72;
      if ( a2 )
      {
        v12 = sub_178EA20(a1[83], a2, nullptr, a4, a5, a6);
        if ( v12 <= 1 || v12 == 3 )
        {
          v77 = sub_EEB7E0((unsigned __int64)a3, a2, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v121, a1 + 1, v77, 0x152Du, 0);
          sub_15F7200(&v121);
          return 1;
        }
        v11 = a1[29];
      }
    }
  }
  v13 = (_QWORD *)a1[31];
  if ( *(_DWORD *)(v11 + 64)
    && (*(_BYTE *)(v11 + 68) & 8) != 0
    && (unsigned int)(*(_DWORD *)(v13[2181] + 248LL) - 41) <= 1 )
  {
    v14 = sub_EEB7E0((unsigned __int64)a3, a2, *(double *)a7.m128_u64);
    sub_1606D30((__int64)&v121, a1, v14, 5421, 0);
    sub_15F7200(&v121);
    v13 = (_QWORD *)a1[31];
  }
  if ( (*(_DWORD *)a3 & 0x10000) == 0 && (v15 = (_BYTE *)v13[2181], (v15[393] & 1) != 0) )
  {
    if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v15 + 296LL))(v15) )
    {
      v66 = (_QWORD *)a1[31];
      v67 = sub_A8A3D0(v66);
      v71 = *(_QWORD *)(v67 + 48);
      if ( v71 )
      {
        LOBYTE(v72) = v71 & 0xF0;
        v73 = v71 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v72 = sub_A7AA70((__int64)v66, v67, 0, v68, v69, v70);
        v73 = v72 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v16 = 0;
      v74 = *(_QWORD *)&byte_8[a3[1] & 0xFFFFFFFFFFFFFFF0LL];
      if ( (*(_QWORD *)(v73 + 8) & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)(v73 + 8) | (unsigned __int8)v72) & 7) == (v74 & 0xFFFFFFFFFFFFFFF8LL
                                                                                  | ((unsigned __int8)v74
                                                                                   | (unsigned __int8)a3[1])
                                                                                  & 7) )
      {
        if ( (unsigned __int8)sub_18FE730((unsigned __int64)a3, v101, a1, *(double *)a7.m128_u64) )
          return 1;
        v16 = 1;
      }
      v13 = (_QWORD *)a1[31];
    }
    else
    {
      v13 = (_QWORD *)a1[31];
      v16 = 0;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = sub_AA7570(v13);
  v22 = *(_QWORD *)(v17 + 48);
  if ( v22 )
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v23 = sub_A7AA70((__int64)v13, v17, v18, v19, v20, v21);
  if ( !(_BYTE)v16 )
  {
    v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( (unsigned __int8)(v24 - 2) > 4u )
    {
      if ( v24 == 48 && (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
      {
        v75 = sub_A73030(a1[31], v23, 1u);
        v76 = (_QWORD *)a1[31];
        v122 = 0;
        v124 = 0;
        LODWORD(v121) = 1;
        v25 = (__int64)&v121;
        v123 = (__int64 *)sub_A73320(v76, v75);
        v125 = 0;
        result = sub_1A24E20(a1, &v121, 0, a3, 0, 0);
        v31 = result & 0xFFFFFFFFFFFFFFFELL;
        if ( result == 1 )
          return result;
      }
      else
      {
        if ( (*(_DWORD *)a3 & 0x10000) != 0 )
          goto LABEL_26;
        v25 = v101;
        if ( (unsigned __int8)sub_18FE730((unsigned __int64)a3, v101, a1, *(double *)a7.m128_u64) )
          return 1;
        v31 = (unsigned __int64)a3;
      }
    }
    else
    {
      v25 = (__int64)a3;
      v23 = sub_A72210((_QWORD *)a1[31], v23);
      v30 = sub_191BD20((__int64)a1, a3, a7, a8, v26, v27, v28, v29);
      if ( v30 == 1 )
        return 1;
      v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( (*(_DWORD *)v31 & 0x10000) == 0 )
    {
      v32 = *(_QWORD *)&byte_8[*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v23) & 7) != (v32 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v32 | (unsigned __int8)*(_QWORD *)(v31 + 8)) & 7) )
      {
        v102 = v31;
        v33 = sub_EEB7E0(v31, v25, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v121, a1 + 1, v33, 0xEEEu, 0);
        v117 = (__int64 (__fastcall **)())a3[1];
        v34 = sub_162B6D0((__int64)&v121, (__int64 *)&v117);
        v119 = (__int64 (__fastcall **)())sub_EEC8C0(v102, (__int64)&v117, *(double *)a7.m128_u64);
        sub_1587DB0(v34, (__int64 *)&v119);
        sub_15F7200(&v121);
        return 1;
      }
    }
    a3 = (_QWORD *)v31;
  }
LABEL_26:
  v36 = *(__int64 (__fastcall ***)())a4;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v119 = *(__int64 (__fastcall ***)())a4;
    v117 = v36;
    v104 = v36;
    v120 = (__int64 *)(a4 + 8);
    v118 = (__int64 *)(a4 + 8);
    v41 = sub_F6CCB0((__int64 *)&v117, a7);
    v123 = (__int64 *)&v119;
    LODWORD(v122) = 4967;
    v121 = off_2BC6FE0;
    if ( !(unsigned __int8)sub_1E63C20(a1, v41, v104, 1, &v121) )
    {
      v42 = *(_QWORD *)a4;
      v120 = (__int64 *)(a4 + 8);
      v118 = (__int64 *)(a4 + 8);
      v119 = (__int64 (__fastcall **)())v42;
      v117 = (__int64 (__fastcall **)())v42;
      v105 = v42;
      v43 = sub_F6CCB0((__int64 *)&v117, a7);
      LODWORD(v122) = 4966;
      v121 = off_2BC6FE0;
      v123 = (__int64 *)&v119;
      if ( !(unsigned __int8)sub_1866EA0(
                               a1,
                               v43,
                               v105,
                               (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v121) )
      {
        v48 = a1[31];
        v121 = *(__int64 (__fastcall ***)())a4;
        if ( !(unsigned __int8)sub_F65CA0((__int64 *)&v121, v48, v44, v45, v46, v47) )
        {
          v78 = sub_F6ACC0(*(_QWORD *)(*(_QWORD *)a4 & 0xFFFFFFFFFFFFFFF0LL), (__int64)(a1 + 1), v49, v50, v51);
          v118 = (__int64 *)(a4 + 8);
          v117 = *(__int64 (__fastcall ***)())a4;
          v107 = (v78 != 0) + 7351;
          v79 = sub_F6CCB0((__int64 *)&v117, a7);
          sub_168B9F0((__int64)&v121, a1 + 1, v79, v107, 0);
          v115 = *(__int64 (__fastcall ***)())a4;
          v80 = sub_162B6D0((__int64)&v121, (__int64 *)&v115);
          v120 = (__int64 *)(a4 + 8);
          v108 = v80;
          v119 = *(__int64 (__fastcall ***)())a4;
          v116 = (_QWORD *)sub_183A8D0((__int64 *)&v119, a7);
          sub_1587DB0(v108, (__int64 *)&v116);
          sub_15F7200(&v121);
        }
        v52 = *(_QWORD *)a4;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
        {
          sub_168B9B0((__int64)&v121, (__int64)(a1 + 1), 7349);
          sub_AE9DF0((unsigned __int8 **)&v121, *(_QWORD *)a4, 8u);
          v53 = *(_QWORD *)a4;
          v120 = (__int64 *)(a4 + 8);
          v119 = (__int64 (__fastcall **)())v53;
          v54 = sub_183A8D0((__int64 *)&v119, a7);
          LOBYTE(v118) = 1;
          v117 = (__int64 (__fastcall **)())v54;
          sub_AEC610((__int64 *)&v121, (__int64 *)&v117);
          v55 = *(_QWORD *)a4;
          v118 = (__int64 *)(a4 + 8);
          v117 = (__int64 (__fastcall **)())v55;
          v56 = sub_F6CCB0((__int64 *)&v117, a7);
          v116 = a3;
          sub_18CA280((__int64)a1, v56, &v116, 1, (__int64)&v121);
          if ( v121 && v122 )
            sub_1580C40(v122, (unsigned __int64)v121);
          v52 = *(_QWORD *)a4;
        }
        if ( !sub_A62E10(a1[31], v52, v52, v50, v51) )
          goto LABEL_45;
        v81 = *(_QWORD *)a4;
        v82 = sub_AAF890((__int64 *)a1[31], *(_QWORD *)a4, v57, v58, v59);
        v86 = *(_QWORD *)a4;
        v109 = v82;
        v106 = v82;
        v87 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v87 + 16) == 47 )
        {
          v88 = sub_F60F10(*v87, v81, v83, v84, v85, v86);
          v86 = sub_6F3660((__int64)v88);
        }
        v110 = v86;
        if ( sub_AAC110(a1[31], v109, v86, 1u)
          || (v60 = (__int64 *)(v109 & 0xFFFFFFFFFFFFFFF0LL), (v109 & 0xFFFFFFFFFFFFFFF0LL) != 0)
          && ((v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
               *(_BYTE *)(v90 + 16) != 13)
           || ((*(_WORD *)(v90 + 18) >> 3) & 0x1FF) != 0x1B4)
          && (v112 = v109 & 0xFFFFFFFFFFFFFFF0LL,
              v113 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFF0LL),
              v114 = v110,
              v111 = sub_F65360(*v60, v109, v110 & 0xFFFFFFFFFFFFFFF0LL, v89, (__int64)v60, v110),
              v94 = sub_F65360(*v113, v109, (__int64)v113, v91, v92, v93),
              v60 = (__int64 *)(v109 & 0xFFFFFFFFFFFFFFF0LL),
              v111 != v94)
          && (!sub_F65360(*v113, v109, (__int64)v113, v95, (__int64)v60, v96)
            ? (v99 = sub_A70710((_QWORD *)a1[31], v114, v97, v98, v112))
            : (v99 = sub_A704A0((_QWORD *)a1[31], v114, v97, v98, v112)),
              v100 = sub_AAC110(a1[31], v109, v99, 1u),
              v60 = (__int64 *)(v109 & 0xFFFFFFFFFFFFFFF0LL),
              v100) )
        {
LABEL_45:
          v106 = 0;
          v60 = nullptr;
        }
        v36 = *(__int64 (__fastcall ***)())a4;
        v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v61 + 16) == 13 && ((*(_WORD *)(v61 + 18) >> 3) & 0x1FF) == 0x1E1 )
        {
          v106 = *(_QWORD *)(a1[31] + 18808);
          v60 = (__int64 *)(v106 & 0xFFFFFFFFFFFFFFF0LL);
        }
        if ( v60 )
        {
          sub_168B9B0((__int64)&v121, (__int64)(a1 + 1), 7350);
          sub_AE9DF0((unsigned __int8 **)&v121, *(_QWORD *)a4, 8u);
          sub_AE9DF0((unsigned __int8 **)&v121, v106, 8u);
          v62 = *(_QWORD *)a4;
          v120 = (__int64 *)(a4 + 8);
          v119 = (__int64 (__fastcall **)())v62;
          v63 = sub_183A8D0((__int64 *)&v119, a7);
          LOBYTE(v118) = 1;
          v117 = (__int64 (__fastcall **)())v63;
          sub_AEC610((__int64 *)&v121, (__int64 *)&v117);
          v64 = *(_QWORD *)a4;
          v118 = (__int64 *)(a4 + 8);
          v117 = (__int64 (__fastcall **)())v64;
          v65 = sub_F6CCB0((__int64 *)&v117, a7);
          v116 = a3;
          sub_18CA280((__int64)a1, v65, &v116, 1, (__int64)&v121);
          if ( v121 && v122 )
            sub_1580C40(v122, (unsigned __int64)v121);
          v36 = *(__int64 (__fastcall ***)())a4;
        }
        goto LABEL_27;
      }
    }
    return 1;
  }
LABEL_27:
  v37 = a1[31];
  v121 = v36;
  v38 = sub_F67970(&v121, v37);
  v39 = sub_EEE9A0(40, (_QWORD *)a1[31], 8u);
  *(_WORD *)v39 = *(_WORD *)v39 & 0xFE00 | 3;
  if ( unk_2CD7484 )
    sub_EE9B50(3);
  *(_QWORD *)(v39 + 8) = v38;
  *(_WORD *)(v39 + 1) &= 0xF801u;
  *(_DWORD *)(v39 + 32) = v101;
  *(_QWORD *)(v39 + 16) = a3;
  *(_QWORD *)(v39 + 24) = (4 * v16) | a4 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v39 + 36) = v103;
  v40 = sub_B62FC0(v39);
  *(_BYTE *)(v39 + 1) = (v40 << 6) | *(_BYTE *)(v39 + 1) & 0x3F;
  *(_BYTE *)(v39 + 2) = *(_BYTE *)(v39 + 2) & 0xF8 | (v40 >> 2) & 7;
  return v39;
}
