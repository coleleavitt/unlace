/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453B0
// Address: 0x000453B0

//----- (000453B0) --------------------------------------------------------
int __cdecl sub_453B0(int a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  char *v4; // eax
  int v6; // [esp+10h] [ebp-18h] BYREF
  int v7; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  unsigned int v9; // [esp+1Ch] [ebp-Ch]

  v9 = __readgsdword(0x14u);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  if ( (unsigned __int8)eval_idc_snippet(nullptr, v2, (int)&v6, 0) )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v3 = 0;
  }
  else
  {
    if ( v7 )
      v4 = (char *)v6;
    else
      v4 = byte_EF875;
    v3 = throw_idc_exception(a2, v4);
  }
  if ( v6 )
  {
    v7 = 0;
    qfree((void *)v6);
    v6 = 0;
    v8 = 0;
  }
  return v3;
}
