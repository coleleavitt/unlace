/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C93A0
// Address: 0x080C93A0

//----- (080C93A0) --------------------------------------------------------
int __cdecl sub_80C93A0(int a1, int a2)
{
  int v2; // ecx
  _WORD *v3; // edx
  char *v4; // eax
  _WORD v6[10]; // [esp+0h] [ebp-4Ch] BYREF
  char v7; // [esp+14h] [ebp-38h] BYREF
  _WORD v8[11]; // [esp+16h] [ebp-36h] BYREF
  unsigned int v9; // [esp+2Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  sub_80C8760(a1, v6);
  sub_80C8760(a2, v8);
  v2 = v6[0] == 0 ? 1 : -1;
  if ( v6[0] == v8[0] )
  {
    v3 = v8;
    v4 = (char *)v6;
    while ( *(_WORD *)v4 == *v3 )
    {
      v4 += 2;
      ++v3;
      if ( v4 == &v7 )
      {
        v2 = 0;
        goto LABEL_6;
      }
    }
    if ( *v3 >= *(_WORD *)v4 )
      v2 = v6[0] == 0 ? 1 : -1;
  }
LABEL_6:
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
