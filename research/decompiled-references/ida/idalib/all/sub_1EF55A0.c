__int64 __fastcall sub_1EF55A0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v4; // r9
  __int64 v5; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  _DWORD *v9; // r8
  _DWORD *v10; // rax
  unsigned int v12; // [rsp+Ch] [rbp-1Ch]

  if ( a3 )
  {
    if ( *(_QWORD *)(a2 + 856) )
    {
      v12 = a3;
      sub_1EDF870(a1, a2);
      a3 = v12;
    }
    v4 = *(_DWORD **)(a2 + 2656);
    v5 = 8LL * *(unsigned int *)(a2 + 2664);
    v6 = v4;
    v7 = v5 >> 3;
    if ( v5 )
    {
      do
      {
        while ( 1 )
        {
          v8 = v7 >> 1;
          v9 = &v6[2 * (v7 >> 1)];
          if ( a3 - 1 < *v9 )
            break;
          v6 = v9 + 2;
          v7 = v7 - v8 - 1;
          if ( v7 <= 0 )
          {
            v10 = v9;
            if ( v4 == v6 )
              goto LABEL_12;
            goto LABEL_8;
          }
        }
        v7 >>= 1;
      }
      while ( v8 );
      v10 = v6 - 2;
      if ( v4 != v6 )
        goto LABEL_8;
    }
LABEL_12:
    v10 = &v6[(unsigned __int64)v5 / 4];
LABEL_8:
    a3 += v10[1];
  }
  return sub_1EE3360(a1, a3);
}
