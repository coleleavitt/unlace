__int64 __fastcall sub_3F0A80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( sub_3F09E0(a1, a4) )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 32LL))(a1, a2, a3, a4);
  else
    return 0;
}
