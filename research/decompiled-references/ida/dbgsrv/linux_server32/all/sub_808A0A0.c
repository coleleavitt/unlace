/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A0A0
// Address: 0x0808A0A0

//----- (0808A0A0) --------------------------------------------------------
unsigned int __cdecl sub_808A0A0(char **a1, unsigned __int8 *a2)
{
  char *v2; // edx
  char *v3; // eax
  char *v4; // eax
  unsigned int result; // eax
  unsigned __int8 v6[4]; // [esp+Ch] [ebp-30h] BYREF
  __int128 v7; // [esp+10h] [ebp-2Ch]
  unsigned int v8; // [esp+20h] [ebp-1Ch]

  v8 = __readgsdword(0x14u);
  v6[0] = 2;
  v7 = 0;
  sub_8089810(v6, a2);
  v2 = a1[1];
  v3 = *a1;
  if ( a1[2] < v2 + 1 )
  {
    v3 = (char *)sub_80CF920((int)a1, v3, (unsigned int)(v2 + 1), 0x14u);
    v2 = a1[1];
    *a1 = v3;
  }
  v4 = &v3[20 * (_DWORD)v2];
  *v4 = 2;
  *(_OWORD *)(v4 + 4) = 0;
  sub_8089810((unsigned __int8 *)v4, v6);
  ++a1[1];
  sub_8089430((int)v6);
  result = v8 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
