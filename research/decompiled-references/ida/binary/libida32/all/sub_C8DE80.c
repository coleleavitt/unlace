__int64 __fastcall sub_C8DE80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = sub_CC2430(*(_QWORD *)(a1 + 488));
  result = ((unsigned int)sub_BDA860(a2, v2) >> 3) & 7;
  if ( (_BYTE)result == 7 )
    return 1;
  return result;
}

