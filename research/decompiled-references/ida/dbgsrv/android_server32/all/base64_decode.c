/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_decode
// Address: 0x00071B78

//----- (00071B78) --------------------------------------------------------
int __fastcall base64_decode(void **a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v5; // r4
  unsigned int v6; // r5
  int v7; // r0
  int v8; // r3
  char v9; // r3
  int v10; // r0
  void *v11; // r1
  char v12; // [sp+8h] [bp-Ch]
  unsigned __int8 *v13; // [sp+Ch] [bp-8h]
  int v14; // [sp+10h] [bp-4h]

  result = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 >= 0 )
      {
        result = 1;
        if ( a3 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            v7 = *a2;
            if ( v7 == 61 )
              break;
            v8 = dword_C6230[v7];
            ++a2;
            result = 0;
            if ( v8 < 0 )
              return result;
            v6 = v8 | (v6 << 6);
            v9 = v5;
            v5 += 6;
            if ( v5 >= 8 )
            {
              v13 = a2;
              v14 = a3;
              v10 = (int)a1[1];
              v12 = v9 + 6;
              do
              {
                v5 -= 8;
                v11 = *a1;
                if ( (unsigned int)a1[2] < v10 + 1 )
                {
                  v11 = qvector_reserve((int)a1, v11, v10 + 1, 1u);
                  *a1 = v11;
                  v10 = (int)a1[1];
                }
                *((_BYTE *)v11 + v10) = v6 >> v5;
                v10 = (int)a1[1] + 1;
                a1[1] = (void *)v10;
              }
              while ( v5 > 7 );
              v5 = v12 & 7;
              a3 = v14;
              a2 = v13;
            }
            --a3;
          }
          while ( a3 );
          return 1;
        }
      }
    }
  }
  return result;
}
// C6230: using guessed type int dword_C6230[66];
