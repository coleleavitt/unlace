/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E000
// Address: 0x000000000045E000

//----- (000000000045E000) ----------------------------------------------------
__int64 __fastcall sub_45E000(__int64 a1)
{
  unsigned int v1; // r12d
  int v2; // r13d
  int v3; // ebx
  __int64 v4; // r15
  const char *v5; // r14

  v1 = (*(__int64 (**)(void))(a1 + 88))();
  if ( (_BYTE)v1 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( v2 > 0 )
    {
      v3 = 0;
      v4 = *(_QWORD *)(a1 + 104) + 16LL;
      do
      {
        while ( !*(_QWORD *)(v4 + 8) )
        {
LABEL_6:
          ++v3;
          v4 += 120;
          if ( v2 == v3 )
            return v1;
        }
        v5 = *(const char **)v4;
        if ( strcmp(*(const char **)v4, ".debug_info") )
        {
          if ( !strcmp(v5, ".debug_types") )
            *(_DWORD *)(a1 + 176) = v3;
          goto LABEL_6;
        }
        *(_DWORD *)(a1 + 172) = v3++;
        v4 += 120;
      }
      while ( v2 != v3 );
    }
  }
  return v1;
}
