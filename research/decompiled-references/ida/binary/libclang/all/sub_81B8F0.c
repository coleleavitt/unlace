unsigned __int64 __fastcall sub_81B8F0(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        unsigned __int64 a9)
{
  bool v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // edx
  int v16; // ecx
  char v17; // r12
  unsigned __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned __int8 v20; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // r15
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+0h] [rbp-48h]
  int v37; // [rsp+8h] [rbp-40h]
  int v38; // [rsp+8h] [rbp-40h]
  __int16 v39; // [rsp+Ch] [rbp-3Ch]
  __int16 v40; // [rsp+Ch] [rbp-3Ch]

  v11 = HIDWORD(a9) != 0;
  v12 = 8LL * v11 + 32;
  v13 = a1[274];
  a1[284] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v12 + v14 && v13 )
  {
    a1[274] = v12 + v14;
  }
  else
  {
    v40 = a6;
    v36 = a5;
    v38 = a4;
    v33 = sub_804090((__int64)(a1 + 274), v12, 3);
    a6 = v40;
    a5 = v36;
    a4 = v38;
    v14 = v33;
  }
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x77;
  if ( byte_4AD234C )
  {
    v39 = a6;
    v35 = a5;
    v37 = a4;
    sub_AC4570(119);
    a6 = v39;
    a5 = v35;
    a4 = v37;
  }
  v15 = a4;
  v16 = a4 & 0x3F;
  *(_QWORD *)(v14 + 8) = a5;
  *(_DWORD *)(v14 + 4) = a8;
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(v14 + 24) = a3;
  *(_DWORD *)v14 = *(_DWORD *)v14 & 0xFA0001FF | (v15 << 19) & 0x1F80000 | (a6 << 9) & 0x600 | (a7 << 11) & 0x3800;
  if ( v16 != 10 )
  {
    if ( v16 != 11 )
      goto LABEL_8;
    v22 = a2;
    a2 = a3;
    a3 = v22;
  }
  if ( ((*(_WORD *)a2 + 393) & 0x1FFu) <= 1 && ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 5 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        v23 = sub_80F310(a3);
        if ( sub_80F4C0(v23) )
        {
          v25 = sub_80F310(v24);
          sub_80F4C0(v25);
          v27 = sub_80F310(v26);
          v28 = sub_80F4C0(v27);
          if ( v30 | v28 )
          {
            if ( (v30 && v30 == v29 || v28 && v28 == v29) && v30 != v28 )
            {
              if ( (v31 = (_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), (unsigned __int8)sub_B100B0(*v31))
                && (v32 = *(_DWORD *)(a1[270] + 744LL), (v32 & 1) == 0)
                && (v32 & 6) != 0
                || (unsigned __int8)sub_B0FF70(*v31)
                && (v34 = *(_DWORD *)(a1[270] + 744LL), (v34 & 1) == 0)
                && (v34 & 0xA) != 0 )
              {
                *(_BYTE *)(a2 + 3) |= 4u;
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  v17 = (2 * v11) | *(_BYTE *)(v14 + 3) & 0xFD;
  *(_BYTE *)(v14 + 3) = v17;
  if ( (v17 & 2) != 0 )
  {
    v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(HIDWORD(a9))).m128i_u64[0];
    v19 = 32;
    if ( (*(_WORD *)v14 & 0x1FF) == 0x78 )
      v19 = 48;
    *(_QWORD *)(v14 + v19) = v18;
  }
  v20 = sub_76B3C0(v14);
  *(_BYTE *)(v14 + 1) = (v20 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
  *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v20 >> 2) & 7;
  return v14;
}

