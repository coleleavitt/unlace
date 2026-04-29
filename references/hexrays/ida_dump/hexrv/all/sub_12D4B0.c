__int64 __fastcall sub_12D4B0(const __m128i *a1, __int64 a2, int *a3, __int64 a4, unsigned int *a5, int a6, char a7)
{
  int v7; // r11d
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rax
  char v22; // al
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned int *v30; // r8
  __int64 v31; // rdx
  __int64 v33; // [rsp+0h] [rbp-88h]
  char v35; // [rsp+Ch] [rbp-7Ch]
  _QWORD v36[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v7 = a6;
  v8 = a4;
  v9 = a2;
  v12 = (__int64)a3;
  v13 = a1[30].m128i_i64[0];
  v14 = *a5;
  v39 = __readfsqword(0x28u);
  v15 = *a3;
  v16 = *(_QWORD *)(v13 + 112);
  if ( (_DWORD)v14 == v15 )
  {
    switch ( v14 )
    {
      case 2LL:
        if ( !(unsigned __int8)sub_12A5C0(v16, a1, a2, v12 + 32, a4, (__int64)(a5 + 8), 0) )
          return 0;
        if ( (unsigned __int8)sub_12B810(v16, v36, a1, v8, (__int64)(a5 + 12), a2, (char *)(v12 + 48)) )
        {
          v23 = v36[0];
          v24 = *(_DWORD *)(v12 + 68);
          v25 = (int)a5[17];
          v26 = *(_BYTE *)(v13 + 145);
          if ( a6 != 1 )
          {
            if ( a6 != 2 )
            {
              v27 = 0;
              if ( v26 )
                return v27 == v23;
              goto LABEL_32;
            }
            goto LABEL_79;
          }
          v27 = 0;
          if ( !v26 )
            return v27 == v23;
        }
        else
        {
          if ( !(unsigned __int8)sub_12A5C0(v16, a1, a2, v12 + 48, v8, (__int64)(a5 + 12), 0) )
            return 0;
          v24 = *(_DWORD *)(v12 + 68);
          v25 = (int)a5[17];
          v26 = *(_BYTE *)(v13 + 145);
          if ( a6 == 1 )
          {
            if ( !v26 )
              return 1;
            v23 = 0;
          }
          else
          {
            if ( a6 == 2 )
            {
              v23 = 0;
LABEL_79:
              v31 = -v24;
              if ( !v26 )
                v25 = v31;
              v27 = v25;
              return v27 == v23;
            }
            if ( v26 )
              return 1;
            v23 = 0;
          }
        }
LABEL_32:
        v27 = (int)v25 - v24;
        return v27 == v23;
      case 4LL:
      case 6LL:
      case 7LL:
        goto LABEL_10;
      case 5LL:
        if ( !a7 )
          return 0;
        goto LABEL_10;
      case 10LL:
        if ( a6 == 1 )
          return sub_12A5C0(v16, a1, a2, v12 + 32, a4, (__int64)(a5 + 8), 0);
        if ( a6 != 2 )
        {
          v17 = (__int64)(a5 + 8);
          v18 = v12 + 32;
          goto LABEL_41;
        }
        v17 = (__int64)(a5 + 8);
        v18 = v12 + 32;
        if ( *(_DWORD *)(v12 + 36) == 2 * *(_DWORD *)(v12 + 68) )
          goto LABEL_8;
        return 0;
      case 12LL:
      case 14LL:
        v35 = 1;
        goto LABEL_43;
      case 13LL:
      case 15LL:
      case 16LL:
      case 17LL:
      case 18LL:
        v35 = 0;
LABEL_43:
        if ( a7 )
          goto LABEL_44;
        return 0;
      case 19LL:
      case 20LL:
      case 21LL:
        v35 = 1;
LABEL_44:
        v33 = (__int64)(a5 + 8);
        if ( a6 == 1 )
        {
          if ( (unsigned __int8)sub_12DD00(a1, a2, v12 + 32, a4, v33) )
          {
            if ( (unsigned __int8)sub_12DD00(a1, a2, v12 + 48, v8, a5 + 12) )
              goto LABEL_13;
            v30 = a5 + 12;
            if ( !v35 )
              return 0;
          }
          else
          {
            v30 = a5 + 12;
            if ( !v35 )
              return 0;
          }
          if ( !(unsigned __int8)sub_12DD00(a1, a2, v12 + 32, v8, v30) )
            return 0;
          v19 = sub_12DD00(a1, a2, v12 + 48, v8, v33);
        }
        else
        {
          if ( a6 != 2 )
          {
            if ( (unsigned __int8)sub_12BD30(a1, a2, v12 + 32, a4, (__int64)(a5 + 8)) )
            {
              if ( (unsigned __int8)sub_12BD30(a1, a2, v12 + 48, v8, (__int64)(a5 + 12)) )
                goto LABEL_13;
              v28 = (__int64)(a5 + 12);
              if ( !v35 )
                return 0;
            }
            else
            {
              v28 = (__int64)(a5 + 12);
              if ( !v35 )
                return 0;
            }
            if ( !(unsigned __int8)sub_12BD30(a1, a2, v12 + 32, v8, v28) )
              return 0;
            v19 = sub_12BD30(a1, a2, v12 + 48, v8, v33);
            goto LABEL_12;
          }
          if ( (unsigned __int8)sub_12C700(a1, a2, v12 + 32, a4, v33, 1) )
          {
            if ( (unsigned __int8)sub_12C700(a1, a2, v12 + 48, v8, (__int64)(a5 + 12), 1) )
              goto LABEL_13;
            if ( !v35 )
              return 0;
            v29 = (__int64)(a5 + 12);
          }
          else
          {
            v29 = (__int64)(a5 + 12);
            if ( !v35 )
              return 0;
          }
          if ( !(unsigned __int8)sub_12C700(a1, a2, v12 + 32, v8, v29, 1) )
            return 0;
          v19 = sub_12C700(a1, a2, v12 + 48, v8, v33, 1);
        }
        goto LABEL_12;
      case 22LL:
      case 23LL:
      case 24LL:
        if ( !a7 )
          return 0;
        v22 = sub_12A5C0(v16, a1, a2, v12 + 48, a4, (__int64)(a5 + 12), 0);
        v7 = a6;
        if ( !v22 )
          return 0;
LABEL_10:
        v17 = (__int64)(a5 + 8);
        v18 = v12 + 32;
        if ( v7 != 1 )
          goto LABEL_7;
        v19 = sub_12DD00(a1, a2, v18, v8, v17);
        goto LABEL_12;
      case 63LL:
      case 64LL:
        goto LABEL_4;
      default:
        return 0;
    }
  }
  if ( (_DWORD)v14 != 63 || v15 != 64 )
    return 0;
LABEL_4:
  if ( !a7 )
    return 0;
  if ( a6 != 1 )
  {
    v17 = (__int64)(a5 + 8);
    v18 = v12 + 32;
LABEL_7:
    if ( v7 == 2 )
LABEL_8:
      v19 = sub_12C700(a1, a2, v18, v8, v17, 1);
    else
LABEL_41:
      v19 = sub_12BD30(a1, a2, v18, v8, v17);
LABEL_12:
    if ( v19 )
    {
LABEL_13:
      if ( a2 != v8 )
      {
        if ( v8 )
        {
          v20 = *(_QWORD *)(v8 + 8);
          if ( v20 )
          {
            while ( a2 != v20 )
            {
              v20 = *(_QWORD *)(v20 + 8);
              if ( !v20 )
                goto LABEL_18;
            }
            v9 = v8;
            v12 = (__int64)a5;
            v8 = v20;
          }
        }
LABEL_18:
        sub_1201C0((__int64)v36, (__int64)a1, v12, 1u);
        if ( sub_A55E0((__int64)a1, v36, *(_QWORD *)(v9 + 8), v8, 1u) )
        {
          if ( v37 )
          {
            v38 = 0;
            qfree(v37);
          }
          qfree(v36[0]);
          return 0;
        }
        if ( v37 )
        {
          v38 = 0;
          qfree(v37);
        }
        qfree(v36[0]);
      }
      return 1;
    }
    return 0;
  }
  return sub_12A5C0(v16, a1, a2, v12 + 32, a4, (__int64)(a5 + 8), 0);
}
