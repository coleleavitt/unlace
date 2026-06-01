/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FBA8
// Address: 0x000000010001FBA8

//----- (000000010001FBA8) ----------------------------------------------------
__int64 __fastcall sub_10001FBA8(__int64 a1, __int64 a2)
{
  const char *v3; // x20
  size_t v4; // x0
  size_t v5; // x21
  unsigned __int64 v6; // x23
  void *v7; // x0

  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(const char **)(a1 + 8);
    if ( !v3 )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      return 0;
    }
  }
  else
  {
    v3 = &byte_100075A30;
  }
  v4 = strlen(v3);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( v4 == -1 )
    {
      v7 = nullptr;
    }
    else
    {
      v7 = qvector_reserve((_QWORD *)(a2 + 8), nullptr, v6, 1u);
      *(_QWORD *)(a2 + 8) = v7;
    }
    *(_QWORD *)(a2 + 16) = v6;
    memmove(v7, v3, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
