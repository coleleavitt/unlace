/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079BF0
// Address: 0x08079BF0

//----- (08079BF0) --------------------------------------------------------
int __cdecl sub_8079BF0(int *a1)
{
  char *v1; // eax
  unsigned __int16 v2; // ax
  int v3; // ecx
  unsigned __int16 v4; // dx
  char *v5; // eax
  int result; // eax
  _DWORD *v7; // eax
  int v8; // [esp+18h] [ebp-14h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-10h]

  v9 = __readgsdword(0x14u);
  v1 = (char *)&dword_80DDFD8;
  if ( a1[6] )
    v1 = (char *)a1[5];
  v2 = sub_8079A20(a1, v1, &v8);
  v3 = v8;
  v4 = v2;
  if ( (unsigned int)(v8 - 1) <= 2 )
  {
    v7 = (_DWORD *)(a1[50] + 16 * (a1[51] + 0xFFFFFFF));
    v7[3] = v4;
    v7[2] = v3;
    v7[1] = a1[28];
    result = 0;
  }
  else
  {
    v5 = (char *)&dword_80DDFD8;
    if ( a1[6] )
      v5 = (char *)a1[5];
    sub_80C7910(0, v5);
    result = sub_80C7880(55);
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
