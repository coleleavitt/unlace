__int64 __fastcall sub_4DF630(__int64 a1)
{
  __int64 result; // rax

  sub_4DF100(a1);
  result = *(_QWORD *)(a1 + 616);
  if ( *(_QWORD *)(a1 + 624) != result )
    *(_QWORD *)(a1 + 624) = result;
  *(_BYTE *)(a1 + 640) = 0;
  *(_BYTE *)(a1 + 704) = 1;
  return result;
}
