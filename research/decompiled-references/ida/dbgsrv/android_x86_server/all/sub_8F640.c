/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F640
// Address: 0x0008F640

//----- (0008F640) --------------------------------------------------------
int __cdecl sub_8F640(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int8 v5; // [esp+7h] [ebp-15h] BYREF
  unsigned int v6; // [esp+8h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_8EB10();
  if ( (*(int (__cdecl **)(int, int, unsigned __int8 *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, &v5, 1, 0) != 1 )
    return throw_idc_exception(a2, "read error");
  *(_DWORD *)(a2 + 4) = v5;
  return 0;
}
