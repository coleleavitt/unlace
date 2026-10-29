/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BF48
// Address: 0x0007BF48

//----- (0007BF48) --------------------------------------------------------
size_t __fastcall sub_7BF48(int a1, unsigned __int64 a2, void *ptr, size_t n)
{
  unsigned int v5; // r7
  unsigned int v6; // r5
  _DWORD *v7; // r6
  __int64 v9; // r0
  unsigned int v10; // r5
  int v11; // r3
  int *v12; // r4
  int v13; // r5
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r0
  unsigned int v18; // r2
  int v19; // kr00_4
  int v20; // r7
  __int64 v21; // r0
  int v22; // r0
  bool v23; // zf
  unsigned __int64 off; // [sp+8h] [bp-Ch]
  int v25; // [sp+10h] [bp-4h]

  v5 = HIDWORD(a2);
  v6 = a2;
  v7 = (_DWORD *)(a1 + 8);
  if ( (a2 & 0x8000000000000000LL) == 0LL && a2 < *(_QWORD *)(a1 + 8) )
  {
    v25 = a2;
    LODWORD(v9) = *(_DWORD *)(a1 + 24);
    v10 = *(_DWORD *)(a1 + 28);
    v11 = -1;
    if ( (*(_DWORD *)(a1 + 24) & v10) == 0xFFFFFFFF )
    {
      v12 = (int *)(a1 + 20);
      v13 = a2;
      goto LABEL_5;
    }
    if ( *(_QWORD *)(a1 + 32) < __SPAIR64__(v10, v9) )
    {
      set_qerrno(4);
      return -1;
    }
    HIDWORD(v9) = *(_DWORD *)(a1 + 28);
    v13 = a2;
    v19 = v9 + a2;
    HIDWORD(v9) = (v9 + __PAIR64__(v5, a2)) >> 32;
    v18 = v9 + a2;
    v20 = *(_DWORD *)(a1 + 20);
    v12 = (int *)(a1 + 20);
    if ( v20 )
    {
      if ( *(int *)v20 >= 2 )
      {
        *(_QWORD *)(v20 + 24) = __PAIR64__(HIDWORD(v9), v19);
        goto LABEL_5;
      }
      off = __PAIR64__(HIDWORD(v9), v19);
      v13 = v25;
      v22 = qfseek(*(FILE **)(v20 + 8), SHIDWORD(v9), v19, SHIDWORD(v9), 0);
      v18 = off;
      v11 = -1;
      v23 = v22 == 0;
      v21 = -1;
      if ( v23 )
      {
        v21 = qftell((FILE *)*(_DWORD *)(v20 + 8));
        v18 = off;
        v11 = -1;
      }
    }
    else
    {
      HIDWORD(off) = HIDWORD(v9);
      v21 = -1;
    }
    if ( v21 != __PAIR64__(HIDWORD(off), v18) )
      return v11;
LABEL_5:
    v14 = *v7 - v13;
    if ( v14 >= n )
      v14 = n;
    v15 = *v12;
    if ( *v12 )
    {
      if ( *(int *)v15 < 2 )
        return qfread(*(FILE **)(v15 + 8), ptr, v14);
      else
        return sub_7B4E0(v15, ptr, v14);
    }
    return v11;
  }
  set_qerrno(3);
  v16 = *v7 ^ v6 | v7[1] ^ v5;
  v11 = -1;
  if ( *(_QWORD *)v7 == __PAIR64__(v5, v6) )
    return v16;
  return v11;
}
