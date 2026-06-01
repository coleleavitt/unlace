/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D880
// Address: 0x000000000003D880

//----- (000000000003D880) ----------------------------------------------------
char __fastcall sub_3D880(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  char result; // al
  unsigned __int64 v7; // rbx
  char v10; // r15
  unsigned __int64 v11; // rcx
  int v12; // r8d
  int v13; // r13d
  int v14; // eax
  __int64 v15; // rcx

  result = 1;
  if ( a5 )
  {
    v7 = a5;
    a6 = (unsigned __int8)a6;
    v10 = a6 ^ 1;
    while ( 1 )
    {
      v11 = 4096 - (a3 & 0xFFF);
      if ( v11 >= v7 )
        LODWORD(v11) = v7;
      v12 = v11;
      if ( v10 )
        v12 = 128;
      if ( (int)v11 <= 128 )
        v12 = v11;
      v13 = a6;
      v14 = sub_3D950(a1, a2, a3, a4, v12, a6);
      if ( v14 < 0 )
        return 0;
      a6 = v13;
      if ( v14 )
      {
        v15 = 0;
        while ( *(_BYTE *)(a4 + v15) )
        {
          if ( (int)++v15 >= v14 )
            goto LABEL_14;
        }
        return 1;
      }
LABEL_14:
      a3 += v14;
      a4 += v14;
      v7 -= v14;
      if ( !v7 )
        return 1;
    }
  }
  return result;
}
