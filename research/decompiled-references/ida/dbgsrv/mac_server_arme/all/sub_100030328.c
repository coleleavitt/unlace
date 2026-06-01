/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030328
// Address: 0x0000000100030328

//----- (0000000100030328) ----------------------------------------------------
void __fastcall sub_100030328(__int64 a1, const void *a2, const char *a3)
{
  __int64 v6; // x20
  size_t v7; // x0
  size_t v8; // x22
  unsigned __int64 v9; // x23
  _QWORD *v10; // x1
  size_t v11; // x0
  size_t v12; // x21
  unsigned __int64 v13; // x22
  _QWORD *v14; // x1

  sub_1000309B8((_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96) + 1LL);
  v6 = *(_QWORD *)(a1 + 88) + 48LL * *(_QWORD *)(a1 + 96);
  *(_OWORD *)(v6 + 16) = 0u;
  *(_OWORD *)(v6 + 32) = 0u;
  *(_OWORD *)v6 = 0u;
  ++*(_QWORD *)(a1 + 96);
  if ( a2 && (v7 = strlen((const char *)a2)) != 0 )
  {
    v8 = v7;
    v9 = v7 + 1;
    v10 = *(_QWORD **)v6;
    if ( *(_QWORD *)(v6 + 16) < v7 + 1 )
    {
      v10 = qvector_reserve((_QWORD *)v6, v10, v9, 1u);
      *(_QWORD *)v6 = v10;
    }
    *(_QWORD *)(v6 + 8) = v9;
    memmove(v10, a2, v8);
    *(_BYTE *)(*(_QWORD *)v6 + v8) = 0;
    if ( !a3 )
      goto LABEL_12;
  }
  else
  {
    *(_QWORD *)(v6 + 8) = 0;
    if ( !a3 )
    {
LABEL_12:
      *(_QWORD *)(v6 + 32) = 0;
      return;
    }
  }
  v11 = strlen(a3);
  if ( !v11 )
    goto LABEL_12;
  v12 = v11;
  v13 = v11 + 1;
  v14 = *(_QWORD **)(v6 + 24);
  if ( *(_QWORD *)(v6 + 40) < v11 + 1 )
  {
    v14 = qvector_reserve((_QWORD *)(v6 + 24), v14, v13, 1u);
    *(_QWORD *)(v6 + 24) = v14;
  }
  *(_QWORD *)(v6 + 32) = v13;
  memmove(v14, a3, v12);
  *(_BYTE *)(*(_QWORD *)(v6 + 24) + v12) = 0;
}
