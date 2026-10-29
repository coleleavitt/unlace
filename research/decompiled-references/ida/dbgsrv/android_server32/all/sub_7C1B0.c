/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C1B0
// Address: 0x0007C1B0

//----- (0007C1B0) --------------------------------------------------------
size_t __fastcall sub_7C1B0(int a1, __int64 off, void *a3, size_t a4)
{
  unsigned int v5; // r4
  unsigned int v7; // r1
  unsigned int v8; // r0
  size_t v9; // r7
  void **v10; // r6
  int v11; // r1
  int v12; // r0
  void *v13; // r0
  unsigned int v14; // r7
  int v15; // r6
  int v16; // r0
  signed int v17; // r5
  int v18; // r7
  size_t v19; // r0
  size_t v20; // r1
  int v21; // r0
  int whence; // [sp+0h] [bp-1Ch] BYREF
  void *ptr; // [sp+8h] [bp-14h]
  size_t n; // [sp+Ch] [bp-10h]
  unsigned int v26; // [sp+10h] [bp-Ch]
  unsigned int v27; // [sp+14h] [bp-8h]
  int v28; // [sp+18h] [bp-4h]

  if ( off < 0
    || (v5 = HIDWORD(off), v28 = a1 + 32,
                           v7 = *(_DWORD *)(a1 + 32),
                           v8 = *(_DWORD *)(a1 + 36),
                           off < __SPAIR64__(v8, v7))
    && !*(_DWORD *)(a1 + 24) )
  {
    set_qerrno(3);
    return -1;
  }
  n = a4;
  ptr = a3;
  v9 = v7 - off;
  if ( __SPAIR64__(v8, v7) < off )
  {
    v26 = off;
    v10 = (void **)(a1 + 40);
    v11 = 0x40000;
    v12 = *(_DWORD *)(a1 + 48) >> 18;
    v27 = 0x40000;
    if ( !v12 )
    {
      v13 = qvector_reserve(a1 + 40, *v10, v27, 1u);
      v11 = v27;
      *v10 = v13;
    }
    *(_DWORD *)(a1 + 44) = v11;
    while ( *(_QWORD *)v28 != __PAIR64__(v5, v26) )
    {
      v14 = v26 - *(_DWORD *)v28;
      if ( v14 >= v27 )
        v14 = v27;
      v15 = 0;
      if ( sub_7C350(a1, *(void **)(a1 + 40), v14) != v14 )
        return v15;
    }
    goto LABEL_22;
  }
  if ( off >= __SPAIR64__(v8, v7) )
  {
LABEL_22:
    v21 = sub_7C350(a1, ptr, n);
    v17 = 0;
    goto LABEL_23;
  }
  v28 = a1;
  v16 = qfseek(*(FILE **)(a1 + 24), (int)&whence, off, SHIDWORD(off), 0);
  v17 = n;
  if ( v9 <= n )
    v17 = v9;
  v15 = -1;
  if ( !v16 )
  {
    v18 = v28;
    v19 = qfread(*(FILE **)(v28 + 24), ptr, v17);
    v20 = n;
    if ( v19 == n )
      return v20;
    if ( v19 == v17 )
    {
      v21 = sub_7C350(v18, (char *)ptr + v17, n - v17);
      v15 = v17;
      if ( v17 > 0 )
      {
LABEL_24:
        v20 = v17 + v21;
        if ( v21 >= 1 )
          return v20;
        return v15;
      }
LABEL_23:
      v15 = v21;
      goto LABEL_24;
    }
  }
  return v15;
}
