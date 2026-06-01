/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408370
// Address: 0x00408370

//----- (00408370) --------------------------------------------------------
void __usercall sub_408370(__m128i a1@<xmm0>, const char *a2)
{
  _BYTE *v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // esi
  _BYTE *v5; // eax
  _BYTE *v6; // ecx
  int v7; // esi
  _BYTE *v8; // [esp+10h] [ebp-18h] BYREF
  unsigned int v9; // [esp+14h] [ebp-14h]
  unsigned int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v2 = nullptr;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    if ( v3 != -1 )
    {
      v2 = sub_453B00((int)&v8, nullptr, v3 + 1, 1u);
      v8 = v2;
    }
    v9 = v3 + 1;
    sub_464310((unsigned int)v2, (unsigned int)a2, v3);
    v8[v3] = 0;
  }
  v11 = 1;
  sub_407670((int)&v8, a1, (const __m128i *)"\b", pNodeName);
  if ( v9 <= 1 )
    goto LABEL_20;
  if ( sub_467F80((int)v8, "SYMSRV:  ", 9u) )
  {
    v4 = v9 != 0 ? v9 - 1 : 0;
    if ( v4 + 10 <= v10 )
    {
      v5 = v8;
    }
    else
    {
      v5 = sub_453B00((int)&v8, v8, v4 + 10, 1u);
      v8 = v5;
    }
    v9 = v4 + 10;
    v5[v4 + 9] = 0;
    if ( v4 )
    {
      sub_464310((unsigned int)(v8 + 9), (unsigned int)v8, v4);
      v4 = 0;
    }
    sub_464310((unsigned int)&v8[v4], (unsigned int)"SYMSRV:  ", 9u);
  }
  v6 = v8;
  v7 = v9 != 0 ? v9 - 1 : 0;
  if ( !v7 || v8[v7 - 1] != 10 )
  {
    if ( v7 + 2 > v10 )
    {
      v6 = sub_453B00((int)&v8, v8, v7 + 2, 1u);
      v8 = v6;
    }
    v9 = v7 + 2;
    v6[v7] = 10;
    v8[v7 + 1] = 0;
    v6 = v8;
  }
  if ( (dword_4B70EC & 0x10000) != 0 )
  {
    sub_402760(&dword_489384);
LABEL_20:
    v6 = v8;
  }
  v11 = 3;
  if ( v6 )
  {
    v9 = 0;
    sub_453A20(v6);
  }
}
// 40841A: conditional instruction was optimized away because %var_14.4>=2u
// 489384: using guessed type int dword_489384;
// 4B70EC: using guessed type int dword_4B70EC;
