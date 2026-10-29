/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A908
// Address: 0x0005A908

//----- (0005A908) --------------------------------------------------------
int __fastcall sub_5A908(int a1, int a2, const char *a3, int a4)
{
  int v6; // r1
  int v7; // r4
  int v8; // r0
  void *v9; // r0
  int v10; // r4
  void *v13[3]; // [sp+18h] [bp-410h] BYREF
  _BYTE v14[1028]; // [sp+24h] [bp-404h] BYREF

  v6 = 54;
  if ( a1 <= 0 )
    v6 = 52;
  v7 = 53;
  if ( a1 )
    v7 = v6;
  sub_6DA58((int)v13, v7);
  qvsnprintf(v14, 1024, a3, a4);
  v8 = _strlen_chk(v14, 1024);
  ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(v13, v14, v8 + 1);
  v9 = (void *)(*(int (__fastcall **)(int, int, void **))(*(_DWORD *)a2 + 8))(a2, v7, v13);
  qfree(v9);
  if ( v7 == 52 )
    exit(1);
  v10 = _strlen_chk(v14, 1024);
  if ( v13[0] )
  {
    v13[1] = nullptr;
    qfree(v13[0]);
    v13[2] = nullptr;
    v13[0] = nullptr;
  }
  return v10;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
