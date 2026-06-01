/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27B00
// Address: 0x00027B00

//----- (00027B00) --------------------------------------------------------
int __cdecl sub_27B00(int a1, char *file, int a3, char *a4, _BYTE *a5, unsigned int a6, char *s, int a8)
{
  int v8; // esi
  int v10[6]; // [esp+4h] [ebp-18h] BYREF

  v10[1] = __readgsdword(0x14u);
  v8 = sub_89230(a1, file, a3, a4, a5, a6, s, a8, v10);
  if ( v8 > 0 && v10[0] && !(unsigned __int8)sub_26F90(a1, v10[0], 0) )
  {
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, 0);
    return -2;
  }
  return v8;
}
