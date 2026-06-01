/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E690
// Address: 0x000000014003E690

//----- (000000014003E690) ----------------------------------------------------
__int64 __fastcall sub_14003E690(__int64 a1, _DWORD *a2, const char **a3, int a4)
{
  const char *v4; // rax
  int v5; // r11d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = Str1;
  v5 = *(_DWORD *)(a1 + 312);
  if ( *(_QWORD *)(a1 + 328) )
    v4 = *(const char **)(a1 + 320);
  v7 = *(_QWORD *)(a1 + 304);
  if ( a4 > 0 )
  {
    v8 = *(_DWORD *)(a1 + 280) - a4;
    if ( v8 < 0 )
      return 0;
    v10 = 5LL * v8;
    v11 = *(_QWORD *)(a1 + 272);
    v5 = *(_DWORD *)(v11 + 8 * v10 + 32);
    v7 = *(_QWORD *)(v11 + 8 * v10);
    v4 = "#include ...";
  }
  if ( a2 )
    *a2 = v5;
  if ( a3 )
    *a3 = v4;
  return v7;
}
