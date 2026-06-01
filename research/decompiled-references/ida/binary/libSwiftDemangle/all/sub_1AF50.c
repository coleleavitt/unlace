unsigned __int64 __fastcall sub_1AF50(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // rcx
  __int64 v3; // rax
  char v4; // dl
  _BYTE *v5; // rcx
  __int64 v6; // rdx
  unsigned __int8 v7; // si
  __int64 v8; // rax
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  v2 = *(char **)(a1 + 24);
  v3 = v1 - 1;
  v4 = *v2;
  v5 = v2 + 1;
  if ( v4 == 95 )
  {
    v10 = 0;
  }
  else
  {
    LOBYTE(v6) = v4 - 48;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 32) = v3;
    if ( (unsigned __int8)v6 > 9u )
      return 0;
    v6 = (char)v6;
    if ( !v3 )
      return 0;
    while ( 1 )
    {
      v7 = *v5 - 48;
      if ( v7 > 9u )
        break;
      --v3;
      *(_QWORD *)(a1 + 24) = ++v5;
      v6 = (char)v7 + 10 * v6;
      *(_QWORD *)(a1 + 32) = v3;
      if ( !v3 )
        return 0;
    }
    v8 = *(_QWORD *)(a1 + 32);
    if ( !v8 || *v5 != 95 )
      return 0;
    v3 = v8 - 1;
    ++v5;
    v10 = v6 + 1;
  }
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v3;
  return sub_C480(*(_QWORD **)(a1 + 40), 151, v10);
}

