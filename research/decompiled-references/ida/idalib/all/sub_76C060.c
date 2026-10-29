__int64 __fastcall sub_76C060(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  char v11; // r14
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r12d
  char v19; // r14
  char *v20; // rax
  __int16 v21; // dx
  char v22; // r13
  char *v23; // rax
  __int64 v24; // rdx
  char *v25; // rsi
  unsigned int *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  const char *v31; // rcx
  __int64 v32; // r8
  char *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char v41; // al
  unsigned int v42; // eax
  unsigned __int8 v43; // al
  __int64 v44; // r8
  char *v45; // rax
  __int64 v46; // rdx
  char *v47; // rsi
  char *v48; // [rsp+0h] [rbp-4A8h]
  __int64 v49; // [rsp+0h] [rbp-4A8h]
  char v50; // [rsp+17h] [rbp-491h]
  char *v51; // [rsp+18h] [rbp-490h]
  unsigned int v52; // [rsp+28h] [rbp-480h] BYREF
  unsigned int v53; // [rsp+2Ch] [rbp-47Ch] BYREF
  int v54; // [rsp+30h] [rbp-478h] BYREF
  unsigned int v55; // [rsp+34h] [rbp-474h] BYREF
  unsigned int v56; // [rsp+38h] [rbp-470h] BYREF
  unsigned int v57; // [rsp+3Ch] [rbp-46Ch] BYREF
  char *v58; // [rsp+40h] [rbp-468h] BYREF
  int v59; // [rsp+48h] [rbp-460h]
  char v60; // [rsp+50h] [rbp-458h] BYREF
  char *v61; // [rsp+250h] [rbp-258h] BYREF
  int v62; // [rsp+258h] [rbp-250h]
  char v63; // [rsp+260h] [rbp-248h] BYREF
  unsigned __int64 v64; // [rsp+468h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v52 = 0;
  v58 = &v60;
  v59 = 0x400000;
  qword_2CD44D0 = &v58;
  v5 = (__int64)&qword_2CD44C0[*qword_2CD44C0 == 95];
  v6 = v5 + 1;
  qword_2CD44C0 = (char *)(v5 + 1);
  if ( *(_BYTE *)(v5 + 1) != 84 )
    goto LABEL_12;
  v7 = (char *)(v5 + 2);
  qword_2CD44C0 = (char *)(v5 + 2);
  a2 = *(unsigned __int8 *)(v5 + 2);
  if ( (_BYTE)a2 == 83 )
  {
    v50 = 0;
    while ( 1 )
    {
      v10 = (__int64)(v7 + 2);
      qword_2CD44C0 = v7 + 2;
      v11 = v7[1];
      if ( v11 > 103 )
      {
        if ( v11 != 114 )
          goto LABEL_85;
      }
      else if ( v11 <= 101 )
      {
        goto LABEL_85;
      }
      if ( v7[2] == 113 )
      {
        v50 = 1;
        v10 = (__int64)(v7 + 3);
      }
      v12 = (char *)(v10 + 1);
      qword_2CD44C0 = (char *)(v10 + 1);
      v6 = (unsigned int)*(unsigned __int8 *)v10 - 48;
      if ( (unsigned __int8)(*(_BYTE *)v10 - 48) > 9u )
LABEL_85:
        sub_76E6C0(a1, a2, v10, v6);
      v53 = 0;
      if ( v11 != 102 )
      {
        v55 = 0;
        if ( *(_BYTE *)(v10 + 1) != 95 )
        {
          while ( 1 )
          {
            a1 = nullptr;
            v56 = sub_767F90(nullptr, a2, v10, v6, a5);
            v13 = qword_2CD44C0;
            if ( *qword_2CD44C0 != 95 )
            {
              sub_76FA20(&v57, " with ", 6);
              sub_770B70(&v56, &v57);
              while ( 1 )
              {
                a2 = (__int64)&v57;
                a1 = &v56;
                v57 = sub_76AD00((__int64)&v56, &v57, v15, v16, v17);
                sub_770B70(&v56, &v57);
                v13 = qword_2CD44C0;
                if ( *qword_2CD44C0 == 95 )
                  break;
                sub_76FA20(&v57, " and ", 5);
                sub_770B70(&v56, &v57);
              }
            }
            v12 = v13 + 1;
            qword_2CD44C0 = v12;
            if ( (dword_2CD44CC & 0x400) != 0 )
            {
              v10 = (unsigned __int16)v55;
              if ( *v12 == 95 )
                goto LABEL_27;
            }
            else
            {
              a2 = (__int64)&v56;
              a1 = &v55;
              sub_770B70(&v55, &v56);
              v12 = qword_2CD44C0;
              v10 = (unsigned __int16)v55;
              if ( *qword_2CD44C0 == 95 )
              {
LABEL_27:
                v6 = HIWORD(v55);
                goto LABEL_28;
              }
            }
            if ( (_WORD)v10 )
              sub_770C10(&v55);
          }
        }
        v6 = 0;
        LOWORD(v10) = 0;
LABEL_28:
        LOWORD(v53) = v10;
        v14 = v12 + 1;
        qword_2CD44C0 = v14;
        HIWORD(v53) = v6;
        if ( (dword_2CD44CC & 8) == 0 )
        {
          if ( (dword_2CD44CC & 0xA0) != 0 )
            goto LABEL_143;
          sub_76FA20(&v57, "generic", 7);
          sub_770B70(&v52, &v57);
          if ( v11 == 114 )
          {
            sub_76FA20(&v57, " not re-abstracted", 18);
            sub_770B70(&v52, &v57);
          }
LABEL_32:
          sub_76FA20(&v57, " specialization ", 16);
          sub_770B70(&v52, &v57);
          if ( v50 )
          {
            sub_76FA20(&v57, "serialized", 10);
            if ( (_WORD)v53 )
            {
              sub_770C10(&v57);
              sub_770B70(&v57, &v53);
            }
            v53 = v57;
          }
          v57 = sub_773010(&v53);
          sub_770B70(&v52, &v57);
          sub_76FCD0(&v57, 543584032, 4);
          a2 = (__int64)&v57;
          a1 = &v52;
          sub_770B70(&v52, &v57);
          goto LABEL_34;
        }
        goto LABEL_35;
      }
      v54 = 0;
      if ( *(_BYTE *)(v10 + 1) != 95 )
        break;
      v21 = 0;
      v6 = 0;
LABEL_64:
      HIWORD(v53) = v21;
      v14 = v12 + 1;
      qword_2CD44C0 = v14;
      LOWORD(v53) = v6;
      if ( (dword_2CD44CC & 8) == 0 )
      {
        if ( (dword_2CD44CC & 0xA0) == 0 )
        {
          sub_76FA20(&v57, "function signature", 18);
          sub_770B70(&v52, &v57);
          goto LABEL_32;
        }
LABEL_143:
        sub_76FA20(&v57, "specialized ", 12);
        a2 = (__int64)&v57;
        a1 = &v52;
        sub_770B70(&v52, &v57);
LABEL_34:
        v14 = qword_2CD44C0;
      }
LABEL_35:
      v10 = (__int64)(v14 + 1);
      qword_2CD44C0 = v14 + 1;
      if ( *v14 != 95 )
        goto LABEL_85;
      v10 = (__int64)(v14 + 2);
      qword_2CD44C0 = v14 + 2;
      if ( v14[1] != 84 )
        goto LABEL_85;
      v5 = qword_2CD44D0;
      v6 = 0;
      *(_WORD *)(qword_2CD44D0 + 8LL) = 0;
      if ( v14[2] != 84 || v14[3] != 83 )
        goto LABEL_12;
      v7 = v14 + 3;
    }
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v55 = 0;
        v56 = 0;
        qword_2CD44C0 = v12 + 1;
        v10 = (unsigned __int8)*v12;
        if ( (_BYTE)v10 == 107 )
        {
          a2 = (__int64)"Stack";
          a1 = &v57;
          sub_76FA20(&v57, "Stack", 5);
          v55 = v57;
LABEL_51:
          v20 = qword_2CD44C0;
          v10 = (__int64)++qword_2CD44C0;
          if ( *v20 != 95 )
            goto LABEL_85;
          sub_76FA20(&v57, " Promoted from Box", 18);
          sub_770B70(&v55, &v57);
          goto LABEL_53;
        }
        if ( (char)v10 <= 107 )
          break;
        if ( (_BYTE)v10 != 110 )
        {
          if ( (_BYTE)v10 != 111 )
          {
            if ( (_BYTE)v10 != 115 )
              goto LABEL_85;
LABEL_99:
            sub_76FA20(&v57, "Exploded", 8);
            a2 = (__int64)&v57;
            a1 = &v55;
            sub_770B70(&v55, &v57);
            v38 = qword_2CD44C0++;
            v10 = (unsigned __int8)*v38;
            goto LABEL_100;
          }
LABEL_110:
          if ( (_WORD)v55 )
          {
            sub_76FA20(&v57, " and ", 5);
            sub_770B70(&v55, &v57);
          }
          sub_76FA20(&v57, "Guaranteed To Owned", 19);
          a2 = (__int64)&v57;
          a1 = &v55;
          sub_770B70(&v55, &v57);
          v40 = qword_2CD44C0++;
          v10 = (unsigned __int8)*v40;
LABEL_107:
          if ( (_BYTE)v10 == 115 )
          {
            if ( (_WORD)v55 )
            {
              sub_76FA20(&v57, " and ", 5);
              sub_770B70(&v55, &v57);
            }
            goto LABEL_99;
          }
LABEL_100:
          if ( (_BYTE)v10 != 95 || !(_WORD)v55 )
            goto LABEL_85;
          goto LABEL_53;
        }
        v10 = (__int64)(v12 + 2);
        qword_2CD44C0 = v12 + 2;
        if ( v12[1] != 95 )
          goto LABEL_85;
        v12 += 2;
        ++v18;
        if ( *(_BYTE *)v10 == 95 )
        {
LABEL_63:
          v21 = HIWORD(v54);
          v6 = (unsigned __int16)v54;
          goto LABEL_64;
        }
      }
      if ( (_BYTE)v10 != 99 )
      {
        if ( (_BYTE)v10 != 105 )
        {
          switch ( (_BYTE)v10 )
          {
            case 'd':
              a2 = 1684104516;
              a1 = &v57;
              sub_76FCD0(&v57, 1684104516, 4);
              v55 = v57;
              v45 = qword_2CD44C0++;
              v10 = (unsigned __int8)*v45;
              if ( (_BYTE)v10 == 103 )
              {
                if ( (_WORD)v55 )
                {
                  sub_76FA20(&v57, " and ", 5);
                  sub_770B70(&v55, &v57);
                }
                goto LABEL_105;
              }
              break;
            case 'g':
LABEL_105:
              sub_76FA20(&v57, "Owned To Guaranteed", 19);
              a2 = (__int64)&v57;
              a1 = &v55;
              sub_770B70(&v55, &v57);
              v39 = qword_2CD44C0++;
              v10 = (unsigned __int8)*v39;
              break;
            case 'o':
              goto LABEL_110;
            default:
              goto LABEL_100;
          }
          goto LABEL_107;
        }
        a2 = (__int64)"Value";
        a1 = &v57;
        sub_76FA20(&v57, "Value", 5);
        v55 = v57;
        goto LABEL_51;
      }
      v10 = (__int64)(v12 + 2);
      qword_2CD44C0 = v12 + 2;
      v22 = v12[1];
      if ( v22 == 108 )
      {
        sub_76FA20(&v57, "[Closure ", 9);
        v55 = v57;
        sub_76FA20(&v57, "Propagated", 10);
        sub_770B70(&v55, &v57);
        goto LABEL_78;
      }
      if ( v22 != 112 )
        goto LABEL_85;
      a2 = (__int64)"[Constant ";
      a1 = &v57;
      sub_76FA20(&v57, "[Constant ", 10);
      v55 = v57;
      v23 = qword_2CD44C0++;
      v10 = (unsigned __int8)*v23;
      if ( (_BYTE)v10 == 105 )
      {
        v46 = 7;
        v47 = (char *)"Integer";
      }
      else
      {
        if ( (char)v10 > 105 )
        {
          if ( (_BYTE)v10 != 115 )
            goto LABEL_85;
          v10 = (__int64)(v23 + 2);
          qword_2CD44C0 = v23 + 2;
          if ( v23[1] != 101 )
            goto LABEL_85;
          v10 = (__int64)(v23 + 3);
          qword_2CD44C0 = v23 + 3;
          v6 = (unsigned __int8)v23[2];
          v22 = v6 - 48;
          if ( (unsigned __int8)(v6 - 48) > 1u )
            goto LABEL_85;
          v10 = (__int64)(v23 + 4);
          qword_2CD44C0 = v23 + 4;
          if ( v23[3] != 118 )
            goto LABEL_85;
          v24 = 6;
          v25 = (char *)"String";
          goto LABEL_75;
        }
        if ( (_BYTE)v10 != 102 )
        {
          if ( (_BYTE)v10 != 103 )
            goto LABEL_85;
          v24 = 6;
          v25 = "Global";
LABEL_75:
          sub_76FA20(&v57, v25, v24);
          v56 = v57;
          sub_76FA20(&v57, "Propagated", 10);
          sub_770B70(&v55, &v57);
          goto LABEL_76;
        }
        v10 = (__int64)(v23 + 2);
        qword_2CD44C0 = v23 + 2;
        v22 = v23[1];
        if ( v22 != 108 )
        {
          if ( v22 != 114 )
            goto LABEL_85;
          v24 = 8;
          v25 = "Function";
          goto LABEL_75;
        }
        v46 = 5;
        v47 = "Float";
      }
      v22 = 2;
      sub_76FA20(&v57, v47, v46);
      v56 = v57;
      sub_76FA20(&v57, "Propagated", 10);
      sub_770B70(&v55, &v57);
LABEL_76:
      if ( (_WORD)v55 )
        sub_76FD20(&v55, 32);
LABEL_78:
      sub_770B70(&v55, &v56);
      if ( (dword_2CD44CC & 0x400000) != 0 )
        sub_76FCD0(&v57, &stru_203A20, 3);
      else
        sub_76F8C0(&v57, 58);
      v26 = &v57;
      a1 = &v55;
      sub_770B70(&v55, &v57);
      switch ( v22 )
      {
        case 1:
          v28 = 4;
          v29 = 657863029;
LABEL_84:
          sub_76FCD0(&v57, v29, v28);
          sub_770B70(&v55, &v57);
          v57 = sub_767A40(nullptr, &v57, v30, v31, v32);
          sub_770B70(&v55, &v57);
          a2 = 39;
          a1 = &v55;
          sub_76FD20(&v55, 39);
          if ( *qword_2CD44C0 != 95 )
            goto LABEL_85;
          goto LABEL_94;
        case 2:
          v10 = (__int64)qword_2CD44C0;
          a2 = 0;
          while ( 1 )
          {
            v41 = qword_2CD44C0[(unsigned int)a2];
            if ( v41 == 95 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( !v41 )
              goto LABEL_85;
          }
          if ( !(_DWORD)a2 )
            goto LABEL_85;
          sub_76EF20(&v55);
          if ( *qword_2CD44C0 == 95 )
            goto LABEL_94;
          goto LABEL_93;
        case 0:
          v28 = 3;
          v29 = 2570357;
          goto LABEL_84;
      }
      v33 = qword_2CD44C0;
      v48 = qword_2CD44C0;
      if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u )
        goto LABEL_87;
      v42 = sub_76E990(&v55, &v57, qword_2CD44C0, v6, v27);
      v33 = v48;
      if ( v42 <= 4
        || (v6 = (__int64)qword_2CD44C0,
            v26 = (unsigned int *)(qword_2CD44B8 - (_QWORD)qword_2CD44C0),
            (int)qword_2CD44B8 - (int)qword_2CD44C0 < v42)
        || *(_WORD *)qword_2CD44C0 != 21599
        || qword_2CD44C0[2] != 70
        || (v51 = v48,
            v57 = 0,
            v61 = &v63,
            v49 = qword_2CD44D0,
            v62 = 0x400000,
            qword_2CD44D0 = &v61,
            sub_76E7B0(&qword_2CD44C0[v42]),
            v26 = &v57,
            qword_2CD44C0 += 2,
            v43 = sub_76E4E0(sub_76A6E0, &v57),
            v44 = v49,
            LOBYTE(v49) = v43,
            qword_2CD44D0 = v44,
            sub_76E6E0(v43),
            v33 = v51,
            !(_BYTE)v49) )
      {
        qword_2CD44C0 = v33;
LABEL_87:
        v57 = sub_767A40(nullptr, v26, (unsigned __int64)v33, (const char *)v6, v27);
      }
      a2 = (__int64)&v57;
      sub_770B70(&v55, &v57);
      if ( *qword_2CD44C0 != 95 )
      {
        if ( v22 == 108 || v22 == 114 )
        {
          sub_770C10(&v55);
          sub_76FA20(&v57, "Argument Types", 14);
          sub_770B70(&v55, &v57);
          if ( (dword_2CD44CC & 0x400000) != 0 )
            sub_76FCD0(&v57, &stru_203A20, 3);
          else
            sub_76F8C0(&v57, 58);
          sub_770B70(&v55, &v57);
          a2 = 91;
          sub_76FD20(&v55, 91);
        }
LABEL_93:
        while ( 1 )
        {
          v37 = sub_767F90(nullptr, a2, v34, v35, v36);
          a2 = (__int64)&v57;
          v57 = v37;
          sub_770B70(&v55, &v57);
          if ( *qword_2CD44C0 == 95 )
            break;
          sub_770C10(&v55);
        }
      }
LABEL_94:
      sub_76FD20(&v55, 93);
      ++qword_2CD44C0;
LABEL_53:
      if ( v19 )
        sub_770C10(&v54);
      sub_76FCD0(&v57, 1533506113, 4);
      sub_770B70(&v54, &v57);
      if ( v18 <= 9 )
        sub_76FD20(&v54, (unsigned __int8)(v18 + 48));
      ++v18;
      v19 = 1;
      sub_770730(&v54, 15709);
      a2 = (__int64)&v55;
      a1 = (unsigned int *)&v54;
      sub_770B70(&v54, &v55);
      v12 = qword_2CD44C0;
      if ( *qword_2CD44C0 == 95 )
        goto LABEL_63;
    }
  }
  if ( (_BYTE)a2 == 86 )
  {
    v8 = 4;
  }
  else if ( (char)a2 <= 86 )
  {
    if ( (_BYTE)a2 == 68 )
    {
      v8 = 2;
    }
    else
    {
      v8 = 0;
      if ( (_BYTE)a2 != 79 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( (_BYTE)a2 != 100 )
    {
      v8 = 1;
      if ( (_BYTE)a2 == 111 )
        goto LABEL_7;
LABEL_11:
      qword_2CD44C0 = (char *)(v5 + 1);
      goto LABEL_12;
    }
    v8 = 3;
  }
LABEL_7:
  qword_2CD44C0 = (char *)(v5 + 3);
  v5 = (unsigned int)dword_2CD44CC;
  BYTE1(v5) = BYTE1(dword_2CD44CC) & 4;
  if ( (dword_2CD44CC & 0x400) == 0 )
  {
    sub_76FB60(&v57, &(&off_2B39260)[2 * v8]);
    a2 = (__int64)&v57;
    sub_770B70(&v52, &v57);
  }
LABEL_12:
  v57 = sub_76AE50(nullptr, (unsigned int *)a2, v5, v6, a5);
  sub_770B70(&v52, &v57);
  return v52;
}
