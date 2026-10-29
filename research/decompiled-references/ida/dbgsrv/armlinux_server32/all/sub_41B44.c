/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B44
// Address: 0x00041B44

//----- (00041B44) --------------------------------------------------------
void __fastcall sub_41B44(int a1, int a2, const char **a3)
{
  const char *v4; // r4
  size_t v7; // r0
  int (*v8)(); // r2

  v4 = *a3;
  v7 = strlen(*a3);
  *a3 = &v4[v7];
  sub_418B8(a1, a2, &v4[v7], *(_DWORD *)(a1 + 72));
  if ( *((unsigned __int8 *)*a3 - 1) == *(unsigned __int8 *)(a1 + 104) )
  {
    v8 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v8 != nullsub_4 )
      ((void (__fastcall *)(int, int))v8)(a2, 16);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 72);
  }
  else
  {
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
  }
}
// 41894: using guessed type int nullsub_4();
