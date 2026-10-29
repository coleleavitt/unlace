/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024690
// Address: 0x0000000100024690

//----- (0000000100024690) ----------------------------------------------------
__int64 __fastcall sub_100024690(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  const char *idcv_attr; // rax
  const char *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r12
  void *v9; // rdi

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  else
    v3 = _s1;
  idcv_attr = prev_idcv_attr(a1, v3);
  if ( idcv_attr )
  {
    v5 = idcv_attr;
    v6 = strlen(idcv_attr);
    *(_BYTE *)a2 = 7;
    *(_OWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v6 )
    {
      v7 = v6;
      v8 = v6 + 1;
      if ( v6 == -1 )
      {
        v9 = nullptr;
      }
      else
      {
        v9 = qvector_reserve(a2 + 8, nullptr, v6 + 1, 1u);
        *(_QWORD *)(a2 + 8) = v9;
      }
      *(_QWORD *)(a2 + 16) = v8;
      memmove(v9, v5, v7);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v7) = 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_OWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  return 0;
}
