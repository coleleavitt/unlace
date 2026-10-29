__int64 __fastcall sub_6A8E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  if ( a1 == a2 )
    return a1;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v2 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
    return 0;
  v3 = a1;
  while ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3) )
  {
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      v3 = v4;
      if ( a1 != v4 )
        break;
      v3 = 0;
      if ( !MEMORY[0x10102464C45AF](0) )
        return a2;
    }
    if ( a2 == v4 )
      return a1;
  }
  return a2;
}

