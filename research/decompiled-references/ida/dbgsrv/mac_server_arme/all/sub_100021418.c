/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021418
// Address: 0x0000000100021418

//----- (0000000100021418) ----------------------------------------------------
__int64 __fastcall sub_100021418(__int64 a1, __int64 a2)
{
  char *v3; // x22
  char *v4; // x0
  char *v5; // x20
  char *v6; // x21
  size_t v7; // x23
  void *v8; // x0
  void *v10; // [xsp+0h] [xbp-50h] BYREF
  size_t v11; // [xsp+8h] [xbp-48h]
  __int64 v12; // [xsp+10h] [xbp-40h]

  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_10007AE40;
  v4 = strchr(v3, 61);
  if ( v4 )
  {
    v5 = v4;
    v10 = nullptr;
    v11 = 0;
    v6 = &byte_10007AE40;
    v12 = 0;
    v7 = v4 - v3;
    if ( v4 != v3 )
    {
      if ( v7 == -1 )
      {
        v8 = nullptr;
      }
      else
      {
        v8 = qvector_reserve(&v10, nullptr, v7 + 1, 1u);
        v10 = v8;
      }
      v11 = v7 + 1;
      memmove(v8, v3, v7);
      *((_BYTE *)v10 + v7) = 0;
      if ( v11 )
        v6 = (char *)v10;
    }
    *(_QWORD *)(a2 + 8) = qsetenv(v6, v5 + 1);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
  }
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
