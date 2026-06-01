/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E840
// Address: 0x0042E840

//----- (0042E840) --------------------------------------------------------
void __thiscall sub_42E840(void *this, int a2)
{
  int v2; // edx
  const char *v3; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = MultiByteStr;
  if ( v2 )
    v3 = *(const char **)a2;
  sub_42E870((int)this, v3, *(_DWORD *)(a2 + 4) != 0 ? v2 - 1 : 0);
}
