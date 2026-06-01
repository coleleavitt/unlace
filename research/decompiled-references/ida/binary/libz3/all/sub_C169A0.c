__int64 __fastcall sub_C169A0(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi

  result = *a1;
  if ( *a1 )
  {
    v4 = 24LL * a2;
    v6 = (__int64 *)(result + v4);
    v7 = 24LL * *(unsigned int *)(result - 4);
    v8 = (__int64 *)(result + v7);
    if ( v4 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v11 = v6[1];
          v12 = *v6;
          if ( v11 )
          {
            v10 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v10 )
            {
              sub_15D7BC0(v12, v11);
              v12 = *v6;
            }
          }
          v9 = v6[2];
          if ( v9 )
          {
            v10 = (*(_DWORD *)(v9 + 8))-- == 1;
            if ( v10 )
              break;
          }
          v6 += 3;
          if ( v6 == v8 )
            goto LABEL_11;
        }
        sub_15D7BC0(v12, v9);
        v6 += 3;
      }
      while ( v6 != v8 );
LABEL_11:
      result = *a1;
    }
    *(_DWORD *)(result - 4) = a2;
  }
  return result;
}

