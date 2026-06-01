/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054660
// Address: 0x08054660

//----- (08054660) --------------------------------------------------------
int __cdecl sub_8054660(int a1, int a2, char *a3, size_t a4)
{
  bool i; // al
  int v5; // esi
  unsigned __int8 v6; // al
  unsigned __int8 v8; // [esp-41h] [ebp-41h]
  int v9; // [esp-30h] [ebp-30h] BYREF
  void *v10; // [esp-2Ch] [ebp-2Ch] BYREF
  int v11; // [esp-28h] [ebp-28h]
  int v12; // [esp-24h] [ebp-24h]
  unsigned int v13; // [esp-20h] [ebp-20h]

  v13 = __readgsdword(0x14u);
  v8 = sub_80543E0(a2, a3, a4);
  if ( !v8 )
  {
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    for ( i = sub_80544E0(&v9, &v10, a2); ; i = sub_80544E0(&v9, &v10, v5) )
    {
      if ( !i || (v5 = v9, v9 == 1) )
      {
        *a3 = 0;
        goto LABEL_8;
      }
      v6 = sub_80543E0(v9, a3, a4);
      if ( v6 )
        break;
    }
    v8 = v6;
LABEL_8:
    if ( v10 )
    {
      v11 = 0;
      sub_80CF780(v10);
    }
  }
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
