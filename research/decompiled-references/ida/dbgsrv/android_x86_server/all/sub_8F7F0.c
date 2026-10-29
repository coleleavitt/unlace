/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F7F0
// Address: 0x0008F7F0

//----- (0008F7F0) --------------------------------------------------------
int __cdecl sub_8F7F0(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v6; // [esp+Ch] [ebp-20h]
  _DWORD v7[7]; // [esp+10h] [ebp-1Ch] BYREF

  v7[2] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_8EB10();
  if ( (*(int (__cdecl **)(int, int, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, v7, 8, 0) != 8 )
    return throw_idc_exception(a2, "read error");
  v6 = v7[0];
  v4 = v7[1];
  free_idcv((char *)a2);
  *(_BYTE *)a2 = 9;
  *(_DWORD *)(a2 + 8) = v4;
  *(_DWORD *)(a2 + 4) = v6;
  return 0;
}
