/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x000B9530

//----- (000B9530) --------------------------------------------------------
char __cdecl relocate_relobj(_DWORD *a1, int a2, char a3)
{
  int v3; // edi
  char result; // al
  char *v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch]
  unsigned int v10[6]; // [esp+14h] [ebp-18h] BYREF

  v10[1] = __readgsdword(0x14u);
  if ( !a1 )
    return 0;
  v3 = a1[5];
  result = 1;
  if ( !v3 )
    return result;
  v5 = (char *)a1[4];
  if ( *v5 < 0 )
    return 0;
  v9 = 1 << (*v5 & 0xF);
  if ( v9 > 8 || __CFADD__(a2, a1[1]) )
    return 0;
  v8 = a2 - a1[3];
  if ( v8 )
  {
    v10[0] = (unsigned int)(v5 + 1);
    v6 = (unsigned int)&v5[v3];
    if ( (unsigned int)(v5 + 1) >= v6 )
    {
LABEL_13:
      a1[3] = a2;
      return 1;
    }
    while ( 1 )
    {
      v7 = unpack_dd(v10, v6);
      if ( v7 + v9 <= v7 || v7 + v9 >= a1[1] )
        return 0;
      reloc_value((unsigned __int64 *)(*a1 + v7), v9, v8, a3);
      if ( v10[0] >= v6 )
        goto LABEL_13;
    }
  }
  return result;
}
