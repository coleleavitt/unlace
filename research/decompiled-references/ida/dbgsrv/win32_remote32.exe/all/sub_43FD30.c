/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FD30
// Address: 0x0043FD30

//----- (0043FD30) --------------------------------------------------------
int __cdecl sub_43FD30(unsigned int *a1)
{
  char v1; // cl
  char *v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  char *v9; // [esp+Ch] [ebp-10h] BYREF
  char v10; // [esp+10h] [ebp-Ch] BYREF
  char v11[7]; // [esp+11h] [ebp-Bh] BYREF

  v1 = 0;
  v2 = (char *)*a1;
  v3 = *a1;
  v4 = *a1 + 1;
  if ( v4 >= *a1 && v4 <= a1[1] )
  {
    *a1 = v4;
    v3 = v4;
    v1 = *v2;
  }
  v10 = v1;
  if ( v1 < 0 )
  {
    if ( (v1 & 0xC0) == 0xC0 )
    {
      v5 = ((v1 & 0xE0) == 0xE0) + 4;
      v6 = ((v1 & 0xE0) == 0xE0) + 3;
    }
    else
    {
      v5 = 2;
      v6 = 1;
    }
    v7 = v3 + v6;
    if ( v3 + v6 >= v3 && v7 <= a1[1] )
    {
      *a1 = v7;
      sub_464310((unsigned int)v11, v3, v6);
    }
  }
  else
  {
    v5 = 1;
  }
  v9 = &v10;
  return sub_4541E0((unsigned __int8 **)&v9, (unsigned int)&v11[v5 - 1]);
}
