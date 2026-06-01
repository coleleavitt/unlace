__int64 __fastcall sub_84F4D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 i; // [rsp+8h] [rbp-30h]

  for ( i = a3; ; a3 = i )
  {
    if ( !a3 )
      return 1;
    v3 = sub_912E70(*(_QWORD *)(a1 + 24));
    if ( (unsigned int)sub_9039E0(v3) )
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
  sub_84F2D0(a1, v3);
  return 0;
}
