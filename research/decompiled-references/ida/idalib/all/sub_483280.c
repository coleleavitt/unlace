__int64 __fastcall sub_483280(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // rax
  __int64 v6; // rbp
  size_t v7; // r12
  void *v8; // rax

  if ( a3 < *(_QWORD *)(a2 + 48) && (v3 = 32 * a3, *(_BYTE *)(*(_QWORD *)(a2 + 40) + 32 * a3 + 24)) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v6 = *(_QWORD *)(a2 + 40) + v3;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v8 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8));
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = v8;
      memcpy(v8, *(const void **)v6, v7);
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v4 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 1;
    *v4 = 0;
  }
  return a1;
}
