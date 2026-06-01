__int64 __fastcall sub_4FED90(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rbp
  unsigned int v3; // edx
  int v5; // eax
  __int64 v6; // rsi
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = sub_4FED00((unsigned int **)a1, a2);
  v3 = 0;
  if ( v2 != (unsigned int *)(*(_QWORD *)a1 + 17LL * *(_QWORD *)(a1 + 8)) && a2 >= *v2 && a2 < v2[1] )
  {
    sub_4FCEA0(*(unsigned int *)(a1 + 56), v2, 184);
    v5 = ea2node(*v2);
    v6 = *(_QWORD *)(a1 + 32);
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve(a1 + 32, v6, v8 + 1, 4);
      *(_QWORD *)(a1 + 32) = v10;
      v6 = v10;
      v8 = *(_QWORD *)(a1 + 40);
    }
    *(_DWORD *)(v6 + 4 * v8) = v7;
    v9 = *(_QWORD *)(a1 + 8);
    ++*(_QWORD *)(a1 + 40);
    memmove(v2, (char *)v2 + 17, *(_QWORD *)a1 + 17 * v9 - (_QWORD)v2 - 17);
    --*(_QWORD *)(a1 + 8);
    v3 = 1;
    *(_QWORD *)(a1 + 24) = v2;
  }
  return v3;
}

