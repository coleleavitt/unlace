__int64 __fastcall sub_516950(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbp
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (__int64 *)sub_5168B0((unsigned __int64 **)a1, a2);
  v3 = 0;
  if ( v2 != (__int64 *)(*(_QWORD *)a1 + 33LL * *(_QWORD *)(a1 + 8)) && a2 >= *v2 && a2 < v2[1] )
  {
    sub_514A20(*(unsigned int *)(a1 + 56), v2, 184);
    v5 = ea2node(*v2);
    v6 = *(_QWORD *)(a1 + 32);
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve(a1 + 32, v6, v8 + 1, 8);
      *(_QWORD *)(a1 + 32) = v10;
      v6 = v10;
      v8 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(v6 + 8 * v8) = v7;
    v9 = *(_QWORD *)(a1 + 8);
    ++*(_QWORD *)(a1 + 40);
    memmove(v2, (char *)v2 + 33, *(_QWORD *)a1 + 33 * v9 - (_QWORD)v2 - 33);
    --*(_QWORD *)(a1 + 8);
    v3 = 1;
    *(_QWORD *)(a1 + 24) = v2;
  }
  return v3;
}
