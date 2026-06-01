__int64 __fastcall sub_374790(__int64 a1, __int64 a2)
{
  const char *idcv_attr; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax

  idcv_attr = (const char *)last_idcv_attr();
  if ( idcv_attr )
  {
    v3 = idcv_attr;
    v4 = strlen(idcv_attr);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v5 = v4;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v4 )
    {
      v7 = v4 + 1;
      v8 = (void *)qvector_reserve(a2 + 8, 0, v4 + 1, 1);
      *(_QWORD *)(a2 + 16) = v7;
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v8, v3, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
}
