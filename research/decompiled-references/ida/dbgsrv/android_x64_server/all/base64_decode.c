/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_decode
// Address: 0x00000000000B1520

//----- (00000000000B1520) ----------------------------------------------------
char __fastcall base64_decode(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  char result; // al
  unsigned __int8 *v4; // r12
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebp
  char v10; // r14
  __int64 v11; // rsi
  char *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h]

  result = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 )
    {
      if ( a3 >= 0 )
      {
        result = 1;
        if ( a3 )
        {
          v5 = 0;
          v6 = 0;
          while ( 1 )
          {
            v7 = *v4;
            if ( v7 == 61 )
              return 1;
            v8 = dword_115B84[v7];
            if ( v8 < 0 )
              break;
            v6 = v8 | (v6 << 6);
            v9 = v5 + 6;
            if ( v5 + 6 >= 8 )
            {
              v13 = a3;
              v10 = v5 + 6;
              v11 = *(_QWORD *)(a1 + 8);
              do
              {
                v9 -= 8;
                v12 = *(char **)a1;
                if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
                {
                  v12 = (char *)qvector_reserve(a1, *(char **)a1, v11 + 1, 1u);
                  *(_QWORD *)a1 = v12;
                  v11 = *(_QWORD *)(a1 + 8);
                }
                v12[v11] = v6 >> v9;
                v11 = *(_QWORD *)(a1 + 8) + 1LL;
                *(_QWORD *)(a1 + 8) = v11;
              }
              while ( v9 > 7 );
              v9 = v10 & 7;
              a3 = v13;
            }
            ++v4;
            v5 = v9;
            if ( !--a3 )
              return 1;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
// 115B84: using guessed type int dword_115B84[];
