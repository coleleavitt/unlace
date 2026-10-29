/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F9A0
// Address: 0x0043F9A0

//----- (0043F9A0) --------------------------------------------------------
int __cdecl sub_43F9A0(_DWORD *a1, __int16 a2)
{
  char *v2; // edx
  _DWORD *v3; // edi
  unsigned int *v4; // ecx
  unsigned int v5; // eax
  unsigned int v7; // eax
  _BYTE v8[2]; // [esp+Eh] [ebp-2h] BYREF

  v2 = (char *)a1[16];
  v3 = a1 + 16;
  if ( v8 < v2 )
  {
    v4 = a1 + 18;
  }
  else
  {
    v4 = a1 + 18;
    if ( v8 < &v2[2 * a1[18]] )
    {
      v5 = a1[17] + 1;
      if ( v5 > *v4 )
      {
        v2 = (char *)sub_453B00((int)(a1 + 16), v2, v5, 2u);
        *v3 = v2;
      }
      *(_WORD *)&v2[2 * a1[17]++] = a2;
      return 0;
    }
  }
  v7 = a1[17] + 1;
  if ( v7 > *v4 )
  {
    v2 = (char *)sub_453B00((int)(a1 + 16), v2, v7, 2u);
    *v3 = v2;
  }
  *(_WORD *)&v2[2 * a1[17]++] = a2;
  return 0;
}
