/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020E30
// Address: 0x0000000140020E30

//----- (0000000140020E30) ----------------------------------------------------
__int64 __fastcall sub_140020E30(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  const char *v8; // rdx
  const char *v9; // rcx
  int v10; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *(_QWORD *)(a3 + 8);
    do
    {
      *(_QWORD *)a2 = v6;
      v8 = Str1;
      if ( v7 )
        v8 = *(const char **)a3;
      v9 = Str1;
      if ( v6[5] )
        v9 = (const char *)v6[4];
      if ( strcmp(v9, v8) >= 0 )
      {
        *(_QWORD *)(a2 + 16) = v6;
        v10 = 1;
      }
      else
      {
        v10 = 0;
        v6 += 2;
      }
      v6 = (__int64 *)*v6;
      *(_DWORD *)(a2 + 8) = v10;
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  return a2;
}
