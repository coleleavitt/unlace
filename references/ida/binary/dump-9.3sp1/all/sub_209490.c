__int64 __fastcall sub_209490(__int64 a1, unsigned __int8 *a2, _BYTE *a3, char a4, int a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v12; // rdx
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // rdx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD **v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // r12d
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // eax
  __int128 v37; // rdi
  char v38; // al
  __int64 v39; // rdi
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  signed int v43; // esi
  char v44; // al
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // rdx
  char v48; // dl
  char v49; // al
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 *v53; // r13
  int v54; // r12d
  unsigned __int8 v55; // al
  unsigned __int64 v56; // rsi
  int v57; // edi
  __int64 v58; // rdx
  unsigned __int64 v59; // r8
  __int64 v60; // rdi
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  char v65; // r9
  char v66; // r9
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rdi
  char v70; // al
  unsigned __int64 *v71; // rdi
  __int64 v72; // rcx
  _QWORD *v73; // rbp
  __int64 v74; // r8
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // [rsp+0h] [rbp-E8h]
  int v81; // [rsp+8h] [rbp-E0h]
  signed int v82; // [rsp+8h] [rbp-E0h]
  int v83; // [rsp+10h] [rbp-D8h]
  _QWORD *v84; // [rsp+10h] [rbp-D8h]
  int v85; // [rsp+18h] [rbp-D0h]
  __int64 v86; // [rsp+18h] [rbp-D0h]
  char v87; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v88; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v90; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+38h] [rbp-B0h]
  _QWORD v92[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+70h] [rbp-78h] BYREF
  __int128 v94; // [rsp+78h] [rbp-70h] BYREF
  __int128 v95; // [rsp+88h] [rbp-60h]
  unsigned __int64 v96; // [rsp+98h] [rbp-50h]
  char v97; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v98; // [rsp+A8h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 200) != a4 )
    return 0;
  v7 = *a2;
  if ( (_BYTE)v7 == 9 )
  {
    v43 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 16LL);
    if ( v43 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL)
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * v43 + 88) != *((_DWORD *)a2 + 1) )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_207560(a1, v43) )
      goto LABEL_66;
    v7 = *a2;
  }
  if ( (unsigned __int8)v7 > 0xFu )
    return 0;
  v12 = 32802;
  if ( !_bittest64(&v12, v7) )
    return 0;
  v13 = *(unsigned __int8 ***)(a1 + 80);
  v14 = &v13[*(_QWORD *)(a1 + 88)];
  if ( v13 != v14 )
  {
    while ( *v13 != a2 )
    {
      if ( v14 == ++v13 )
        goto LABEL_8;
    }
    if ( v13 != v14 )
    {
      sub_127FE0(*(_QWORD *)(a1 + 16), a1 + 104, (__int64)a2, 0, a5, a6, v80, v81, v83, v85, v88);
      return 0;
    }
  }
LABEL_8:
  v84 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 104)) || *(_QWORD *)(a1 + 128) )
  {
    v36 = sub_207610((__int64)a2, *(int ***)(a1 + 32));
    *(_QWORD *)&v37 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v37 + 1) = &v93;
    v93 = 0;
    v95 = 0;
    v94 = 0u;
    sub_123EA0(v37, (__int64)a2, 0, v36 << 19);
    v38 = sub_64820(&v93, (_QWORD *)(a1 + 104));
    v39 = *((_QWORD *)&v94 + 1);
    if ( v38 )
    {
      v44 = sub_317F40(a1 + 120, (char *)&v94 + 8);
      v39 = *((_QWORD *)&v94 + 1);
      if ( v44 )
      {
        if ( *((_QWORD *)&v94 + 1) )
        {
          *(_QWORD *)&v95 = 0;
          qfree(*((__int64 *)&v94 + 1));
        }
        goto LABEL_58;
      }
    }
    if ( v39 )
    {
      *(_QWORD *)&v95 = 0;
      qfree(v39);
    }
    qfree(v93);
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_QWORD *)(a1 + 8);
  v92[0] = &off_4DED70;
  v92[2] = v16;
  v18 = *(_QWORD *)(a1 + 24);
  v92[1] = v17;
  v92[3] = v18;
  v92[4] = *(_QWORD *)(a1 + 32);
  v19 = *(_QWORD ***)(v17 + 800);
  if ( !v19 || (v20 = *v19) == nullptr )
  {
LABEL_46:
    v24 = *(_QWORD *)(a1 + 72);
    v25 = *(_QWORD *)(v17 + 432) + 104LL * *(int *)(v24 + 44);
    if ( (*(_BYTE *)(v25 + 27) & 2) != 0 )
      goto LABEL_18;
    goto LABEL_47;
  }
  v21 = 24;
  v22 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v22 )
  {
LABEL_61:
    v45 = *(_QWORD *)(v17 + 432);
    v82 = *(_DWORD *)(v21 + 24);
    v46 = 104LL * v82;
    if ( (*(_BYTE *)(v45 + v46 + 27) & 2) != 0
      || *a2 == 15
      && (v48 = sub_1C3110(*((_QWORD *)a2 + 1), 0, 0), v17 = *(_QWORD *)(a1 + 8), v45 = *(_QWORD *)(v17 + 432), !v48) )
    {
      v24 = *(_QWORD *)(a1 + 72);
      v47 = *(int *)(v24 + 44);
      if ( v82 != (_DWORD)v47 && *(_DWORD *)(v45 + v46 + 88) == *((_DWORD *)a2 + 1) )
      {
        if ( (unsigned __int8)sub_207560(a1, v82) )
          goto LABEL_66;
        v17 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)(a1 + 72);
        v45 = *(_QWORD *)(v17 + 432);
        v47 = *(int *)(v24 + 44);
      }
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 72);
      v47 = *(int *)(v24 + 44);
    }
    v25 = v45 + 104 * v47;
    if ( (*(_BYTE *)(v25 + 27) & 2) == 0 )
      goto LABEL_23;
LABEL_19:
    v26 = *(_QWORD *)(a1 + 16);
    v93 = 0;
    v94 = 0u;
    v95 = 0;
    sub_127FE0(v26, (__int64)&v93, (__int64)a2, 0, v24, v15, v80, v82, (int)v84, v85, v88);
    if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 144), &v93) )
    {
      v27 = *((_QWORD *)&v94 + 1);
      if ( !*((_QWORD *)&v94 + 1) )
      {
LABEL_22:
        qfree(v93);
        v17 = *(_QWORD *)(a1 + 8);
LABEL_23:
        if ( v82 == -1 )
        {
          v24 = *(_QWORD *)(a1 + 72);
          goto LABEL_47;
        }
        v28 = sub_1FBEA0(*(_QWORD *)(v17 + 1496), (__int64)a2, *(_QWORD *)(a1 + 32));
        v29 = sub_2010F0(*(_QWORD *)(a1 + 8), (__int64)a2, (int *)v25, v28, nullptr);
        if ( v29 )
        {
          if ( v29 != 1 )
            return 0;
LABEL_26:
          if ( *a2 == 15 )
          {
            v41 = (unsigned int)sub_2090B0((_QWORD *)a1, (unsigned __int64)a2, (__int64)v92, a4);
            v50 = 9;
            if ( _bittest64(&v50, v41) )
              goto LABEL_74;
            if ( (_DWORD)v41 == 4 )
            {
LABEL_50:
              ++*(_DWORD *)(a1 + 196);
              return 1;
            }
            if ( (_DWORD)v41 != 1 )
              return 0;
          }
          v30 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v30 + 2) & 4) != 0 )
          {
            v31 = *(_DWORD *)(*(_QWORD *)(v30 + 1496) + 604LL) & 0x10;
            if ( ((unsigned __int8)sub_1EEA60((unsigned __int8 *)v30) || !(unsigned __int8)sub_1F0D70((int *)v25, v84))
              && !v31 )
            {
              if ( !under_debugger )
                sub_383060(50358);
              goto LABEL_177;
            }
            if ( *a2 == 15 )
              sub_204E20(a1, v25);
            goto LABEL_32;
          }
          v88 = -1;
          v52 = *(_QWORD *)(a1 + 72);
          v53 = (__int64 *)a2;
          v89 = 0;
          v54 = *(_DWORD *)(v52 + 40);
          v93 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v94 = 0;
          v55 = *a2;
          if ( *a2 == 15 )
          {
            v86 = v52;
            if ( !(unsigned __int8)sub_1C3110(*((_QWORD *)a2 + 1), 0, 0) )
              goto LABEL_114;
            v53 = &v93;
            sub_126420(
              (__int64)&v93,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL),
              **(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL),
              *(unsigned __int16 *)(**(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL) + 18LL));
            v55 = v93;
            v52 = v86;
          }
          if ( v55 == 1 )
          {
            if ( *(_BYTE *)(v52 + 32) != 1 )
              goto LABEL_114;
            v56 = *((int *)v53 + 2);
          }
          else
          {
            if ( v55 != 5 )
            {
              if ( !under_debugger )
                sub_383060(51866);
              goto LABEL_177;
            }
            if ( *(_BYTE *)(v52 + 32) == 1 )
              goto LABEL_114;
            v56 = *(_QWORD *)(v53[1] + 8);
          }
          v57 = *((_DWORD *)v53 + 1);
          v58 = *(_DWORD *)(v52 + 40) + 1;
          if ( v57 != -1 && *(_DWORD *)(v52 + 40) != -1 )
          {
            v59 = *(_QWORD *)(v52 + 24);
            if ( v56 + v57 + 1 - 1 >= v59 && v58 + v59 - 1 >= v56 )
            {
              HIDWORD(v89) = *((_DWORD *)v53 + 1);
              v60 = (__int64)&v93;
              LOBYTE(v89) = v55;
              v88 = v56;
              sub_11CDA0((__int64)&v93);
              v62 = *(_QWORD *)(a1 + 72);
              v63 = *(unsigned __int8 *)(v62 + 32);
              if ( (_BYTE)v63 == 1 )
              {
                v64 = *(int *)(v62 + 24);
              }
              else
              {
                if ( (_BYTE)v63 != 5 )
                  goto LABEL_161;
                v64 = *(_QWORD *)(v62 + 24);
              }
              if ( (_BYTE)v89 == (_BYTE)v63 )
              {
                v63 = *(int *)(v62 + 40);
                v61 = v88;
                if ( *(_DWORD *)(v62 + 40) )
                {
                  if ( v88 >= v64 )
                  {
                    v61 = v88 + SHIDWORD(v89) - 1;
                    if ( v63 + v64 - 1 >= v61 )
                    {
LABEL_32:
                      if ( v82 != -1 )
                        return 0;
LABEL_33:
                      v32 = sub_2089E0(
                              (unsigned __int64)a2,
                              *(int *)(*(_QWORD *)(a1 + 72) + 44LL),
                              (__int64)v92,
                              *(__m128i **)(*(_QWORD *)(a1 + 8) + 800LL),
                              a4,
                              1u,
                              nullptr);
                      if ( !v32 )
                      {
                        ++*(_DWORD *)(a1 + 196);
                        goto LABEL_35;
                      }
                      if ( (**(_DWORD **)(a1 + 8) & 0x40000) == 0 )
                      {
                        if ( v32 != 4 )
                          return 0;
                        goto LABEL_50;
                      }
                      if ( !under_debugger )
                        sub_383060(50359);
LABEL_177:
                      BUG();
                    }
                  }
                }
              }
              v65 = *(_BYTE *)(a1 + 201);
              v90 = -1;
              v91 = 0;
              v66 = 2 * v65;
              if ( (a2[1] & 2) != 0 || *a2 == 15 )
              {
                v87 = v66;
                v70 = sub_1219B0((char *)a2, (__int64)&v90, v63, v61, v62);
                v66 = v87;
                if ( v70
                  && (v60 = (unsigned __int8)v91, (_BYTE)v91 == (_BYTE)v89)
                  && (v61 = v90, HIDWORD(v91))
                  && v88 >= v90 )
                {
                  v56 = SHIDWORD(v91) + v90 - 1;
                  v62 = *(_QWORD *)(a1 + 72);
                  if ( v56 >= v88 + SHIDWORD(v89) - 1 )
                  {
                    v63 = *(unsigned __int8 *)(v62 + 32);
                    if ( (_BYTE)v63 == 1 )
                    {
                      v76 = *(int *)(v62 + 24);
                    }
                    else
                    {
                      if ( (_BYTE)v63 != 5 )
                        goto LABEL_161;
                      v76 = *(_QWORD *)(v62 + 24);
                    }
                    if ( (_BYTE)v91 == (_BYTE)v63 && v76 >= v90 && v56 >= v76 + *(int *)(v62 + 40) - 1 )
                      v66 = v87 | 1;
                  }
                }
                else
                {
                  v62 = *(_QWORD *)(a1 + 72);
                }
              }
              if ( (unsigned int)sub_202CA0(
                                   *(_QWORD *)(a1 + 184),
                                   *(_QWORD **)(a1 + 48),
                                   *(__int64 **)(a1 + 56),
                                   *(__m128i **)(a1 + 64),
                                   v62,
                                   (__int64)&v88,
                                   v66) )
              {
                v71 = *(unsigned __int64 **)(a1 + 64);
                v93 = 0;
                *(_QWORD *)&v95 = v88;
                v97 = 1;
                BYTE8(v95) = v89;
                v94 = 0;
                v96 = 0xFFFFFFFF00000001LL;
                v73 = sub_104DF0(v71, (__int64)&v93);
                if ( v93 )
                {
                  *(_QWORD *)&v94 = 0;
                  qfree(v93);
                }
                if ( !v73 )
                {
                  if ( !under_debugger )
                    sub_383060(51867);
                  goto LABEL_177;
                }
                v75 = *((unsigned int *)v73 + 10);
                if ( (int)v75 <= v54 )
                {
                  if ( !under_debugger )
                    sub_383060(52936);
                  goto LABEL_177;
                }
                if ( *((_BYTE *)v73 + 32) == 5 )
                  sub_232C00(*(_QWORD *)(a1 + 8), v73[3], v75, v72, v74);
              }
              else if ( !sub_206A80(a1, a2, (__int64)v92, 1u) )
              {
                v69 = *(_QWORD *)(a1 + 8);
                if ( (*(_BYTE *)(*(_QWORD *)(v69 + 1496) + 604LL) & 0x10) == 0 )
                  return 4294967276LL;
                if ( (_BYTE)v89 != 5 )
                {
LABEL_107:
                  if ( (*(_WORD *)(v69 + 2) & 0x802) != 0 )
                    return 0;
                  sub_1F08B0(v69, -1, 20, v61, v67, v68);
                  *(_DWORD *)(v25 + 24) |= 0x400u;
                  if ( *((_DWORD *)a2 + 1) > v54
                    && !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 8))
                    && !(unsigned __int8)sub_1F0D70((int *)v25, v84)
                    && *a2 != 15 )
                  {
                    if ( !under_debugger )
                      sub_383060(50360);
                    goto LABEL_177;
                  }
                  goto LABEL_32;
                }
                v60 = *(_QWORD *)(a1 + 16);
                v56 = v88;
                if ( !(unsigned __int8)sub_1F0C10(v60, v88, SHIDWORD(v89)) )
                {
                  v69 = *(_QWORD *)(a1 + 8);
                  goto LABEL_107;
                }
                v77 = *(_QWORD *)(a1 + 72);
                v63 = *(unsigned __int8 *)(v77 + 32);
                if ( (_BYTE)v63 == 1 )
                {
                  v78 = *(int *)(v77 + 24);
                }
                else
                {
                  if ( (_BYTE)v63 != 5 )
                    goto LABEL_161;
                  v78 = *(_QWORD *)(v77 + 24);
                }
                LOBYTE(v94) = *(_BYTE *)(v77 + 32);
                v56 = (unsigned __int64)&v93;
                v93 = v78;
                DWORD1(v94) = *(_DWORD *)(v77 + 40);
                sub_32F920(&v88, &v93);
                v60 = *(_QWORD *)(a1 + 8);
                v63 = HIDWORD(v89);
                if ( (_BYTE)v89 == 5 )
                {
                  if ( !(unsigned __int8)sub_232C00(v60, v88, HIDWORD(v89), v61, v79) )
                    return 0;
                  return 4294967260LL;
                }
LABEL_161:
                sub_201340(v60, v56, v63, v61);
              }
              return 4294967260LL;
            }
          }
LABEL_114:
          sub_11CDA0((__int64)&v93);
          if ( sub_206A80(a1, a2, (__int64)v92, 1u) )
            return 3;
          if ( v82 != -1 )
          {
            sub_204E20(a1, v25);
            return 0;
          }
          if ( (*(_BYTE *)(v25 + 27) & 2) != 0 )
            sub_204E20(a1, v25);
          goto LABEL_33;
        }
LABEL_66:
        ++*(_DWORD *)(a1 + 196);
        return 0;
      }
LABEL_21:
      *(_QWORD *)&v95 = 0;
      qfree(v27);
      goto LABEL_22;
    }
    v49 = sub_318470(a1 + 160, (char *)&v94 + 8);
    v27 = *((_QWORD *)&v94 + 1);
    if ( v49 )
    {
      if ( !*((_QWORD *)&v94 + 1) )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( *((_QWORD *)&v94 + 1) )
    {
      *(_QWORD *)&v95 = 0;
      qfree(*((__int64 *)&v94 + 1));
    }
LABEL_58:
    qfree(v93);
    return 0;
  }
  if ( (*(_BYTE *)(*v20 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_46;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v22 + 24);
    v21 = v22 + 24;
    if ( (unsigned __int64)a2 >= v23 )
      break;
    v22 = *(_QWORD *)(v22 + 8);
LABEL_16:
    if ( (*(_BYTE *)v22 & 2) != 0 )
      goto LABEL_17;
  }
  if ( v23 < (unsigned __int64)a2 )
  {
    v22 = *(_QWORD *)(v22 + 16);
    goto LABEL_16;
  }
  if ( (_QWORD *)v22 != v20 )
    goto LABEL_61;
LABEL_17:
  v24 = *(_QWORD *)(a1 + 72);
  v25 = *(_QWORD *)(v17 + 432) + 104LL * *(int *)(v24 + 44);
  if ( (*(_BYTE *)(v25 + 27) & 2) != 0 )
  {
LABEL_18:
    v82 = -1;
    goto LABEL_19;
  }
LABEL_47:
  v40 = sub_2089E0((unsigned __int64)a2, *(int *)(v24 + 44), (__int64)v92, *(__m128i **)(v17 + 800), a4, 0, a3);
  v41 = v40;
  if ( v40 == 1 )
  {
    v82 = -1;
    goto LABEL_26;
  }
  v42 = 9;
  if ( _bittest64(&v42, v41) )
  {
LABEL_74:
    ++*(_DWORD *)(a1 + 196);
    result = 4294967260LL;
    if ( (_DWORD)v41 == 3 )
      return result;
    if ( a3 && !*(_BYTE *)(v25 + 80) )
      sub_1EF8F0(v25, (__int64)v84, a3, 0);
LABEL_35:
    v33 = *(_QWORD **)(a1 + 184);
    v34 = v33[12];
    v35 = v33[11];
    if ( v33[13] < (unsigned __int64)(v34 + 1) )
    {
      v51 = qvector_reserve((__int64)(v33 + 11), v35, v34 + 1, 8);
      v33[11] = v51;
      v35 = v51;
      v34 = v33[12];
    }
    *(_QWORD *)(v35 + 8 * v34) = a2;
    ++v33[12];
    return 0;
  }
  if ( (_DWORD)v41 == 4 )
    goto LABEL_50;
  return 0;
}
