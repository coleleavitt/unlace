/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69EE8
// Address: 0x00069EE8

//----- (00069EE8) --------------------------------------------------------
int __fastcall sub_69EE8(_DWORD *a1, int a2, char *a3, int a4)
{
  int (__fastcall *v4)(int, int); // r6
  int v6; // r0
  char *v7; // [sp+0h] [bp-Ch]
  int v8; // [sp+4h] [bp-8h]

  v4 = *(int (__fastcall **)(int, int))(*a1 + 12);
  if ( v4 == sub_69D5C )
  {
    if ( a2 <= 1 && !*(_BYTE *)(a1[1] + 59) )
      return 0;
    return sub_69434(a3, a4);
  }
  v7 = a3;
  v8 = a4;
  v6 = ((int (*)(void))v4)();
  a3 = v7;
  a4 = v8;
  if ( v6 )
    return sub_69434(a3, a4);
  return 0;
}
