/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96D24
// Address: 0x00096D24

//----- (00096D24) --------------------------------------------------------
void __fastcall sub_96D24(_DWORD *a1, int a2, const void *a3, int a4)
{
  size_t v4; // r6
  int v7; // r9
  _DWORD *v8; // r0
  _DWORD *v9; // r5

  v4 = a4 - (_DWORD)a3;
  v7 = (a4 - (int)a3) >> 2;
  v8 = sub_93AC6(a2 + 368, a4 - (_DWORD)a3);
  v9 = v8;
  if ( v4 )
    memmove(v8, a3, v4);
  *a1 = v9;
  a1[1] = v7;
}
