/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55310
// Address: 0x00055310

//----- (00055310) --------------------------------------------------------
int __fastcall sub_55310(int a1)
{
  int v1; // r7
  int v2; // r4
  double v4; // r2

  v1 = a1 + 268;
  v2 = *(_DWORD *)(a1 + 276);
  if ( v2 != a1 + 268 )
  {
    do
    {
      while ( (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 148))(
                a1,
                *(_DWORD *)(v2 + 20),
                v2 + 24,
                *(unsigned __int8 *)(v2 + 32),
                0) )
      {
        v2 = sub_81478(v2);
        if ( v2 == v1 )
          goto LABEL_6;
      }
      sub_171B0((int)"Failed to restore broken breakpoint at 0x%a\n", v4);
      v2 = sub_81478(v2);
    }
    while ( v2 != v1 );
  }
LABEL_6:
  sub_18CB8(a1 + 264, *(_DWORD **)(a1 + 272));
  *(_DWORD *)(a1 + 276) = v1;
  *(_DWORD *)(a1 + 280) = v1;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  return 1;
}
// 5535C: variable 'v4' is possibly undefined
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
