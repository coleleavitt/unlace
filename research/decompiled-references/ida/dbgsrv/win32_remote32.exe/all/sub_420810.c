/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420810
// Address: 0x00420810

//----- (00420810) --------------------------------------------------------
int __thiscall sub_420810(_DWORD *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // esi
  int v4; // edi

  v3 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  if ( a2 >= *(this + 14) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(288);
  }
  v4 = *(this + 13) + 40 * a2;
  sub_4562F0(v3);
  return v4 + 16;
}
// 4B70F0: using guessed type char byte_4B70F0;
