/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427F00
// Address: 0x00427F00

//----- (00427F00) --------------------------------------------------------
int __cdecl sub_427F00(unsigned int a1)
{
  _DWORD *v1; // eax
  struct _RTL_CRITICAL_SECTION *v2; // esi
  _DWORD *v3; // edi
  int v4; // edi

  v1 = sub_428030();
  v2 = dword_4B6B40;
  v3 = v1;
  sub_4562D0(dword_4B6B40);
  if ( a1 >= v3[11] )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(284);
  }
  v4 = *(_DWORD *)(v3[10] + 4 * a1);
  sub_4562F0(v2);
  return v4;
}
// 4B70F0: using guessed type char byte_4B70F0;
