/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A1E0
// Address: 0x0044A1E0

//----- (0044A1E0) --------------------------------------------------------
int __cdecl sub_44A1E0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // edi
  char v6; // bl
  unsigned int *v7; // esi
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  unsigned int v10; // [esp-Ch] [ebp-38h]
  _BYTE v11[5]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v12[3]; // [esp+11h] [ebp-1Bh] BYREF
  _BYTE v13[5]; // [esp+14h] [ebp-18h] BYREF
  _BYTE v14[3]; // [esp+19h] [ebp-13h] BYREF
  _BYTE v15[10]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v16[2]; // [esp+26h] [ebp-6h] BYREF

  result = a1;
  v5 = 0;
  if ( a3 > 0 )
  {
    v6 = 1;
    v7 = (unsigned int *)(a2 + 8);
    do
    {
      if ( !a4 || (result = v5 >> 3, ((unsigned __int8)v6 & *(_BYTE *)((v5 >> 3) + a4)) != 0) )
      {
        v8 = sub_4540B0(v11, (unsigned int)v12, *(v7 - 2) + 3);
        sub_401600(a1, (unsigned int)v11, v8 - v11);
        result = *(v7 - 2);
        if ( result == -2 )
        {
          v10 = sub_454140(v15, (unsigned int)v16, *v7 + 1, (unsigned __int64)(*(_QWORD *)v7 + 1LL) >> 32) - v15;
          result = sub_401600(a1, (unsigned int)v15, v10);
        }
        else if ( result != -3 )
        {
          v9 = sub_4540B0(v13, (unsigned int)v14, v7[1]);
          sub_401600(a1, (unsigned int)v13, v9 - v13);
          result = sub_401600(a1, *v7, v7[1]);
        }
      }
      ++v5;
      v6 = __ROL1__(v6, 1);
      v7 += 6;
    }
    while ( (int)v5 < a3 );
  }
  return result;
}
