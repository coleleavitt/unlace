/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5977C
// Address: 0x0005977C

//----- (0005977C) --------------------------------------------------------
size_t __fastcall sub_5977C(int a1, int a2, char *a3, int a4)
{
  int v4; // r6
  int v8; // r11
  size_t v9; // r0
  void *v10; // r0
  size_t v11; // r5
  void *ptr[3]; // [sp+0h] [bp-414h] BYREF
  char v14[1024]; // [sp+Ch] [bp-408h] BYREF

  if ( !a1 )
    v4 = 53;
  if ( a1 )
  {
    if ( a1 <= 0 )
      v4 = 52;
    else
      v4 = 54;
    v8 = v4;
  }
  else
  {
    v8 = v4;
  }
  sub_67C24((int *)ptr, v4);
  sub_7E92C(v14, 1024, a3, a4);
  v9 = strlen(v14);
  sub_580D4((int)ptr, v14, v9 + 1);
  v10 = (void *)(*(int (__fastcall **)(int, int, void **))(*(_DWORD *)a2 + 8))(a2, v4, ptr);
  sub_77F70(v10);
  if ( v8 == 52 )
    exit(1);
  v11 = strlen(v14);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_77F70(ptr[0]);
  }
  return v11;
}
// 5979A: variable 'v4' is possibly undefined
