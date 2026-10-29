/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8074300
// Address: 0x08074300

//----- (08074300) --------------------------------------------------------
int __cdecl sub_8074300(int a1, int a2)
{
  unsigned int v2; // esi
  size_t v3; // esi
  unsigned int v5; // ecx
  char *v6; // edi
  int v7; // ebx
  int v8; // eax
  void *v9; // eax
  int v10; // [esp-430h] [ebp-430h]
  char v11; // [esp-420h] [ebp-420h] BYREF
  _BYTE v12[3]; // [esp-41Fh] [ebp-41Fh] BYREF
  unsigned int v13; // [esp-20h] [ebp-20h]

  v10 = a2;
  v2 = *(_DWORD *)(a1 + 24);
  v13 = __readgsdword(0x14u);
  v11 = 0;
  if ( v2 - 2 <= 0x1E )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( !v5 )
      goto LABEL_15;
    v6 = &v11;
    while ( 1 )
    {
      v7 = v5 % v2 + 48;
      if ( v5 % v2 >= 0xA )
        LOBYTE(v7) = v5 % v2 + 55;
      *v6++ = v7;
      if ( v5 < v2 )
        break;
      v5 /= v2;
    }
    v10 = a2;
    if ( v6 == &v11 )
    {
LABEL_15:
      v11 = 48;
      v8 = 1;
      v6 = v12;
    }
    else
    {
      v8 = v6 - &v11;
    }
    *v6 = 0;
    sub_80D05E0(&v11, v8);
  }
  v3 = strlen(&v11);
  *(_BYTE *)v10 = 7;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 12) = 0;
  if ( v3 )
  {
    v9 = sub_80CF920(v10 + 4, nullptr, v3 + 1, 1u);
    *(_DWORD *)(v10 + 4) = v9;
    *(_DWORD *)(v10 + 8) = v3 + 1;
    memmove(v9, &v11, v3);
    *(_BYTE *)(*(_DWORD *)(v10 + 4) + v3) = 0;
  }
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
