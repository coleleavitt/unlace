/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A105
// Address: 0x0047A105

//----- (0047A105) --------------------------------------------------------
int __usercall sub_47A105@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        double *a3,
        char *a4,
        int a5,
        _BYTE *a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  int v10; // eax
  unsigned int v11; // ecx
  int result; // eax
  int v13; // [esp+8h] [ebp-Ch] BYREF
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v10 = sub_47F276(a2, *a3, a8, 0, &v13, a6, a7);
  v11 = -1;
  if ( a5 != -1 )
    v11 = a5 - (v13 == 45);
  result = sub_47F193(a1, (unsigned int)&a4[v13 == 45], v11, a8 + v14, &v13, v10, a10);
  if ( !result )
    return sub_47A198(a4, a5, a8, (int)&v13, 0, a9);
  *a4 = 0;
  return result;
}
