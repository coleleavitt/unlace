/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1877C
// Address: 0x0001877C

//----- (0001877C) --------------------------------------------------------
int __fastcall sub_1877C(int a1, int *a2, int a3)
{
  int v6; // r2
  int *v7; // r0
  FILE *v8; // r4
  int v9; // r4
  const char *v11; // r4
  int *v12; // r0
  const char *v13; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v15; // [sp+4h] [bp-Ch]
  int v16; // [sp+8h] [bp-8h]

  v6 = *(_DWORD *)(a1 + 1068);
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  sub_1873C((int)&ptr, "/proc/%d/task/%d/comm", v6, a3);
  if ( v15 )
    v7 = (int *)ptr;
  else
    v7 = &dword_8DA5C;
  v8 = sub_75CB0((int)v7);
  if ( v8 )
  {
    sub_77C2C(a2, v8);
    sub_77754(v8);
    v9 = 1;
  }
  else
  {
    if ( v15 )
      v11 = (const char *)ptr;
    else
      v11 = (const char *)&dword_8DA5C;
    v12 = _errno_location();
    v13 = (const char *)sub_792D8(*v12);
    sub_172DC(a1, "%s: %s\n", v11, v13);
    v9 = 0;
  }
  if ( ptr )
  {
    v15 = 0;
    sub_77E08(ptr);
  }
  return v9;
}
// 8DA5C: using guessed type int dword_8DA5C;
