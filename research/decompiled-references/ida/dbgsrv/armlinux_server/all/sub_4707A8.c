/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4707A8
// Address: 0x00000000004707A8

//----- (00000000004707A8) ----------------------------------------------------
__int64 __fastcall sub_4707A8(__int64 a1, unsigned __int8 **a2)
{
  unsigned __int8 *v4; // x2
  unsigned __int8 *v5; // x21
  unsigned __int8 *v6; // x0
  __int64 result; // x0
  size_t v9; // x0
  size_t v10; // x22
  unsigned __int64 v11; // x23
  void *v12; // x0

  v5 = *a2;
  v4 = a2[1];
  if ( v4 <= *a2 )
    goto LABEL_6;
  v6 = v5 + 1;
  if ( *v5 )
  {
    while ( v4 != v6 )
    {
      if ( !*v6++ )
        goto LABEL_8;
    }
    goto LABEL_6;
  }
LABEL_8:
  *a2 = v6;
  if ( !v5 || (v9 = strlen((const char *)v5), (v10 = v9) == 0) )
  {
LABEL_6:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  v11 = v9 + 1;
  v12 = *(void **)a1;
  if ( v11 > *(_QWORD *)(a1 + 16) )
  {
    v12 = sub_491288(a1, *(void **)a1, v11, 1u);
    *(_QWORD *)a1 = v12;
  }
  *(_QWORD *)(a1 + 8) = v11;
  memmove(v12, v5, v10);
  *(_BYTE *)(*(_QWORD *)a1 + v10) = 0;
LABEL_7:
  *(_QWORD *)(a1 + 24) = sub_48E6E8(a2, (unsigned __int64)a2[1]) - 1;
  *(_QWORD *)(a1 + 32) = sub_48E6E8(a2, (unsigned __int64)a2[1]) - 1;
  result = sub_48E6E8(a2, (unsigned __int64)a2[1]) - 1;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
