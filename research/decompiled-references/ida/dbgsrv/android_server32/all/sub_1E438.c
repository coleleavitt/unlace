/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E438
// Address: 0x0001E438

//----- (0001E438) --------------------------------------------------------
int __fastcall sub_1E438(int a1, _DWORD *a2, int a3)
{
  const char *v5; // r0
  FILE *v6; // r6
  int v7; // r5
  const char *v8; // r6
  int v9; // r5
  int *v10; // r0
  const char *v11; // r3
  char *v13; // [sp+4h] [bp-10h] BYREF
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v14 = 0;
  v13 = nullptr;
  v15 = 0;
  sub_1DA58((int)&v13, "/proc/%d/task/%d/comm", *(_DWORD *)(a1 + 968), a3);
  if ( v14 )
    v5 = v13;
  else
    v5 = &byte_B3CBE;
  v6 = fopenRT(v5);
  if ( v6 )
  {
    qgetline(a2, v6);
    v7 = 1;
    qfclose(v6);
  }
  else
  {
    v8 = v13;
    v9 = v14;
    v10 = (int *)_errno(0);
    v11 = (const char *)winerr(*v10);
    if ( !v9 )
      v8 = &byte_B3CBE;
    v7 = 0;
    sub_1BC48(a1, "%s: %s\n", v8, v11);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v15 = 0;
    v13 = nullptr;
  }
  return v7;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// B3CBE: using guessed type char byte_B3CBE;
