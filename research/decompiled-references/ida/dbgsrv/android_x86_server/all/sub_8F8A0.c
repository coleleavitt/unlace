/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F8A0
// Address: 0x0008F8A0

//----- (0008F8A0) --------------------------------------------------------
int __cdecl sub_8F8A0(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int result; // eax
  int *v5; // edi
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  result = 0;
  if ( v3 )
  {
    v13 = v2;
    v5 = (int *)(a2 + 4);
    v6 = v3 + 1;
    if ( v3 != -1 )
    {
      v12 = v3;
      v7 = (char *)qvector_reserve(a2 + 4, nullptr, v3 + 1, 1u);
      *v5 = (int)v7;
      memset(&v7[*(_DWORD *)(a2 + 8)], 0, v6 - *(_DWORD *)(a2 + 8));
      v3 = v12;
      *(_DWORD *)(a2 + 8) = v6;
    }
    *(_BYTE *)(*v5 + v3) = 0;
    v8 = *v5;
    v9 = v3;
    v10 = sub_8EB10();
    v11 = (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)v10 + 144))(v10, v13, v8, v9, 0) == v9;
    result = 0;
    if ( !v11 )
      return throw_idc_exception(a2, "read error");
  }
  return result;
}
