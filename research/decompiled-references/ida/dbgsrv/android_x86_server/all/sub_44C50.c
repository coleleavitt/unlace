/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C50
// Address: 0x00044C50

//----- (00044C50) --------------------------------------------------------
int __cdecl sub_44C50(int a1, int a2)
{
  char *v2; // edi
  char *v3; // eax
  char *v4; // esi
  char *v5; // eax
  int v7; // [esp+18h] [ebp-24h] BYREF
  int v8; // [esp+1Ch] [ebp-20h]
  int v9; // [esp+20h] [ebp-1Ch]
  unsigned int v10; // [esp+28h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  v3 = strchr(v2, 61);
  if ( v3 )
  {
    v4 = v3;
    sub_2DCA0(&v7, v2, v3 - v2);
    if ( v8 )
      v5 = (char *)v7;
    else
      v5 = byte_EF875;
    *(_DWORD *)(a2 + 4) = qsetenv(v5, v4 + 1);
    if ( v7 )
    {
      v8 = 0;
      qfree((void *)v7);
      v7 = 0;
      v9 = 0;
    }
  }
  return 0;
}
