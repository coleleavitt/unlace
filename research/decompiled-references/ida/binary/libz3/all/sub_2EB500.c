__int64 __fastcall sub_2EB500(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 || *(_BYTE *)(a1 + 665) )
  {
    if ( *(_QWORD *)(a1 + 160) )
    {
      sub_1862300(a1 + 208, "optimize_model", 1);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 88LL))(
               *(_QWORD *)(a1 + 160),
               a1 + 208);
    }
  }
  return result;
}

