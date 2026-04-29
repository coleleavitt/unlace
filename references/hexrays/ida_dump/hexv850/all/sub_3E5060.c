__int64 __fastcall sub_3E5060(__int64 a1, int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rax
  _QWORD *i; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // r8

  result = 1;
  if ( a2 > 7 )
  {
    v3 = (_DWORD *)(a1 + 352);
    for ( i = &unk_40DB40; ; i += 2 )
    {
      v5 = i[2];
      v6 = v3;
      v3 = (_DWORD *)(a1 + v5);
      if ( a2 < *(_DWORD *)(a1 + v5) )
        break;
      if ( v5 == 504 )
        return 1;
    }
    if ( a2 == *v6 )
      return *((unsigned __int8 *)i + 14);
    return 1;
  }
  return result;
}
