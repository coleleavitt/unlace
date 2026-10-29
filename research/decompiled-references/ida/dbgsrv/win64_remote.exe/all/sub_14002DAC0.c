/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DAC0
// Address: 0x000000014002DAC0

//----- (000000014002DAC0) ----------------------------------------------------
const char *__fastcall sub_14002DAC0(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  const char *v3; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // rdi
  int v7; // r11d
  unsigned int *v8; // r10
  unsigned __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rax

  v3 = nullptr;
  if ( a3 )
  {
    v5 = 0;
    v6 = a1[15];
    v7 = 0;
    if ( v6 )
    {
      v8 = (unsigned int *)a1[14];
      do
      {
        if ( *v8 > a2 )
          break;
        v5 = v8[1];
        ++v7;
        v8 += 2;
      }
      while ( v7 < v6 );
    }
    *a3 = v5;
  }
  v9 = a1[12];
  v10 = 0;
  if ( v9 )
  {
    v11 = a1[11];
    do
    {
      if ( *(_DWORD *)v11 > a2 )
        break;
      v3 = Str1;
      if ( *(_QWORD *)(v11 + 16) )
        v3 = *(const char **)(v11 + 8);
      ++v10;
      v11 += 32;
    }
    while ( v10 < v9 );
  }
  return v3;
}
