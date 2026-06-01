__int64 __fastcall sub_DFC050(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 296) )
  {
    sub_DFBCB0(a1);
    if ( a2 )
      return sub_18295D0(*(_QWORD *)(a1 + 296));
    else
      return sub_1829550(*(_QWORD *)(a1 + 296));
  }
  return result;
}

