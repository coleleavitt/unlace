unsigned __int64 __fastcall sub_1E7C0(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rbp
  _QWORD *v6; // rdi
  unsigned __int64 i; // r12
  __int64 v8; // rax
  char *v9; // rdx
  char v10; // cl
  _BYTE *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // si
  __int64 v15; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  __int64 j; // r14
  __int64 v20; // rax
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int8 *v25; // rdx
  int v26; // ecx
  unsigned __int8 v27; // cl
  __int16 *v28; // r14
  unsigned __int64 v29; // rax
  _QWORD *v30; // r13
  _BYTE *v31; // rdx
  _BYTE *v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r13
  _QWORD *v35; // r14
  unsigned __int64 v36; // rax
  _QWORD *v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  _QWORD *v40; // rax
  char *v41; // rsi
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int8 *v44; // rdx
  char *v45; // r13
  unsigned __int64 v46; // r14
  _QWORD *v47; // rdi
  __int16 v48; // si
  unsigned __int64 v49; // rax
  __int64 v50; // r13
  __int16 v51; // ax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // r14
  _BYTE *v56; // rsi
  char *v57; // r13
  __int64 v58; // rax
  _QWORD *v59; // r10
  unsigned int v60; // [rsp+8h] [rbp-70h]
  unsigned __int64 v61; // [rsp+8h] [rbp-70h]
  __int64 v62; // [rsp+8h] [rbp-70h]
  __int64 v63; // [rsp+10h] [rbp-68h]
  _QWORD *v64; // [rsp+18h] [rbp-60h]
  __int64 v65; // [rsp+28h] [rbp-50h] BYREF
  __int64 v66[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = -1;
  v6 = (_QWORD *)a1[5];
  v66[1] = __readfsqword(0x28u);
  for ( i = sub_C400(v6, a3 == 0 ? 40 : 43); ; sub_C080(i, v17, (_QWORD *)a1[5]) )
  {
    v8 = a1[4];
    if ( !v8 )
      return 0;
    v9 = (char *)a1[3];
    v10 = *v9;
    if ( (*v9 & 0xDF) == 0x52 )
      break;
    v11 = v9 + 1;
    v12 = v8 - 1;
    if ( v10 == 122 )
    {
      a1[3] = v11;
      v4 = 0;
      a1[4] = v12;
    }
    else
    {
      v4 = 1;
      if ( v10 != 95 )
      {
        LOBYTE(v13) = v10 - 48;
        a1[3] = v11;
        a1[4] = v12;
        if ( (unsigned __int8)v13 > 9u )
          return 0;
        v13 = (char)v13;
        if ( !v12 )
          return 0;
        while ( 1 )
        {
          v14 = *v11 - 48;
          if ( v14 > 9u )
            break;
          --v12;
          a1[3] = ++v11;
          v13 = (char)v14 + 10 * v13;
          a1[4] = v12;
          if ( !v12 )
            return 0;
        }
        v15 = a1[4];
        if ( !v15 || *v11 != 95 )
          return 0;
        v12 = v15 - 1;
        ++v11;
        v4 = v13 + 2;
      }
      a1[3] = v11;
      a1[4] = v12;
    }
    v17 = sub_C480((_QWORD *)a1[5], 34, v4);
  }
  if ( v4 == -1 )
  {
    v29 = sub_C480((_QWORD *)a1[5], 34, 1);
    sub_C080(i, v29, (_QWORD *)a1[5]);
    v8 = a1[4];
    if ( !v8 )
      return 0;
    v9 = (char *)a1[3];
    v10 = *v9;
  }
  if ( v10 == 114 )
    goto LABEL_44;
  if ( v10 != 82 )
    return 0;
  --v8;
  v64 = a1 + 3;
  a1[3] = v9 + 1;
  a1[4] = v8;
  if ( !v8 )
    goto LABEL_56;
LABEL_23:
  v9 = (char *)a1[3];
  v18 = *v9;
  if ( *v9 == 114 )
  {
LABEL_44:
    a1[3] = v9 + 1;
    a1[4] = v8 - 1;
    return i;
  }
  v60 = a2 + 2;
  if ( v18 != 119 )
  {
    if ( v18 != 87 )
      goto LABEL_57;
    a1[3] = v9 + 1;
    a1[4] = v8 - 1;
    for ( j = sub_1B000((__int64)a1); j; j = sub_1F950((int)a1) )
    {
      v20 = a1[4];
      if ( v20 )
      {
        v21 = (_BYTE *)a1[3];
        if ( *v21 == 95 )
        {
          a1[3] = v21 + 1;
          a1[4] = v20 - 1;
          goto LABEL_30;
        }
      }
      v42 = sub_C400((_QWORD *)a1[5], 221);
      sub_C080(v42, j, (_QWORD *)a1[5]);
    }
    return 0;
  }
  a1[3] = v9 + 1;
  a1[4] = v8 - 1;
  v63 = sub_1B000((__int64)a1);
  if ( v63 )
  {
    v43 = sub_C400((_QWORD *)a1[5], 221);
    sub_C080(v43, v63, (_QWORD *)a1[5]);
    for ( j = sub_1F950((int)a1); ; j = sub_1B000((__int64)a1) )
    {
      if ( !j )
        return 0;
LABEL_30:
      v22 = sub_C400((_QWORD *)a1[5], 221);
      sub_C080(v22, j, (_QWORD *)a1[5]);
      if ( !v22 )
        return 0;
      v24 = a1[4];
      if ( !v24 )
        return 0;
      v25 = (unsigned __int8 *)a1[3];
      v26 = *v25;
      if ( (_BYTE)v26 == 122 )
      {
        v44 = v25 + 1;
        a1[3] = v44;
        a1[4] = v24 - 1;
        v45 = sub_1C940(a1, v60, (_DWORD)v44, v26, v23);
        if ( !v45 )
          return 0;
        v46 = sub_C400((_QWORD *)a1[5], 221);
        sub_C080(v46, (__int64)v45, (_QWORD *)a1[5]);
        if ( !v46 )
          return 0;
        v47 = (_QWORD *)a1[5];
        v48 = 36;
LABEL_70:
        v34 = sub_C400(v47, v48);
        sub_C080(v34, v22, (_QWORD *)a1[5]);
        sub_C080(v34, v46, (_QWORD *)a1[5]);
        goto LABEL_54;
      }
      if ( (_BYTE)v26 != 108 )
      {
        if ( (_BYTE)v26 == 67 )
        {
          v57 = sub_1C940(a1, v60, (_DWORD)v25, v26, v23);
          if ( !v57 )
            return 0;
          v46 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v46, (__int64)v57, (_QWORD *)a1[5]);
          if ( !v46 )
            return 0;
        }
        else if ( (_BYTE)v26 == 83 )
        {
          a1[3] = v25 + 1;
          a1[4] = v24 - 1;
          v49 = sub_1BFA0(a1);
          v50 = v49;
          if ( !v49 )
            return 0;
          v51 = *(_WORD *)(v49 + 16);
          if ( v51 != 169 && v51 != 22 )
          {
            if ( v51 != 143 )
              return 0;
            v52 = sub_1B760((__int64)a1);
            if ( !v52 )
              return 0;
            v62 = v52;
            v53 = sub_C400((_QWORD *)a1[5], 169);
            v54 = (_QWORD *)a1[5];
            v55 = v53;
            v66[0] = v53;
            sub_C080(v53, v50, v54);
            sub_C080(v55, v62, (_QWORD *)a1[5]);
            v56 = (_BYTE *)a1[1];
            if ( v56 == (_BYTE *)a1[2] )
            {
              sub_18710((__int64)a1, v56, v66);
              v50 = v66[0];
            }
            else
            {
              *(_QWORD *)v56 = v55;
              v50 = v55;
              a1[1] += 8LL;
            }
            if ( !v50 )
              return 0;
          }
          v46 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v46, v50, (_QWORD *)a1[5]);
        }
        else
        {
          v46 = sub_1F6A0((int)a1);
          if ( !v46 )
            return 0;
        }
        v47 = (_QWORD *)a1[5];
        v48 = 33;
        goto LABEL_70;
      }
      v65 = -1;
      a1[3] = v25 + 1;
      a1[4] = v24 - 1;
      v66[0] = -1;
      if ( v24 == 1 )
        goto LABEL_40;
      v27 = v25[1];
      switch ( v27 )
      {
        case 'U':
          v28 = &aMrun[2];
          a1[3] = v25 + 2;
          a1[4] = v24 - 2;
          break;
        case 'R':
          v28 = &aMrun[1];
          a1[3] = v25 + 2;
          a1[4] = v24 - 2;
          break;
        case 'N':
          v28 = &aMrun[3];
          a1[3] = v25 + 2;
          a1[4] = v24 - 2;
          break;
        case 'T':
          v28 = (__int16 *)&unk_3800A;
          a1[3] = v25 + 2;
          a1[4] = v24 - 2;
          break;
        case 'E':
          v58 = v24 - 2;
          a1[3] = v25 + 2;
          a1[4] = v58;
          if ( !v58
            || !(unsigned __int8)sub_1AB40((__int64)a1, &v65)
            || !(unsigned __int8)sub_1AB00(v64, 95)
            || !a1[4]
            || !(unsigned __int8)sub_1AB40((__int64)a1, v66) )
          {
            return 0;
          }
          v28 = (__int16 *)"E";
          break;
        default:
LABEL_40:
          if ( (unsigned __int8)sub_1AB00(v64, 101) )
          {
            if ( !a1[4] || !(unsigned __int8)sub_1AB40((__int64)a1, &v65) )
              return 0;
            v28 = (__int16 *)"e";
          }
          else if ( (unsigned __int8)sub_1AB00(v64, 77) )
          {
            if ( !a1[4]
              || !(unsigned __int8)sub_1AB40((__int64)a1, &v65)
              || !(unsigned __int8)sub_1AB00(v59, 95)
              || !a1[4]
              || !(unsigned __int8)sub_1AB40((__int64)a1, v66) )
            {
              return 0;
            }
            v28 = aMrun;
          }
          else
          {
            if ( !(unsigned __int8)sub_1AB00(v64, 109) || !a1[4] || !(unsigned __int8)sub_1AB40((__int64)a1, &v65) )
              return 0;
            v28 = (__int16 *)"m";
          }
          break;
      }
      v30 = (_QWORD *)a1[5];
      v31 = (_BYTE *)v30[1];
      if ( !v31 || (v32 = v31 + 1, (unsigned __int64)(v31 + 1) > v30[2]) )
      {
        v39 = 2LL * v30[4];
        if ( v39 < 2 )
          v39 = 2;
        v30[4] = v39;
        v61 = v39 + 8;
        v40 = malloc(v39 + 8);
        v41 = (char *)v40 + v61;
        *v40 = v30[3];
        v31 = v40 + 1;
        v30[3] = v40;
        v32 = (char *)v40 + 9;
        v30[2] = v41;
      }
      v30[1] = v32;
      *v31 = *(_BYTE *)v28;
      v33 = sub_C510(v30, 98, (__int64)v31, 1);
      if ( !v33 )
        return 0;
      v34 = sub_C400((_QWORD *)a1[5], 38);
      sub_C080(v34, v22, (_QWORD *)a1[5]);
      sub_C080(v34, v33, (_QWORD *)a1[5]);
      if ( v65 != -1 )
      {
        v35 = (_QWORD *)a1[5];
        v36 = sub_C480(v35, 151, v65);
        sub_C080(v34, v36, v35);
        if ( v66[0] != -1 )
        {
          v37 = (_QWORD *)a1[5];
          v38 = sub_C480(v37, 151, v66[0]);
          sub_C080(v34, v38, v37);
        }
      }
LABEL_54:
      if ( !v34 )
        return 0;
      sub_C080(i, v34, (_QWORD *)a1[5]);
      v8 = a1[4];
      if ( v8 )
        goto LABEL_23;
LABEL_56:
      v60 = a2 + 2;
LABEL_57:
      ;
    }
  }
  return 0;
}
