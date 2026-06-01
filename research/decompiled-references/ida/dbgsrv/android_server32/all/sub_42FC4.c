/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FC4
// Address: 0x00042FC4

//----- (00042FC4) --------------------------------------------------------
int __fastcall sub_42FC4(int a1, int a2, const char **a3)
{
  const char *v6; // r7
  size_t v7; // r0
  int v8; // r1
  int *v9; // r6
  int result; // r0

  v6 = *a3;
  v7 = strlen(*a3);
  *a3 = &v6[v7];
  sub_42DA4(a1, a2, (unsigned int)&v6[v7], *(_DWORD *)(a1 + 72));
  v8 = *((unsigned __int8 *)*a3 - 1);
  v9 = (int *)(a1 + 72);
  if ( v8 == *(unsigned __int8 *)(a1 + 104) )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 20))(a2, 16);
  else
    v9 = (int *)(a1 + 60);
  result = *v9;
  *(_DWORD *)(a1 + 96) = *v9;
  return result;
}
