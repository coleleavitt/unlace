void __fastcall sub_1EB14D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // rdx
  void *v10; // rbx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( a2 <= (*(_QWORD *)(a1 + 16) - v2) >> 3 )
    {
      memset(*(void **)(a1 + 8), 0, 8 * a2);
      *(_QWORD *)(a1 + 8) = v2 + 8 * a2;
      return;
    }
    v3 = v2 - *(_QWORD *)a1;
    v4 = v3 >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v3 >> 3) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v5 = v3 >> 3;
    if ( a2 >= v4 )
      v5 = a2;
    v6 = v4 + v5;
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      v6 = 0x1FFFFFFFFFFFFFFFLL;
    v7 = 8 * v6;
    v8 = (char *)operator new(v7);
    memset(&v8[v3], 0, 8 * a2);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(void **)a1;
    if ( v9 == *(_QWORD *)a1 )
    {
      if ( !v10 )
        goto LABEL_13;
    }
    else
    {
      memmove(v8, *(const void **)a1, v9 - (_QWORD)v10);
    }
    operator delete(v10);
LABEL_13:
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = &v8[v7];
    *(_QWORD *)(a1 + 8) = &v8[8 * a2 + 8 * v4];
  }
}
