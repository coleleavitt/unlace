/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480E00
// Address: 0x0000000000480E00

//----- (0000000000480E00) ----------------------------------------------------
__int64 __fastcall sub_480E00(FILE *a1, char *a2, int a3, int a4)
{
  __int64 v5; // rbx
  char *v7; // rax
  char *v8; // rsi
  char v9; // dl
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a3;
  v11[5] = __readfsqword(0x28u);
  if ( a3 != sub_480BA0(a1, v11, a3) )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v7 = &a2[v5];
    if ( (int)v5 > 0 )
    {
      v8 = (char *)v11;
      do
      {
        v9 = *v8;
        --v7;
        ++v8;
        *v7 = v9;
      }
      while ( a2 != v7 );
    }
  }
  else if ( (int)v5 > 0 )
  {
    memcpy(a2, v11, (unsigned int)v5);
  }
  return 0;
}
