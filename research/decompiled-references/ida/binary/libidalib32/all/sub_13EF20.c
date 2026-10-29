bool __fastcall sub_13EF20(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = sub_CC730(a2);
  if ( v2 )
    return v2 == 1;
  *(_QWORD *)(a1 + 312) = a2;
  return 0;
}

