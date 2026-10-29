void __fastcall sub_76A890(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = v1 + 32LL * *(_QWORD *)(v1 - 8);
    if ( v1 == v2 )
    {
      v4 = 0;
    }
    else
    {
      do
      {
        v3 = v2;
        v2 -= 32;
        free_idcv(v2);
      }
      while ( *(_QWORD *)(a1 + 24) != v2 );
      v4 = 32LL * *(_QWORD *)(v3 - 40);
    }
    operator delete[]((void *)(v2 - 8), v4 + 8);
  }
  qfree(*(void **)a1);
  qfree(*(void **)(a1 + 16));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
}

