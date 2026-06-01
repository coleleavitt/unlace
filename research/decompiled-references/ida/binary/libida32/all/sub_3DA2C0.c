void __fastcall sub_3DA2C0(__int64 a1)
{
  unsigned __int64 v1; // rax
  _BYTE *v3; // rdi
  unsigned __int64 v4; // r12
  _BYTE *v5; // rbx
  _BYTE *v6; // r13
  const void *v7; // rsi
  void *v8; // rdi
  unsigned __int64 v9; // r14
  size_t v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _BYTE *v14; // r13
  __int64 v15; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 > 1 )
  {
    v3 = *(_BYTE **)a1;
    v4 = (unsigned __int64)&v3[v1 - 1];
    if ( (unsigned __int64)v3 >= v4 )
    {
      v6 = &v3[v1 - 1];
    }
    else
    {
      v5 = &v3[v1 - 1];
      do
      {
        while ( (unsigned __int8)(*v3 - 1) <= 3u )
        {
          v3 = (_BYTE *)((__int64 (*)(void))tag_skipcode)();
          if ( (unsigned __int64)v3 >= v4 )
            goto LABEL_12;
        }
        if ( *v3 == 32 )
        {
          if ( (_BYTE *)v4 == v5 )
            v5 = v3;
        }
        else
        {
          v5 = (_BYTE *)v4;
        }
        ++v3;
      }
      while ( (unsigned __int64)v3 < v4 );
LABEL_12:
      if ( (unsigned __int64)v5 >= v4 )
      {
        v3 = *(_BYTE **)a1;
        v6 = v5;
      }
      else
      {
        v6 = v5;
        do
        {
          while ( (unsigned __int8)(*v5 - 1) > 3u )
          {
            if ( (unsigned __int64)++v5 >= v4 )
              goto LABEL_17;
          }
          v7 = v5;
          v8 = v6;
          v9 = tag_skipcode(v5);
          v10 = v9 - (_QWORD)v5;
          v5 = (_BYTE *)v9;
          v6 += v10;
          memmove(v8, v7, v10);
        }
        while ( v9 < v4 );
LABEL_17:
        v3 = *(_BYTE **)a1;
      }
    }
    v11 = v6 - v3;
    if ( v6 == v3 )
    {
      if ( v3 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v3);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v11 + 1;
      if ( v12 < v11 + 1 )
      {
        if ( *(_QWORD *)(a1 + 16) < v13 )
        {
          v15 = qvector_reserve(a1, v3, v11 + 1, 1);
          *(_QWORD *)a1 = v15;
          v3 = (_BYTE *)v15;
          v12 = *(_QWORD *)(a1 + 8);
        }
        memset(&v3[v12], 0, v13 - v12);
        v14 = *(_BYTE **)a1;
        *(_QWORD *)(a1 + 8) = v13;
        v14[v11] = 0;
      }
      else
      {
        if ( v13 != v12 )
          *(_QWORD *)(a1 + 8) = v13;
        *v6 = 0;
      }
    }
  }
}

