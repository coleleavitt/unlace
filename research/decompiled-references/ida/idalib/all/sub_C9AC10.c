__int64 __fastcall sub_C9AC10(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
    return *(_QWORD *)(result + 40);
  return result;
}
