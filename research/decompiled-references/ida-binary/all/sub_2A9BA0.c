__int64 __fastcall sub_2A9BA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_2A9B20((__int64)a1, a2, *(_QWORD *)(a1[2] + 728LL));
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 864LL))(a1, v2);
  else
    return 0;
}
