char __fastcall sub_1DDBB60(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r10
  int v12; // r14d
  int v13; // r13d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 *i; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  char result; // al
  __int64 v23; // rax
  __int64 v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v10 = a3;
  v12 = a5;
  v13 = a4;
  v15 = *a1;
  if ( *(_QWORD *)(v15 + 11280) )
  {
    v16 = *(unsigned int *)(v15 + 11320);
    if ( (_DWORD)v16 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 11312) + (v16 << 6) - 59) )
      {
        v17 = (__int64 *)(a4 + 16 * a5);
        if ( (__int64 *)a4 != v17 )
        {
          for ( i = (__int64 *)a4; v17 != i; i += 2 )
          {
            v19 = *i;
            if ( *i )
            {
              if ( (v19 & 4) != 0 )
              {
                v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v20 )
                {
                  if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x2B )
                  {
                    v25 = a6;
                    v24 = v10;
                    v21 = sub_1DBE010(*(_QWORD *)(v15 + 11280), v20, a3, a4);
                    v10 = v24;
                    a6 = v25;
                    if ( !v21 )
                    {
                      if ( sub_B799A0(v20) )
                      {
                        result = sub_1DD8110(a1, v20, a7, a8);
                        a6 = v25;
                        v10 = v24;
                      }
                      else
                      {
                        v23 = sub_1DD80B0((__int64)a1, v20, 0, 0, 0, a7, a8);
                        v10 = v24;
                        a6 = v25;
                        result = v23 == 0;
                      }
                      if ( result )
                        return result;
                    }
                    v15 = *a1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return sub_1E54D70(v15, a2, v10, v13, v12, a1[4], a6, a9, a10);
}
