unsigned __int8 *__fastcall sub_562CE0(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned __int8 *result; // rax
  unsigned int v8; // eax
  unsigned __int16 *v9; // rax
  int v10; // r11d
  unsigned __int16 *v11; // rsi
  int i; // r10d
  int v13; // edx
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  unsigned __int8 *v17; // rax
  int v18; // edx

  if ( a3 <= 0xFFFDu )
  {
    if ( (unsigned int)a3 >= *(_DWORD *)(a1 + 12) )
      __assert_fail("symbol < self->token_count", "lib/src/./language.c", 0x53u, "ts_language_table_entry");
    v8 = *(_DWORD *)(a1 + 24);
    if ( a2 < v8 )
    {
      v16 = 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 2LL * (*(_DWORD *)(a1 + 4) * a2 + (unsigned int)a3));
    }
    else
    {
      v9 = (unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 2LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 4LL * (a2 - v8)));
      v10 = *v9;
      v11 = v9 + 1;
      if ( (_WORD)v10 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v13 = v11[1];
          v14 = v11 + 2;
          if ( (_WORD)v13 )
          {
            v15 = &v11[v13 + 2];
            do
            {
              if ( a3 == *v14++ )
              {
                v16 = 8LL * *v11;
                goto LABEL_12;
              }
            }
            while ( v15 != v14 );
            v11 = v15;
          }
          else
          {
            v11 += 2;
          }
        }
      }
      v16 = 0;
    }
LABEL_12:
    v17 = (unsigned __int8 *)(*(_QWORD *)(a1 + 64) + v16);
    v18 = *v17;
    result = v17 + 8;
    *(_DWORD *)(a4 + 8) = v18;
    LOBYTE(v18) = *(result - 7);
    *(_QWORD *)a4 = result;
    *(_BYTE *)(a4 + 12) = v18;
  }
  else
  {
    *(_DWORD *)(a4 + 8) = 0;
    *(_BYTE *)(a4 + 12) = 0;
    *(_QWORD *)a4 = 0;
    return nullptr;
  }
  return result;
}
