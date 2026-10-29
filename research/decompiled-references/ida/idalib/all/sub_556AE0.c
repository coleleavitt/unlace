__int64 __fastcall sub_556AE0(__int64 a1, __int64 a2, int a3)
{
  size_t v4; // rbp
  void *v5; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == 1 )
  {
    v4 = *(_QWORD *)(a2 + 144);
    if ( v4 )
    {
      v5 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 144));
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)a1 = v5;
      memcpy(v5, *(const void **)(a2 + 136), v4);
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
  return a1;
}
