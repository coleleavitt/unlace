__int64 __fastcall sub_82BB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 i; // [rsp+8h] [rbp-30h]

  for ( i = a3; ; a3 = i )
  {
    if ( !a3 )
      return 1;
    v3 = sub_8EF130(*(_QWORD *)(a1 + 24));
    if ( (unsigned int)sub_8DFCA0(v3) )
      break;
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 == *(_QWORD *)(a1 + 40) && v4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 32)) )
        return 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
  sub_82B970(a1, v3);
  return 0;
}

