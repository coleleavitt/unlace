/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480BAD
// Address: 0x00480BAD

//----- (00480BAD) --------------------------------------------------------
int __usercall sub_480BAD@<eax>(char a1@<fpstat>)
{
  int v1; // esi
  unsigned int v2; // edx
  int v3; // ecx

  if ( dword_4B7844 >= 1 )
    v2 = _mm_getcsr() & 0x3F;
  else
    v2 = 0;
  v3 = (2 * ((v2 >> 4) & 1)) | (4 * ((v2 >> 3) & 1)) | (8 * ((v2 >> 2) & 1)) | (32 * ((v2 >> 1) & 1));
  v1 = ((unsigned __int8)(a1 & 0x3F) >> 5)
     | (16 * (a1 & 1))
     | (2 * (((unsigned __int8)(a1 & 0x3F) >> 4) & 1))
     | (4 * (((unsigned __int8)(a1 & 0x3F) >> 3) & 1))
     | (8 * (((unsigned __int8)(a1 & 0x3F) >> 2) & 1))
     | (32 * (((unsigned __int8)(a1 & 0x3F) >> 1) & 1));
  return v1 | (v2 >> 5) | (16 * (v2 & 1)) | v3 | ((v1 | (((v2 >> 5) | (16 * (v2 & 1)) | v3) << 8)) << 16);
}
// 4B7844: using guessed type int dword_4B7844;
