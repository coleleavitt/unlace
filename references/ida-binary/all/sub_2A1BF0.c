_QWORD *__fastcall sub_2A1BF0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  __int64 i; // rax
  __int64 v14; // rax

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
        v12 = *(_QWORD *)(a1[1] + 16LL);
        if ( v12 )
        {
          a1[1] = v12;
          for ( i = *(_QWORD *)(v12 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            a1[1] = i;
            v12 = i;
          }
          v14 = *(_QWORD *)(v12 + 16);
          if ( v14 )
            a1[1] = v14;
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
    v4 = v2[7];
    if ( v4 )
    {
      v2[8] = 0;
      qfree(v4, a2);
    }
    v2[4] = *(_QWORD *)a2;
    v2[5] = *((_QWORD *)a2 + 1);
    v5 = *((_QWORD *)a2 + 2);
    v2[7] = 0;
    v2[6] = v5;
    *((_OWORD *)v2 + 4) = 0;
    v6 = *((_QWORD *)a2 + 4);
    if ( !v6 )
      return v2;
  }
  else
  {
    v8 = (_QWORD *)operator new(0x50u);
    v6 = *((_QWORD *)a2 + 4);
    v2 = v8;
    v9 = *(_QWORD *)a2;
    v2[7] = 0;
    v2[4] = v9;
    v10 = *((_QWORD *)a2 + 1);
    *((_OWORD *)v2 + 4) = 0;
    v2[5] = v10;
    v2[6] = *((_QWORD *)a2 + 2);
    if ( !v6 )
      return v2;
  }
  v11 = (void *)qalloc_or_throw(8 * v6);
  v2[9] = v6;
  v2[7] = v11;
  memcpy(v11, *((const void **)a2 + 3), 8 * v6);
  v2[8] = v6;
  return v2;
}
