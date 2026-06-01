/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9139C
// Address: 0x0009139C

//----- (0009139C) --------------------------------------------------------
int __fastcall sub_9139C(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r12
  int v4; // lr

  v3 = a1[1];
  if ( a3 )
  {
    v4 = v3 >> 8;
    if ( v3 << 31 )
      v4 = *(_DWORD *)(*a3 + v4);
  }
  else
  {
    v4 = 0;
  }
  return (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 28))(*a1, a2, (int)a3 + v4);
}
