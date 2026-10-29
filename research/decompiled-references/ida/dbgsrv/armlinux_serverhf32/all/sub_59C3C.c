/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59C3C
// Address: 0x00059C3C

//----- (00059C3C) --------------------------------------------------------
int __fastcall sub_59C3C(int a1, int a2)
{
  int v3; // r4
  int v5; // r0
  int v6; // r0
  void *v7; // r0
  void *ptr[3]; // [sp+0h] [bp-14h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 152) )
    return 0;
  v5 = *(_DWORD *)(a1 + 244);
  *(_BYTE *)(a1 + 153) = v3;
  v6 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 68))(v5, a1 + 200, a2);
  *(_BYTE *)(a1 + 152) = v6 > 0;
  if ( v6 > 0 )
  {
    sub_67AA8((int *)ptr, 4);
    sub_61F1C((int)ptr, a1 + 200);
    v3 = sub_66E2C(a1 + 100, (int *)ptr);
    v7 = ptr[0];
    *(_BYTE *)(a1 + 152) = 0;
    if ( v7 )
    {
      ptr[1] = nullptr;
      sub_77E08(v7);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 153) = 1;
  }
  return v3;
}
