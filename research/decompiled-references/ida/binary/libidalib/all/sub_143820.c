_QWORD *__fastcall sub_143820(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  size_t v4; // r12
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rax

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
        v8 = *(_QWORD *)(a1[1] + 16LL);
        if ( v8 )
        {
          a1[1] = v8;
          for ( i = *(_QWORD *)(v8 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            a1[1] = i;
            v8 = i;
          }
          v10 = *(_QWORD *)(v8 + 16);
          if ( v10 )
            a1[1] = v10;
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
    if ( v2[4] )
    {
      v2[5] = 0;
      qfree();
    }
    v2[4] = 0;
    *(_OWORD *)(v2 + 5) = 0;
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v6 = operator new(0x40u);
    v4 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v6 + 32) = 0;
    v2 = (_QWORD *)v6;
    *(_OWORD *)(v6 + 40) = 0;
    if ( !v4 )
    {
LABEL_8:
      v2[7] = *(_QWORD *)(a2 + 24);
      return v2;
    }
  }
  v7 = (void *)qalloc_or_throw();
  v2[6] = v4;
  v2[4] = v7;
  memcpy(v7, *(const void **)a2, v4);
  v2[5] = v4;
  v2[7] = *(_QWORD *)(a2 + 24);
  return v2;
}

