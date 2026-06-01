void __fastcall std::vector<unsigned long>::_M_default_append(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdx
  void *v4; // r14
  signed __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3 < a2 )
    {
      v4 = *(void **)a1;
      v5 = (signed __int64)v3 - *(_QWORD *)a1;
      v6 = v5 >> 3;
      if ( 0xFFFFFFFFFFFFFFFLL - (v5 >> 3) < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v7 = v5 >> 3;
      if ( a2 >= v6 )
        v7 = a2;
      v8 = v6 + v7;
      if ( v8 > 0xFFFFFFFFFFFFFFFLL )
        v8 = 0xFFFFFFFFFFFFFFFLL;
      v11 = 8 * v8;
      v9 = (char *)operator new(8 * v8);
      *(_QWORD *)&v9[v5] = 0;
      if ( a2 != 1 )
        memset(&v9[v5 + 8], 0, 8 * (a2 - 1));
      if ( v5 )
      {
        memcpy(v9, v4, v5);
        if ( !v4 )
          goto LABEL_13;
      }
      else if ( !v4 )
      {
LABEL_13:
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = &v9[8 * v6 + 8 * a2];
        *(_QWORD *)(a1 + 16) = &v9[v11];
        return;
      }
      operator delete(v4, *(_QWORD *)(a1 + 16) - (_QWORD)v4);
      goto LABEL_13;
    }
    *v3 = 0;
    v10 = v3 + 1;
    if ( a2 != 1 )
    {
      memset(v3 + 1, 0, 8 * (a2 - 1));
      v10 += a2 - 1;
    }
    *(_QWORD *)(a1 + 8) = v10;
  }
}

