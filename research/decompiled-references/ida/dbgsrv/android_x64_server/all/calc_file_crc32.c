/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x00000000000B1B30

//----- (00000000000B1B30) ----------------------------------------------------
__int64 __fastcall calc_file_crc32(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbx
  _QWORD v6[519]; // [rsp+0h] [rbp-1038h] BYREF

  v6[513] = __readfsqword(0x28u);
  v1 = 0;
  qlseek(a1, 0, 0);
  v2 = qlsize(a1);
  if ( v2 > 0 )
  {
    v3 = v2;
    v1 = 0;
    while ( 1 )
    {
      v4 = 4096;
      if ( (unsigned __int64)v3 < 0x1000 )
        v4 = v3;
      if ( qlread(a1, v6, v4) != v4 )
        break;
      v1 = sub_CDD40(v1, v6, v4);
      v3 -= v4;
      if ( v3 <= 0 )
        return v1;
    }
    return (unsigned int)-1;
  }
  return v1;
}
