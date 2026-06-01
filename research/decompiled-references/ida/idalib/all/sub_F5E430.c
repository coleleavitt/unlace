__int64 __fastcall sub_F5E430(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // bx
  __int64 v3; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(result + 28) & 0x7F) != 0x43 )
  {
    v2 = *(_WORD *)(a1 + 20) & 0x7FFF;
    sub_BC0150(result);
    return *(_QWORD *)(v3 + 8LL * v2 + 24);
  }
  return result;
}
