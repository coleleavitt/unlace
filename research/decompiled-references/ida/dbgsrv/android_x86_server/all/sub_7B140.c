/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B140
// Address: 0x0007B140

//----- (0007B140) --------------------------------------------------------
int __cdecl sub_7B140(char *a1)
{
  _DWORD *v1; // eax
  int v2; // edi
  void *v4; // [esp+1Ch] [ebp-260h]
  int (__cdecl **v5)(int, int, int); // [esp+20h] [ebp-25Ch] BYREF
  void *v6; // [esp+24h] [ebp-258h]
  int v7; // [esp+28h] [ebp-254h]
  int v8; // [esp+2Ch] [ebp-250h]
  unsigned int v9; // [esp+268h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v1 = open_linput(a1, 0);
  if ( !v1 )
    return -1;
  v5 = &off_13839C;
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  v4 = v1;
  v2 = -1;
  if ( sub_7A850((int)&v5, (int)v1, 0, 1u) )
    v2 = 11;
  v5 = &off_13839C;
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
    v6 = nullptr;
    v8 = 0;
  }
  close_linput(v4);
  return v2;
}
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
