/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4320B8
// Address: 0x00000000004320B8

//----- (00000000004320B8) ----------------------------------------------------
__int64 __fastcall sub_4320B8(__int64 a1, __int64 a2)
{
  const char *v3; // x0
  const char *v4; // x22
  size_t v5; // x21
  void *v6; // x0

  if ( !*(_QWORD *)(a1 + 48) )
  {
    v3 = sub_4442E8(a1, (char *)&qword_4B2D48);
    v4 = v3;
    if ( v3 )
      goto LABEL_3;
LABEL_8:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 0;
  }
  v3 = sub_4442E8(a1, *(char **)(a1 + 40));
  v4 = v3;
  if ( !v3 )
    goto LABEL_8;
LABEL_3:
  v5 = strlen(v3);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v5 )
  {
    v6 = sub_491288(a2 + 8, nullptr, v5 + 1, 1u);
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 16) = v5 + 1;
    memmove(v6, v4, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
