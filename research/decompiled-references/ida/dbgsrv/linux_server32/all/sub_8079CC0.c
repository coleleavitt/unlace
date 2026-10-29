/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079CC0
// Address: 0x08079CC0

//----- (08079CC0) --------------------------------------------------------
int __cdecl sub_8079CC0(int *a1, int a2)
{
  char *v2; // eax
  __int16 v3; // ax
  char v4; // dl
  int result; // eax
  int v6; // [esp+0h] [ebp-14h] BYREF
  unsigned int v7; // [esp+4h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  if ( a1[6] )
    v2 = (char *)a1[5];
  else
    v2 = (char *)&dword_80DDFD8;
  v3 = sub_8079A20(a1, v2, &v6);
  switch ( v6 )
  {
    case 2:
      v4 = 4 * (a2 <= 0) - 62;
      goto LABEL_7;
    case 3:
      v4 = 2 * (a2 <= 0) - 37;
      goto LABEL_7;
    case 1:
      v4 = 4 * (a2 <= 0) - 64;
LABEL_7:
      sub_80790F0((int)a1, v4, v3);
      result = 0;
      goto LABEL_8;
  }
  result = sub_80C7880(58);
LABEL_8:
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
