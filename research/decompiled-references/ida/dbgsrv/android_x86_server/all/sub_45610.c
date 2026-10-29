/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45610
// Address: 0x00045610

//----- (00045610) --------------------------------------------------------
int __cdecl sub_45610(int a1, int a2)
{
  char *v2; // eax
  char *v3; // edi
  size_t v4; // eax
  char *v6; // [esp+18h] [ebp-24h] BYREF
  int v7; // [esp+1Ch] [ebp-20h]
  int v8; // [esp+20h] [ebp-1Ch]
  unsigned int v9; // [esp+28h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  compile_idc_file(v2, (int)&v6, 3);
  if ( v7 )
  {
    v3 = v6;
    if ( !v6 )
    {
      v3 = nullptr;
      v4 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = byte_EF875;
  }
  v4 = strlen(v3);
LABEL_9:
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), v3, v4);
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
    v6 = nullptr;
    v8 = 0;
  }
  return 0;
}
