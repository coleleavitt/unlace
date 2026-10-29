/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78004
// Address: 0x00078004

//----- (00078004) --------------------------------------------------------
int __fastcall sub_78004(int a1)
{
  size_t v3; // r0
  size_t v4; // r7
  unsigned int v5; // r8
  void *v6; // r0
  char name[4100]; // [sp+4h] [bp-1004h] BYREF

  if ( gethostname(name, 0x1000u) )
    return 0;
  name[4095] = 0;
  v3 = strlen(name);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 1;
    v6 = *(void **)a1;
    if ( v5 > *(_DWORD *)(a1 + 8) )
    {
      v6 = sub_77EB0(a1, *(void **)a1, v5, 1u);
      *(_DWORD *)a1 = v6;
    }
    *(_DWORD *)(a1 + 4) = v5;
    memmove(v6, name, v4);
    *(_BYTE *)(*(_DWORD *)a1 + v4) = 0;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    return 1;
  }
}
