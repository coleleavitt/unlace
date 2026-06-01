__int64 __fastcall sub_BA4780(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  if ( (unsigned __int8)sub_C71270(a2, a3) )
    return (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 56LL))(a1, *a3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, a4);
}

