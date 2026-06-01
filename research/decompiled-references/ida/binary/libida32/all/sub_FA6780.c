_QWORD *__fastcall sub_FA6780(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  void *v4; // rdi
  __int64 v5; // r12

  v2 = a1[14];
  if ( v2 )
  {
    v3 = (__int64)(a1 + 12);
    while ( 1 )
    {
      sub_FA6710(v3, *(_QWORD **)(v2 + 24));
      v4 = *(void **)(v2 + 56);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 == (void *)(v2 + 72) )
      {
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      else
      {
        free(v4);
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  a1[14] = 0;
  a1[15] = a1 + 13;
  a1[16] = a1 + 13;
  a1[17] = 0;
  return a1 + 13;
}

