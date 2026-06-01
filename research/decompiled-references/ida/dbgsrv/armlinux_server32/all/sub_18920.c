/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18920
// Address: 0x00018920

//----- (00018920) --------------------------------------------------------
int __fastcall sub_18920(int a1, int *a2, int a3)
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
  sub_188E0((int)&ptr, "/proc/%d/task/%d/comm", v6, a3);
  if ( v15 )
    v7 = (int *)ptr;
  else
    v7 = &dword_8DB98;
  v8 = sub_75E18((int)v7);
  if ( v8 )
  {
    sub_77D94(a2, v8);
    sub_778BC(v8);
    v9 = 1;
  }
  else
  {
    if ( v15 )
      v11 = (const char *)ptr;
    else
      v11 = (const char *)&dword_8DB98;
    v12 = _errno_location();
    v13 = (const char *)sub_79440(*v12);
    sub_17480(a1, "%s: %s\n", v11, v13);
    v9 = 0;
  }
  if ( ptr )
  {
    v15 = 0;
    sub_77F70(ptr);
  }
  return v9;
}
// 8DB98: using guessed type int dword_8DB98;
