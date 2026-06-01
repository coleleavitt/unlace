__int64 __fastcall sub_120310(__int64 a1, __int64 a2)
{
  size_t v2; // rbp
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // rsi
  void *v8; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
  {
    v3 = 2;
    v4 = 3;
    goto LABEL_3;
  }
  v8 = (void *)qalloc_or_throw();
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v8;
  memcpy(v8, *(const void **)a2, v2);
  *(_QWORD *)(a1 + 8) = v2;
  v6 = *(_BYTE **)a1;
  if ( v2 - 1 <= 1 )
  {
    v3 = v2 + 1;
    v4 = v2 + 2;
    --v2;
    if ( *(_QWORD *)(a1 + 16) >= v4 )
    {
LABEL_4:
      *(_QWORD *)(a1 + 8) = v4;
      v6[v3] = 0;
      if ( !v2 )
      {
LABEL_5:
        **(_WORD **)a1 = 8228;
        return a1;
      }
LABEL_10:
      memmove((void *)(*(_QWORD *)a1 + 2LL), *(const void **)a1, v2);
      goto LABEL_5;
    }
LABEL_3:
    v5 = qvector_reserve();
    *(_QWORD *)a1 = v5;
    v6 = (_BYTE *)v5;
    goto LABEL_4;
  }
  if ( *v6 != 36 || v6[1] != 32 )
  {
    v3 = v2 + 1;
    v4 = v2 + 2;
    if ( *(_QWORD *)(a1 + 16) >= v2 + 2 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v6[v2-- + 1] = 0;
      goto LABEL_10;
    }
    --v2;
    goto LABEL_3;
  }
  return a1;
}

