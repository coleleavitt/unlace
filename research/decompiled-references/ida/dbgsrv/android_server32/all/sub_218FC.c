/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_218FC
// Address: 0x000218FC

//----- (000218FC) --------------------------------------------------------
int __fastcall sub_218FC(int a1, unsigned __int8 *a2, int a3, char *s, char *a5, int a6, char *a7)
{
  int v9; // r5
  char *v10; // r7
  char *i; // r1
  void *v14[3]; // [sp+24h] [bp-1014h] BYREF
  const char *v15; // [sp+30h] [bp-1008h] BYREF
  char sa[4100]; // [sp+34h] [bp-1004h] BYREF

  *(_DWORD *)(a1 + 1028) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_DWORD *)a1 = &off_D6308;
  v9 = a1 + 1028;
  sub_1B09C(a1 + 1040, s);
  sub_1B09C(a1 + 1052, a5);
  sub_1B09C(a1 + 1064, a7);
  *(_DWORD *)(a1 + 1076) = a6;
  *(_BYTE *)(a1 + 4) = 0;
  if ( a3 )
    v10 = ":";
  else
    v10 = ";";
  qstrncpy((unsigned int)sa, a2, 4096);
  for ( i = (char *)qstrtok(sa, v10, &v15); i; i = (char *)qstrtok(nullptr, v10, &v15) )
  {
    sub_1B09C((int)v14, i);
    sub_265B0(v9, v14);
    if ( v14[0] )
    {
      v14[1] = nullptr;
      qfree(v14[0]);
      v14[2] = nullptr;
      v14[0] = nullptr;
    }
  }
  return a1;
}
// D6308: using guessed type _UNKNOWN *off_D6308;
