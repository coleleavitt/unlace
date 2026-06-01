/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B940
// Address: 0x000000000047B940

//----- (000000000047B940) ----------------------------------------------------
__int64 __fastcall sub_47B940(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  _WORD *v4; // rdx
  char *v5; // rax
  _WORD v6[10]; // [rsp+0h] [rbp-58h] BYREF
  char v7; // [rsp+14h] [rbp-44h] BYREF
  _WORD v8[12]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_47AD20(a1, v6);
  sub_47AD20(a2, v8);
  if ( v6[0] == v8[0] )
  {
    v4 = v8;
    v5 = (char *)v6;
    v2 = v6[0] == 0 ? 1 : -1;
    while ( *(_WORD *)v5 == *v4 )
    {
      v5 += 2;
      ++v4;
      if ( v5 == &v7 )
        return 0;
    }
    if ( *v4 >= *(_WORD *)v5 )
      return v6[0] == 0 ? 1 : -1;
  }
  else
  {
    return v6[0] == 0 ? 1 : -1;
  }
  return v2;
}
