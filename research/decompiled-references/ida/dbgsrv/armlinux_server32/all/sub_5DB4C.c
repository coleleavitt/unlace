/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DB4C
// Address: 0x0005DB4C

//----- (0005DB4C) --------------------------------------------------------
bool __fastcall sub_5DB4C(int a1, int a2, int a3, int a4)
{
  _BOOL4 v7; // r5
  unsigned int v8; // r9
  int *v9; // r0
  unsigned int v11; // r2
  const void *v12; // r6
  void *ptr; // [sp+0h] [bp-10h] BYREF
  unsigned int v14; // [sp+4h] [bp-Ch]
  int v15; // [sp+8h] [bp-8h]

  v7 = sub_5DA8C(a1, a2, a3);
  if ( !v7 )
  {
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    if ( !a4
      || (v8 = *(_DWORD *)(a4 + 4), v8 <= 1)
      || (v11 = *(_DWORD *)(a4 + 4),
          v12 = *(const void **)a4,
          ptr = sub_78018((int)&ptr, nullptr, v11, 1u),
          v14 = v8,
          memmove(ptr, v12, v8 - 1),
          *((_BYTE *)ptr + v8 - 1) = 0,
          v14 <= 1) )
    {
      v9 = sub_57174();
      sub_5AAEC((int)&ptr, (char *)v9);
    }
    v7 = sub_5D79C(a2, a3, (int)&ptr) >= 0;
    if ( ptr )
    {
      v14 = 0;
      sub_77F70(ptr);
    }
  }
  return v7;
}
