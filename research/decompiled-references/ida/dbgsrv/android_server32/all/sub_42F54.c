/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F54
// Address: 0x00042F54

//----- (00042F54) --------------------------------------------------------
int __fastcall sub_42F54(_DWORD *a1, int a2, int a3, const char **a4)
{
  int v6; // r4
  const char *v7; // r7
  char *v8; // r0
  int v9; // r2
  int v10; // r4

  a1[24] = a1[16];
  v6 = a1[11] + 24 * a3;
  v7 = *a4;
  v8 = strstr(*a4, *(const char **)(v6 + 12));
  if ( v8 )
  {
    v9 = *(_DWORD *)(v6 + 16);
    if ( v9 )
      v8 = &v8[v9 - 1];
    *a4 = v8;
    v10 = a2;
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 20))(a2, 0);
    a1[24] = a1[15];
  }
  else
  {
    *a4 = &v7[strlen(v7)];
    v10 = a2;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 20))(a2, a3 + 1);
  }
  return sub_42DA4((int)a1, v10, (unsigned int)*a4, a1[16]);
}
