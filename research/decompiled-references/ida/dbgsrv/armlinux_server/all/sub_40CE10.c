/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CE10
// Address: 0x000000000040CE10

//----- (000000000040CE10) ----------------------------------------------------
__int64 __fastcall sub_40CE10(__int64 a1, __int64 a2, int a3)
{
  int v6; // w2
  const char *v7; // x0
  FILE *v8; // x0
  FILE *v9; // x20
  unsigned int v10; // w20
  const char *v12; // x20
  int *v13; // x0
  const char *v14; // x0
  void *ptr; // [xsp+30h] [xbp-20h] BYREF
  __int64 v16; // [xsp+38h] [xbp-18h]
  __int64 v17; // [xsp+40h] [xbp-10h]

  v6 = *(_DWORD *)(a1 + 2044);
  ptr = nullptr;
  v16 = 0;
  v17 = 0;
  sub_40CD68((__int64)&ptr, "/proc/%d/task/%d/comm", v6, a3);
  v7 = (const char *)&qword_4B2D48;
  if ( v16 )
    v7 = (const char *)ptr;
  v8 = sub_48DE20(v7);
  v9 = v8;
  if ( v8 )
  {
    sub_490E28(a2, v8);
    sub_4906A0(v9);
    v10 = 1;
  }
  else
  {
    v12 = (const char *)&qword_4B2D48;
    if ( v16 )
      v12 = (const char *)ptr;
    v13 = __errno_location();
    v14 = (const char *)sub_492F00(*v13);
    sub_40AAF0(a1, (__int64)"%s: %s\n", v12, v14);
    v10 = 0;
  }
  if ( ptr )
  {
    v16 = 0;
    j__free(ptr);
  }
  return v10;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
