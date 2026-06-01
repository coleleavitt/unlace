/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67DC0
// Address: 0x00067DC0

//----- (00067DC0) --------------------------------------------------------
int __fastcall sub_67DC0(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r5
  int v6; // r7
  _DWORD v8[2]; // [sp+Ch] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = sub_6762C();
  if ( (*(int (__fastcall **)(int, int, _DWORD *, int, _DWORD))(*(_DWORD *)v4 + 144))(v4, v3, v8, 8, 0) != 8 )
    return throw_idc_exception(a2, "read error");
  v5 = v8[0];
  v6 = v8[1];
  free_idcv((unsigned __int8 *)a2);
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  *(_BYTE *)a2 = 9;
  return 0;
}
