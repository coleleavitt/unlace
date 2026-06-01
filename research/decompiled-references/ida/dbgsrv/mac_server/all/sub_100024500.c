/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024500
// Address: 0x0000000100024500

//----- (0000000100024500) ----------------------------------------------------
__int64 __fastcall sub_100024500(__int64 a1, __int64 a2)
{
  const char *idcv_attr; // rax
  const char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r12
  void *v7; // rdi

  idcv_attr = last_idcv_attr(a1);
  if ( idcv_attr )
  {
    v3 = idcv_attr;
    v4 = strlen(idcv_attr);
    *(_BYTE *)a2 = 7;
    *(_OWORD *)(a2 + 8) = 0;
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
        v7 = qvector_reserve(a2 + 8, nullptr, v4 + 1, 1u);
        *(_QWORD *)(a2 + 8) = v7;
      }
      *(_QWORD *)(a2 + 16) = v6;
      memmove(v7, v3, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
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
