void __fastcall sub_4DAF20(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v3; // rbp
  void *v4; // r15
  size_t v5; // rbp
  size_t v6; // r14
  unsigned __int64 v7; // r14
  char *v8; // rax
  char *v9; // r12
  _BYTE *v10; // rdi

  if ( a2 )
  {
    v3 = *(_BYTE **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) - (_QWORD)v3 < a2 )
    {
      v4 = *(void **)a1;
      v5 = (size_t)&v3[-*(_QWORD *)a1];
      if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v6 = v5;
      if ( a2 >= v5 )
        v6 = a2;
      v7 = v5 + v6;
      if ( v7 > 0x7FFFFFFFFFFFFFFFLL )
        v7 = 0x7FFFFFFFFFFFFFFFLL;
      v8 = (char *)operator new(v7);
      v9 = v8;
      v8[v5] = 0;
      if ( a2 == 1 )
      {
        if ( !v5 )
          goto LABEL_10;
      }
      else
      {
        memset(&v8[v5 + 1], 0, a2 - 1);
        if ( !v5 )
        {
LABEL_10:
          if ( !v4 )
          {
LABEL_12:
            *(_QWORD *)a1 = v9;
            *(_QWORD *)(a1 + 8) = &v9[v5 + a2];
            *(_QWORD *)(a1 + 16) = &v9[v7];
            return;
          }
LABEL_11:
          operator delete(v4, *(_QWORD *)(a1 + 16) - (_QWORD)v4);
          goto LABEL_12;
        }
      }
      memcpy(v9, v4, v5);
      if ( !v4 )
        goto LABEL_12;
      goto LABEL_11;
    }
    *v3 = 0;
    v10 = v3 + 1;
    if ( a2 != 1 )
    {
      memset(v10, 0, a2 - 1);
      v10 = &v3[a2];
    }
    *(_QWORD *)(a1 + 8) = v10;
  }
}
