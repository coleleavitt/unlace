/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4238B0
// Address: 0x004238B0

//----- (004238B0) --------------------------------------------------------
int __stdcall sub_4238B0(int a1, const char *a2)
{
  _BYTE *v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // eax
  int **v5; // ecx
  int v6; // esi
  _BYTE *v8; // [esp+10h] [ebp-18h] BYREF
  unsigned int v9; // [esp+14h] [ebp-14h]
  int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return sub_45CC20(1532);
  v2 = nullptr;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    if ( v3 != -1 )
    {
      v2 = sub_453B00((int)&v8, nullptr, v3 + 1, 1u);
      v4 = v3 + 1;
      v8 = v2;
    }
    v9 = v4;
    sub_464310((unsigned int)v2, (unsigned int)a2, v3);
    v8[v3] = 0;
  }
  v5 = *(int ***)(a1 + 8);
  v11 = 1;
  if ( sub_41FD80(v5, (int)&v8) )
  {
    v6 = 0;
  }
  else
  {
    sub_45CB10(0, a2);
    v6 = sub_45CC20(1538);
  }
  v11 = 3;
  if ( v8 )
  {
    v9 = 0;
    sub_453A20(v8);
  }
  return v6;
}
