__int64 __fastcall calc_file_crc32(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v7[521]; // [rsp+0h] [rbp-1048h] BYREF

  v7[513] = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlsize(a1);
  if ( v1 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = v1;
    v3 = 0;
    while ( 1 )
    {
      v4 = 4096;
      if ( (unsigned __int64)v2 <= 0x1000 )
        v4 = v2;
      v5 = qlread(a1, v7, v4);
      if ( v5 != v4 )
        break;
      v2 -= v5;
      v3 = calc_crc32(v3, v7, v5);
      if ( v2 <= 0 )
        return v3;
    }
    return (unsigned int)-1;
  }
}

