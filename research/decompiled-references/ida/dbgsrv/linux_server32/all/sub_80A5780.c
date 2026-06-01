/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5780
// Address: 0x080A5780

//----- (080A5780) --------------------------------------------------------
unsigned __int32 __cdecl sub_80A5780(int a1, int a2, char a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned __int32 result; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned __int32 v11; // ecx
  unsigned int v12; // eax

  v5 = (unsigned int *)(a1 + 12 * a2);
  if ( a3 == 1 )
  {
    v9 = *v5;
    a5[1] = 0;
    *a5 = _byteswap_ulong(v9);
    v10 = v5[1];
    a5[3] = 0;
    v11 = _byteswap_ulong(v10);
    a5[5] = 0;
    a5[2] = (unsigned __int8)v11;
    a5[4] = v11 >> 8;
    v12 = v5[2];
    a5[7] = 0;
    result = _byteswap_ulong(v12);
  }
  else
  {
    v6 = *v5;
    a5[1] = 0;
    *a5 = v6;
    v7 = v5[1];
    a5[3] = 0;
    a5[5] = 0;
    a5[2] = (unsigned __int8)v7;
    a5[4] = v7 >> 8;
    result = v5[2];
    a5[7] = 0;
  }
  a5[6] = result;
  return result;
}
