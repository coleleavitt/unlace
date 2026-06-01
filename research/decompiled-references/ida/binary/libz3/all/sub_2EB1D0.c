__int64 __fastcall sub_2EB1D0(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 || *(_BYTE *)(a1 + 745) )
  {
    if ( *(_QWORD *)(a1 + 240) )
    {
      sub_1862300(a1 + 288, "optimize_model", 1);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 240) + 88LL))(
               *(_QWORD *)(a1 + 240),
               a1 + 288);
    }
  }
  return result;
}

