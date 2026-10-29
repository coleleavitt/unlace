/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7ED24
// Address: 0x0007ED24

//----- (0007ED24) --------------------------------------------------------
int __fastcall sub_7ED24(int a1)
{
  char *v1; // r1
  int v2; // r2
  void *v3; // r0
  char *v4; // r1
  int v5; // r2
  int v7; // [sp+0h] [bp-34h] BYREF
  _DWORD v8[10]; // [sp+4h] [bp-30h] BYREF

  v7 = -1;
  v8[0] = *(_DWORD *)"(";
  v8[2] = 0;
  v8[3] = a1;
  memset(&v8[4], 255, 12);
  memset(&v8[7], 0, 12);
  v8[1] = 136;
  if ( sub_7A104() )
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(5u, v1, v2, (int)callui, v7);
  v3 = sub_7A940((int)v8, nullptr);
  if ( v3 )
    sub_7A600((__pid_t)v3, &v7, -1);
  if ( sub_7A104() )
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(6u, v4, v5, (int)callui, v7);
  return v7;
}
// 7ED78: variable 'v1' is possibly undefined
// 7ED78: variable 'v2' is possibly undefined
// 7ED9C: variable 'v4' is possibly undefined
// 7ED9C: variable 'v5' is possibly undefined
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
