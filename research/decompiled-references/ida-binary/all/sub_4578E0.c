__int64 __fastcall sub_4578E0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1208LL))(a1, **(_QWORD **)(a4 + 8));
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 840LL))(
               a1,
               *(_QWORD *)(a4 + 8),
               **(unsigned int **)(a4 + 16),
               **(unsigned int **)(a4 + 24));
    }
  }
  return result;
}
