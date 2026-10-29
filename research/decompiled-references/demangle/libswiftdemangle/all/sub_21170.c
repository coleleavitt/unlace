unsigned __int64 __fastcall sub_21170(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  char *v4; // rdx
  char v6; // cl
  char v7; // cl
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int16 v10; // si
  unsigned __int64 v11; // r12
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  __int64 v18; // r8
  int v19; // esi
  unsigned __int64 v20; // rsi
  unsigned int v22; // r13d
  _QWORD *v23; // rdi
  char v24; // cl
  __int16 v25; // si
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned int v29; // esi
  int v30; // edx
  int v31; // ecx
  __int64 v32; // r8
  char *v33; // r14
  unsigned __int64 v34; // r13
  _QWORD *v35; // rdi
  unsigned int v36; // esi
  int v37; // edx
  int v38; // ecx
  __int64 v39; // r8
  char *v40; // r13
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rax
  unsigned int v43; // r13d
  unsigned __int64 v44; // rax
  char v45; // cl
  _QWORD *v46; // rdi
  unsigned int v47; // r13d
  int v48; // edx
  int v49; // ecx
  __int64 v50; // r8
  char *v51; // rbx
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r13
  unsigned int v55; // esi
  _QWORD *v56; // rdi
  _QWORD *v57; // rdi
  __int64 v58; // rax
  _BYTE *v59; // rdx
  __int64 v60; // rax
  _BYTE *v61; // rdx
  __int64 v62; // r8
  _QWORD *v63; // rdi
  unsigned __int64 v64; // rax
  _QWORD *v65; // rdi
  __int16 v66; // si
  int v67; // ecx
  __int64 v68; // r8
  _QWORD *v69; // rdi
  __int16 v70; // si
  unsigned int v71; // ebx
  int v72; // edx
  int v73; // ecx
  __int64 v74; // r8
  char *v75; // r13
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // r15
  __int64 v78; // rbx
  _QWORD *v79; // rdi
  __int16 v80; // si
  unsigned __int64 v81; // rax
  int v82; // edx
  int v83; // ecx
  __int64 v84; // r8
  unsigned __int64 v85; // rsi
  int v86; // edx
  int v87; // ecx
  __int64 v88; // r8
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // rsi
  __int64 v91; // [rsp+8h] [rbp-40h]

  if ( a2 == 1025 )
    return 0;
  v2 = a1[4];
  if ( !v2 )
    return 0;
  v4 = (char *)a1[3];
  v6 = *v4;
  if ( *v4 == 77 )
  {
    a1[3] = v4 + 1;
    v22 = a2 + 1;
    a1[4] = v2 - 1;
    v23 = (_QWORD *)a1[5];
    if ( v2 == 1 )
      goto LABEL_47;
    v24 = v4[1];
    switch ( v24 )
    {
      case 'P':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v29 = a2 + 1;
        v11 = sub_C400(v23, 94);
        break;
      case 'a':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v29 = a2 + 1;
        v11 = sub_C400(v23, 227);
        break;
      case 'L':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v29 = a2 + 1;
        v11 = sub_C400(v23, 233);
        break;
      case 'm':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v29 = a2 + 1;
        v11 = sub_C400(v23, 137);
        break;
      case 'n':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v36 = a2 + 1;
        v11 = sub_C400(v23, 148);
        goto LABEL_48;
      case 'f':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v36 = a2 + 1;
        v11 = sub_C400(v23, 72);
        goto LABEL_48;
      case 'p':
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v11 = sub_C400(v23, 175);
        goto LABEL_30;
      default:
LABEL_47:
        v36 = a2 + 1;
        v11 = sub_C400(v23, 226);
LABEL_48:
        v40 = sub_1C940(a1, v36, v37, v38, v39);
        if ( v40 )
        {
          v41 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v41, (__int64)v40, (_QWORD *)a1[5]);
          if ( v41 )
          {
            sub_C080(v11, v41, (_QWORD *)a1[5]);
            return v11;
          }
        }
        return 0;
    }
LABEL_42:
    v33 = sub_1C940(a1, v29, v30, v31, v32);
    if ( !v33 )
      return 0;
    v34 = sub_C400((_QWORD *)a1[5], 221);
    sub_C080(v34, (__int64)v33, (_QWORD *)a1[5]);
    if ( !v34 )
      return 0;
    goto LABEL_44;
  }
  if ( v2 != 1 && *(_WORD *)v4 == 16720 )
  {
    a1[3] = v4 + 2;
    v25 = 160;
    a1[4] = v2 - 2;
    if ( v2 != 2 && v4[2] == 111 )
    {
      v25 = 161;
      a1[3] = v4 + 3;
      a1[4] = v2 - 3;
    }
    v26 = sub_C400((_QWORD *)a1[5], v25);
    v27 = a1[3];
    v11 = v26;
    v28 = a1[4];
    if ( v28 <= 2 || *(_WORD *)v27 != 24415 || *(_BYTE *)(v27 + 2) != 84 )
      return v11;
    a1[3] = v27 + 3;
    a1[4] = v28 - 3;
    v20 = sub_21170(a1, (unsigned int)(a2 + 1));
    if ( !v20 )
      return 0;
LABEL_31:
    sub_C080(v11, v20, (_QWORD *)a1[5]);
    return v11;
  }
  switch ( v6 )
  {
    case 't':
      v35 = (_QWORD *)a1[5];
      a1[3] = v4 + 1;
      a1[4] = v2 - 1;
      v29 = a2 + 1;
      v11 = sub_C400(v35, 225);
      goto LABEL_42;
    case 'w':
      a1[3] = v4 + 1;
      a1[4] = v2 - 1;
      v42 = sub_1B970((__int64)a1);
      v43 = v42;
      if ( !BYTE4(v42) )
        return 0;
      v11 = sub_C400((_QWORD *)a1[5], 241);
      v44 = sub_C480((_QWORD *)a1[5], 99, v43);
      sub_C080(v11, v44, (_QWORD *)a1[5]);
LABEL_53:
      v36 = a2 + 1;
      goto LABEL_48;
    case 'W':
      a1[3] = v4 + 1;
      a1[4] = v2 - 1;
      if ( v2 == 1 )
      {
LABEL_14:
        v8 = a1 + 3;
        if ( (unsigned __int8)sub_1AB00(v8, 108) )
        {
          v9 = (_QWORD *)a1[5];
          v10 = 126;
LABEL_16:
          v11 = sub_C400(v9, v10);
          v15 = sub_1DF70((__int64)a1, a2 + 1, v12, v13, v14);
          if ( !v15 )
            return 0;
          sub_C080(v11, v15, (_QWORD *)a1[5]);
          v19 = a2 + 1;
          goto LABEL_18;
        }
        if ( (unsigned __int8)sub_1AB00(v8, 76) )
        {
          v9 = (_QWORD *)a1[5];
          v10 = 127;
          goto LABEL_16;
        }
        if ( (unsigned __int8)sub_1AB00(v8, 97) )
        {
          v79 = (_QWORD *)a1[5];
          v80 = 187;
          goto LABEL_92;
        }
        if ( (unsigned __int8)sub_1AB00(v8, 116) )
        {
          v11 = sub_C400((_QWORD *)a1[5], 6);
          v85 = sub_1FAF0((__int64)a1, a2 + 1, v82, v83, v84);
          if ( v85 )
          {
            sub_C080(v11, v85, (_QWORD *)a1[5]);
            v20 = sub_1B760((__int64)a1);
            if ( v20 )
              goto LABEL_31;
          }
          return 0;
        }
        if ( !(unsigned __int8)sub_1AB00(v8, 84) )
          return 0;
        v22 = a2 + 1;
        v11 = sub_C400((_QWORD *)a1[5], 9);
        v89 = sub_1FAF0((__int64)a1, a2 + 1, v86, v87, v88);
        if ( !v89 )
          return 0;
        sub_C080(v11, v89, (_QWORD *)a1[5]);
        v90 = sub_1B760((__int64)a1);
        if ( !v90 )
          return 0;
        sub_C080(v11, v90, (_QWORD *)a1[5]);
LABEL_30:
        v20 = sub_1F6A0((__int64)a1, v22);
        if ( v20 )
          goto LABEL_31;
        return 0;
      }
      v7 = v4[1];
      if ( v7 != 86 )
      {
        if ( v7 != 118 )
        {
          switch ( v7 )
          {
            case 'P':
              v69 = (_QWORD *)a1[5];
              v70 = 186;
              a1[3] = v4 + 2;
              a1[4] = v2 - 2;
              break;
            case 'G':
              v69 = (_QWORD *)a1[5];
              v70 = 85;
              a1[3] = v4 + 2;
              a1[4] = v2 - 2;
              break;
            case 'I':
              v79 = (_QWORD *)a1[5];
              v80 = 86;
              a1[3] = v4 + 2;
              a1[4] = v2 - 2;
LABEL_92:
              v81 = sub_C400(v79, v80);
              v19 = a2 + 1;
              v11 = v81;
LABEL_18:
              v20 = sub_1FAF0((__int64)a1, v19, v16, v17, v18);
              if ( v20 )
                goto LABEL_31;
              return 0;
            default:
              goto LABEL_14;
          }
          v71 = a2 + 2;
          v11 = sub_C400(v69, v70);
          v75 = sub_1C940(a1, v71, v72, v73, v74);
          if ( !v75 )
            return 0;
          v76 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v76, (__int64)v75, (_QWORD *)a1[5]);
          if ( !v76 )
            return 0;
          v77 = sub_1F6A0((__int64)a1, v71);
          if ( !v77 )
            return 0;
          v78 = sub_1F0C0((__int64)a1, v71);
          if ( !v78 )
            return 0;
          v34 = sub_C400((_QWORD *)a1[5], 171);
          sub_C080(v34, v76, (_QWORD *)a1[5]);
          sub_C080(v34, v77, (_QWORD *)a1[5]);
          sub_C080(v34, v78, (_QWORD *)a1[5]);
          if ( !v34 )
            return 0;
LABEL_44:
          sub_C080(v11, v34, (_QWORD *)a1[5]);
          return v11;
        }
        v57 = (_QWORD *)a1[5];
        a1[3] = v4 + 2;
        a1[4] = v2 - 2;
        v11 = sub_C400(v57, 70);
        v58 = a1[4];
        if ( !v58 )
          return 0;
        v59 = (_BYTE *)a1[3];
        if ( *v59 == 100 )
        {
          v60 = v58 - 1;
          v61 = v59 + 1;
          v62 = 0;
        }
        else
        {
          if ( *v59 != 105 )
            return 0;
          v60 = v58 - 1;
          v61 = v59 + 1;
          v62 = 1;
        }
        a1[3] = v61;
        v63 = (_QWORD *)a1[5];
        a1[4] = v60;
        v64 = sub_C480(v63, 49, v62);
        sub_C080(v11, v64, (_QWORD *)a1[5]);
        v55 = a2 + 1;
LABEL_66:
        v20 = sub_1FE20((__int64)a1, v55);
        if ( v20 )
          goto LABEL_31;
        return 0;
      }
      v56 = (_QWORD *)a1[5];
      a1[3] = v4 + 2;
      a1[4] = v2 - 2;
      v11 = sub_C400(v56, 242);
      goto LABEL_53;
    case 'T':
      a1[3] = v4 + 1;
      a1[4] = v2 - 1;
      if ( v2 == 1 )
        return 0;
      v45 = v4[1];
      switch ( v45 )
      {
        case 'R':
          v65 = (_QWORD *)a1[5];
          v66 = 190;
          a1[3] = v4 + 2;
          a1[4] = v2 - 2;
          break;
        case 'r':
          v65 = (_QWORD *)a1[5];
          v66 = 189;
          a1[3] = v4 + 2;
          a1[4] = v2 - 2;
          break;
        case 'W':
          v46 = (_QWORD *)a1[5];
          v47 = a2 + 2;
          a1[3] = v4 + 2;
          a1[4] = v2 - 2;
          v11 = sub_C400(v46, 185);
          v51 = sub_1C940(a1, a2 + 2, v48, v49, v50);
          if ( !v51 )
            return 0;
          v52 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v52, (__int64)v51, (_QWORD *)a1[5]);
          if ( !v52 )
            return 0;
          v53 = sub_1F6A0((__int64)a1, v47);
          if ( !v53 )
            return 0;
          v91 = sub_1F0C0((__int64)a1, v47);
          if ( !v91 )
            return 0;
          v54 = sub_C400((_QWORD *)a1[5], 171);
          sub_C080(v54, v52, (_QWORD *)a1[5]);
          sub_C080(v54, v53, (_QWORD *)a1[5]);
          sub_C080(v54, v91, (_QWORD *)a1[5]);
          if ( !v54 )
            return 0;
          sub_C080(v11, v54, (_QWORD *)a1[5]);
          v55 = a2 + 1;
          goto LABEL_66;
        default:
          return 0;
      }
      v11 = sub_C400(v65, v66);
      if ( (unsigned __int8)sub_21060((__int64)a1, v11, (_BYTE *)(unsigned int)(a2 + 1), v67, v68) )
        return v11;
      return 0;
  }
  return sub_1FE20((__int64)a1, a2 + 1);
}
