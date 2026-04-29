__int64 __fastcall sub_6D0C0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rdx

  v2 = *(__int64 (**)())(*(_QWORD *)a1 + 48LL);
  if ( v2 == sub_13EB0 )
    return (*(__int64 (**)(void))(*(_QWORD *)a1 + 56LL))();
  if ( (unsigned __int8)v2() )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2);
  return 0;
}
