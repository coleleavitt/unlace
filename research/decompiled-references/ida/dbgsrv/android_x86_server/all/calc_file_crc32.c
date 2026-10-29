/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x0009DB80

//----- (0009DB80) --------------------------------------------------------
int __cdecl calc_file_crc32(int a1)
{
  __int64 v1; // rax
  size_t v2; // esi
  size_t v3; // edi
  unsigned int v5; // [esp+0h] [ebp-101Ch]
  int v6; // [esp+4h] [ebp-1018h]
  unsigned __int8 dest[4096]; // [esp+8h] [ebp-1014h] BYREF
  unsigned int v8; // [esp+1008h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  qlseek(a1, 0, 0);
  LODWORD(v1) = qlsize(a1);
  v2 = v1;
  if ( v1 < 1 )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    LODWORD(v1) = 0;
    while ( 1 )
    {
      v5 = HIDWORD(v1);
      v6 = v1;
      v3 = v2;
      if ( __SPAIR64__(HIDWORD(v1), v2) >= 4097 )
        v3 = 4096;
      if ( qlread(__SPAIR64__(dest, a1), v3) != v3 )
        break;
      LODWORD(v1) = sub_BB700(v6, dest, v3);
      HIDWORD(v1) = (__PAIR64__(v5, v2) - v3) >> 32;
      v2 -= v3;
      if ( (v2 != 0) + HIDWORD(v1) <= 0 )
        return v1;
    }
    LODWORD(v1) = -1;
  }
  return v1;
}
// 9DBCD: variable 'v1' is possibly undefined
