unsigned __int64 *__fastcall sub_5C93A0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  char v5; // al
  unsigned __int64 *v6; // rdi
  int v7; // eax
  unsigned __int64 *v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 *v13; // rdx

  v5 = sub_5C7820(a1, a2, 1);
  v6 = nullptr;
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 128);
    if ( a3 == -1 || !v7 )
      return nullptr;
    v8 = *(unsigned __int64 **)(a2 + 136);
    v9 = 2LL * v7;
    v10 = &v8[v9];
    v11 = (v9 * 8) >> 4;
    if ( v9 <= 0 )
    {
      if ( a3 >= *v8 )
      {
        v6 = *(unsigned __int64 **)(a2 + 136);
        if ( a3 >= v8[1] )
          return nullptr;
      }
    }
    else
    {
      v6 = *(unsigned __int64 **)(a2 + 136);
      do
      {
        while ( 1 )
        {
          v12 = v11 >> 1;
          v13 = &v6[2 * (v11 >> 1)];
          if ( a3 >= *v13 && (a3 != *v13 || v13[1] < a3) )
            break;
          v11 >>= 1;
          if ( v12 <= 0 )
            goto LABEL_11;
        }
        v6 = v13 + 2;
        v11 = v11 - 1 - v12;
      }
      while ( v11 > 0 );
LABEL_11:
      if ( v10 == v6 || a3 < *v6 || a3 >= v6[1] )
      {
        if ( v8 != v6 && a3 >= *(v6 - 2) && a3 < *(v6 - 1) )
        {
          v6 -= 2;
          return v6;
        }
        return nullptr;
      }
    }
  }
  return v6;
}
