/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5230
// Address: 0x080A5230

//----- (080A5230) --------------------------------------------------------
char *__cdecl sub_80A5230(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char *result; // eax
  __int64 v5; // xmm0_8
  __int64 v6; // [esp+0h] [ebp-24h]
  __int64 v7; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v8; // [esp+14h] [ebp-10h]

  v8 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_80A4C20();
  if ( (*(int (__cdecl **)(int, int, __int64 *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, &v7, 8, 0) == 8 )
  {
    v6 = v7;
    sub_8089430(a2);
    v5 = v6;
    *(_BYTE *)a2 = 9;
    result = nullptr;
    *(_QWORD *)(a2 + 4) = v5;
  }
  else
  {
    result = sub_80747C0(a2, "read error");
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
