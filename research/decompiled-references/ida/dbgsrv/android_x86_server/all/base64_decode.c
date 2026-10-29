/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_decode
// Address: 0x0009D360

//----- (0009D360) --------------------------------------------------------
__int64 *__cdecl base64_decode(void **a1, unsigned __int8 *a2, int a3)
{
  __int64 *v3; // eax
  unsigned __int8 *v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  void *v11; // eax
  __int64 *v13; // [esp+Ch] [ebp-30h]
  unsigned int v14; // [esp+10h] [ebp-2Ch]
  int v15; // [esp+14h] [ebp-28h]
  char v16; // [esp+1Ch] [ebp-20h]
  int v17; // [esp+24h] [ebp-18h]
  unsigned int v18; // [esp+28h] [ebp-14h]

  v3 = &qword_13ACD8;
  v13 = nullptr;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 )
    {
      v5 = a3;
      if ( a3 >= 0 )
      {
        LOBYTE(v3) = 1;
        v13 = v3;
        if ( a3 )
        {
          v6 = 0;
          v14 = 0;
          do
          {
            v7 = *v4;
            if ( v7 == 61 )
              break;
            v15 = v5;
            v8 = *((_DWORD *)&qword_13ACD8 + v7 - 52704);
            if ( v8 < 0 )
              return nullptr;
            v14 = v8 | (v14 << 6);
            v9 = v6 + 6;
            if ( v6 + 6 < 8 )
            {
              v6 += 6;
            }
            else
            {
              v16 = v6 + 6;
              v10 = (int)a1[1];
              do
              {
                v9 -= 8;
                v18 = v14 >> v9;
                v11 = *a1;
                if ( (unsigned int)a1[2] < v10 + 1 )
                {
                  v17 = v9;
                  v11 = qvector_reserve((int)a1, v11, v10 + 1, 1u);
                  v9 = v17;
                  *a1 = v11;
                  v10 = (int)a1[1];
                }
                *((_BYTE *)v11 + v10) = v18;
                v10 = (int)a1[1] + 1;
                a1[1] = (void *)v10;
              }
              while ( v9 > 7 );
              v6 = v16 & 7;
            }
            ++v4;
            v5 = v15 - 1;
          }
          while ( v15 != 1 );
        }
      }
    }
  }
  return v13;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
