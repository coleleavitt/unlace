/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_decode
// Address: 0x00000000000ACFEC

//----- (00000000000ACFEC) ----------------------------------------------------
__int64 __fastcall base64_decode(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // x0
  unsigned __int8 *v5; // x20
  __int64 v6; // x19
  int v7; // w22
  unsigned int v8; // w23
  __int64 v9; // x8
  int v10; // w8
  __int64 v11; // x8
  int v12; // w25
  void *v13; // x1
  void *v14; // x0

  result = 0;
  if ( a1 )
  {
    v5 = a2;
    if ( a2 )
    {
      v6 = a3;
      if ( (a3 & 0x8000000000000000LL) == 0 )
      {
        if ( a3 )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            v9 = *v5;
            if ( v9 == 61 )
              break;
            v10 = *((_DWORD *)qword_11B378 + v9);
            if ( v10 < 0 )
              return 0;
            v7 += 6;
            ++v5;
            v8 = v10 | (v8 << 6);
            if ( v7 >= 8 )
            {
              v11 = *(_QWORD *)(a1 + 8);
              v12 = v7;
              do
              {
                v13 = *(void **)a1;
                v12 -= 8;
                if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
                {
                  v14 = qvector_reserve((pthread_mutex_t *)a1, v13, v11 + 1, 1u);
                  v11 = *(_QWORD *)(a1 + 8);
                  v13 = v14;
                  *(_QWORD *)a1 = v14;
                }
                *((_BYTE *)v13 + v11) = v8 >> v12;
                v11 = *(_QWORD *)(a1 + 8) + 1LL;
                *(_QWORD *)(a1 + 8) = v11;
              }
              while ( v12 > 7 );
              v7 &= 7u;
            }
            --v6;
          }
          while ( v6 );
        }
        return 1;
      }
    }
  }
  return result;
}
// 11B378: using guessed type __int64 qword_11B378[128];
