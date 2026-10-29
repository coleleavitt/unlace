/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: range_t_print
// Address: 0x000B7E70

//----- (000B7E70) --------------------------------------------------------
unsigned int __cdecl range_t_print(int *a1, _BYTE *a2, int a3)
{
  int v3; // edx
  char *v4; // edi
  int v5; // esi
  unsigned int v6; // esi
  int v8; // [esp+14h] [ebp-38h]
  int v9[4]; // [esp+18h] [ebp-34h] BYREF
  int v10; // [esp+28h] [ebp-24h] BYREF
  int v11; // [esp+2Ch] [ebp-20h]
  int v12; // [esp+30h] [ebp-1Ch]
  unsigned int v13; // [esp+38h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  if ( a1 )
  {
    v3 = *a1;
    v8 = a1[1];
  }
  else
  {
    v3 = -1;
    v8 = -1;
  }
  sub_B7FF0((int)&v10, v3);
  v4 = (char *)v10;
  v5 = v11;
  sub_B7FF0((int)v9, v8);
  if ( !v5 )
    v4 = byte_EF875;
  v6 = qsnprintf(a2, a3, "%s..%s", (int)v4);
  if ( v9[0] )
  {
    v9[1] = 0;
    qfree((void *)v9[0]);
    v9[0] = 0;
    v9[2] = 0;
  }
  if ( v10 )
  {
    v11 = 0;
    qfree((void *)v10);
    v10 = 0;
    v12 = 0;
  }
  return v6;
}
