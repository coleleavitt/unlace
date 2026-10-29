void __fastcall sub_204C540(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // r13d
  unsigned int i; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 j; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 == a1 + 48 )
  {
    nullsub_1553();
  }
  else
  {
    if ( !v2 )
      BUG();
    v3 = v2 - 24;
    if ( (unsigned int)*(unsigned __int8 *)(v2 - 24) - 30 <= 0xA )
    {
      v4 = a2;
      v5 = sub_2090540(v3);
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = sub_20905E0(v3, i);
          v8 = *(_QWORD *)(v7 + 56);
          for ( j = v7 + 48; j != v8; v8 = *(_QWORD *)(v8 + 8) )
          {
            if ( !v8 )
              BUG();
            if ( *(_BYTE *)(v8 - 24) != 84 )
              break;
            if ( (*(_DWORD *)(v8 - 20) & 0x7FFFFFF) != 0 )
            {
              v10 = (_QWORD *)(*(_QWORD *)(v8 - 32) + 32LL * *(unsigned int *)(v8 + 48));
              v11 = (__int64)&v10[*(_DWORD *)(v8 - 20) & 0x7FFFFFF];
              do
              {
                while ( a1 != *v10 )
                {
                  if ( (_QWORD *)v11 == ++v10 )
                    goto LABEL_17;
                }
                *v10++ = v4;
              }
              while ( (_QWORD *)v11 != v10 );
            }
LABEL_17:
            ;
          }
        }
      }
    }
  }
}
