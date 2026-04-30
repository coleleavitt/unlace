_QWORD *__fastcall sub_30B8B0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  size_t v5; // r12
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rdx
  __int64 i; // rax
  __int64 v11; // rax

  v2 = (_QWORD *)a1[1];
  if ( v2 )
  {
    v3 = v2[1];
    a1[1] = v3;
    if ( v3 )
    {
      if ( v2 == *(_QWORD **)(v3 + 24) )
      {
        *(_QWORD *)(v3 + 24) = 0;
        v9 = *(_QWORD *)(a1[1] + 16LL);
        if ( v9 )
        {
          a1[1] = v9;
          for ( i = *(_QWORD *)(v9 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            a1[1] = i;
            v9 = i;
          }
          v11 = *(_QWORD *)(v9 + 16);
          if ( v11 )
            a1[1] = v11;
        }
      }
      else
      {
        *(_QWORD *)(v3 + 16) = 0;
      }
    }
    else
    {
      *a1 = 0;
    }
    v4 = v2[4];
    if ( v4 )
    {
      v2[5] = 0;
      qfree(v4, (const char *)a2);
    }
    v2[4] = 0;
    *(_OWORD *)(v2 + 5) = 0;
    v5 = *(_QWORD *)(a2 + 8);
    if ( !v5 )
      goto LABEL_8;
    v8 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
  }
  else
  {
    v7 = operator new(0x40u);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v7 + 32) = 0;
    v2 = (_QWORD *)v7;
    *(_OWORD *)(v7 + 40) = 0;
    if ( !v5 )
    {
LABEL_8:
      v2[7] = *(_QWORD *)(a2 + 24);
      return v2;
    }
    v8 = (void *)qalloc_or_throw(v5);
  }
  v2[6] = v5;
  v2[4] = v8;
  memcpy(v8, *(const void **)a2, v5);
  v2[5] = v5;
  v2[7] = *(_QWORD *)(a2 + 24);
  return v2;
}
