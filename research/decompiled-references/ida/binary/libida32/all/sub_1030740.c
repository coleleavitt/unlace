__int64 __fastcall sub_1030740(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  if ( !sub_990D60(a2, "lp64d") || !sub_990D60(a2, "lp64f") || (v3 = sub_990D60(a2, "lp64s"), result = 0, !v3) )
  {
    sub_9CAB60(a1 + 512, a2);
    return 1;
  }
  return result;
}

