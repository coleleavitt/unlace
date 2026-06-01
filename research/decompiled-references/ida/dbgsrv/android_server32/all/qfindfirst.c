/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindfirst
// Address: 0x0007CF10

//----- (0007CF10) --------------------------------------------------------
int __fastcall qfindfirst(int a1, int a2, int a3)
{
  int v4; // r5
  const char *v5; // r6
  char *v6; // r0
  char *v7; // r1
  int v8; // r0
  int *v9; // r7
  int v10; // r1
  int v11; // r2
  _DWORD *v14; // [sp+14h] [bp-4h]

  v4 = a1;
  v5 = (const char *)(a2 + 8236);
  qustrncpy(a2 + 8236, a1, 4096);
  v14 = (_DWORD *)(a2 + 4116);
  v6 = strrchr(v5, 47);
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
  }
  else
  {
    qustrncpy((unsigned int)v5, (int)".", 4096);
    v7 = nullptr;
  }
  *(_DWORD *)(a2 + 8228) = 0;
  *(_DWORD *)(a2 + 8224) = 0;
  if ( v7 )
    v4 = (int)v7;
  qustrncpy(a2 + 12332, v4, 4096);
  *(_DWORD *)(a2 + 16428) = a3;
  v8 = scandir(v5, (struct dirent ***)(a2 + 8224), nullptr, (int (*)(const void *, const void *))&alphasort);
  *(_DWORD *)(a2 + 8232) = v8;
  v9 = (int *)(a2 + 8228);
  v10 = *(_DWORD *)(a2 + 8228);
  v11 = -1;
  if ( v10 < v8 )
  {
    while ( 1 )
    {
      *v9 = v10 + 1;
      if ( !sub_7CD80((int)v14, nullptr, (const char *)(*(_DWORD *)(*(_DWORD *)(a2 + 8224) + 4 * v10) + 19)) )
        break;
      v10 = *v9;
      if ( *v9 >= *(_DWORD *)(a2 + 8232) )
        return -1;
    }
    *(_DWORD *)a2 = *v14;
    qustrncpy(a2 + 4, a2 + 4120, 4096);
    v11 = 0;
    *(_DWORD *)(a2 + 4108) = 0;
    *(_DWORD *)(a2 + 4104) = *(_DWORD *)(a2 + 8216);
    *(_DWORD *)(a2 + 4112) = *(_DWORD *)(a2 + 8220);
  }
  return v11;
}
