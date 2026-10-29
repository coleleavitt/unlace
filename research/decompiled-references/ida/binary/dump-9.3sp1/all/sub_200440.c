__int64 __fastcall sub_200440(__int64 a1, unsigned __int64 a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned int v4; // r10d
  char v6; // al
  __int64 v7; // r13
  char v12; // al
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  signed int v28; // ecx
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  int v37; // r13d
  __int64 v38; // rax
  int v39; // eax
  int v40; // r10d
  char v41; // al
  char v42; // al
  char v43; // dl
  unsigned __int64 v44; // rax
  int v45; // r13d
  _QWORD *v46; // rcx
  __int64 v47; // rdi
  _DWORD *v48; // rax
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // r13
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // r14
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdx
  int v59; // esi
  _DWORD *v60; // rdi
  int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 *v66; // rax
  __int64 v67; // rdi
  _QWORD *v68; // [rsp+0h] [rbp-220h]
  char v69; // [rsp+0h] [rbp-220h]
  __int64 v70; // [rsp+10h] [rbp-210h]
  int v71; // [rsp+10h] [rbp-210h]
  __int64 v72; // [rsp+10h] [rbp-210h]
  __int64 v73; // [rsp+10h] [rbp-210h]
  int v74; // [rsp+18h] [rbp-208h]
  unsigned int v76; // [rsp+28h] [rbp-1F8h]
  unsigned int v77; // [rsp+28h] [rbp-1F8h]
  int v78; // [rsp+34h] [rbp-1ECh] BYREF
  __int64 v79; // [rsp+38h] [rbp-1E8h] BYREF
  __int64 v80; // [rsp+40h] [rbp-1E0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-1D8h]
  _QWORD v82[6]; // [rsp+50h] [rbp-1D0h] BYREF
  __int128 v83; // [rsp+80h] [rbp-1A0h]
  __int64 v84; // [rsp+90h] [rbp-190h]
  __int64 v85; // [rsp+98h] [rbp-188h]
  __int64 v86; // [rsp+A0h] [rbp-180h]
  char v87; // [rsp+A8h] [rbp-178h] BYREF
  unsigned __int64 v88; // [rsp+1E8h] [rbp-38h] BYREF

  v88 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 108) != a4 )
    return 0;
  v6 = *(_BYTE *)a2;
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 == 5 || v6 == 15 )
  {
    if ( !(unsigned __int8)sub_32F330(a2, v82) )
      goto LABEL_9;
    if ( v82[0] >= *(__int64 *)(v7 + 128)
      || (unsigned __int8)sub_317040(
                            v7 + 848,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL)
                          & (*(_QWORD *)(v7 + 1440) + v82[0])) )
    {
      return 0;
    }
    v12 = sub_317040(
            v7 + 232,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v7 + 1440) + v82[0]))
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
  v15 = **(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
  if ( !v15 )
    goto LABEL_12;
  v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v16 )
    return 0;
  if ( (*(_BYTE *)v16 & 2) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v32 = *(_QWORD *)(v16 + 24);
    if ( a2 >= v32 )
      break;
    v16 = *(_QWORD *)(v16 + 8);
LABEL_23:
    if ( (*(_BYTE *)v16 & 2) != 0 )
      goto LABEL_12;
  }
  if ( v32 < a2 )
  {
    v16 = *(_QWORD *)(v16 + 16);
    goto LABEL_23;
  }
  if ( v15 != (_QWORD *)v16 )
    return 0;
LABEL_12:
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(a1 + 16);
  v82[1] = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)(a1 + 24);
  v82[0] = &off_4DED70;
  v82[4] = v17;
  v20 = *(_QWORD **)(a1 + 96);
  v82[2] = v18;
  v82[3] = v19;
  v21 = *(int *)(v18 + 72);
  if ( v21 >= v20[1] )
    sub_1FB150();
  v22 = sub_1F1F50((__int64 *)(*v20 + 80 * v21), v19, a2, a4, v13, v14);
  v78 = v22;
  if ( v22 == -1 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v80 = 0;
    v81 = 0;
    v70 = v33;
    if ( !(unsigned __int8)sub_1C5030((char *)a2, (__int64)&v80) )
    {
      if ( !under_debugger )
        sub_383060(51191);
      goto LABEL_131;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 6LL) & 1) != 0 )
      v70 = sub_1F0B80(*(_QWORD *)(a1 + 8), v70, (int *)&v80);
    v34 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v34 & 1) != 0 )
    {
      v35 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v34 + 40) == v70 )
      {
        v58 = *(_QWORD *)(a1 + 24);
        if ( v58 != v35 )
          v70 = *(_QWORD *)(v58 + 24);
      }
      if ( (*(_BYTE *)(v35 + 4) & 0x40) != 0 )
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
        {
          v84 = -1;
          v85 = 0;
          v66 = (unsigned __int64 *)&v87;
          v86 = 0;
          v83 = -1;
          do
          {
            *(_WORD *)v66 = 0;
            v66 += 5;
            *((_WORD *)v66 - 19) = 0;
            *((_WORD *)v66 - 18) = 0;
            *((_DWORD *)v66 - 2) = 0;
            *((_WORD *)v66 - 17) = 0;
            *((_OWORD *)v66 - 2) = 0;
            *(v66 - 2) = 0;
          }
          while ( &v88 != v66 );
          if ( (int)decode_insn() > 0 )
            v70 += (unsigned __int8)is_call_insn();
        }
        v34 = *(_QWORD *)(a1 + 8);
      }
      v70 += *(unsigned __int8 *)(a1 + 108);
    }
    v36 = 1;
    if ( *(_DWORD *)(a2 + 4) != -1 )
      v36 = *(_DWORD *)(a2 + 4);
    v74 = v36;
    *(_BYTE *)(a1 + 109) = sub_1F09D0(v34, (char *)a2, v70);
    v37 = 0;
    v38 = 0;
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_54:
      v43 = *(_BYTE *)(a1 + 109);
      if ( v43 )
      {
        v44 = 0;
        v45 = 0;
      }
      else
      {
        v44 = *(int *)(a1 + 104);
        v45 = *(_DWORD *)(a1 + 104);
      }
      v46 = *(_QWORD **)(a1 + 48);
      v69 = 0;
      if ( v44 < v46[1] )
      {
        while ( 1 )
        {
          if ( v43
            || (v47 = *v46 + 104 * v44, (*(_BYTE *)(v47 + 25) & 0x10) == 0)
            || !a4 && *(_QWORD *)(v47 + 16) == v70 )
          {
            v48 = *(_DWORD **)(a1 + 72);
            v49 = &v48[*(_QWORD *)(a1 + 80)];
            if ( v48 == v49 )
              goto LABEL_71;
            while ( v45 != *v48 )
            {
              if ( v49 == ++v48 )
                goto LABEL_71;
            }
            if ( v49 == v48 )
            {
LABEL_71:
              v50 = sub_200240(a1, (_BYTE *)a2, a3, v45, (int)v82);
              v40 = v50;
              if ( v50 <= 0 )
                goto LABEL_49;
              if ( v50 == 4 )
                goto LABEL_108;
              v46 = *(_QWORD **)(a1 + 48);
            }
          }
          else if ( *(_BYTE *)a2 == 5 )
          {
            v57 = sub_1C36B0(
                    v47,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                    v74,
                    *(unsigned int *)(v47 + 88),
                    nullptr,
                    nullptr);
            v46 = *(_QWORD **)(a1 + 48);
            v69 |= v57 != 0;
          }
          v44 = ++v45;
          if ( (unsigned __int64)v45 >= v46[1] )
            break;
          v43 = *(_BYTE *)(a1 + 109);
        }
      }
      if ( (**(_BYTE **)(a1 + 8) & 1) != 0 && *(int *)(a1 + 104) > 0 )
      {
        v51 = 0;
        while ( 1 )
        {
          v52 = *v46 + 104 * v51;
          if ( *(_QWORD *)(v52 + 16) == v70
            && (*(_BYTE *)(v52 + 25) & 1) == 0
            && (!(unsigned int)sub_1C2AD0((int *)v52, (int *)&v80) || *(_BYTE *)a2 == 5 && (unsigned __int8)sub_1C3F00()) )
          {
            v53 = *(_QWORD *)(a1 + 80);
            if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v53 + 1) )
            {
              *(_QWORD *)(a1 + 72) = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v53 + 1, 4);
              v53 = *(_QWORD *)(a1 + 80);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v53) = v51;
            ++*(_QWORD *)(a1 + 80);
            v40 = sub_200240(a1, (_BYTE *)a2, a3, v51, (int)v82);
            if ( v40 <= 0 )
              goto LABEL_49;
          }
          if ( *(_DWORD *)(a1 + 104) <= (int)++v51 )
            break;
          v46 = *(_QWORD **)(a1 + 48);
        }
      }
      v54 = sub_1FCAD0(a1, &v78, (unsigned __int8 *)a2, v70, (__int64)a3, v69 | a4);
      v55 = v78;
      v40 = v54;
      if ( v78 == -1 )
      {
LABEL_49:
        v77 = v40;
        cleanup_argloc();
        return v77;
      }
      v71 = v54;
      v56 = sub_2089E0(a2, v78, (unsigned int)v82, (int)a1 + 56, a4, 0, (__int64)a3);
      if ( v56 == 3 || v71 == -36 )
      {
LABEL_106:
        v40 = -36;
        goto LABEL_49;
      }
      if ( v56 == 4 )
      {
LABEL_108:
        v40 = 1;
        goto LABEL_49;
      }
      if ( v56 == 1 )
      {
        v65 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v55;
        if ( (unsigned int)(*(_DWORD *)v65 - 3) <= 1 )
        {
          if ( !under_debugger )
            sub_383060(50331);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v65 + 25) & 4) != 0 )
          goto LABEL_121;
      }
      else
      {
        if ( v56 != 2 || *(_BYTE *)a2 != 5 )
          goto LABEL_95;
        v67 = *(_QWORD *)(a1 + 8);
        v73 = *(_QWORD *)(v67 + 432) + 104 * v55;
        if ( !(unsigned __int8)sub_228C90(v67, v73) || *(_DWORD *)v73 != 1 )
        {
          if ( !under_debugger )
            sub_383060(52446);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v73 + 24) & 2) == 0 )
        {
          v59 = *(_DWORD *)(v73 + 88);
          v60 = (_DWORD *)v73;
          v72 = *(_QWORD *)(v73 + 8);
          v61 = sub_1C35C0(v60, v59);
          v62 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
          v63 = *(_QWORD *)(a1 + 8);
          v64 = v62 + *(int *)(a2 + 4);
          if ( v62 > v72 )
            v62 = v72;
          if ( v64 >= v61 )
            v61 = v64;
          LODWORD(v79) = v61 - v62;
          if ( (unsigned int)sub_2327F0(v63, &v79, v62, a3) - 1 <= 1 )
            goto LABEL_106;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
        {
LABEL_121:
          sub_2089E0(a2, v55, (unsigned int)v82, a1 + 56, a4, 1, (__int64)a3);
LABEL_95:
          cleanup_argloc();
          return 0;
        }
      }
      v40 = -10;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v39 = sub_200240(a1, (_BYTE *)a2, a3, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v38), (int)v82);
      v40 = v39;
      if ( v39 <= 0 )
        goto LABEL_49;
      if ( v39 == 4 )
      {
        v41 = *(_BYTE *)a2;
        if ( *(_BYTE *)a2 == 5 || v41 == 15 )
        {
          v68 = *(_QWORD **)(a1 + 8);
          if ( !(unsigned __int8)sub_32F330(a2, &v79) )
            goto LABEL_40;
          if ( v79 >= v68[16]
            || (unsigned __int8)sub_317040(
                                  v68 + 106,
                                  *(_QWORD *)(*(_QWORD *)(v68[187] + 24LL) + 16LL) & (v68[180] + v79)) )
          {
LABEL_48:
            v40 = 0;
            goto LABEL_49;
          }
          v42 = sub_317040(v68 + 29, *(_QWORD *)(*(_QWORD *)(v68[187] + 24LL) + 16LL) & (v68[180] + v79));
        }
        else
        {
          if ( v41 != 1 )
            goto LABEL_48;
          v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                  *(unsigned int *)(a2 + 8));
        }
        if ( v42 == 1 )
          goto LABEL_48;
      }
LABEL_40:
      v38 = ++v37;
      if ( (unsigned __int64)v37 >= *(_QWORD *)(a1 + 80) )
        goto LABEL_54;
    }
  }
  v23 = v22;
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
  v4 = sub_2089E0(a2, v22, (unsigned int)v82, (int)a1 + 56, a4, 0, 0);
  if ( v4 == 1 )
  {
    v25 = sub_2089E0(a2, v23, (unsigned int)v82, (int)a1 + 56, a4, 1, 0);
    if ( v25 != 1 )
    {
      v76 = v25;
      v26 = v24 + 104 * v23;
      *(_DWORD *)(v26 + 24) |= 0x400u;
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_DWORD *)(v26 + 88);
      v80 = 0;
      v81 = 0;
      sub_1EFA10(*(_DWORD **)(v27 + 1504), (__int64 *)(v27 + 496), v26, v28, &v80, 0);
      cleanup_argloc();
      sub_1F08B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v24 + 104 * v23 + 16), 26, v29, v30, v31);
      return v76;
    }
    if ( !under_debugger )
      sub_383060(52874);
LABEL_131:
    BUG();
  }
  return v4;
}
