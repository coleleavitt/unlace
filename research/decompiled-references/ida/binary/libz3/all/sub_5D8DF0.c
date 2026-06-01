__int64 __fastcall sub_5D8DF0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // r13d
  size_t v17; // rbx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  unsigned int v31; // esi

  if ( !*(_DWORD *)(a1 + 60) && !*(_DWORD *)(a1 + 64) )
    goto LABEL_17;
  v11 = *(_QWORD **)(a1 + 48);
  v12 = 0;
  v13 = *(unsigned int *)(a1 + 56);
  v14 = v11;
  v15 = &v11[2 * v13];
  if ( v11 != v15 )
  {
    do
    {
      while ( *v14 )
      {
        *v14 = 0;
        v14 += 2;
        if ( v15 == v14 )
          goto LABEL_8;
      }
      v14 += 2;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_8:
    if ( (unsigned int)v13 > 0x10 && 3 * (int)v13 < (unsigned int)(4 * v12) )
    {
      if ( v11 )
      {
        sub_186B220(v11);
        v16 = *(_DWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v16 >>= 1;
        *(_DWORD *)(a1 + 56) = v16;
        v17 = 16LL * v16;
        v18 = (_OWORD *)sub_186B270(v17);
        if ( !v16 )
        {
LABEL_15:
          *(_QWORD *)(a1 + 48) = v18;
          goto LABEL_16;
        }
      }
      else
      {
        v31 = (unsigned int)v13 >> 1;
        *(_QWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 56) = v31;
        v17 = 16LL * v31;
        v18 = (_OWORD *)sub_186B270(v17);
      }
      v19 = &v18[v17 / 0x10];
      a3 = 0;
      v20 = v18;
      if ( (v17 & 0x10) == 0 || (v20 = v18 + 1, *v18 = 0, v19 != v18 + 1) )
      {
        do
        {
          *v20 = 0;
          v20 += 2;
          *(v20 - 1) = 0;
        }
        while ( v19 != v20 );
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  *(_QWORD *)(a1 + 60) = 0;
LABEL_17:
  v21 = (void *)sub_186B270(0xF8u);
  sub_63D370(v21, *(_QWORD *)(a1 + 24));
  v22 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v21;
  *(_BYTE *)(a1 + 88) = 0;
  if ( !v22 )
    goto LABEL_25;
  v23 = *(unsigned int *)(v22 - 4);
  if ( !(_DWORD)v23 )
    goto LABEL_25;
  v24 = 8 * v23;
  v25 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)(v22 + v25);
    v25 += 8;
    sub_5D84C0(a1, v26, a3);
    if ( v24 == v25 )
      break;
    v22 = *(_QWORD *)(a2 + 24);
  }
  v21 = *(void **)(a1 + 72);
  if ( *(_BYTE *)(a1 + 88) )
  {
    sub_63DFA0(*(_QWORD *)(a1 + 72), a2, v27, *(double *)a3.m128_u64, a4, a5, a6, v28, v29, a9);
    return *(_QWORD *)(a1 + 72);
  }
  if ( v21 )
  {
LABEL_25:
    sub_63D960(v21);
    sub_186B220(v21);
  }
  return 0;
}

