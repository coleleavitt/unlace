unsigned __int64 __fastcall sub_F5E4F0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax

  result = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(result + 28) & 0x7F) != 0x43 )
  {
    v2 = *(unsigned __int16 *)(a1 + 20);
    sub_BC0150(result);
    return *(_QWORD *)(v3 + 8 * v2 + 24);
  }
  return result;
}
