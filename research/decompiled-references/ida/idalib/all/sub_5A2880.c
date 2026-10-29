void __fastcall sub_5A2880(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  int v5; // edi
  int i; // esi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  char *v14; // rsi
  void *v15; // rdi
  __int64 v16; // rax

  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = (_QWORD *)v4[4];
      if ( !v7 || (v8 = v7[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      v4 = (__int64 *)(*v7 + 56 * v8 - 56);
    }
  }
  v9 = (_QWORD *)v4[4];
  if ( v9 )
  {
    v10 = v9[1];
    if ( v10 )
      v4 = (__int64 *)(*v9 + 56 * v10 - 56);
  }
  v11 = v4[1];
  if ( v11 )
  {
    LODWORD(v12) = v11 - 1 - a2;
    if ( (int)v12 < 0 )
    {
      a2 = v11 - 1;
    }
    else
    {
      v12 = (unsigned int)v12;
      if ( (_DWORD)v11 - 1 != a2 )
      {
        v13 = (unsigned int)v12 + 1LL;
        if ( v11 >= v13 )
        {
          if ( v11 != (unsigned int)v12 + 1LL )
            v4[1] = v13;
LABEL_15:
          *(_BYTE *)(*v4 + v12) = 0;
          goto LABEL_16;
        }
LABEL_20:
        v14 = (char *)*v4;
        if ( v4[2] < v13 )
        {
          v16 = qvector_reserve(v4, v14, v13, 1);
          v11 = v4[1];
          *v4 = v16;
          v14 = (char *)v16;
        }
        memset(&v14[v11], 0, v13 - v11);
        v4[1] = v13;
        goto LABEL_15;
      }
    }
  }
  else
  {
    LODWORD(v12) = -a2;
    if ( a2 <= 0 )
    {
      v12 = (unsigned int)v12;
      if ( a2 )
      {
        v13 = (unsigned int)v12 + 1LL;
        goto LABEL_20;
      }
    }
    a2 = 0;
  }
  v15 = (void *)*v4;
  if ( *v4 )
  {
    v4[1] = 0;
    qfree(v15);
    *v4 = 0;
    v4[2] = 0;
  }
  v12 = 0;
LABEL_16:
  v4[3] = v12;
  *(_DWORD *)(a1 + 48) -= a2;
}
