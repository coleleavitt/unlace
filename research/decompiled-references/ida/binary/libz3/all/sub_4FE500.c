__int64 __fastcall sub_4FE500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 8);
  if ( a4 )
    a4 = *(_QWORD *)(a4 + 32);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 16LL))(
           v4,
           *(_QWORD *)(a2 + 32),
           *(_QWORD *)(a3 + 32),
           a4);
}

