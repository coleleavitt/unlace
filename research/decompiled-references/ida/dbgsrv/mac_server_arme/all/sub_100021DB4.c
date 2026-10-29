/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021DB4
// Address: 0x0000000100021DB4

//----- (0000000100021DB4) ----------------------------------------------------
__int64 __fastcall sub_100021DB4(__int64 a1, __int64 a2)
{
  char *v3; // x0
  char *v4; // x20
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x23
  void *v8; // x0
  char *__s; // [xsp+0h] [xbp-50h] BYREF
  __int64 v11; // [xsp+8h] [xbp-48h]
  __int64 v12; // [xsp+10h] [xbp-40h]

  __s = nullptr;
  v11 = 0;
  v12 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_10007AE40;
  compile_idc_file((__int64)v3, (__int64)&__s, 3);
  if ( v11 )
  {
    v4 = __s;
    if ( !__s )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v4 = &byte_10007AE40;
  }
  v5 = strlen(v4);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v5 )
  {
    v6 = v5;
    v7 = v5 + 1;
    if ( v5 == -1 )
    {
      v8 = nullptr;
    }
    else
    {
      v8 = qvector_reserve((_QWORD *)(a2 + 8), nullptr, v7, 1u);
      *(_QWORD *)(a2 + 8) = v8;
    }
    *(_QWORD *)(a2 + 16) = v7;
    memmove(v8, v4, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
  }
LABEL_13:
  if ( __s )
  {
    v11 = 0;
    qfree(__s);
  }
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
