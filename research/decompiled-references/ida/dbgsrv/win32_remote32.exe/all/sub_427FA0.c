/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427FA0
// Address: 0x00427FA0

//----- (00427FA0) --------------------------------------------------------
int __thiscall sub_427FA0(_DWORD *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // esi
  int v4; // edi

  v3 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  if ( a2 >= *(this + 11) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(284);
  }
  v4 = *(_DWORD *)(*(this + 10) + 4 * a2);
  sub_4562F0(v3);
  return v4;
}
// 4B70F0: using guessed type char byte_4B70F0;
