/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D780
// Address: 0x0005D780

//----- (0005D780) --------------------------------------------------------
int __fastcall sub_5D780(int a1, int a2)
{
  int v4; // r3
  int v5; // r7
  const char *v6; // r1
  void *ptr; // [sp+8h] [bp-14h] BYREF
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch]

  v4 = *(_DWORD *)(a1 + 12);
  ptr = nullptr;
  v9 = 0;
  v10 = 0;
  if ( v4 == 25 )
  {
    v5 = -1;
    v6 = nullptr;
  }
  else
  {
    sub_5D698((const char *)(a1 + 16), &ptr);
    v5 = *(_DWORD *)(a1 + 20);
    v4 = *(_DWORD *)(a1 + 12);
    v6 = (const char *)ptr;
  }
  sub_1873C(a2, "%s|%d|%d|%s", *(const char **)a1, v4, v5, v6);
  if ( ptr )
  {
    v9 = 0;
    sub_77E08(ptr);
  }
  return 1;
}
