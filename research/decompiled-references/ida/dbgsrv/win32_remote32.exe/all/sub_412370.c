/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412370
// Address: 0x00412370

//----- (00412370) --------------------------------------------------------
int __userpurge sub_412370@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, char *lpBaseAddress, __m128i *a4)
{
  int v6; // [esp+Ch] [ebp-114h] BYREF
  __int16 Buffer; // [esp+10h] [ebp-110h] BYREF
  __m128i v8[16]; // [esp+14h] [ebp-10Ch] BYREF

  v6 = 0;
  if ( sub_40C190(a1, a2, lpBaseAddress, &Buffer, 4u, 0, 0) == 4
    && (Buffer != 23117 || sub_40C190(a1, a2, lpBaseAddress + 60, &v6, 4u, 0, 0) == 4)
    && sub_40C190(a1, a2, &lpBaseAddress[v6], v8, 0x108u, 0, 0) == 264
    && sub_414870(a2, a4, v8, 1, 1)
    && a4->m128i_i32[0] == 17744 )
  {
    return v6;
  }
  else
  {
    return -1;
  }
}
