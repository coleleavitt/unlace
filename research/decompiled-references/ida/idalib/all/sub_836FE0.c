void __fastcall sub_836FE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  size_t v5; // rbp
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  v3 = *(_QWORD *)(v2 + 8);
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = v3;
  v4 = *(unsigned int *)(v2 + 16);
  *(_QWORD *)(a1 + 48) = v4;
  if ( v4 )
  {
    if ( v3 > 0 )
    {
      v5 = ((v3 + v4 - 1) / v4 + 7) >> 3;
      *(_QWORD *)(a1 + 40) = qalloc(v3);
      v6 = (void *)qalloc(v5);
      *(_QWORD *)(a1 + 32) = v6;
      if ( v6 && *(_QWORD *)(a1 + 40) )
      {
        memset(v6, 0, v5);
      }
      else
      {
        qfree(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0;
        qfree(*(void **)(a1 + 32));
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
}
