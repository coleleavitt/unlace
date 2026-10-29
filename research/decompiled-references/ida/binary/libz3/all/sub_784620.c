__int64 __fastcall sub_784620(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
    return sub_11B7290(*(_QWORD *)(result + 32), a1 + 24);
  return result;
}

