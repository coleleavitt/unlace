__int64 __fastcall sub_200440(__int64 a1, unsigned __int64 a2, _BYTE *a3, unsigned __int8 a4)
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
  int v57; // esi
  _DWORD *v58; // rdi
  int v59; // eax
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 *v64; // rax
  __int64 v65; // rdi
  _QWORD *v66; // [rsp+0h] [rbp-220h]
  char v67; // [rsp+0h] [rbp-220h]
  __int64 v68; // [rsp+10h] [rbp-210h]
  int v69; // [rsp+10h] [rbp-210h]
  __int64 v70; // [rsp+10h] [rbp-210h]
  __int64 v71; // [rsp+10h] [rbp-210h]
  int v72; // [rsp+18h] [rbp-208h]
  unsigned int v74; // [rsp+28h] [rbp-1F8h]
  unsigned int v75; // [rsp+28h] [rbp-1F8h]
  int v76; // [rsp+34h] [rbp-1ECh] BYREF
  __int64 v77; // [rsp+38h] [rbp-1E8h] BYREF
  __int64 v78; // [rsp+40h] [rbp-1E0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-1D8h]
  _QWORD v80[6]; // [rsp+50h] [rbp-1D0h] BYREF
  __int128 v81; // [rsp+80h] [rbp-1A0h]
  __int64 v82; // [rsp+90h] [rbp-190h]
  __int64 v83; // [rsp+98h] [rbp-188h]
  __int64 v84; // [rsp+A0h] [rbp-180h]
  char v85; // [rsp+A8h] [rbp-178h] BYREF
  unsigned __int64 v86; // [rsp+1E8h] [rbp-38h] BYREF

  v86 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 108) != a4 )
    return 0;
  v6 = *(_BYTE *)a2;
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 == 5 || v6 == 15 )
  {
    if ( !(unsigned __int8)sub_32F330(a2, v80) )
      goto LABEL_9;
    if ( v80[0] >= *(__int64 *)(v7 + 128)
      || (unsigned __int8)sub_317040(
                            v7 + 848,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL)
                          & (*(_QWORD *)(v7 + 1440) + v80[0])) )
    {
      return 0;
    }
    v12 = sub_317040(
            v7 + 232,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v7 + 1440) + v80[0]))
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
  v80[1] = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 24);
  v80[0] = off_4DED70;
  v80[4] = v15;
  v18 = *(_QWORD **)(a1 + 96);
  v80[2] = v16;
  v80[3] = v17;
  v19 = *(int *)(v16 + 72);
  if ( v19 >= v18[1] )
    sub_1FB150();
  v20 = sub_1F1F50((__int64 *)(*v18 + 80 * v19), v17, a2, a4);
  v76 = v20;
  if ( v20 == -1 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v78 = 0;
    v79 = 0;
    v68 = v31;
    if ( !(unsigned __int8)sub_1C5030((char *)a2, (__int64)&v78) )
    {
      if ( !under_debugger )
        sub_383060(51191);
      goto LABEL_131;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 6LL) & 1) != 0 )
      v68 = sub_1F0B80(*(_QWORD *)(a1 + 8), v68, (int *)&v78);
    v32 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v32 + 40) == v68 )
      {
        v56 = *(_QWORD *)(a1 + 24);
        if ( v56 != v33 )
          v68 = *(_QWORD *)(v56 + 24);
      }
      if ( (*(_BYTE *)(v33 + 4) & 0x40) != 0 )
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
        {
          v82 = -1;
          v83 = 0;
          v64 = (unsigned __int64 *)&v85;
          v84 = 0;
          v81 = -1;
          do
          {
            *(_WORD *)v64 = 0;
            v64 += 5;
            *((_WORD *)v64 - 19) = 0;
            *((_WORD *)v64 - 18) = 0;
            *((_DWORD *)v64 - 2) = 0;
            *((_WORD *)v64 - 17) = 0;
            *((_OWORD *)v64 - 2) = 0;
            *(v64 - 2) = 0;
          }
          while ( &v86 != v64 );
          if ( (int)decode_insn() > 0 )
            v68 += (unsigned __int8)is_call_insn();
        }
        v32 = *(_QWORD *)(a1 + 8);
      }
      v68 += *(unsigned __int8 *)(a1 + 108);
    }
    v34 = 1;
    if ( *(_DWORD *)(a2 + 4) != -1 )
      v34 = *(_DWORD *)(a2 + 4);
    v72 = v34;
    *(_BYTE *)(a1 + 109) = sub_1F09D0(v32, (char *)a2, v68);
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
      v67 = 0;
      if ( v42 < v44[1] )
      {
        while ( 1 )
        {
          if ( v41
            || (v45 = *v44 + 104 * v42, (*(_BYTE *)(v45 + 25) & 0x10) == 0)
            || !a4 && *(_QWORD *)(v45 + 16) == v68 )
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
              v48 = sub_200240(a1, (_BYTE *)a2, a3, v43, (int)v80);
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
            v55 = sub_1C36B0(
                    v45,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                    v72,
                    *(unsigned int *)(v45 + 88),
                    nullptr,
                    nullptr);
            v44 = *(_QWORD **)(a1 + 48);
            v67 |= v55 != 0;
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
          if ( *(_QWORD *)(v50 + 16) == v68
            && (*(_BYTE *)(v50 + 25) & 1) == 0
            && (!(unsigned int)sub_1C2AD0((int *)v50, (int *)&v78) || *(_BYTE *)a2 == 5 && (unsigned __int8)sub_1C3F00()) )
          {
            v51 = *(_QWORD *)(a1 + 80);
            if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v51 + 1) )
            {
              *(_QWORD *)(a1 + 72) = qvector_reserve();
              v51 = *(_QWORD *)(a1 + 80);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v51) = v49;
            ++*(_QWORD *)(a1 + 80);
            v38 = sub_200240(a1, (_BYTE *)a2, a3, v49, (int)v80);
            if ( v38 <= 0 )
              goto LABEL_49;
          }
          if ( *(_DWORD *)(a1 + 104) <= (int)++v49 )
            break;
          v44 = *(_QWORD **)(a1 + 48);
        }
      }
      v52 = sub_1FCAD0(a1, &v76, (unsigned __int8 *)a2, v68, (__int64)a3, v67 | a4);
      v53 = v76;
      v38 = v52;
      if ( v76 == -1 )
      {
LABEL_49:
        v75 = v38;
        cleanup_argloc();
        return v75;
      }
      v69 = v52;
      v54 = sub_2089E0(a2, v76, (unsigned int)v80, (int)a1 + 56, a4, 0, (__int64)a3);
      if ( v54 == 3 || v69 == -36 )
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
        v63 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v53;
        if ( (unsigned int)(*(_DWORD *)v63 - 3) <= 1 )
        {
          if ( !under_debugger )
            sub_383060(50331);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v63 + 25) & 4) != 0 )
          goto LABEL_121;
      }
      else
      {
        if ( v54 != 2 || *(_BYTE *)a2 != 5 )
          goto LABEL_95;
        v65 = *(_QWORD *)(a1 + 8);
        v71 = *(_QWORD *)(v65 + 432) + 104 * v53;
        if ( !(unsigned __int8)sub_228C90(v65, v71) || *(_DWORD *)v71 != 1 )
        {
          if ( !under_debugger )
            sub_383060(52446);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v71 + 24) & 2) == 0 )
        {
          v57 = *(_DWORD *)(v71 + 88);
          v58 = (_DWORD *)v71;
          v70 = *(_QWORD *)(v71 + 8);
          v59 = sub_1C35C0(v58, v57);
          v60 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
          v61 = *(_QWORD *)(a1 + 8);
          v62 = v60 + *(int *)(a2 + 4);
          if ( v60 > v70 )
            v60 = v70;
          if ( v62 >= v59 )
            v59 = v62;
          LODWORD(v77) = v59 - v60;
          if ( (unsigned int)sub_2327F0(v61, &v77, v60, a3) - 1 <= 1 )
            goto LABEL_106;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
        {
LABEL_121:
          sub_2089E0(a2, v53, (unsigned int)v80, a1 + 56, a4, 1, (__int64)a3);
LABEL_95:
          cleanup_argloc();
          return 0;
        }
      }
      v38 = -10;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v37 = sub_200240(a1, (_BYTE *)a2, a3, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v36), (int)v80);
      v38 = v37;
      if ( v37 <= 0 )
        goto LABEL_49;
      if ( v37 == 4 )
      {
        v39 = *(_BYTE *)a2;
        if ( *(_BYTE *)a2 == 5 || v39 == 15 )
        {
          v66 = *(_QWORD **)(a1 + 8);
          if ( !(unsigned __int8)sub_32F330(a2, &v77) )
            goto LABEL_40;
          if ( v77 >= v66[16]
            || (unsigned __int8)sub_317040(
                                  v66 + 106,
                                  *(_QWORD *)(*(_QWORD *)(v66[187] + 24LL) + 16LL) & (v66[180] + v77)) )
          {
LABEL_48:
            v38 = 0;
            goto LABEL_49;
          }
          v40 = sub_317040(v66 + 29, *(_QWORD *)(*(_QWORD *)(v66[187] + 24LL) + 16LL) & (v66[180] + v77));
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
  v4 = sub_2089E0(a2, v20, (unsigned int)v80, (int)a1 + 56, a4, 0, 0);
  if ( v4 == 1 )
  {
    v23 = sub_2089E0(a2, v21, (unsigned int)v80, (int)a1 + 56, a4, 1, 0);
    if ( v23 != 1 )
    {
      v74 = v23;
      v24 = v22 + 104 * v21;
      *(_DWORD *)(v24 + 24) |= 0x400u;
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(_DWORD *)(v24 + 88);
      v78 = 0;
      v79 = 0;
      sub_1EFA10(*(_DWORD **)(v25 + 1504), (__int64 *)(v25 + 496), v24, v26, &v78, 0);
      cleanup_argloc();
      sub_1F08B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v22 + 104 * v21 + 16), 26, v27, v28, v29);
      return v74;
    }
    if ( !under_debugger )
      sub_383060(52874);
LABEL_131:
    BUG();
  }
  return v4;
}
