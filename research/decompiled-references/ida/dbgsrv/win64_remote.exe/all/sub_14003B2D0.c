/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003B2D0
// Address: 0x000000014003B2D0

//----- (000000014003B2D0) ----------------------------------------------------
bool __fastcall sub_14003B2D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rbp
  const char *v7; // rdx
  const char *v8; // rcx

  v2 = *a1;
  v4 = *a1 + 24 * a1[1];
  v5 = *a1 == v4;
  if ( *a1 != v4 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    do
    {
      v7 = Str1;
      if ( *(_QWORD *)(v2 + 8) )
        v7 = *(const char **)v2;
      v8 = Str1;
      if ( v6 )
        v8 = *(const char **)a2;
      if ( !strcmp(v8, v7) )
        break;
      v2 += 24;
    }
    while ( v2 != v4 );
    v5 = v2 == v4;
  }
  return !v5;
}
