unsigned __int64 __fastcall sub_1FE20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r14
  char *v4; // rdx
  char v5; // cl
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int16 v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // rdx
  char v13; // cl
  char v14; // cl
  unsigned __int64 v15; // r13
  int v16; // edx
  __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // rbx
  __int16 v21; // si
  unsigned __int64 v22; // r14
  __int16 v23; // ax
  __int64 v24; // rsi
  char v25; // r15
  unsigned __int64 v26; // rbx
  int v27; // edx
  int v28; // ecx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  char *v31; // r14
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // [rsp+7h] [rbp-41h]
  unsigned __int8 v44; // [rsp+8h] [rbp-40h]
  char *v45; // [rsp+8h] [rbp-40h]
  char v46; // [rsp+8h] [rbp-40h]
  unsigned __int8 v47; // [rsp+8h] [rbp-40h]
  char v48; // [rsp+8h] [rbp-40h]
  char v49; // [rsp+8h] [rbp-40h]

  if ( a2 > 0x400 )
    return 0;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = (_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v4 = *(char **)(a1 + 24);
    v5 = *v4;
    if ( *v4 == 90 )
    {
      --v2;
      *(_QWORD *)(a1 + 24) = v4 + 1;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !v2 )
        return sub_1FBC0((_QWORD *)a1, a2 + 1);
      v43 = 1;
      v5 = *++v4;
    }
    else
    {
      v43 = 0;
    }
    switch ( v5 )
    {
      case 'F':
        v6 = v2 - 1;
        v7 = v4 + 1;
        v8 = 73;
LABEL_8:
        *(_QWORD *)(a1 + 24) = v7;
        v9 = a2 + 1;
        *(_QWORD *)(a1 + 32) = v6;
        v10 = sub_1F0C0(a1, a2 + 1);
        if ( !v10 )
          return 0;
        v11 = *(_QWORD *)(a1 + 32);
        if ( !v11 )
          goto LABEL_31;
        v12 = *(char **)(a1 + 24);
        v13 = *v12;
        if ( *v12 == 68 )
        {
          v14 = 0;
          v8 = 28;
          *(_QWORD *)(a1 + 24) = v12 + 1;
          *(_QWORD *)(a1 + 32) = v11 - 1;
LABEL_12:
          v44 = v14;
          v15 = sub_C400(*(_QWORD **)(a1 + 40), v8);
          sub_C080(v15, v10, *(_QWORD **)(a1 + 40));
          v18 = v44;
LABEL_13:
          if ( !(_BYTE)v18 )
            goto LABEL_14;
          v31 = sub_1C940((_QWORD *)a1, v9, v16, v18, v17);
          if ( v31 )
          {
            v32 = sub_C400(*(_QWORD **)(a1 + 40), 221);
            sub_C080(v32, (__int64)v31, *(_QWORD **)(a1 + 40));
            if ( v32 )
            {
              sub_C080(v15, v32, *(_QWORD **)(a1 + 40));
LABEL_14:
              if ( v43 )
              {
                v19 = sub_C400(*(_QWORD **)(a1 + 40), 207);
                sub_C080(v19, v15, *(_QWORD **)(a1 + 40));
                return v19;
              }
              return v15;
            }
          }
          return 0;
        }
        switch ( v13 )
        {
          case 'd':
            v14 = 0;
            v8 = 47;
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            goto LABEL_12;
          case 'e':
            v14 = 0;
            v8 = 100;
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            goto LABEL_12;
          case 'E':
            v14 = 0;
            v8 = 101;
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            goto LABEL_12;
          case 'C':
            v14 = 1;
            v8 = 0;
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            goto LABEL_12;
          case 'c':
            v14 = 1;
            v8 = 26;
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            goto LABEL_12;
          case 'a':
            *(_QWORD *)(a1 + 24) = v12 + 1;
            *(_QWORD *)(a1 + 32) = v11 - 1;
            if ( (unsigned __int8)sub_1AB00(v3, 79) )
            {
              v21 = 159;
            }
            else
            {
              v21 = 145;
              if ( !(unsigned __int8)sub_1AB00(v3, 111) )
              {
                v21 = 147;
                if ( !(unsigned __int8)sub_1AB00(v3, 112) )
                {
                  if ( !(unsigned __int8)sub_1AB00(v3, 117) )
                    return 0;
                  v21 = 240;
                }
              }
            }
            break;
          default:
LABEL_31:
            if ( !(unsigned __int8)sub_1AB00(v3, 108) )
            {
              if ( (unsigned __int8)sub_1AB00(v3, 103) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 95;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 71) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 97;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 115) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 204;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 109) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 131;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 119) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 246;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 87) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 48;
              }
              else if ( (unsigned __int8)sub_1AB00(v3, 114) )
              {
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 193;
              }
              else
              {
                if ( !(unsigned __int8)sub_1AB00(v3, 77) )
                {
                  v46 = sub_1AB00(v3, 85);
                  if ( v46 )
                  {
                    v39 = sub_1AF50(a1);
                    if ( !v39 )
                      return 0;
                    v40 = v46;
                    v8 = 67;
                  }
                  else
                  {
                    v41 = sub_1AB00(v3, 117);
                    if ( v41 )
                    {
                      v48 = v41;
                      v39 = sub_1AF50(a1);
                      if ( !v39 )
                        return 0;
                      v40 = v48;
                      v8 = 111;
                    }
                    else if ( v8 == 119 )
                    {
                      if ( !(unsigned __int8)sub_1AB00(v3, 65) )
                      {
                        if ( !(unsigned __int8)sub_1AB00(v3, 105) )
                          return 0;
                        goto LABEL_12;
                      }
                      v49 = v42;
                      v39 = sub_1AF50(a1);
                      if ( !v39 )
                        return 0;
                      v40 = v49;
                      v8 = 30;
                    }
                    else
                    {
                      v39 = sub_1B760(a1);
                      if ( !v39 )
                        return 0;
                      v40 = 1;
                    }
                  }
                  v47 = v40;
                  v15 = sub_C400(*(_QWORD **)(a1 + 40), v8);
                  sub_C080(v15, v10, *(_QWORD **)(a1 + 40));
                  sub_C080(v15, v39, *(_QWORD **)(a1 + 40));
                  v18 = v47;
                  goto LABEL_13;
                }
                v22 = sub_1B760(a1);
                if ( !v22 )
                  return 0;
                v21 = 142;
              }
LABEL_35:
              v15 = sub_C400(*(_QWORD **)(a1 + 40), v21);
              v23 = *(_WORD *)(v22 + 16);
              if ( v23 == 98 )
              {
                v33 = *(_QWORD *)v22;
                if ( *(_QWORD *)(v22 + 8) == 9 && *(_QWORD *)v33 == 0x7069726373627573LL && *(_BYTE *)(v33 + 8) == 116 )
                {
                  v22 = 0;
LABEL_56:
                  v34 = v10;
                  v25 = 1;
                  v26 = sub_C400(*(_QWORD **)(a1 + 40), 209);
                  sub_C080(v26, v34, *(_QWORD **)(a1 + 40));
                  goto LABEL_39;
                }
              }
              else if ( v23 == 165 && (unsigned __int64)sub_BFF0(v22) > 1 )
              {
                v35 = sub_BFF0(v22);
                v36 = nullptr;
                if ( v35 > 1 )
                  v36 = *((__int64 **)sub_C020((_BYTE *)v22) + 1);
                v37 = *v36;
                if ( v36[1] == 9 && *(_QWORD *)v37 == 0x7069726373627573LL && *(_BYTE *)(v37 + 8) == 116 )
                {
                  v38 = 0;
                  if ( sub_BFF0(v22) )
                    v38 = *(_QWORD *)sub_C020((_BYTE *)v22);
                  v22 = sub_C400(*(_QWORD **)(a1 + 40), 165);
                  sub_C080(v22, v38, *(_QWORD **)(a1 + 40));
                  goto LABEL_56;
                }
              }
              v24 = v10;
              v25 = 0;
              v26 = sub_C400(*(_QWORD **)(a1 + 40), 243);
              sub_C080(v26, v24, *(_QWORD **)(a1 + 40));
              sub_C080(v26, v22, *(_QWORD **)(a1 + 40));
LABEL_39:
              v45 = sub_1C940((_QWORD *)a1, v9, v27, v28, v29);
              if ( v45 )
              {
                v30 = sub_C400(*(_QWORD **)(a1 + 40), 221);
                sub_C080(v30, (__int64)v45, *(_QWORD **)(a1 + 40));
                if ( v30 )
                {
                  sub_C080(v26, v30, *(_QWORD **)(a1 + 40));
                  if ( v22 && v25 )
                    sub_C080(v26, v22, *(_QWORD **)(a1 + 40));
                  sub_C080(v15, v26, *(_QWORD **)(a1 + 40));
                  goto LABEL_14;
                }
              }
              return 0;
            }
            if ( (unsigned __int8)sub_1AB00(v3, 79) )
            {
              v21 = 158;
            }
            else
            {
              v21 = 144;
              if ( !(unsigned __int8)sub_1AB00(v3, 111) )
              {
                v21 = 146;
                if ( !(unsigned __int8)sub_1AB00(v3, 112) )
                {
                  if ( !(unsigned __int8)sub_1AB00(v3, 117) )
                    return 0;
                  v21 = 239;
                }
              }
            }
            break;
        }
        v22 = sub_1B760(a1);
        if ( !v22 )
          return 0;
        goto LABEL_35;
      case 'v':
        v6 = v2 - 1;
        v7 = v4 + 1;
        v8 = 243;
        goto LABEL_8;
      case 'I':
        v6 = v2 - 1;
        v7 = v4 + 1;
        v8 = 119;
        goto LABEL_8;
      case 'i':
        v6 = v2 - 1;
        v7 = v4 + 1;
        v8 = 209;
        goto LABEL_8;
    }
  }
  return sub_1FBC0((_QWORD *)a1, a2 + 1);
}

