/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431FB0
// Address: 0x0000000000431FB0

//----- (0000000000431FB0) ----------------------------------------------------
__int64 __fastcall sub_431FB0(__int64 a1, __int64 a2)
{
  const char *v2; // x21
  size_t v5; // x22
  __int64 v6; // x20
  void *v7; // x0

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = (const char *)&qword_4B2D48;
    if ( &qword_4B2D48 )
      goto LABEL_3;
LABEL_8:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 0;
  }
  v2 = *(const char **)(a1 + 8);
  if ( !v2 )
    goto LABEL_8;
LABEL_3:
  v5 = strlen(v2);
  *(_BYTE *)a2 = 7;
  v6 = a2 + 8;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  if ( v5 )
  {
    v7 = sub_491288(v6, nullptr, v5 + 1, 1u);
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(v6 + 8) = v5 + 1;
    memmove(v7, v2, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
