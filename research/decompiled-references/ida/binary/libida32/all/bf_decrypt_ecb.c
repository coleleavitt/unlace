unsigned __int64 __fastcall bf_decrypt_ecb(unsigned __int64 *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  _DWORD *v6; // rsi
  int v7; // eax
  unsigned __int32 v8; // edx
  unsigned int v9; // eax
  unsigned __int32 v10; // r9d
  int v11; // eax
  int v12; // edx
  unsigned __int64 result; // rax

  v4 = *a2;
  v5 = a2[1];
  v6 = a3 + 17;
  v7 = _byteswap_ulong(v4);
  v8 = _byteswap_ulong(v5);
  do
  {
    v9 = *v6 ^ v7;
    v10 = v8;
    --v6;
    v8 = v9;
    v7 = v10 ^ (a3[(unsigned __int8)v9 + 786] + (a3[BYTE1(v9) + 530] ^ (a3[BYTE2(v9) + 274] + a3[HIBYTE(v9) + 18])));
  }
  while ( a3 + 1 != v6 );
  v11 = a3[1] ^ v7;
  v12 = *a3 ^ v8;
  result = HIBYTE(v12)
         | ((BYTE2(v12)
           | ((BYTE1(v12)
             | (((unsigned __int8)v12
               | ((HIBYTE(v11)
                 | ((BYTE2(v11) | ((((unsigned __int64)(unsigned __int8)v11 << 8) | BYTE1(v11)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  *a1 = result;
  return result;
}

