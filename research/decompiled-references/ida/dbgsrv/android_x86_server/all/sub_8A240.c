/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A240
// Address: 0x0008A240

//----- (0008A240) --------------------------------------------------------
char __cdecl sub_8A240(int a1, int a2, _BYTE *a3, int a4)
{
  int v4; // eax
  char *v5; // eax

  v4 = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 28))(a1, a2);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 12) )
      v5 = *(char **)(v4 + 8);
    else
      v5 = byte_EF875;
    qstrncpy((unsigned int)a3, (int)v5, a4);
    return 1;
  }
  else
  {
    qsnprintf(a3, a4, "%08X", a2);
    return 0;
  }
}
