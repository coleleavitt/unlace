__int64 __fastcall sub_7217E0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v15; // rsi
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rsi
  unsigned int v31; // r13d
  unsigned __int64 v33; // rsi
  __int64 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  double v38; // xmm4_8
  double v39; // xmm5_8
  __int64 v40; // rdx
  __int64 v41; // r14

  v15 = *(_QWORD *)(a2 + 40);
  if ( v15 )
  {
    if ( (v15 & 4) != 0 )
    {
      v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v16 )
      {
        v17 = (__int64)(v16 + 1);
        v18 = *v16;
        if ( !(unsigned __int8)sub_717AC0(a1, v18, v17, a12, a13, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        v23 = *(_QWORD *)(a2 + 40);
        if ( v23 )
        {
          v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v23 & 4) == 0 )
            v24 = nullptr;
        }
        else
        {
          v24 = nullptr;
        }
        if ( (v25 = *v24 & 0xFFFFFFFFFFFFFFF0LL, v26 = *(_QWORD *)v25, *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 24) && v26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24
          && (v26 = sub_F63050(v26, v18, 0, v19, v20)) != 0 )
        {
          if ( (*(_BYTE *)(v26 + 19) & 8) != 0 )
          {
            v27 = *(_QWORD *)(v26 + 48);
            if ( v27 )
            {
              if ( !(unsigned __int8)sub_709840(a1, v27, a3, a4, a5, a6, v21, v22, a9, a10) )
                return 0;
            }
          }
        }
      }
    }
    else if ( ((v15 >> 2) & 1) == 0 )
    {
      v33 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v33 )
      {
        if ( !(unsigned __int8)sub_709840(a1, v33, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
      }
    }
  }
  v30 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v30 = sub_B8D340(a2, 0);
  v31 = sub_70A970(a1, v30, a3, a4, a5, a6, v28, v29, a9, a10);
  if ( !(_BYTE)v31 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v34 = nullptr;
    v35 = sub_B8C3D0(a2);
    v40 = *(unsigned int *)(v35 + 8);
    v41 = *(_QWORD *)v35 + 8 * v40;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v34 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v41 != v34 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v34, a3, a4, a5, a6, v38, v39, a9, a10, v40, v36, v37) )
        return 0;
      ++v34;
    }
  }
  return v31;
}
