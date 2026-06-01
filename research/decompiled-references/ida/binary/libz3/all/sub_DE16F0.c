__int64 __fastcall sub_DE16F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, a1, 0, 0);
  if ( v2 )
    return sub_DE1240(a1, v2);
  else
    return 0;
}

