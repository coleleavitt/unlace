/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AC91
// Address: 0x0047AC91

//----- (0047AC91) --------------------------------------------------------
int __cdecl sub_47AC91(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  bool v11; // al
  int v12; // esi
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  int result; // eax
  bool v20; // sf
  int v21; // [esp+Ch] [ebp-8h] BYREF
  bool v22; // [esp+13h] [ebp-1h]

  v21 = 0;
  v11 = sub_46C933(a3);
  v22 = v11;
  if ( a2 == 1 )
  {
    if ( v11 )
      v12 = dword_4A7AF8[a4];
    else
      v12 = dword_4A7AC4[a4];
    v13 = v12 + 1;
    v14 = (365 * a3 - 25546 + v13 + sub_46CBFB(a3)) % 7;
    v15 = a6 + 7 * a5 - v14 + v13;
    if ( v14 <= a6 )
      v15 -= 7;
    if ( v22 )
      v16 = dword_4A7AFC[a4];
    else
      v16 = dword_4A7AC8[a4];
    if ( a5 == 5 && v15 > v16 )
      v15 -= 7;
  }
  else
  {
    if ( v11 )
      v17 = dword_4A7AF8[a4];
    else
      v17 = dword_4A7AC4[a4];
    v15 = a7 + v17;
  }
  v18 = 1000 * (a10 + 60 * (a9 + 60 * a8));
  result = v18 + a11;
  if ( !a1 )
  {
    dword_4B62C4 = v15;
    dword_4B62C8 = v18 + a11;
    dword_4B62C0 = a3;
    return result;
  }
  dword_4B62D4 = v18 + a11;
  dword_4B62D0 = v15;
  if ( sub_47AA1F(a3, a4, &v21) )
  {
    sub_467F04(a3, a4);
    __debugbreak();
  }
  v20 = 1000 * v21 + dword_4B62D4 < 0;
  result = 1000 * v21 + dword_4B62D4;
  dword_4B62D4 = result;
  if ( v20 )
  {
    result += 86400000;
    --dword_4B62D0;
LABEL_24:
    dword_4B62D4 = result;
    goto LABEL_25;
  }
  if ( result >= 86400000 )
  {
    result -= 86400000;
    ++dword_4B62D0;
    goto LABEL_24;
  }
LABEL_25:
  dword_4B62CC = a3;
  return result;
}
// 4A7AC4: using guessed type int dword_4A7AC4[];
// 4A7AC8: using guessed type int dword_4A7AC8[];
// 4A7AF8: using guessed type int dword_4A7AF8[];
// 4A7AFC: using guessed type int dword_4A7AFC[];
// 4B62C0: using guessed type int dword_4B62C0;
// 4B62C4: using guessed type int dword_4B62C4;
// 4B62C8: using guessed type int dword_4B62C8;
// 4B62CC: using guessed type int dword_4B62CC;
// 4B62D0: using guessed type int dword_4B62D0;
// 4B62D4: using guessed type int dword_4B62D4;
