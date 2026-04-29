bool __fastcall sub_3E6300(__int64 a1, __int64 a2, int a3, double a4)
{
  _DWORD *v4; // rax
  _QWORD *i; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9
  char v8; // al

  if ( *(_DWORD *)(a1 + 608) <= (int)a2 )
    return 1;
  if ( (int)a2 < *(_DWORD *)(a1 + 352) || (int)a2 > *(_DWORD *)(a1 + 80) + *(_DWORD *)(a1 + 476) - 1 )
    return 0;
  v4 = (_DWORD *)(a1 + 352);
  for ( i = &unk_40C240; ; i += 2 )
  {
    v6 = i[2];
    v7 = v4;
    v4 = (_DWORD *)(a1 + v6);
    if ( (int)a2 < *(_DWORD *)(a1 + v6) )
      break;
    if ( v6 == 624 )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCE16u, a2, a4);
      BUG();
    }
  }
  if ( (_DWORD)a2 != *v7 )
    return 0;
  v8 = *((_BYTE *)i + 14);
  if ( v8 == -1 )
  {
    v8 = *(_DWORD *)(a1 + 80);
  }
  else if ( v8 == -2 )
  {
    v8 = *(_BYTE *)(a1 + 692);
  }
  return a3 <= (unsigned __int8)(2 * v8);
}
