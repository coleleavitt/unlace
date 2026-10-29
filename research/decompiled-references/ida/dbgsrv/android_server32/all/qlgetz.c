/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x0007B9E4

//----- (0007B9E4) --------------------------------------------------------
int __fastcall qlgetz(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 v8; // r0
  bool v9; // zf
  unsigned int v10; // r4
  int v11; // r7
  size_t v12; // r0
  int v13; // r0
  int v15; // [sp+Ch] [bp-24h]
  int v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h]
  int v18; // [sp+18h] [bp-18h]
  unsigned __int64 off; // [sp+1Ch] [bp-14h]
  _BYTE ptr[4]; // [sp+28h] [bp-8h] BYREF

  if ( a6 < 1 )
    return a5;
  off = a3 | 0xFFFFFFFF00000000LL;
  v18 = 0;
  HIDWORD(v8) = 0;
  if ( (a3 & a4) != 0xFFFFFFFF )
  {
    if ( !a1 )
    {
      v18 = -1;
      HIDWORD(v8) = -1;
      goto LABEL_15;
    }
    if ( *(int *)a1 >= 2 )
    {
      v18 = *(_DWORD *)(a1 + 24);
      HIDWORD(v8) = *(_DWORD *)(a1 + 28);
LABEL_11:
      *(_DWORD *)(a1 + 24) = off;
      *(_DWORD *)(a1 + 28) = a4;
      goto LABEL_15;
    }
    v9 = qfseek(*(FILE **)(a1 + 8), 1, 0, 0, 1) == 0;
    v18 = HIDWORD(off);
    HIDWORD(v8) = HIDWORD(off);
    if ( v9 )
    {
      v8 = qftell((FILE *)*(_DWORD *)(a1 + 8));
      v18 = v8;
    }
    if ( *(int *)a1 >= 2 )
      goto LABEL_11;
    v15 = HIDWORD(v8);
    if ( !qfseek(*(FILE **)(a1 + 8), 0, off, a4, 0) )
      qftell(*(FILE **)(a1 + 8));
    HIDWORD(v8) = v15;
  }
LABEL_15:
  v16 = HIDWORD(v8);
  v17 = a4;
  v10 = 1;
  while ( 1 )
  {
    v11 = a5 + v10;
    if ( v10 >= a6 || !a1 )
      break;
    v12 = *(int *)a1 < 2 ? qfread(*(FILE **)(a1 + 8), ptr, 1) : sub_7B4E0(a1, ptr, 1);
    if ( v12 != 1 )
      break;
    v13 = ptr[0];
    *(_BYTE *)(v11 + HIDWORD(off)) = ptr[0];
    ++v10;
    if ( !v13 )
      goto LABEL_25;
  }
  *(_BYTE *)(v11 + HIDWORD(off)) = 0;
LABEL_25:
  if ( a1 && off != __PAIR64__(v17, HIDWORD(off)) )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( !qfseek(*(FILE **)(a1 + 8), 0, v18, v16, 0) )
        qftell(*(FILE **)(a1 + 8));
    }
    else
    {
      *(_DWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 28) = v16;
    }
  }
  return a5;
}
