/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B228
// Address: 0x0007B228

//----- (0007B228) --------------------------------------------------------
int __fastcall sub_7B228(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r0

  v2 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8)) )
  {
    memset((void *)(a1 + 12), 0, 0x38u);
    v2 = 1;
    *(_DWORD *)(a1 + 24) = a1 + 68;
    *(_DWORD *)(a1 + 28) = 0x8000;
    v3 = -1;
    if ( *(_DWORD *)(a1 + 32836) )
      v3 = *(_DWORD *)(a1 + 32836);
    v4 = sub_856D0((_DWORD *)(a1 + 12), v3, "1.3.1", 56);
    if ( v4 )
    {
      sub_7B1AC(a1, v4);
      return 0;
    }
  }
  return v2;
}
