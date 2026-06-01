/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67E28
// Address: 0x00067E28

//----- (00067E28) --------------------------------------------------------
int __fastcall sub_67E28(int a1, int a2)
{
  int v3; // r5
  int v4; // r1
  int v5; // r7
  int *v6; // r4
  int v7; // r7
  char *v8; // r0
  int v9; // r0
  int v11; // [sp+8h] [bp-8h]
  int v12; // [sp+Ch] [bp-4h]

  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  v6 = (int *)(a2 + 8);
  if ( v3 )
  {
    v12 = v4;
    v7 = v3 + 1;
    if ( v3 != -1 )
    {
      v8 = (char *)qvector_reserve(a2 + 8, nullptr, v3 + 1, 1u);
      *v6 = (int)v8;
      memset(&v8[*(_DWORD *)(a2 + 12)], 0, v7 - *(_DWORD *)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v7;
    }
    v5 = 0;
    *(_BYTE *)(*v6 + v3) = 0;
    v11 = *v6;
    v9 = sub_6762C();
    if ( (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v9 + 144))(v9, v12, v11, v3, 0) != v3 )
      return throw_idc_exception(a2, "read error");
  }
  return v5;
}
