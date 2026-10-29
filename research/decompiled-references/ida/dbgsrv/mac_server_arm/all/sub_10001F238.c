/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F238
// Address: 0x000000010001F238

//----- (000000010001F238) ----------------------------------------------------
__int64 __fastcall sub_10001F238(char *a1, __int64 a2)
{
  char *idcv_attr; // x0
  char *v4; // x20
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x23
  void *v8; // x0

  idcv_attr = last_idcv_attr(a1);
  if ( idcv_attr )
  {
    v4 = idcv_attr;
    v5 = strlen(idcv_attr);
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
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return 0;
}
