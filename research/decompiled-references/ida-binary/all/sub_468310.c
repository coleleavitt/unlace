__int64 __fastcall sub_468310(__int64 a1, int a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax

  if ( !a2 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return sub_2E3490(a1, **(_DWORD **)(a4 + 8));
      case 2:
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
      case 0:
        return sub_2E33E0(a1, **(_QWORD **)(a4 + 8), a3, a4, a5);
    }
  }
  return result;
}
