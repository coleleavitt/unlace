/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B3BC
// Address: 0x0004B3BC

//----- (0004B3BC) --------------------------------------------------------
char *__fastcall sub_4B3BC(char *a1, int a2, char *a3, int a4, char a5)
{
  char *v8; // r0
  char *v9; // r8
  _BOOL4 v10; // r0
  unsigned __int8 v12[4084]; // [sp+Ch] [bp-1008h] BYREF

  if ( a3 )
    sub_76BD4((char *)v12, 0x1000u, a3);
  else
    sub_76FD0((char *)v12, 0x1000u);
  v8 = sub_76B98(a1, a2, v12, a4, 0);
  v9 = v8;
  if ( a5 )
    v10 = sub_4B228((unsigned __int8 *)a1, a2);
  else
    v10 = sub_7756C((int)v8);
  if ( v10 )
    return v9;
  else
    return nullptr;
}
