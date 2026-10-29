/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FB40
// Address: 0x000000000009FB40

//----- (000000000009FB40) ----------------------------------------------------
__int64 __fastcall sub_9FB40(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  const char *v3; // rdi
  _QWORD *v4; // rax
  void *v5; // rbx

  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 488) )
      v3 = *(const char **)(a1 + 480);
    else
      v3 = s1;
    v2 = 0;
    v4 = open_linput(v3, 0);
    if ( v4 )
    {
      v5 = v4;
      v2 = calc_file_crc32((__int64)v4);
      close_linput(v5);
      LOBYTE(v2) = v2 == a2;
    }
  }
  else
  {
    LOBYTE(v2) = 1;
  }
  return v2;
}
// 9FB94: variable 'v2' is possibly undefined
