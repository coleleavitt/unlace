/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_445F40
// Address: 0x00445F40

//----- (00445F40) --------------------------------------------------------
void __usercall sub_445F40(char a1@<bl>, int a2, unsigned int a3, _DWORD *a4)
{
  __int16 *v4; // eax
  unsigned __int8 *v5; // edi
  signed int v6; // esi
  int v7; // edx
  unsigned __int8 *v8; // ebx
  int v9; // ecx
  int v10; // eax
  unsigned __int8 *v11; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v11 = (unsigned __int8 *)sub_453B00((int)&v11, nullptr, 9u, 1u);
  v12 = 9;
  sub_464310((unsigned int)v11, a3, 8u);
  v11[8] = 0;
  v4 = &word_4B69CE;
  v5 = v11;
  if ( v12 )
    v4 = (__int16 *)v11;
  v14 = 1;
  if ( *(_BYTE *)v4 == 47 )
  {
    v6 = sub_469088(a1, (int)v11, v11 + 1);
    if ( v6 > 0 && v6 < ((a4[1] - 1) & (unsigned int)-(a4[1] != 0)) )
      sub_401590((int)&v11, (const char *)(v6 + *a4));
    v5 = v11;
  }
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(unsigned __int8 **)a2;
  v9 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = v12;
  v10 = v13;
  *(_DWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = v10;
  v11 = v8;
  v12 = v7;
  v13 = v9;
  v14 = 2;
  if ( v8 )
  {
    v12 = 0;
    sub_453A20(v8);
  }
}
// 4B69CE: using guessed type __int16 word_4B69CE;
