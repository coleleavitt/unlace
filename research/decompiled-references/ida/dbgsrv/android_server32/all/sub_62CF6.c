/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62CF6
// Address: 0x00062CF6

//----- (00062CF6) --------------------------------------------------------
int __fastcall sub_62CF6(int a1)
{
  void **v2; // r5
  void *v3; // r0
  void *v4; // r0

  ((void (*)(void))loc_58D5C)();
  sub_61BBC((char **)(a1 + 152));
  v2 = (void **)(a1 + 140);
  if ( *(_DWORD *)(a1 + 140) )
  {
    sub_62E34((int *)(a1 + 140), 0);
    qfree(*v2);
    *v2 = nullptr;
    *(_DWORD *)(a1 + 148) = 0;
  }
  v3 = *(void **)(a1 + 120);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 124) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 120) = 0;
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 68) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 64) = 0;
  }
  sub_62DC0((char **)(a1 + 52));
  return a1;
}
