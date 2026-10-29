/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CDE30
// Address: 0x00000000000CDE30

//----- (00000000000CDE30) ----------------------------------------------------
unsigned __int64 __fastcall sub_CDE30(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  char v5; // r10
  unsigned int v6; // r14d
  int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // edx

  v3 = 0x80000000;
  v4 = 0x80000000;
  if ( a3 )
  {
    v5 = 3;
    v6 = 0x80000000;
    while ( (a3 & 1) == 0 )
    {
      v4 = v6;
LABEL_10:
      a3 >>= 1;
      ++v5;
      v6 = v4;
      if ( !a3 )
        goto LABEL_11;
    }
    v7 = *((_DWORD *)qword_1188E0 + (v5 & 0x1F));
    v4 = 0;
    v8 = 0x80000000;
    if ( v7 < 0 )
      goto LABEL_9;
    while ( 1 )
    {
      do
      {
        v8 >>= 1;
        v9 = (v6 >> 1) ^ 0xEDB88320;
        if ( (v6 & 1) == 0 )
          v9 = v6 >> 1;
        v6 = v9;
      }
      while ( (v7 & v8) == 0 );
LABEL_9:
      v4 ^= v6;
      if ( (v7 & (v8 - 1)) == 0 )
        goto LABEL_10;
    }
  }
LABEL_11:
  v10 = 0;
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_15;
  do
  {
    do
    {
      v3 >>= 1;
      v11 = (a1 >> 1) ^ 0xEDB88320;
      if ( (a1 & 1) == 0 )
        v11 = a1 >> 1;
      a1 = v11;
    }
    while ( (v4 & v3) == 0 );
LABEL_15:
    v10 ^= a1;
  }
  while ( (v4 & (v3 - 1)) != 0 );
  return v10 ^ (unsigned __int64)a2;
}
// 1188E0: using guessed type __int64 qword_1188E0[16];
