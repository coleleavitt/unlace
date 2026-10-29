__int64 __fastcall sub_2273430(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int8 *v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  size_t v12; // rax
  char *v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  size_t v17; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27[2]; // [rsp+0h] [rbp-58h] BYREF
  const char *v28; // [rsp+10h] [rbp-48h] BYREF
  __int16 v29; // [rsp+30h] [rbp-28h]

  sub_226E8F0(a1);
  sub_2270A60(a1, *(_DWORD *)(a1 + 60), v1, v2, v3, v4);
  v8 = *(unsigned int *)(a1 + 60);
  v9 = *(unsigned __int8 **)(a1 + 40);
  v10 = *v9;
  if ( !(_DWORD)v8 )
  {
    if ( v10 == 37 )
      return sub_2270D20(a1, (__int64)v9, v5, v8, v6, v7);
    v5 = *(_QWORD *)(a1 + 48);
    v8 = (__int64)(v9 + 4);
    if ( v5 >= (unsigned __int64)(v9 + 4) )
    {
      if ( v10 == 45 )
      {
        if ( v9[1] == 45 && v9[2] == 45 )
        {
          if ( (unsigned __int8 *)v5 == v9 + 3 )
            return sub_22721C0(a1, 1, v5, v8, v6, v7);
          v22 = v9[3];
          if ( (unsigned __int8)v22 <= 0x20u )
          {
            v5 = 0x100002600LL;
            if ( _bittest64((const __int64 *)&v5, v22) )
              return sub_22721C0(a1, 1, v5, v8, v6, v7);
          }
        }
        goto LABEL_27;
      }
      if ( v10 == 46 )
      {
        if ( v9[1] == 46 && v9[2] == 46 )
        {
          if ( (unsigned __int8 *)v5 == v9 + 3 )
            return sub_22721C0(a1, 0, v5, v8, v6, v7);
          v24 = v9[3];
          if ( (unsigned __int8)v24 <= 0x20u )
          {
            v5 = 0x100002600LL;
            if ( _bittest64((const __int64 *)&v5, v24) )
              return sub_22721C0(a1, 0, v5, v8, v6, v7);
          }
        }
        goto LABEL_7;
      }
    }
  }
  if ( v10 == 91 )
    return sub_22726D0(a1, 1, v5, v8, v6, v7);
  if ( v10 == 123 )
    return sub_22726D0(a1, 0, v5, v8, v6, v7);
  if ( v10 == 93 )
    return sub_22728E0(a1, 1, v5, v8, v6, v7);
  if ( v10 == 125 )
    return sub_22728E0(a1, 0, v5, v8, v6, v7);
  if ( v10 == 44 )
    return sub_2272560(a1, (__int64)v9, v5, v8, v6, v7);
  if ( v10 == 45 )
  {
LABEL_27:
    if ( *(unsigned __int8 **)(a1 + 48) == v9 + 1 )
      return sub_2272A60(a1, (__int64)v9, v5, v8, v6, v7);
    v20 = v9[1];
    if ( (unsigned __int8)v20 <= 0x20u )
    {
      v5 = 0x100002600LL;
      if ( _bittest64((const __int64 *)&v5, v20) )
        return sub_2272A60(a1, (__int64)v9, v5, v8, v6, v7);
    }
    goto LABEL_7;
  }
  if ( v10 == 63 )
  {
    if ( *(unsigned __int8 **)(a1 + 48) == v9 + 1 )
      return sub_2272BE0(a1, (__int64)v9, v5, v8, v6, v7);
    v19 = v9[1];
    if ( (unsigned __int8)v19 <= 0x20u )
    {
      v5 = 0x100002600LL;
      if ( _bittest64((const __int64 *)&v5, v19) )
        return sub_2272BE0(a1, (__int64)v9, v5, v8, v6, v7);
    }
  }
  else
  {
    if ( v10 == 58 )
    {
      v21 = (char *)(v9 + 1);
      if ( !(unsigned __int8)sub_226E770(a1, v21) || *(_BYTE *)(a1 + 74) )
        return sub_22731D0(a1, (__int64)v21, v5, v8, v6, v7);
      v9 = *(unsigned __int8 **)(a1 + 40);
      v10 = *v9;
    }
    switch ( v10 )
    {
      case '*':
        return sub_2272FB0(a1, 1, v5, v8, v6, v7);
      case '&':
        return sub_2272FB0(a1, 0, v5, v8, v6, v7);
      case '!':
        return sub_2272D80(a1, (__int64)v9, v5, v8, v6, v7);
      case '|':
      case '>':
        v23 = *(unsigned int *)(a1 + 68);
        if ( !(_DWORD)v23 )
          return sub_2271AB0(a1, (__int64)v9, v23, v8, v6, v7);
        break;
      case '\'':
        return sub_22710A0(a1, 0);
      case '"':
        return sub_22710A0(a1, 1);
    }
  }
LABEL_7:
  v27[0] = (__int64)v9;
  v27[1] = 1;
  if ( *(unsigned __int8 **)(a1 + 48) == v9
    || (v11 = *v9, (unsigned __int8)v11 > 0x20u)
    || (v26 = 0x100002600LL, !_bittest64(&v26, v11)) )
  {
    v12 = j__strlen("-?:,[]{}#&*!|>'\"%@`");
    v13 = "-?:,[]{}#&*!|>'\"%@`";
    if ( sub_2246EC0(v27, "-?:,[]{}#&*!|>'\"%@`", v12, 0) == -1 )
      return sub_2271310(a1, (__int64)v13, v14, v15, v16);
  }
  v17 = j__strlen("?:-");
  if ( sub_2246EC0(v27, "?:-", v17, 0) != -1 )
  {
    v13 = (char *)(*(_QWORD *)(a1 + 40) + 1LL);
    if ( (unsigned __int8)sub_226E770(a1, v13) )
      return sub_2271310(a1, (__int64)v13, v14, v15, v16);
  }
  v25 = *(char **)(a1 + 40);
  v28 = "Unrecognized character while tokenizing.";
  v29 = 259;
  sub_226E270(a1, (__int64)&v28, v25);
  return 0;
}
