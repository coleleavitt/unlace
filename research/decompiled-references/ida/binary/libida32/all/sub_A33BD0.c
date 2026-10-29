__int64 __fastcall sub_A33BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13

  if ( !a2 || !a1 )
    return 0;
  if ( a1 == a2 )
    return a1;
  v2 = a1;
  v3 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 32LL))();
  if ( v3 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
    return 0;
  while ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    if ( a2 == v2 )
      return a1;
  }
  return a2;
}

