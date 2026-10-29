void __fastcall sub_7F5070(_QWORD *a1)
{
  _QWORD **v1; // rbx
  _QWORD **i; // r13
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rsi
  int j; // edx

  v1 = (_QWORD **)a1[221];
  if ( v1 )
  {
    for ( i = &v1[*((unsigned int *)v1 - 1)]; i != v1; ++v1 )
    {
      v3 = *v1;
      if ( (unsigned __int8)sub_15D2CB0(a1[18], **v1) )
      {
        v4 = *(_QWORD *)(a1[3] + 3288LL);
        if ( !*(_DWORD *)(v4 + 4LL * (unsigned int)(2 * *((_DWORD *)v3 + 7))) )
        {
          v5 = v3[8];
          if ( v3 == (_QWORD *)v5 )
          {
            v6 = v3[7];
            if ( v3 != (_QWORD *)v6 )
            {
              if ( *(_DWORD *)(v4 + 4LL * (unsigned int)(2 * *(_DWORD *)(v6 + 28))) )
              {
                sub_1872CE0("");
                sub_1873130(114, 42);
              }
              v7 = *(_QWORD *)(v6 + 56);
              if ( v3 != (_QWORD *)v7 )
              {
                v8 = a1[3];
                for ( j = *(_DWORD *)(*(_QWORD *)(v8 + 3288) + 4LL * (unsigned int)(2 * *(_DWORD *)(v7 + 28)));
                      ;
                      j = *(_DWORD *)(*(_QWORD *)(v8 + 3288) + 4LL * (unsigned int)(2 * *(_DWORD *)(v7 + 28))) )
                {
                  if ( j )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 42);
                  }
                  v7 = *(_QWORD *)(v7 + 56);
                  if ( v3 == (_QWORD *)v7 )
                    break;
                }
              }
            }
          }
          else if ( *(_DWORD *)(v4 + 4LL * (unsigned int)(2 * *(_DWORD *)(v5 + 28))) )
          {
            sub_1872CE0("");
            sub_1873130(114, 38);
          }
        }
      }
    }
  }
}

