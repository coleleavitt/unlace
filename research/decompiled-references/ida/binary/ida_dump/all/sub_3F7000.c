__int64 __fastcall sub_3F7000(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  const char *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdx

  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 176LL) |= 0x40u;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) == 0 )
    return 0;
  v9 = *(_DWORD *)(a1 + 888);
  if ( (v9 & 4) != 0 )
    return 1;
  if ( (v9 & 8) != 0 )
    return 0;
  if ( sub_CFF70() <= 0 )
  {
    *(_DWORD *)(a1 + 888) |= 8u;
    return 0;
  }
  v12 = sub_329CC0();
  v17 = *(_DWORD *)(a1 + 888);
  if ( !v12 )
  {
    *(_DWORD *)(a1 + 888) = v17 | 4;
    if ( (v17 & 1) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 832);
      v19 = *(_QWORD *)(v18 + 3792);
      if ( !v19 )
      {
        v22 = (_QWORD *)operator new(0x18u);
        v23 = *(_QWORD *)(a1 + 800);
        *v22 = off_4E99C8;
        v22[1] = v23;
        v22[2] = *(_QWORD *)(v23 + 112);
        *(_QWORD *)(*(_QWORD *)(a1 + 832) + 3792LL) = v22;
        v18 = *(_QWORD *)(a1 + 832);
        v19 = *(_QWORD *)(v18 + 3792);
      }
      sub_1516D0(v18, v19);
      *(_DWORD *)(a1 + 888) |= 1u;
    }
    return 1;
  }
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 888) = v17 | 8;
  sub_3311F0(v21, v20, 0x25u, (__int64)v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9);
  return 0;
}
