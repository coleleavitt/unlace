/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C3F0
// Address: 0x0005C3F0

//----- (0005C3F0) --------------------------------------------------------
int __fastcall sub_5C3F0(int a1, int a2)
{
  bool *v3; // r6
  int v4; // r5
  int v6; // r0
  void *v7[3]; // [sp+4h] [bp-10h] BYREF

  v3 = (bool *)(a1 + 152);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 152) )
  {
    *(_BYTE *)(a1 + 153) = 0;
    v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 244) + 68))(*(_DWORD *)(a1 + 244), a1 + 200, a2);
    *v3 = v6 > 0;
    if ( v6 < 1 )
    {
      *(_BYTE *)(a1 + 153) = 1;
      return 0;
    }
    else
    {
      sub_6DA58((int)v7, 4);
      sub_68B38((int)v7, a1 + 200);
      v4 = sub_6D398((void **)(a1 + 100), (int *)v7);
      *v3 = 0;
      if ( v7[0] )
      {
        v7[1] = nullptr;
        qfree(v7[0]);
        v7[2] = nullptr;
        v7[0] = nullptr;
      }
    }
  }
  return v4;
}
