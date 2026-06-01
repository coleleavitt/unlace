/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BC90
// Address: 0x0007BC90

//----- (0007BC90) --------------------------------------------------------
int __cdecl sub_7BC90(int a1, int a2, char *s, int a4)
{
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  void *v7; // eax
  int v8; // esi
  int v10[4]; // [esp+18h] [ebp-424h] BYREF
  _BYTE src[1024]; // [esp+28h] [ebp-414h] BYREF
  unsigned int v12; // [esp+428h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  v4 = 53;
  if ( a1 )
    v4 = 2 * (a1 > 0) + 52;
  v5 = v4;
  sub_96B40((int)v10, v4);
  qvsnprintf(src, 1024, s, a4);
  v6 = __strlen_chk(src, 1024);
  sub_3A950(v10, src, v6 + 1);
  v7 = (void *)(*(int (__cdecl **)(int, _DWORD, int *))(*(_DWORD *)a2 + 8))(a2, (unsigned __int8)v5, v10);
  qfree(v7);
  if ( v5 == 52 )
    exit(1);
  v8 = __strlen_chk(src, 1024);
  if ( v10[0] )
  {
    v10[1] = 0;
    qfree((void *)v10[0]);
    v10[0] = 0;
    v10[2] = 0;
  }
  return v8;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
