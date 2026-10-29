/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008458
// Address: 0x0000000100008458

//----- (0000000100008458) ----------------------------------------------------
char *__fastcall sub_100008458(__int64 a1, __int64 *a2)
{
  char *result; // x0
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x12
  unsigned __int64 v8; // x13
  bool v9; // cc
  bool v10; // cf
  __int64 v12; // x20
  void *v13; // x0
  __int64 v14; // x23
  void *v15; // x0

  result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 744LL))(a1);
  v4 = 80 * a2[1];
  if ( v4 )
  {
    v5 = 0;
    v6 = *a2;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + v5);
      v7 = *(_QWORD *)(v6 + v5 + 8);
      v9 = v7 - v8 != vm_page_size || v7 > (unsigned __int64)result;
      v10 = !v9 && v8 >= (unsigned __int64)(result - 0x100000);
      if ( v10 && v4 - 80 != v5 )
      {
        if ( v5 )
        {
          if ( *(_QWORD *)(v6 + v5 + 80) >= (unsigned __int64)result )
          {
            v12 = v6 + v5;
            if ( *(_QWORD *)(v6 + v5 - 72) == v8 )
              break;
          }
        }
      }
      v5 += 80;
      if ( v4 == v5 )
        return result;
    }
    *(_QWORD *)(v12 - 72) = v7;
    v13 = *(void **)(v12 + 40);
    if ( v13 )
    {
      *(_QWORD *)(v6 + v5 + 48) = 0;
      qfree(v13);
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v6 + v5 + 56) = 0;
    }
    v14 = v6 + v5;
    v15 = *(void **)(v6 + v5 + 16);
    if ( v15 )
    {
      *(_QWORD *)(v14 + 24) = 0;
      qfree(v15);
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v6 + v5 + 32) = 0;
    }
    return (char *)memmove((void *)(v6 + v5), (const void *)(v12 + 80), *a2 + 80 * a2[1]-- - v6 - v5 - 80);
  }
  return result;
}
