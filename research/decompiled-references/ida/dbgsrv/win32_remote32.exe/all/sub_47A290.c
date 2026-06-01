/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A290
// Address: 0x0047A290

//----- (0047A290) --------------------------------------------------------
int __usercall sub_47A290@<eax>(
        __m128i a1@<xmm0>,
        double *a2,
        char *a3,
        unsigned int a4,
        _BYTE *a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  BOOL v11; // edx
  unsigned int v12; // eax
  const char *v13; // esi
  int result; // eax
  int v15; // eax
  int v16; // [esp+Ch] [ebp-14h] BYREF
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = sub_47F276(a1, *a2, a7, 0, &v16, a5, a6);
  v11 = v16 == 45;
  v19 = v17 - 1;
  v12 = -1;
  v13 = &a3[v11];
  if ( a4 != -1 )
    v12 = a4 - v11;
  result = sub_47F193((int)a3, (unsigned int)&a3[v11], v12, a7, &v16, v20, a10);
  if ( result )
  {
    *a3 = 0;
  }
  else
  {
    v15 = v17 - 1;
    if ( v17 - 1 < -4 || v15 >= a7 )
    {
      return sub_479FBD((int)a3, a3, a4, a7, a8, a9, (int)&v16, 1u, a11);
    }
    else
    {
      if ( v19 < v15 )
        v13[strlen(v13) - 1] = 0;
      return sub_47A198(a3, a4, a7, (int)&v16, 1, a11);
    }
  }
  return result;
}
