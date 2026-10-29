/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E1B0
// Address: 0x000000000043E1B0

//----- (000000000043E1B0) ----------------------------------------------------
bool __fastcall sub_43E1B0(__int64 a1, char *a2, __int64 *a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  const char *v9; // x0
  __int64 v10; // x0
  int v11; // w4
  int v12; // w5
  int v13; // w6
  int v14; // w7
  char v15; // [xsp+0h] [xbp-20h]

  if ( !a1 || *(_BYTE *)a1 != 7 )
    return (unsigned int)sub_44D010(a1, a2, a3, 0, a5, a6, a7, a8, v15) == 0;
  if ( *(_QWORD *)(a1 + 16) )
    v9 = *(const char **)(a1 + 8);
  else
    v9 = (const char *)&qword_4B2D48;
  v10 = sub_43E198(v9);
  return (unsigned int)sub_44D010(v10, a2, a3, 0, v11, v12, v13, v14, v15) == 0;
}
// 43E1C8: variable 'v15' is possibly undefined
// 43E1F8: variable 'v11' is possibly undefined
// 43E1F8: variable 'v12' is possibly undefined
// 43E1F8: variable 'v13' is possibly undefined
// 43E1F8: variable 'v14' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
