void __fastcall sub_1580EE0(__int64 a1)
{
  unsigned int *v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r13
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi

  operator delete(*(_QWORD *)(a1 + 16), 16LL * *(unsigned int *)(a1 + 32), 8);
  v1 = *(unsigned int **)(a1 + 8);
  if ( v1 )
  {
    v2 = v1[4];
    v3 = *(_QWORD *)v1;
    v4 = 88 * v2;
    if ( (_DWORD)v2 )
    {
      v5 = v3 + 88 * v2;
      do
      {
        if ( *(_QWORD *)v3 != -8192 && *(_QWORD *)v3 != -4096 )
        {
          v6 = *(_QWORD **)(v3 + 8);
          v7 = &v6[4 * *(unsigned int *)(v3 + 16)];
          if ( v6 != v7 )
          {
            do
            {
              v7 -= 4;
              v8 = v7[1];
              if ( v8 )
              {
                v9 = v7[2];
                if ( v9 )
                  sub_1580C40(v9, v8);
              }
            }
            while ( v6 != v7 );
            v7 = *(_QWORD **)(v3 + 8);
          }
          if ( v7 != (_QWORD *)(v3 + 24) )
            free(v7);
        }
        v3 += 88;
      }
      while ( v5 != v3 );
      v3 = *(_QWORD *)v1;
      v4 = 88LL * v1[4];
    }
    operator delete(v3, v4, 8);
    operator delete(v1, 0x18u);
  }
}
