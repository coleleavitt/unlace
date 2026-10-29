/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC8F0
// Address: 0x000AC8F0

//----- (000AC8F0) --------------------------------------------------------
size_t __cdecl sub_AC8F0(int a1, __int64 off, char *ptr, size_t a4)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // eax
  size_t v7; // esi
  int v8; // esi
  size_t v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v15; // [esp+8h] [ebp-14h]

  if ( off < 0
    || (v4 = *(_DWORD *)(a1 + 24), v5 = *(_DWORD *)(a1 + 28), off < __SPAIR64__(v5, v4)) && !*(_DWORD *)(a1 + 20) )
  {
    set_qerrno(3);
    return -1;
  }
  if ( __SPAIR64__(v5, v4) < off )
  {
    if ( *(_DWORD *)(a1 + 40) < 0x40000u )
      *(_DWORD *)(a1 + 32) = qvector_reserve(a1 + 32, *(void **)(a1 + 32), 0x40000u, 1u);
    *(_DWORD *)(a1 + 36) = 0x40000;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( off == *(_QWORD *)(a1 + 24) )
        break;
      v7 = off - v6;
      if ( (unsigned int)(off - v6) >= 0x40000 )
        v7 = 0x40000;
      if ( sub_ACB90(a1, *(void **)(a1 + 32), v7) != v7 )
        return 0;
    }
    goto LABEL_20;
  }
  v9 = v4 - off;
  if ( off >= __SPAIR64__(v5, v4) )
  {
LABEL_20:
    v11 = 0;
    v12 = sub_ACB90(a1, ptr, a4);
    v13 = v12;
LABEL_21:
    v8 = v12 + v11;
    if ( v12 <= 0 )
      return v13;
    return v8;
  }
  if ( v4 - (unsigned int)off > a4 )
    v9 = a4;
  v15 = v9;
  v8 = -1;
  if ( !qfseek(*(FILE **)(a1 + 20), off, SHIDWORD(off), 0) )
  {
    v10 = qfread(*(FILE **)(a1 + 20), ptr, v15);
    if ( v10 == a4 )
      return a4;
    if ( v10 != v15 )
      return v8;
    v11 = v15;
    v12 = sub_ACB90(a1, &ptr[v15], a4 - v15);
    v13 = v12;
    if ( v15 > 0 )
      v13 = v15;
    goto LABEL_21;
  }
  return v8;
}
