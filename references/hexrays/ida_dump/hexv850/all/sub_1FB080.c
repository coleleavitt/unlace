__int64 __fastcall sub_1FB080(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned __int8 a4)
{
  unsigned int v4; // r10d
  char v6; // al
  __int64 v7; // r13
  char v12; // al
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  signed int v26; // ecx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  int v35; // r13d
  __int64 v36; // rax
  int v37; // eax
  int v38; // r10d
  char v39; // al
  char v40; // al
  char v41; // dl
  unsigned __int64 v42; // rax
  int v43; // r13d
  _QWORD *v44; // rcx
  __int64 v45; // rdi
  _DWORD *v46; // rax
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r14
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // esi
  _DWORD *v60; // rdi
  int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  char *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdi
  _QWORD *v72; // [rsp+0h] [rbp-220h]
  char v73; // [rsp+0h] [rbp-220h]
  __int64 v74; // [rsp+10h] [rbp-210h]
  int v75; // [rsp+10h] [rbp-210h]
  __int64 v76; // [rsp+10h] [rbp-210h]
  __int64 v77; // [rsp+10h] [rbp-210h]
  unsigned int v78; // [rsp+18h] [rbp-208h]
  __int64 v79; // [rsp+20h] [rbp-200h]
  unsigned int v81; // [rsp+28h] [rbp-1F8h]
  unsigned int v82; // [rsp+28h] [rbp-1F8h]
  int v83; // [rsp+34h] [rbp-1ECh] BYREF
  __int64 v84; // [rsp+38h] [rbp-1E8h] BYREF
  __int64 v85; // [rsp+40h] [rbp-1E0h] BYREF
  __int64 v86; // [rsp+48h] [rbp-1D8h]
  _QWORD v87[6]; // [rsp+50h] [rbp-1D0h] BYREF
  __int128 v88; // [rsp+80h] [rbp-1A0h] BYREF
  __int64 v89; // [rsp+90h] [rbp-190h]
  __int64 v90; // [rsp+98h] [rbp-188h]
  __int64 v91; // [rsp+A0h] [rbp-180h]
  char v92; // [rsp+A8h] [rbp-178h] BYREF
  _QWORD v93[7]; // [rsp+1E8h] [rbp-38h] BYREF

  v93[0] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 108) != a4 )
    return 0;
  v6 = *(_BYTE *)a2;
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 == 5 || v6 == 15 )
  {
    if ( !(unsigned __int8)sub_3297A0(a2, v87) )
      goto LABEL_9;
    if ( v87[0] >= *(__int64 *)(v7 + 128)
      || (unsigned __int8)sub_311780(
                            v7 + 848,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL)
                          & (*(_QWORD *)(v7 + 1440) + v87[0])) )
    {
      return 0;
    }
    v12 = sub_311780(
            v7 + 232,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v7 + 1440) + v87[0]))
        ^ 1;
  }
  else
  {
    if ( v6 != 1 )
      return 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 1504) + 264LL))(
            *(_QWORD *)(v7 + 1504),
            *(unsigned int *)(a2 + 8))
        ^ 1;
  }
  if ( !v12 )
    return 0;
LABEL_9:
  v13 = **(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
  if ( !v13 )
    goto LABEL_12;
  v14 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v14 )
    return 0;
  if ( (*(_BYTE *)v14 & 2) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v30 = *(_QWORD *)(v14 + 24);
    if ( a2 >= v30 )
      break;
    v14 = *(_QWORD *)(v14 + 8);
LABEL_23:
    if ( (*(_BYTE *)v14 & 2) != 0 )
      goto LABEL_12;
  }
  if ( v30 < a2 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    goto LABEL_23;
  }
  if ( v13 != (_QWORD *)v14 )
    return 0;
LABEL_12:
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 16);
  v87[1] = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 24);
  v87[0] = &off_4B2710;
  v87[4] = v15;
  v18 = *(_QWORD **)(a1 + 96);
  v87[2] = v16;
  v87[3] = v17;
  v19 = *(int *)(v16 + 72);
  if ( v19 >= v18[1] )
    sub_1F5D90();
  v20 = sub_1ECB90((__int64 *)(*v18 + 80 * v19), v17, a2, a4);
  v83 = v20;
  if ( v20 == -1 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v85 = 0;
    v86 = 0;
    v74 = v31;
    if ( !(unsigned __int8)sub_1C02B0((char *)a2, (__int64)&v85) )
    {
      if ( !under_debugger )
        sub_37CFE0(51191);
      goto LABEL_131;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 6LL) & 1) != 0 )
      v74 = sub_1EB7C0(*(_QWORD *)(a1 + 8), v74, (int *)&v85);
    v32 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v32 + 40) == v74 )
      {
        v56 = *(_QWORD *)(a1 + 24);
        if ( v56 != v33 )
          v74 = *(_QWORD *)(v56 + 24);
      }
      if ( (*(_BYTE *)(v33 + 4) & 0x40) != 0 )
      {
        if ( (~((unsigned __int16)get_flags_ex(v74, 4) >> 8) & 6) == 0 )
        {
          v89 = -1;
          v90 = 0;
          v66 = &v92;
          v91 = 0;
          v88 = -1;
          do
          {
            *(_WORD *)v66 = 0;
            v66 += 40;
            *((_WORD *)v66 - 19) = 0;
            *((_WORD *)v66 - 18) = 0;
            *((_DWORD *)v66 - 2) = 0;
            *((_WORD *)v66 - 17) = 0;
            *((_OWORD *)v66 - 2) = 0;
            *((_QWORD *)v66 - 2) = 0;
          }
          while ( v93 != (_QWORD *)v66 );
          if ( (int)decode_insn(&v88, v74, v93, 0, v57, v58, 0.0) > 0 )
            v74 += (unsigned __int8)is_call_insn(&v88, v74, v67, v68, v69, v70);
        }
        v32 = *(_QWORD *)(a1 + 8);
      }
      v74 += *(unsigned __int8 *)(a1 + 108);
    }
    v34 = 1;
    if ( *(_DWORD *)(a2 + 4) != -1 )
      v34 = *(_DWORD *)(a2 + 4);
    v78 = v34;
    *(_BYTE *)(a1 + 109) = sub_1EB610(v32, (char *)a2, v74);
    v35 = 0;
    v36 = 0;
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_54:
      v41 = *(_BYTE *)(a1 + 109);
      if ( v41 )
      {
        v42 = 0;
        v43 = 0;
      }
      else
      {
        v42 = *(int *)(a1 + 104);
        v43 = *(_DWORD *)(a1 + 104);
      }
      v44 = *(_QWORD **)(a1 + 48);
      v73 = 0;
      if ( v42 < v44[1] )
      {
        while ( 1 )
        {
          if ( v41
            || (v45 = *v44 + 104 * v42, (*(_BYTE *)(v45 + 25) & 0x10) == 0)
            || !a4 && *(_QWORD *)(v45 + 16) == v74 )
          {
            v46 = *(_DWORD **)(a1 + 72);
            v47 = &v46[*(_QWORD *)(a1 + 80)];
            if ( v46 == v47 )
              goto LABEL_71;
            while ( v43 != *v46 )
            {
              if ( v47 == ++v46 )
                goto LABEL_71;
            }
            if ( v47 == v46 )
            {
LABEL_71:
              v48 = sub_1FAE80(a1, (_BYTE *)a2, a3, v43, (int)v87);
              v38 = v48;
              if ( v48 <= 0 )
                goto LABEL_49;
              if ( v48 == 4 )
                goto LABEL_108;
              v44 = *(_QWORD **)(a1 + 48);
            }
          }
          else if ( *(_BYTE *)a2 == 5 )
          {
            v55 = sub_1BE930(
                    v45,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                    v78,
                    *(unsigned int *)(v45 + 88),
                    nullptr,
                    nullptr);
            v44 = *(_QWORD **)(a1 + 48);
            v73 |= v55 != 0;
          }
          v42 = ++v43;
          if ( (unsigned __int64)v43 >= v44[1] )
            break;
          v41 = *(_BYTE *)(a1 + 109);
        }
      }
      if ( (**(_BYTE **)(a1 + 8) & 1) != 0 && *(int *)(a1 + 104) > 0 )
      {
        v49 = 0;
        while ( 1 )
        {
          v50 = *v44 + 104 * v49;
          if ( *(_QWORD *)(v50 + 16) == v74 && (*(_BYTE *)(v50 + 25) & 1) == 0 )
          {
            v79 = *v44 + 104 * v49;
            if ( !(unsigned int)sub_1BDD50((int *)v50, (int *)&v85)
              || *(_BYTE *)a2 == 5 && (unsigned __int8)sub_1BF180(v79, (__int64)&v85, v78, *(_DWORD *)(v79 + 88)) )
            {
              v51 = *(_QWORD *)(a1 + 80);
              if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v51 + 1) )
              {
                *(_QWORD *)(a1 + 72) = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v51 + 1, 4);
                v51 = *(_QWORD *)(a1 + 80);
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v51) = v49;
              ++*(_QWORD *)(a1 + 80);
              v38 = sub_1FAE80(a1, (_BYTE *)a2, a3, v49, (int)v87);
              if ( v38 <= 0 )
                goto LABEL_49;
            }
          }
          if ( *(_DWORD *)(a1 + 104) <= (int)++v49 )
            break;
          v44 = *(_QWORD **)(a1 + 48);
        }
      }
      v52 = sub_1F7710(a1, &v83, (unsigned __int8 *)a2, v74, (__int64)a3, v73 | a4);
      v53 = v83;
      v38 = v52;
      if ( v83 == -1 )
      {
LABEL_49:
        v82 = v38;
        cleanup_argloc(&v85);
        return v82;
      }
      v75 = v52;
      v54 = sub_203620(a2, v83, (unsigned int)v87, (int)a1 + 56, a4, 0, (__int64)a3);
      if ( v54 == 3 || v75 == -36 )
      {
LABEL_106:
        v38 = -36;
        goto LABEL_49;
      }
      if ( v54 == 4 )
      {
LABEL_108:
        v38 = 1;
        goto LABEL_49;
      }
      if ( v54 == 1 )
      {
        v65 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v53;
        if ( (unsigned int)(*(_DWORD *)v65 - 3) <= 1 )
        {
          if ( !under_debugger )
            sub_37CFE0(50331);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v65 + 25) & 4) != 0 )
          goto LABEL_121;
      }
      else
      {
        if ( v54 != 2 || *(_BYTE *)a2 != 5 )
          goto LABEL_95;
        v71 = *(_QWORD *)(a1 + 8);
        v77 = *(_QWORD *)(v71 + 432) + 104 * v53;
        if ( !(unsigned __int8)sub_2238D0(v71, v77) || *(_DWORD *)v77 != 1 )
        {
          if ( !under_debugger )
            sub_37CFE0(52446);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v77 + 24) & 2) == 0 )
        {
          v59 = *(_DWORD *)(v77 + 88);
          v60 = (_DWORD *)v77;
          v76 = *(_QWORD *)(v77 + 8);
          v61 = sub_1BE840(v60, v59);
          v62 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
          v63 = *(_QWORD *)(a1 + 8);
          v64 = v62 + *(int *)(a2 + 4);
          if ( v62 > v76 )
            v62 = v76;
          if ( v64 >= v61 )
            v61 = v64;
          LODWORD(v84) = v61 - v62;
          if ( (unsigned int)sub_22D430(v63, &v84, v62, a3) - 1 <= 1 )
            goto LABEL_106;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
        {
LABEL_121:
          sub_203620(a2, v53, (unsigned int)v87, a1 + 56, a4, 1, (__int64)a3);
LABEL_95:
          cleanup_argloc(&v85);
          return 0;
        }
      }
      v38 = -10;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v37 = sub_1FAE80(a1, (_BYTE *)a2, a3, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v36), (int)v87);
      v38 = v37;
      if ( v37 <= 0 )
        goto LABEL_49;
      if ( v37 == 4 )
      {
        v39 = *(_BYTE *)a2;
        if ( *(_BYTE *)a2 == 5 || v39 == 15 )
        {
          v72 = *(_QWORD **)(a1 + 8);
          if ( !(unsigned __int8)sub_3297A0(a2, &v84) )
            goto LABEL_40;
          if ( v84 >= v72[16]
            || (unsigned __int8)sub_311780(
                                  v72 + 106,
                                  *(_QWORD *)(*(_QWORD *)(v72[187] + 24LL) + 16LL) & (v72[180] + v84)) )
          {
LABEL_48:
            v38 = 0;
            goto LABEL_49;
          }
          v40 = sub_311780(v72 + 29, *(_QWORD *)(*(_QWORD *)(v72[187] + 24LL) + 16LL) & (v72[180] + v84));
        }
        else
        {
          if ( v39 != 1 )
            goto LABEL_48;
          v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                  *(unsigned int *)(a2 + 8));
        }
        if ( v40 == 1 )
          goto LABEL_48;
      }
LABEL_40:
      v36 = ++v35;
      if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 80) )
        goto LABEL_54;
    }
  }
  v21 = v20;
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
  v4 = sub_203620(a2, v20, (unsigned int)v87, (int)a1 + 56, a4, 0, 0);
  if ( v4 == 1 )
  {
    v23 = sub_203620(a2, v21, (unsigned int)v87, (int)a1 + 56, a4, 1, 0);
    if ( v23 != 1 )
    {
      v81 = v23;
      v24 = v22 + 104 * v21;
      *(_DWORD *)(v24 + 24) |= 0x400u;
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(_DWORD *)(v24 + 88);
      v85 = 0;
      v86 = 0;
      sub_1EA650(*(_DWORD **)(v25 + 1504), (__int64 *)(v25 + 496), v24, v26, &v85, 0);
      cleanup_argloc(&v85);
      sub_1EB4F0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v22 + 104 * v21 + 16), 26, v27, v28, v29);
      return v81;
    }
    if ( !under_debugger )
      sub_37CFE0(52874);
LABEL_131:
    BUG();
  }
  return v4;
}
