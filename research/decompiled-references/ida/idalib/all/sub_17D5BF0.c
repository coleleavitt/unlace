void __fastcall sub_17D5BF0(__int64 a1, __int64 *a2, double a3, double a4)
{
  unsigned __int8 v4; // al
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(); // rsi
  __int64 v15; // rdx
  __int64 *v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // rsi
  unsigned int v25; // ecx
  unsigned __int64 *v26; // rax
  __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 *v34; // rdi
  int v35; // edx
  __int64 v36; // rsi
  __int64 (*v37)(); // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  _BYTE *v46; // rax
  __int64 *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rsi
  unsigned __int64 *v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r14
  unsigned __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned int v79; // r14d
  unsigned int v80; // r13d
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  char v87; // bl
  unsigned __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // r13
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // rsi
  __int64 *v104; // [rsp+10h] [rbp-2028h] BYREF
  __int64 v105; // [rsp+18h] [rbp-2020h] BYREF
  _WORD v106[2]; // [rsp+20h] [rbp-2018h] BYREF
  int v107; // [rsp+24h] [rbp-2014h]
  int v108; // [rsp+28h] [rbp-2010h]
  int v109; // [rsp+2Ch] [rbp-200Ch]
  __int64 v110[3]; // [rsp+30h] [rbp-2008h] BYREF
  int v111; // [rsp+48h] [rbp-1FF0h]
  __int64 *v112; // [rsp+50h] [rbp-1FE8h]
  __int16 v113; // [rsp+58h] [rbp-1FE0h]
  __int64 (__fastcall **v114)(); // [rsp+60h] [rbp-1FD8h] BYREF
  int v115; // [rsp+68h] [rbp-1FD0h]
  __int64 *v116; // [rsp+70h] [rbp-1FC8h]

  if ( !a2 )
    return;
  v4 = *((_BYTE *)a2 + 28) & 0x7F;
  if ( (unsigned int)v4 - 40 > 6 )
    return;
  v6 = (__int64)a2;
  v7 = a2[6];
  v104 = a2;
  v105 = v7;
  if ( v4 == 46 )
  {
    v23 = *((_DWORD *)a2 + 6);
    v24 = (__int64 *)(a1 + 8);
    v25 = 3596;
LABEL_30:
    sub_168B9F0((__int64)&v114, v24, v23, v25, 0);
    sub_17B9080((__int64)&v114, (__int64 *)&v104);
LABEL_31:
    sub_15F7200(&v114);
    goto LABEL_32;
  }
  if ( (unsigned __int8)sub_179FCB0(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    a2 = v104;
    if ( (unsigned __int8)sub_17D5AA0((_QWORD *)a1, v104, 0, nullptr, a3) )
      return;
  }
  v12 = v104;
  if ( (*((_BYTE *)v104 + 28) & 0x7F) != 0x2B && *((char *)v104 + 97) < 0 )
  {
    a2 = (__int64 *)sub_B8C330((__int64)v104);
    v12 = v104;
    if ( !(unsigned int)sub_B74100((__int64)v104, (__int64)a2) )
    {
      if ( (*((_BYTE *)v104 + 28) & 0x7F) == 0x2B )
        goto LABEL_129;
      if ( (*((_BYTE *)v104 + 97) & 1) != 0 )
        goto LABEL_7;
      if ( !sub_179A810((__int64)v104) )
      {
LABEL_129:
        sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0xFB6u, 0);
        goto LABEL_31;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) != 10 )
      {
        v23 = *((_DWORD *)v104 + 6);
        v24 = (__int64 *)(a1 + 8);
        v25 = 3486;
        goto LABEL_30;
      }
    }
  }
LABEL_7:
  if ( *((char *)v12 + 28) < 0 )
    goto LABEL_11;
  v13 = *(_QWORD *)&byte_8[v12[6] & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v13 & 8) != 0 )
  {
    v8 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_DWORD *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v13 & 7)) >> 9 == 3
      && (v12[12] & 7) != 1 )
    {
      if ( sub_B73640((__int64)v12) )
        goto LABEL_50;
      v73 = sub_F63270(*(_QWORD *)(v104[6] & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v8, v9, v10, v11);
      if ( v73 )
      {
        v74 = sub_B8E970((__int64)(v73 + 8));
        v75 = v74;
        if ( v74 )
        {
          if ( (*(_BYTE *)(v74 + 28) & 0x7F) == 0x26 )
          {
LABEL_165:
            v87 = 0;
LABEL_166:
            if ( (*(_BYTE *)(v75 + 84) & 3) != 0 )
            {
              v89 = sub_B76070(v75, (__int64)a2, v8, v9);
              if ( !v89 && (unsigned int)sub_1703690(v75, (__int64)a2, v8, v9) >> 9 == 3 )
                v87 = 1;
            }
            while ( 1 )
            {
              v88 = *(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v75 = v88;
              if ( !v88 )
                break;
              if ( (*(_BYTE *)(v88 + 28) & 0x7F) == 0x26 )
                goto LABEL_166;
            }
            if ( v87 )
            {
LABEL_50:
              v12 = v104;
              if ( *((char *)v104 + 28) < 0 )
                goto LABEL_11;
              goto LABEL_9;
            }
          }
          else
          {
            while ( 1 )
            {
              v76 = *(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v75 = v76;
              if ( !v76 )
                break;
              if ( (*(_BYTE *)(v76 + 28) & 0x7F) == 0x26 )
                goto LABEL_165;
            }
          }
        }
      }
      sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x1243u, 0);
      goto LABEL_31;
    }
  }
LABEL_9:
  if ( (*((_BYTE *)v12 + 29) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
      goto LABEL_11;
    goto LABEL_33;
  }
  v31 = sub_B8C3D0((__int64)v12, (__int64)a2, v8, v9, v10, v11);
  v8 = *v31;
  v9 = *v31 + 8LL * *((unsigned int *)v31 + 2);
  if ( *v31 >= v9 )
  {
    if ( v8 == v9 )
      goto LABEL_56;
    while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 228 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        goto LABEL_56;
    }
LABEL_115:
    sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x138Bu, 0);
    goto LABEL_31;
  }
  v32 = (unsigned __int64 *)*v31;
  while ( 1 )
  {
    v8 = *v32;
    if ( *(_WORD *)(*v32 + 36) == 228 )
      break;
    if ( (unsigned __int64 *)v9 == ++v32 )
      goto LABEL_56;
  }
  if ( (unsigned __int64 *)v9 != v32 )
    goto LABEL_115;
LABEL_56:
  v12 = v104;
  if ( *((char *)v104 + 28) < 0 || (*(_BYTE *)(v6 + 29) & 1) == 0 )
    goto LABEL_11;
LABEL_33:
  v26 = sub_B8C3D0(v6, (__int64)a2, v8, v9, v10, v11);
  v27 = (__int64 *)*v26;
  v28 = *v26 + 8LL * *((unsigned int *)v26 + 2);
  if ( *v26 >= v28 )
  {
    v12 = v104;
    if ( v27 == (__int64 *)v28 )
      goto LABEL_11;
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 417 )
    {
      v29 = (__int64 *)(v28 + 8);
      while ( v27 != v29 )
      {
        v30 = *v29++;
        if ( *(_WORD *)(v30 + 36) == 417 )
          goto LABEL_117;
      }
      goto LABEL_11;
    }
LABEL_117:
    v53 = *((unsigned int *)v12 + 6);
    if ( (v12[12] & 7) == 1 )
    {
      v23 = *((_DWORD *)v12 + 6);
      v25 = 4115;
      v24 = (__int64 *)(a1 + 8);
      goto LABEL_30;
    }
    if ( (unsigned __int8)sub_1E63CF0(a1, v53, v12[6], 1, 5261) )
      goto LABEL_32;
    v58 = sub_F63270(*(_QWORD *)(v104[6] & 0xFFFFFFFFFFFFFFF0LL), v53, v54, v55, v56, v57);
    v63 = (__int64)v58;
    if ( v58 )
    {
      if ( (sub_7052B0((__int64 *)(v58[13] + 96LL), v58[13], v59, v60, v61, v62),
            (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 9LL) & 1) == 0)
        && ((sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v64, v65, v66, v67),
             (**(_BYTE **)(v63 + 128) & 1) != 0)
         || (sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v64, v65, v66, v67),
             v82 = *(_QWORD *)(v63 + 128),
             (*(_BYTE *)(v82 + 9) & 1) != 0)
         || (*(_BYTE *)(v82 + 10) & 0x20) != 0 && !(unsigned __int8)sub_B96D80(v63))
        && ((sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v64, v65, v66, v67),
             (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 3LL) & 8) == 0)
         || (sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v83, v84, v85, v86),
             (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 9LL) & 1) != 0))
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v64, v65, v66, v67),
            *(char *)(*(_QWORD *)(v63 + 128) + 4LL) >= 0) )
      {
        sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x1015u, 0);
        goto LABEL_31;
      }
    }
    return;
  }
  v52 = *v26;
  while ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 417 )
  {
    v52 += 8LL;
    if ( v28 == v52 )
    {
      v12 = v104;
      goto LABEL_11;
    }
  }
  v12 = v104;
  if ( v28 != v52 )
    goto LABEL_117;
LABEL_11:
  v14 = (__int64 (__fastcall ***)())sub_B8C330((__int64)v12);
  v17 = sub_B74100((__int64)v12, (__int64)v14);
  if ( *((char *)v104 + 28) >= 0 )
  {
    if ( v17 )
    {
      v114 = (__int64 (__fastcall **)())v104[6];
      if ( sub_179FAD0(&v114, (__int64)v14, v15, (__int64)v16, v18, v19) )
      {
        v14 = (__int64 (__fastcall ***)())v104[6];
        sub_17D0CF0(a1, (__int64)v14, *((unsigned int *)v104 + 6), 2, 1, v19, (__int64)v104, v105);
      }
    }
  }
  if ( v17 == 1 )
  {
    if ( *((char *)v104 + 28) >= 0 )
    {
      v39 = sub_A72040(*(_QWORD **)(a1 + 248), v105);
      v40 = v104;
      if ( v39 && *(_BYTE *)(v39 + 16) == 5 )
      {
        v41 = *(_QWORD *)(v39 + 32);
        v42 = *((unsigned int *)v104 + 6);
        v115 = 3070;
        v114 = off_2BC6A30;
        if ( (unsigned __int8)sub_1E63C20(a1, v42, v41, 0, &v114) )
          sub_B88650((__int64)v104, 1);
        v40 = v104;
      }
      if ( (v40[12] & 7) == 2 && ((*((_BYTE *)v40 + 72) | (unsigned __int8)(v40[9] >> 1)) & 1) != 0 )
      {
        LOBYTE(v110[0]) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL)
                                                                             + 8LL)
                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                     + 16LL)
                                          - 2) <= 4u;
        v68 = *((unsigned int *)v40 + 6);
        v115 = 5706;
        v114 = off_2BC6A58;
        v116 = v110;
        sub_1E63C20(a1, v68, v105, 1, &v114);
        v40 = v104;
      }
      if ( *((char *)v40 + 28) >= 0 )
      {
        v43 = *(unsigned int *)(a1 + 2960);
        if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2964) )
        {
          sub_2237220(a1 + 2952, a1 + 2968, v43 + 1, 8);
          v43 = *(unsigned int *)(a1 + 2960);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 2952) + 8 * v43) = v40;
        ++*(_DWORD *)(a1 + 2960);
      }
    }
    return;
  }
  if ( !v17 )
    goto LABEL_62;
  if ( v17 != 2 )
    goto LABEL_18;
  v16 = v104;
  if ( (*((_BYTE *)v104 + 28) & 0x7F) == 0x2B )
  {
    v20 = *(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v21 == 5 )
    {
      v24 = (__int64 *)(a1 + 8);
      v23 = *((_DWORD *)v104 + 6);
      goto LABEL_28;
    }
    goto LABEL_19;
  }
  if ( sub_179A810((__int64)v104) )
  {
    v14 = &v114;
    if ( !sub_B7D120((__int64)v104, (__int64 *)&v114) )
    {
LABEL_18:
      v20 = *(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v21 != 5 )
        goto LABEL_19;
      v16 = v104;
      v24 = (__int64 *)(a1 + 8);
      v23 = *((_DWORD *)v104 + 6);
      if ( (*((_BYTE *)v104 + 28) & 0x7F) == 0x2B )
      {
LABEL_28:
        sub_168B9F0((__int64)&v114, v24, v23, 0x149Du, 0);
        sub_15F7200(&v114);
LABEL_32:
        sub_B88650((__int64)v104, 1);
        return;
      }
LABEL_27:
      if ( *((char *)v16 + 97) < 0 )
      {
        v25 = 3490;
        goto LABEL_30;
      }
      goto LABEL_28;
    }
LABEL_62:
    v33 = v105 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_72;
    v34 = v104;
    v35 = *((_BYTE *)v104 + 28) & 0x7F;
    if ( v35 == 40 || v35 == 46 )
    {
      if ( sub_179A840((__int64)v104) && !(unsigned __int8)sub_B843B0(v104) )
      {
        if ( *((char *)v104 + 28) < 0 )
          goto LABEL_71;
        if ( (unsigned __int8)sub_1E63CF0(a1, *((unsigned int *)v104 + 6), v105, 1, 5261) )
          sub_B88650((__int64)v104, 1);
      }
      v33 = v105 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_72;
      v34 = v104;
    }
    if ( *((char *)v34 + 28) < 0 )
      goto LABEL_72;
    LODWORD(v110[0]) = 2;
    v36 = *((unsigned int *)v34 + 6);
    v115 = 2872;
    v114 = off_2BC6948;
    v116 = v110;
    if ( (unsigned __int8)sub_1866EA0(a1, v36, v105, &v114) )
      sub_B88650((__int64)v104, 1);
LABEL_71:
    v33 = v105 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_72:
    if ( (*(_BYTE *)(*(_QWORD *)v33 + 17LL) & 4) == 0 && *((char *)v104 + 28) >= 0 && (v104[12] & 7) == 3 )
    {
      sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x1C7Bu, 0);
      sub_15F7200(&v114);
      sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x1897u, 0);
      sub_15F7200(&v114);
    }
    v37 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 912LL);
    if ( v37 != sub_102BBA0 && (unsigned __int8)v37() && *((char *)v104 + 28) >= 0 )
    {
      v38 = *(unsigned int *)(a1 + 2992);
      if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2996) )
      {
        sub_2237220(a1 + 2984, a1 + 3000, v38 + 1, 8);
        v38 = *(unsigned int *)(a1 + 2992);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 2984) + 8 * v38) = v104;
      ++*(_DWORD *)(a1 + 2992);
    }
    return;
  }
  v20 = *(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v21 == 5 )
  {
    v23 = *((_DWORD *)v16 + 6);
    v24 = (__int64 *)(a1 + 8);
    goto LABEL_27;
  }
LABEL_19:
  if ( (unsigned int)(v21 - 43) <= 1 )
  {
    sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), *((_DWORD *)v104 + 6), 0x134Au, 0);
    v22 = sub_17B9080((__int64)&v114, (__int64 *)&v104);
    LODWORD(v110[0]) = *((_DWORD *)v104 + 6);
    HIDWORD(v110[0]) = v110[0];
    sub_1587DB0(v22, v110);
    sub_15F7200(&v114);
    return;
  }
  if ( (*(_BYTE *)(v20 + 17) & 4) == 0 && *((char *)v104 + 28) >= 0 )
  {
    if ( (*((_BYTE *)v104 + 29) & 1) != 0 )
    {
      v69 = sub_B8C3D0((__int64)v104, (__int64)v14, v20, (__int64)v16, v18, v19);
      v70 = *v69;
      v71 = *v69 + 8LL * *((unsigned int *)v69 + 2);
      if ( *v69 >= v71 )
      {
        if ( v70 != v71 )
        {
          while ( *(_WORD *)(*(_QWORD *)v71 + 36LL) != 411 )
          {
            v71 += 8LL;
            if ( v70 == v71 )
              goto LABEL_96;
          }
          return;
        }
      }
      else
      {
        v72 = *v69;
        while ( *(_WORD *)(*(_QWORD *)v72 + 36LL) != 411 )
        {
          v72 += 8LL;
          if ( v71 == v72 )
            goto LABEL_96;
        }
        if ( v71 != v72 )
          return;
      }
    }
LABEL_96:
    v44 = sub_A71450(*(_QWORD *)(a1 + 248), v105);
    if ( (unsigned __int8)sub_1E63CF0(a1, *((unsigned int *)v104 + 6), v44, 1, 5261) )
      goto LABEL_32;
    LODWORD(v110[0]) = 2;
    v45 = *((unsigned int *)v104 + 6);
    v115 = 2872;
    v116 = v110;
    v114 = off_2BC6948;
    if ( (unsigned __int8)sub_1866EA0(a1, v45, v105, &v114) )
      goto LABEL_32;
    v46 = *(_BYTE **)(a1 + 232);
    if ( (v46[1] & 8) != 0 )
      goto LABEL_200;
    if ( (v105 & 1) != 0 || (byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
    {
      if ( !sub_9B48E0((__int64)v104) && (v104[12] & 0x18) == 0
        || (v79 = 6812, !sub_9B48E0((__int64)v104)) && (v104[12] & 0x18) != 0 )
      {
        v79 = 6809;
      }
      v80 = *((_DWORD *)v104 + 6);
      LOBYTE(v110[0]) = (unsigned __int8)sub_FD3830(
                                           *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                                           0x1A83u,
                                           v80,
                                           *(_QWORD *)(a1 + 264),
                                           v77,
                                           v78) != 1;
      sub_168B9F0((__int64)&v114, (__int64 *)(a1 + 8), v80, v79, 0);
      v81 = sub_1605D30((__int64)&v114, &v105);
      sub_15890D0(v81, (unsigned __int8 *)v110);
      sub_15F7200(&v114);
      v46 = *(_BYTE **)(a1 + 232);
      if ( (v46[1] & 8) != 0 )
      {
LABEL_200:
        if ( sub_9B48E0((__int64)v104) )
        {
          v92 = v105;
          v93 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(*(_QWORD *)(a1 + 248), v105) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v93 + 16) == 48 )
          {
            v98 = sub_F60F10(*v93, v92, v94, v95, v96, v97);
            sub_7052B0((__int64 *)(v98[13] + 96LL), v98[13], v99, v100, v101, v102);
            if ( (*(_BYTE *)(v98[16] + 1LL) & 1) == 0 )
              sub_15F2480(a1);
          }
        }
        v46 = *(_BYTE **)(a1 + 232);
      }
    }
    v47 = v104;
    if ( (v46[47] & 0x20) == 0
      || (v48 = *(_QWORD *)&byte_8[v104[6] & 0xFFFFFFFFFFFFFFF0LL], (v48 & 8) == 0)
      || (*(_DWORD *)((char *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v48 & 7)) >> 9 != 2 )
    {
      if ( (v46[89] & 1) == 0
        || !(unsigned __int8)sub_19F7690(*(_QWORD *)(a1 + 680), v104)
        && ((v47 = v104, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0)
         || (v90 = *(_QWORD *)&byte_8[v104[6] & 0xFFFFFFFFFFFFFFF0LL], (v90 & 8) == 0)
         || (*(_DWORD *)((char *)&qword_18 + (v90 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v90 & 7)) >> 9 != 23) )
      {
        LODWORD(v110[0]) = 0;
        v110[1] = 0;
        v49 = v47[6];
        v112 = v47;
        v110[2] = v49;
        v111 = 0;
        v113 = 0;
        LODWORD(v49) = *((_DWORD *)v47 + 6);
        v106[0] = 3;
        v107 = v49;
        v108 = v49;
        v109 = v49;
        sub_1A19220((unsigned int)&v114, a1, (unsigned int)v110, (unsigned int)v106, 0, 0, 0, 1);
        v50 = sub_1A1D600((unsigned int)&v114, a1, (unsigned int)v110, (unsigned int)v106, 0, 0, 0);
        if ( (v50 & 0xFFFFFFFFFFFFFFFELL) != 0 )
        {
          v91 = sub_19A3EF0(a1, v50 & 0xFFFFFFFFFFFFFFFELL);
          sub_B73850((__int64)v104, v91);
          v51 = v104;
          *((_BYTE *)v104 + 96) = v104[12] & 0x9F | 0x20;
        }
        else
        {
          v51 = v104;
          if ( v50 == 1 )
          {
            v103 = sub_18C4330(a1, *((unsigned int *)v104 + 6), *((unsigned int *)v104 + 6), 0, 0, 0)
                 & 0xFFFFFFFFFFFFFFFELL;
            if ( v103 )
              sub_B73850((__int64)v104, v103);
            v51 = v104;
          }
        }
        sub_17C8350(a1, v51, a3, a4);
        sub_1A0BB10(&v114);
      }
    }
  }
}
