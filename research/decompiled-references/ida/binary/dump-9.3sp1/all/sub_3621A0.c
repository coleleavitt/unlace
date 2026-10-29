void __fastcall sub_3621A0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 **v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // r12
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 i; // r14
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 j; // r14
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, 0, a2, 8);
    v5 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v2;
    v6 = *(__int64 ***)a1;
    v27 = v4;
    v28 = v5;
    v7 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v7 >= 0 )
    {
      v8 = (_QWORD *)v4;
      do
      {
        v9 = *v6;
        *v8 = *v6;
        if ( v9 )
          ++*((_DWORD *)v9 + 26);
        v10 = *v6;
        if ( *v6 )
        {
          if ( (*((_DWORD *)v10 + 26))-- == 1 )
          {
            v12 = *v6;
            if ( *v6 )
            {
              sub_258970(*v6);
              v13 = v12[23];
              if ( v13 )
              {
                v14 = v12[24];
                if ( v14 )
                {
                  for ( i = 0; i != v14; ++i )
                  {
                    v16 = (__int64 *)(v13 + 24 * i);
                    v17 = *v16;
                    if ( *v16 )
                    {
                      v16[1] = 0;
                      v25 = v14;
                      qfree(v17);
                      v13 = v12[23];
                      v14 = v25;
                    }
                  }
                }
                v12[24] = 0;
                qfree(v13);
              }
              v18 = v12[20];
              if ( v18 )
              {
                v12[21] = 0;
                qfree(v18);
              }
              v19 = v12[16];
              if ( v19 )
              {
                v20 = v12[17];
                if ( v20 )
                {
                  for ( j = 0; j != v20; ++j )
                  {
                    v22 = (__int64 *)(v19 + 32 * j);
                    v23 = *v22;
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      v26 = v20;
                      qfree(v23);
                      v19 = v12[16];
                      v20 = v26;
                    }
                  }
                }
                v12[17] = 0;
                qfree(v19);
              }
              sub_255050((__int64)(v12 + 2));
              j__qfree((__int64)v12);
            }
          }
        }
        ++v6;
        ++v8;
      }
      while ( v7-- != 0 );
      v6 = *(__int64 ***)a1;
    }
    qfree((__int64)v6);
    *(_QWORD *)a1 = v27;
    *(_QWORD *)(a1 + 16) = v28;
  }
}
