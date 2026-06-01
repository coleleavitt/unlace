bool __fastcall Z3_is_numeral_ast(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char v6; // r12
  int v7; // edx
  int *v8; // rax
  bool result; // al
  int v10; // eax
  _DWORD *v11; // rdx

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29A780(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      result = 0;
      goto LABEL_20;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
  }
  else
  {
    if ( !(_WORD)v7
      && (v8 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
      && ((v7 = *v8, *v8 == 5) || v7 == *(_DWORD *)(a1 + 312))
      && !v8[1]
      || (unsigned __int8)sub_15C5180(*(_QWORD *)(a1 + 376), a2, v7, a4, a5, a6)
      || (unsigned __int8)sub_15C5420(*(_QWORD *)(a1 + 376), a2) )
    {
      result = 1;
      goto LABEL_11;
    }
    v10 = sub_1625010(a1 + 336);
    if ( !*(_WORD *)(a2 + 4) )
    {
      v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v11 )
      {
        if ( v10 == *v11 )
        {
          result = v11[1] == 13;
          goto LABEL_11;
        }
      }
    }
  }
  result = 0;
LABEL_11:
  if ( v6 )
LABEL_20:
    byte_1C7EBA0 = 1;
  return result;
}

