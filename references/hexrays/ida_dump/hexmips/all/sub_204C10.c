__int64 __fastcall sub_204C10(__int64 a1, unsigned __int8 *a2, __int64 *a3, unsigned __int8 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v10; // rdx
  unsigned __int8 **v11; // rax
  unsigned __int8 **v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD **v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  int v28; // r12d
  int v29; // eax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // eax
  __int128 v34; // rdi
  char v35; // al
  __int64 v36; // rdi
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  signed int v40; // esi
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // r13
  __int64 v44; // rdx
  char v45; // dl
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 *v50; // r13
  int v51; // r12d
  unsigned __int8 v52; // al
  unsigned __int64 v53; // rsi
  int v54; // edi
  __int64 v55; // rdx
  unsigned __int64 v56; // r8
  __int64 v57; // rdi
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  char v62; // r9
  char v63; // r9
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // rdi
  char v67; // al
  unsigned __int64 *v68; // rdi
  __int64 v69; // rcx
  _QWORD *v70; // rbp
  __int64 v71; // r8
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  signed int v77; // [rsp+8h] [rbp-E0h]
  _QWORD *v78; // [rsp+10h] [rbp-D8h]
  __int64 v79; // [rsp+18h] [rbp-D0h]
  char v80; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v81; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v83; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v84; // [rsp+38h] [rbp-B0h]
  _QWORD v85[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+70h] [rbp-78h] BYREF
  __int128 v87; // [rsp+78h] [rbp-70h] BYREF
  __int128 v88; // [rsp+88h] [rbp-60h]
  unsigned __int64 v89; // [rsp+98h] [rbp-50h]
  char v90; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 200) != a4 )
    return 0;
  v5 = *a2;
  if ( (_BYTE)v5 == 9 )
  {
    v40 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 16LL);
    if ( v40 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL)
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * v40 + 88) != *((_DWORD *)a2 + 1) )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_202CE0(a1, v40) )
      goto LABEL_66;
    v5 = *a2;
  }
  if ( (unsigned __int8)v5 > 0xFu )
    return 0;
  v10 = 32802;
  if ( !_bittest64(&v10, v5) )
    return 0;
  v11 = *(unsigned __int8 ***)(a1 + 80);
  v12 = &v11[*(_QWORD *)(a1 + 88)];
  if ( v11 != v12 )
  {
    while ( *v11 != a2 )
    {
      if ( v12 == ++v11 )
        goto LABEL_8;
    }
    if ( v11 != v12 )
    {
      sub_123DE0(*(_QWORD *)(a1 + 16), (__int64 *)(a1 + 104), (__int64)a2, 0);
      return 0;
    }
  }
LABEL_8:
  v78 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( !(unsigned __int8)sub_60680((_QWORD *)(a1 + 104)) || *(_QWORD *)(a1 + 128) )
  {
    v33 = sub_202D90((__int64)a2, *(int ***)(a1 + 32));
    *(_QWORD *)&v34 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v34 + 1) = &v86;
    v86 = 0;
    v88 = 0;
    v87 = 0u;
    sub_11FCA0(v34, (__int64)a2, 0, v33 << 19);
    v35 = sub_60620(&v86, (_QWORD *)(a1 + 104));
    v36 = *((_QWORD *)&v87 + 1);
    if ( v35 )
    {
      v41 = sub_3131C0(a1 + 120, (char *)&v87 + 8);
      v36 = *((_QWORD *)&v87 + 1);
      if ( v41 )
      {
        if ( *((_QWORD *)&v87 + 1) )
        {
          *(_QWORD *)&v88 = 0;
          qfree(*((_QWORD *)&v87 + 1));
        }
        goto LABEL_58;
      }
    }
    if ( v36 )
    {
      *(_QWORD *)&v88 = 0;
      qfree(v36);
    }
    qfree(v86);
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 8);
  v85[0] = &off_4BF4B0;
  v85[2] = v13;
  v15 = *(_QWORD *)(a1 + 24);
  v85[1] = v14;
  v85[3] = v15;
  v85[4] = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD ***)(v14 + 800);
  if ( !v16 || (v17 = *v16) == nullptr )
  {
LABEL_46:
    v21 = *(_QWORD *)(a1 + 72);
    v22 = *(_QWORD *)(v14 + 432) + 104LL * *(int *)(v21 + 44);
    if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
      goto LABEL_18;
    goto LABEL_47;
  }
  v18 = 24;
  v19 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v19 )
  {
LABEL_61:
    v42 = *(_QWORD *)(v14 + 432);
    v77 = *(_DWORD *)(v18 + 24);
    v43 = 104LL * v77;
    if ( (*(_BYTE *)(v42 + v43 + 27) & 2) != 0
      || *a2 == 15
      && (v45 = sub_1BED50(*((_QWORD *)a2 + 1), 0, 0), v14 = *(_QWORD *)(a1 + 8), v42 = *(_QWORD *)(v14 + 432), !v45) )
    {
      v44 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
      if ( v77 != (_DWORD)v44 && *(_DWORD *)(v42 + v43 + 88) == *((_DWORD *)a2 + 1) )
      {
        if ( (unsigned __int8)sub_202CE0(a1, v77) )
          goto LABEL_66;
        v14 = *(_QWORD *)(a1 + 8);
        v42 = *(_QWORD *)(v14 + 432);
        v44 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
      }
    }
    else
    {
      v44 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
    }
    v22 = v42 + 104 * v44;
    if ( (*(_BYTE *)(v22 + 27) & 2) == 0 )
      goto LABEL_23;
LABEL_19:
    v23 = *(_QWORD *)(a1 + 16);
    v86 = 0;
    v87 = 0u;
    v88 = 0;
    sub_123DE0(v23, &v86, (__int64)a2, 0);
    if ( (unsigned __int8)sub_60580((_QWORD *)(a1 + 144), &v86) )
    {
      v24 = *((_QWORD *)&v87 + 1);
      if ( !*((_QWORD *)&v87 + 1) )
      {
LABEL_22:
        qfree(v86);
        v14 = *(_QWORD *)(a1 + 8);
LABEL_23:
        if ( v77 == -1 )
        {
          v21 = *(_QWORD *)(a1 + 72);
          goto LABEL_47;
        }
        v25 = sub_1F7620(*(_QWORD *)(v14 + 1496), (__int64)a2, *(_QWORD *)(a1 + 32));
        v26 = sub_1FC870(*(_QWORD *)(a1 + 8), (__int64)a2, (int *)v22, v25, nullptr);
        if ( v26 )
        {
          if ( v26 != 1 )
            return 0;
LABEL_26:
          if ( *a2 == 15 )
          {
            v38 = (unsigned int)sub_204830((_QWORD *)a1, (unsigned __int64)a2, (__int64)v85, a4);
            v47 = 9;
            if ( _bittest64(&v47, v38) )
              goto LABEL_74;
            if ( (_DWORD)v38 == 4 )
            {
LABEL_50:
              ++*(_DWORD *)(a1 + 196);
              return 1;
            }
            if ( (_DWORD)v38 != 1 )
              return 0;
          }
          v27 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v27 + 2) & 4) != 0 )
          {
            v28 = *(_DWORD *)(*(_QWORD *)(v27 + 1496) + 604LL) & 0x10;
            if ( ((unsigned __int8)sub_1EA1E0((unsigned __int8 *)v27) || !(unsigned __int8)sub_1EC4F0((int *)v22, v78))
              && !v28 )
            {
              if ( !under_debugger )
                sub_37E160(50358);
              goto LABEL_177;
            }
            if ( *a2 == 15 )
              sub_2005A0(a1, v22);
            goto LABEL_32;
          }
          v81 = -1;
          v49 = *(_QWORD *)(a1 + 72);
          v50 = (__int64 *)a2;
          v82 = 0;
          v51 = *(_DWORD *)(v49 + 40);
          v86 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v87 = 0;
          v52 = *a2;
          if ( *a2 == 15 )
          {
            v79 = v49;
            if ( !(unsigned __int8)sub_1BED50(*((_QWORD *)a2 + 1), 0, 0) )
              goto LABEL_114;
            v50 = &v86;
            sub_122220(
              (__int64)&v86,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL),
              **(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL),
              *(unsigned __int16 *)(**(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL) + 18LL));
            v52 = v86;
            v49 = v79;
          }
          if ( v52 == 1 )
          {
            if ( *(_BYTE *)(v49 + 32) != 1 )
              goto LABEL_114;
            v53 = *((int *)v50 + 2);
          }
          else
          {
            if ( v52 != 5 )
            {
              if ( !under_debugger )
                sub_37E160(51866);
              goto LABEL_177;
            }
            if ( *(_BYTE *)(v49 + 32) == 1 )
              goto LABEL_114;
            v53 = *(_QWORD *)(v50[1] + 8);
          }
          v54 = *((_DWORD *)v50 + 1);
          v55 = *(_DWORD *)(v49 + 40) + 1;
          if ( v54 != -1 && *(_DWORD *)(v49 + 40) != -1 )
          {
            v56 = *(_QWORD *)(v49 + 24);
            if ( v53 + v54 + 1 - 1 >= v56 && v55 + v56 - 1 >= v53 )
            {
              HIDWORD(v82) = *((_DWORD *)v50 + 1);
              v57 = (__int64)&v86;
              LOBYTE(v82) = v52;
              v81 = v53;
              sub_118BA0((__int64)&v86);
              v59 = *(_QWORD *)(a1 + 72);
              v60 = *(unsigned __int8 *)(v59 + 32);
              if ( (_BYTE)v60 == 1 )
              {
                v61 = *(int *)(v59 + 24);
              }
              else
              {
                if ( (_BYTE)v60 != 5 )
                  goto LABEL_161;
                v61 = *(_QWORD *)(v59 + 24);
              }
              if ( (_BYTE)v82 == (_BYTE)v60 )
              {
                v60 = *(int *)(v59 + 40);
                v58 = v81;
                if ( *(_DWORD *)(v59 + 40) )
                {
                  if ( v81 >= v61 )
                  {
                    v58 = v81 + SHIDWORD(v82) - 1;
                    if ( v60 + v61 - 1 >= v58 )
                    {
LABEL_32:
                      if ( v77 != -1 )
                        return 0;
LABEL_33:
                      v29 = sub_204160(
                              (unsigned __int64)a2,
                              *(int *)(*(_QWORD *)(a1 + 72) + 44LL),
                              (__int64)v85,
                              *(__m128i **)(*(_QWORD *)(a1 + 8) + 800LL),
                              a4,
                              1u,
                              nullptr);
                      if ( !v29 )
                      {
                        ++*(_DWORD *)(a1 + 196);
                        goto LABEL_35;
                      }
                      if ( (**(_DWORD **)(a1 + 8) & 0x40000) == 0 )
                      {
                        if ( v29 != 4 )
                          return 0;
                        goto LABEL_50;
                      }
                      if ( !under_debugger )
                        sub_37E160(50359);
LABEL_177:
                      BUG();
                    }
                  }
                }
              }
              v62 = *(_BYTE *)(a1 + 201);
              v83 = -1;
              v84 = 0;
              v63 = 2 * v62;
              if ( (a2[1] & 2) != 0 || *a2 == 15 )
              {
                v80 = v63;
                v67 = sub_11D7B0((char *)a2, (__int64)&v83, v60, v58, v59);
                v63 = v80;
                if ( v67
                  && (v57 = (unsigned __int8)v84, (_BYTE)v84 == (_BYTE)v82)
                  && (v58 = v83, HIDWORD(v84))
                  && v81 >= v83 )
                {
                  v53 = SHIDWORD(v84) + v83 - 1;
                  v59 = *(_QWORD *)(a1 + 72);
                  if ( v53 >= v81 + SHIDWORD(v82) - 1 )
                  {
                    v60 = *(unsigned __int8 *)(v59 + 32);
                    if ( (_BYTE)v60 == 1 )
                    {
                      v73 = *(int *)(v59 + 24);
                    }
                    else
                    {
                      if ( (_BYTE)v60 != 5 )
                        goto LABEL_161;
                      v73 = *(_QWORD *)(v59 + 24);
                    }
                    if ( (_BYTE)v84 == (_BYTE)v60 && v73 >= v83 && v53 >= v73 + *(int *)(v59 + 40) - 1 )
                      v63 = v80 | 1;
                  }
                }
                else
                {
                  v59 = *(_QWORD *)(a1 + 72);
                }
              }
              if ( (unsigned int)sub_1FE420(
                                   *(_QWORD *)(a1 + 184),
                                   *(_QWORD **)(a1 + 48),
                                   *(__int64 **)(a1 + 56),
                                   *(__m128i **)(a1 + 64),
                                   v59,
                                   (__int64)&v81,
                                   v63) )
              {
                v68 = *(unsigned __int64 **)(a1 + 64);
                v86 = 0;
                *(_QWORD *)&v88 = v81;
                v90 = 1;
                BYTE8(v88) = v82;
                v87 = 0;
                v89 = 0xFFFFFFFF00000001LL;
                v70 = sub_100BF0(v68, (__int64)&v86);
                if ( v86 )
                {
                  *(_QWORD *)&v87 = 0;
                  qfree(v86);
                }
                if ( !v70 )
                {
                  if ( !under_debugger )
                    sub_37E160(51867);
                  goto LABEL_177;
                }
                v72 = *((unsigned int *)v70 + 10);
                if ( (int)v72 <= v51 )
                {
                  if ( !under_debugger )
                    sub_37E160(52936);
                  goto LABEL_177;
                }
                if ( *((_BYTE *)v70 + 32) == 5 )
                  sub_22E380(*(_QWORD *)(a1 + 8), v70[3], v72, v69, v71);
              }
              else if ( !sub_202200(a1, a2, (__int64)v85, 1u) )
              {
                v66 = *(_QWORD *)(a1 + 8);
                if ( (*(_BYTE *)(*(_QWORD *)(v66 + 1496) + 604LL) & 0x10) == 0 )
                  return 4294967276LL;
                if ( (_BYTE)v82 != 5 )
                {
LABEL_107:
                  if ( (*(_WORD *)(v66 + 2) & 0x802) != 0 )
                    return 0;
                  sub_1EC030(v66, -1, 20, v58, v64, v65);
                  *(_DWORD *)(v22 + 24) |= 0x400u;
                  if ( *((_DWORD *)a2 + 1) > v51
                    && !(unsigned __int8)sub_1EA1E0(*(unsigned __int8 **)(a1 + 8))
                    && !(unsigned __int8)sub_1EC4F0((int *)v22, v78)
                    && *a2 != 15 )
                  {
                    if ( !under_debugger )
                      sub_37E160(50360);
                    goto LABEL_177;
                  }
                  goto LABEL_32;
                }
                v57 = *(_QWORD *)(a1 + 16);
                v53 = v81;
                if ( !(unsigned __int8)sub_1EC390(v57, v81, SHIDWORD(v82)) )
                {
                  v66 = *(_QWORD *)(a1 + 8);
                  goto LABEL_107;
                }
                v74 = *(_QWORD *)(a1 + 72);
                v60 = *(unsigned __int8 *)(v74 + 32);
                if ( (_BYTE)v60 == 1 )
                {
                  v75 = *(int *)(v74 + 24);
                }
                else
                {
                  if ( (_BYTE)v60 != 5 )
                    goto LABEL_161;
                  v75 = *(_QWORD *)(v74 + 24);
                }
                LOBYTE(v87) = *(_BYTE *)(v74 + 32);
                v53 = (unsigned __int64)&v86;
                v86 = v75;
                DWORD1(v87) = *(_DWORD *)(v74 + 40);
                sub_32A8D0(&v81, &v86);
                v57 = *(_QWORD *)(a1 + 8);
                v60 = HIDWORD(v82);
                if ( (_BYTE)v82 == 5 )
                {
                  if ( !(unsigned __int8)sub_22E380(v57, v81, HIDWORD(v82), v58, v76) )
                    return 0;
                  return 4294967260LL;
                }
LABEL_161:
                sub_1FCAC0(v57, v53, v60, v58);
              }
              return 4294967260LL;
            }
          }
LABEL_114:
          sub_118BA0((__int64)&v86);
          if ( sub_202200(a1, a2, (__int64)v85, 1u) )
            return 3;
          if ( v77 != -1 )
          {
            sub_2005A0(a1, v22);
            return 0;
          }
          if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
            sub_2005A0(a1, v22);
          goto LABEL_33;
        }
LABEL_66:
        ++*(_DWORD *)(a1 + 196);
        return 0;
      }
LABEL_21:
      *(_QWORD *)&v88 = 0;
      qfree(v24);
      goto LABEL_22;
    }
    v46 = sub_3136F0(a1 + 160, (char *)&v87 + 8);
    v24 = *((_QWORD *)&v87 + 1);
    if ( v46 )
    {
      if ( !*((_QWORD *)&v87 + 1) )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( *((_QWORD *)&v87 + 1) )
    {
      *(_QWORD *)&v88 = 0;
      qfree(*((_QWORD *)&v87 + 1));
    }
LABEL_58:
    qfree(v86);
    return 0;
  }
  if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_46;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v19 + 24);
    v18 = v19 + 24;
    if ( (unsigned __int64)a2 >= v20 )
      break;
    v19 = *(_QWORD *)(v19 + 8);
LABEL_16:
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_17;
  }
  if ( v20 < (unsigned __int64)a2 )
  {
    v19 = *(_QWORD *)(v19 + 16);
    goto LABEL_16;
  }
  if ( (_QWORD *)v19 != v17 )
    goto LABEL_61;
LABEL_17:
  v21 = *(_QWORD *)(a1 + 72);
  v22 = *(_QWORD *)(v14 + 432) + 104LL * *(int *)(v21 + 44);
  if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
  {
LABEL_18:
    v77 = -1;
    goto LABEL_19;
  }
LABEL_47:
  v37 = sub_204160((unsigned __int64)a2, *(int *)(v21 + 44), (__int64)v85, *(__m128i **)(v14 + 800), a4, 0, a3);
  v38 = v37;
  if ( v37 == 1 )
  {
    v77 = -1;
    goto LABEL_26;
  }
  v39 = 9;
  if ( _bittest64(&v39, v38) )
  {
LABEL_74:
    ++*(_DWORD *)(a1 + 196);
    result = 4294967260LL;
    if ( (_DWORD)v38 == 3 )
      return result;
    if ( a3 && !*(_BYTE *)(v22 + 80) )
      sub_1EB070(v22, (__int64)v78, a3, 0);
LABEL_35:
    v30 = *(_QWORD **)(a1 + 184);
    v31 = v30[12];
    v32 = v30[11];
    if ( v30[13] < (unsigned __int64)(v31 + 1) )
    {
      v48 = qvector_reserve(v30 + 11, v32, v31 + 1, 8);
      v30[11] = v48;
      v32 = v48;
      v31 = v30[12];
    }
    *(_QWORD *)(v32 + 8 * v31) = a2;
    ++v30[12];
    return 0;
  }
  if ( (_DWORD)v38 == 4 )
    goto LABEL_50;
  return 0;
}
