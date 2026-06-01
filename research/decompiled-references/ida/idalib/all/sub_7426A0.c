unsigned __int64 __fastcall sub_7426A0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r12
  int v8; // r14d
  unsigned __int16 *v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  size_t v12; // r8
  unsigned int v13; // r9d
  unsigned __int64 result; // rax
  __int16 v15; // [rsp+Ch] [rbp-3Ch]

  v4 = a1 + 6;
  v5 = 6LL * *(__int16 *)(a1 + 4);
  v6 = a1 + 6 + v5;
  if ( a2 >= *(_DWORD *)(a1 - 8) )
    goto LABEL_15;
  v7 = a1;
  v8 = a3;
  v9 = (unsigned __int16 *)(a1 + a2);
  a3 = (unsigned __int64)v9 + (int)a3;
  v10 = *v9;
  if ( v10 <= v8 )
  {
    if ( !under_debugger )
      interr(848);
    BUG();
  }
  v15 = *(_WORD *)(a1 + 4);
  *(_WORD *)a3 = v10 - v8;
  v6 = *(unsigned __int16 *)(v6 + 4);
  a1 = *(unsigned int *)(a1 - 8);
  v11 = (unsigned int)(v8 + v6);
  v12 = a2 - (unsigned int)v6;
  v13 = v6;
  if ( (unsigned int)v11 >= (unsigned int)v6 )
    v13 = v8 + v6;
  if ( v13 >= (unsigned int)a1
    || (unsigned int)a1 - v13 < v12
    || (unsigned int)v6 >= (unsigned int)a1
    || (v6 += v7, (unsigned int)v11 >= (unsigned int)a1) )
  {
LABEL_15:
    sub_743130(a1, v6, a3);
  }
  a1 = v7 + v11;
  result = (unsigned __int64)memmove((void *)(v7 + v11), (const void *)v6, v12);
  a3 = a2 + v8;
  if ( v15 >= 0 )
  {
    do
    {
      result = *(unsigned __int16 *)(v4 + 4);
      if ( (unsigned __int16)result < (unsigned __int16)(a2 + v8) )
      {
        result = (unsigned int)(v8 + result);
        v6 = (unsigned __int16)result;
        if ( *(_DWORD *)(v7 - 8) < (unsigned int)(unsigned __int16)result )
          goto LABEL_15;
        *(_WORD *)(v4 + 4) = result;
      }
      v4 += 6;
    }
    while ( v4 != v7 + v5 + 12 );
  }
  return result;
}
