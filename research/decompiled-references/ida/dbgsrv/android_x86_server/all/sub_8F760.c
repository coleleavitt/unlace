/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F760
// Address: 0x0008F760

//----- (0008F760) --------------------------------------------------------
int __cdecl sub_8F760(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  _DWORD v5[6]; // [esp+4h] [ebp-18h] BYREF

  v5[1] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_8EB10();
  if ( (*(int (__cdecl **)(int, int, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, v5, 4, 0) != 4 )
    return throw_idc_exception(a2, "read error");
  *(_DWORD *)(a2 + 4) = v5[0];
  return 0;
}
