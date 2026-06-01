/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428A70
// Address: 0x00428A70

//----- (00428A70) --------------------------------------------------------
char __userpurge sub_428A70@<al>(int a1@<ebx>, __m128i a2@<xmm0>, const char *a3, char *a4, int a5, int a6, char a7)
{
  char *v8; // eax
  char v9; // bl
  LPVOID v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  if ( !a4 )
    return 0;
  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  sub_402970(a2, &v10, "static %s(){", a3);
  v8 = sub_427B30(a1, a4);
  if ( v8 )
    sub_41F840(a2, (int)&v10, "%*.*sreturn %s\n;}", v8 - a4, v8 - a4, a4, v8);
  else
    sub_41F840(a2, (int)&v10, "%s\n;}", a4);
  v9 = sub_42F310(a1, (int)v10, a5, a6, a7);
  v13 = 1;
  if ( v10 )
  {
    v11 = 0;
    sub_453A20(v10);
  }
  return v9;
}
