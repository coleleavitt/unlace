__int64 __fastcall sub_46B290(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a2 )
  {
    switch ( a3 )
    {
      case 1:
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 456LL))(a1);
      case 2:
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 464LL))(a1);
      case 0:
        return sub_30DB40(a1, **(_QWORD **)(a4 + 8));
    }
  }
  return result;
}
