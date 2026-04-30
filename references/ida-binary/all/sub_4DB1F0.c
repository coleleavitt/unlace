void __fastcall sub_4DB1F0(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v3; // rdx
  void *v4; // r14
  signed __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rbp
  _DWORD *v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v3 = *(_DWORD **)(a1 + 8);
    if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 2 < a2 )
    {
      v4 = *(void **)a1;
      v5 = (signed __int64)v3 - *(_QWORD *)a1;
      v6 = v5 >> 2;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v5 >> 2) < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v7 = v5 >> 2;
      if ( a2 >= v6 )
        v7 = a2;
      v8 = v6 + v7;
      if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
        v8 = 0x1FFFFFFFFFFFFFFFLL;
      v11 = 4 * v8;
      v9 = (char *)operator new(4 * v8);
      *(_DWORD *)&v9[v5] = 0;
      if ( a2 != 1 )
        memset(&v9[v5 + 4], 0, 4 * (a2 - 1));
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
        *(_QWORD *)(a1 + 8) = &v9[4 * v6 + 4 * a2];
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
      memset(v3 + 1, 0, 4 * (a2 - 1));
      v10 += a2 - 1;
    }
    *(_QWORD *)(a1 + 8) = v10;
  }
}
