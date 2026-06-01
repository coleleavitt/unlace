/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C070
// Address: 0x0047C070

//----- (0047C070) --------------------------------------------------------
int __cdecl sub_47C070(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  int v7; // edi
  int v8; // esi
  __int64 v9; // kr00_8
  unsigned int v10; // eax
  int result; // eax
  int v12; // [esp+10h] [ebp-40h]
  int v13; // [esp+14h] [ebp-3Ch] BYREF
  int v14; // [esp+18h] [ebp-38h] BYREF
  int v15; // [esp+1Ch] [ebp-34h] BYREF
  __int64 v16; // [esp+20h] [ebp-30h]
  _DWORD v17[9]; // [esp+28h] [ebp-28h] BYREF

  v7 = a1 - 1900;
  if ( a1 - 1900 >= 70
    && (unsigned int)v7 <= 0x44D
    && (unsigned int)(a2 - 1) <= 0xB
    && sub_46CB1F(a1 - 1900, a2 - 1, a3)
    && a4 <= 0x17
    && a5 <= 0x3B
    && a6 <= 0x3B )
  {
    v8 = a3 + dword_4A7AC4[a2];
    if ( sub_46C933(v7) && a2 > 2 )
      ++v8;
    sub_47B33A(v7);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( sub_47A9F3(a2, v7, &v13) || sub_47AA1F(a2, v7, &v14) || sub_47AA4B(a2, v7, &v15) )
    {
      sub_467F04(a2, v7);
      __debugbreak();
    }
    v9 = 31536000LL * v7 + 86400LL * v8 + 86400LL * sub_46CBFB(v7);
    v16 = v15 + 60LL * (int)a5 + 3600LL * (int)a4 + v9;
    v10 = (unsigned __int64)((int)a6 + v16) >> 32;
    LODWORD(v16) = a6 + v16;
    v16 = __PAIR64__(v10, v16) - 2207520000u;
    result = v16 + v14;
    v12 = v16 + v14;
    if ( a7 != 1 )
    {
      v17[4] = a2 - 1;
      v17[2] = a4;
      v17[7] = v8;
      v17[5] = a1 - 1900;
      v17[1] = a5;
      v17[0] = a6;
      if ( a7 == -1 && v13 && sub_47B397(a2, v7, v17) )
        return v12;
      else
        return v16;
    }
  }
  else
  {
    *sub_46B984() = 22;
    return -1;
  }
  return result;
}
// 4A7AC4: using guessed type int dword_4A7AC4[];
