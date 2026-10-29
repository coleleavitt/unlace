/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B6D0
// Address: 0x0046B6D0

//----- (0046B6D0) --------------------------------------------------------
int __usercall sub_46B6D0@<eax>(int a1@<ebx>, int a2)
{
  unsigned int v2; // edi
  int v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2 + 1;
  if ( dword_4B7A48 )
  {
    v4 = sub_4782C6();
    v5 = *(_DWORD **)(v4 + 76);
    sub_4785BA(a1, v4, (int *)&v5);
    if ( v2 <= 0x100 )
      return *(_WORD *)(*v5 + 2 * a2) & 0x103;
    if ( (int)v5[1] > 1 )
      return sub_47895A(a2, 259, nullptr);
  }
  else if ( v2 <= 0x100 )
  {
    return off_4B6028[a2] & 0x103;
  }
  return 0;
}
// 4B6028: using guessed type wchar_t *off_4B6028;
// 4B7A48: using guessed type int dword_4B7A48;
