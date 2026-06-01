unsigned __int64 __fastcall sub_7BACA0(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 120);
  if ( !result )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    result = *(_QWORD *)(a1 + 120);
  }
  if ( result > 7 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( a1 == *(_QWORD *)result )
      *(_BYTE *)(result + 72) |= 4u;
  }
  return result;
}

