/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4629C8
// Address: 0x00000000004629C8

//----- (00000000004629C8) ----------------------------------------------------
__int64 __fastcall sub_4629C8(__int64 result)
{
  int v1; // w20
  __int64 v2; // x22
  int v3; // w25
  __int64 v4; // x19
  const char *v5; // x21

  if ( (int)*(_QWORD *)(result + 112) > 0 )
  {
    v1 = 0;
    v2 = result;
    v3 = *(_QWORD *)(result + 112);
    v4 = *(_QWORD *)(result + 104) + 16LL;
    do
    {
      while ( 1 )
      {
        v5 = (const char *)&qword_4B2D48;
        if ( *(_QWORD *)(v4 + 8) )
          v5 = *(const char **)v4;
        result = strcmp(v5, ".debug_info");
        if ( (_DWORD)result )
          break;
        *(_DWORD *)(v2 + 172) = v1;
LABEL_4:
        ++v1;
        v4 += 120;
        if ( v3 == v1 )
          return result;
      }
      result = strcmp(v5, ".debug_types");
      if ( (_DWORD)result )
        goto LABEL_4;
      *(_DWORD *)(v2 + 176) = v1++;
      v4 += 120;
    }
    while ( v3 != v1 );
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
