__int64 __fastcall sub_7181C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char v13; // al
  int v14; // eax
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r15d
  double v24; // xmm4_8
  double v25; // xmm5_8
  int v26; // r14d
  __int64 i; // rbx
  __int64 v28; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 *v36; // r13
  __int64 *v37; // rbx
  __int64 v38; // rax
  double v39; // xmm4_8
  double v40; // xmm5_8

  v13 = *(_BYTE *)(a2 + 16);
  if ( v13 == 26 )
  {
    v14 = 15;
    if ( a2 )
      v14 = 8 * ((*(_BYTE *)(a2 + 19) & 0x1E) != 0) + 15;
    goto LABEL_4;
  }
  v15 = 16;
  if ( v13 != 25 )
  {
    v14 = 15;
LABEL_4:
    v15 = 8 * ((v14 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
  }
  v16 = sub_F6C520(*(_QWORD *)(a2 + 24));
  v23 = sub_717AC0(
          a1,
          *(_QWORD *)(a2 + 24),
          v16 * ((a3 + v15 != 0) + (a3 + v15 - (unsigned __int64)(a3 + v15 != 0)) / v16),
          v16,
          v17,
          a4,
          a5,
          a6,
          a7,
          v18,
          v19,
          a10,
          a11);
  if ( !(_BYTE)v23 )
    return 0;
  if ( *(_BYTE *)(a2 + 16) != 25 )
  {
    v26 = *(unsigned __int16 *)(a2 + 22);
    if ( *(_WORD *)(a2 + 22) )
    {
      for ( i = 0; v26 != (_DWORD)i; ++i )
      {
        v28 = *(_QWORD *)(a3 + 8 * i + 16);
        if ( v28 )
        {
          if ( !(unsigned __int8)sub_709840(a1, v28, a4, a5, a6, a7, v24, v25, a10, a11) )
            return 0;
        }
        else if ( (unsigned int)i < *(unsigned __int16 *)(a2 + 22)
               && !(unsigned __int8)sub_70EBE0(
                                      a1,
                                      *(_QWORD *)(a2 + 8 * i + 48),
                                      v20,
                                      v21,
                                      v22,
                                      a4,
                                      a5,
                                      a6,
                                      a7,
                                      v24,
                                      v25,
                                      a10,
                                      a11) )
        {
          return 0;
        }
      }
    }
  }
  v30 = sub_6F33F0(a2);
  v36 = (__int64 *)(v30 + 8 * v31);
  v37 = (__int64 *)v30;
  if ( v36 != (__int64 *)v30 )
  {
    while ( (unsigned __int8)sub_70EBE0(a1, *v37, v31, v32, v33, a4, a5, a6, a7, v34, v35, a10, a11) )
    {
      if ( v36 == ++v37 )
        goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  v38 = sub_6F3390(a2);
  if ( !v38 )
    return v23;
  return sub_70DBE0(a1, v38, 0, a4, a5, a6, a7, v39, v40, a10, a11);
}
