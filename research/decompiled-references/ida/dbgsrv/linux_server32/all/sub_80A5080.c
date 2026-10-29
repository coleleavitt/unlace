/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5080
// Address: 0x080A5080

//----- (080A5080) --------------------------------------------------------
char *__cdecl sub_80A5080(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char *result; // eax
  unsigned __int8 v5; // [esp+1h] [ebp-11h] BYREF
  unsigned int v6; // [esp+2h] [ebp-10h]

  v6 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_80A4C20();
  if ( (*(int (__cdecl **)(int, int, unsigned __int8 *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, &v5, 1, 0) == 1 )
  {
    *(_DWORD *)(a2 + 4) = v5;
    result = nullptr;
  }
  else
  {
    result = sub_80747C0(a2, "read error");
  }
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
