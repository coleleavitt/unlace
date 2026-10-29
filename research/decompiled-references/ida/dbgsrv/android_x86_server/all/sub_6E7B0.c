/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E7B0
// Address: 0x0006E7B0

//----- (0006E7B0) --------------------------------------------------------
int __cdecl sub_6E7B0(_DWORD *a1, char a2, int a3)
{
  char **v3; // edx
  int v4; // esi
  const char *v5; // eax
  unsigned __int8 v7; // [esp+7h] [ebp-15h] BYREF
  unsigned int v8; // [esp+8h] [ebp-14h]

  v3 = (char **)a3;
  v8 = __readgsdword(0x14u);
  if ( !a2 )
  {
    sub_6D8F0((int)a1, a3);
    v3 = (char **)a3;
  }
  v4 = 2;
  if ( !(unsigned __int8)sub_6DEC0((int)a1, v3) )
  {
    v5 = sub_6DAB0(a1, a3, &v7);
    return v5 != nullptr ? -1 : v7;
  }
  return v4;
}
