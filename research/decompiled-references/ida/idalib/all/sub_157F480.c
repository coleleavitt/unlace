char __fastcall sub_157F480(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_BFD3B0(a2, *(_QWORD *)a1);
  if ( !result && !*(_BYTE *)(a1 + 8) )
    return sub_157F2D0(a1, a2);
  return result;
}
