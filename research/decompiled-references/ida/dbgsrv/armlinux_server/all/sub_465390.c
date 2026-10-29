/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465390
// Address: 0x0000000000465390

//----- (0000000000465390) ----------------------------------------------------
size_t __fastcall sub_465390(int a1, __int64 a2, char *a3, __int64 *a4)
{
  unsigned int v7; // w21
  int v8; // w25
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  size_t v12; // x0
  void *v13; // x0
  size_t v14; // x20
  __int64 v16[4]; // [xsp+50h] [xbp-440h] BYREF
  void *ptr[3]; // [xsp+70h] [xbp-420h] BYREF
  char v18[1024]; // [xsp+88h] [xbp-408h] BYREF

  if ( a1 )
  {
    if ( a1 <= 0 )
    {
      v7 = 52;
      v8 = 52;
    }
    else
    {
      v7 = 54;
      v8 = 54;
    }
  }
  else
  {
    v7 = 53;
    v8 = 53;
  }
  sub_479010(v7, (__int64 *)ptr);
  v9 = a4[2];
  v10 = a4[3];
  v11 = a4[1];
  v16[0] = *a4;
  v16[1] = v11;
  v16[2] = v9;
  v16[3] = v10;
  sub_49B318(v18, 0x400u, a3, v16);
  v12 = strlen(v18);
  sub_4630F0((__int64)ptr, v18, v12 + 1);
  v13 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)a2 + 16LL))(a2, v7, ptr);
  j__free(v13);
  if ( v8 == 52 )
    exit(1);
  v14 = strlen(v18);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    j__free(ptr[0]);
  }
  return v14;
}
