__int64 __fastcall sub_1C1A620(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r15d
  char v9; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // rsi
  unsigned __int16 *v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  unsigned __int64 v39; // r13
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rcx
  __int64 v46; // rax
  unsigned __int16 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // [rsp-8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  __int64 v52[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = a3;
  v9 = a4;
  if ( !(unsigned __int8)sub_1C1A190(a1, 0, a3, a4, a5, a6) )
  {
    sub_1C15580((__int64 *)(a1 + 8), a1 + 80);
    return 1;
  }
  v16 = *(_QWORD *)(a1 + 88);
  if ( v16 )
    *(_QWORD *)(v16 + 24) |= 4uLL;
  v17 = sub_C9AA20(*(_QWORD *)(a1 + 80), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), v12, v13, v14, v15);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = v17;
  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 232) + 1LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
  {
    goto LABEL_13;
  }
  v22 = *(_QWORD *)(a1 + 112);
  v52[0] = *(_QWORD *)(**(_QWORD **)(v22 + 96) + 48LL);
  v23 = *(_QWORD *)(v22 + 16);
  v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v23 & 4) != 0 )
    v24 = (_QWORD *)*v24;
  v25 = sub_F6A080(v52, v21, (__int64)v24, 2, v18, v19);
  v20 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 232) + 1LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
LABEL_13:
    v28 = *(_QWORD *)(a1 + 112);
    v52[0] = a2;
    if ( (*(_BYTE *)(v28 + 29) & 2) != 0 )
      goto LABEL_14;
    goto LABEL_32;
  }
  v52[0] = a2;
  v51 = v25;
  v26 = sub_1919BF0((_QWORD *)v20, v25, (unsigned __int64 *)v52, 1, 0, 1u, a7, a8);
  if ( v52[0] == 1
    || sub_18DCB30(*(_QWORD *)(a1 + 8), v26, v8, v51, *(_QWORD *)(a2 + 8), v52[0] & 0xFFFFFFFFFFFFFFFELL, 0, nullptr) )
  {
    return 1;
  }
  v28 = *(_QWORD *)(a1 + 112);
  v20 = *(_QWORD *)(a1 + 8);
  v52[0] &= ~1uLL;
  if ( (*(_BYTE *)(v28 + 29) & 2) == 0 )
  {
LABEL_32:
    sub_18F5260(v20, v28, (int *)(a1 + 20), 1u, 0, 1u, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
    v28 = *(_QWORD *)(a1 + 112);
    v20 = *(_QWORD *)(a1 + 8);
  }
LABEL_14:
  v29 = (*(__int64 *)(*(_QWORD *)(a1 + 80) + 40LL) >> 1) & 3;
  if ( (*(_BYTE *)(v28 + 58) & 2) != 0 )
  {
    if ( v29 != 2 )
      goto LABEL_16;
  }
  else if ( !v29 )
  {
LABEL_16:
    v30 = v28;
    v31 = *(_QWORD *)(a1 + 96);
    v32 = sub_19E1580(
            *(__int64 **)(v20 + 736),
            v31,
            v21,
            *(_DWORD *)(a1 + 20),
            *(_QWORD **)(a1 + 120),
            v30,
            a7,
            a8,
            v52,
            1);
    goto LABEL_17;
  }
  v47 = sub_19E2120(
          *(__int64 **)(v20 + 736),
          v21,
          (_DWORD)v29 == 1,
          *(_DWORD *)(a1 + 20),
          *(_QWORD *)(a1 + 120),
          v28,
          a7,
          a8,
          v52,
          1);
  v31 = v50;
  v32 = v47;
LABEL_17:
  if ( v32 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    if ( v9 )
    {
      v33 = sub_BFB900((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFELL);
      v38 = *(_QWORD *)(v33 + 48);
      v39 = v33;
      if ( (*(_BYTE *)(v38 + 1) & 6) != 0
        || (v40 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL), v31, v34, v35, v36, v37)) == nullptr
        || sub_B9E190((__int64)v40, v31, v41, v42, v43, v44) )
      {
        if ( (*(_WORD *)v38 & 0x1FF) == 0x1A )
        {
          v45 = *(_QWORD **)(a1 + 32);
          LODWORD(v46) = 0;
          if ( v38 != *v45 )
          {
            do
              v46 = (unsigned int)(v46 + 1);
            while ( v38 != v45[v46] );
          }
          *(_DWORD *)(a1 + 16) = v46;
          *(_BYTE *)(v38 + 2) &= ~8u;
        }
        else
        {
          v38 = sub_1C160F0(a1, v38);
          v48 = *(unsigned int *)(a1 + 40);
          *(_DWORD *)(a1 + 16) = v48 - 1;
          v49 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v48 - 8);
          if ( (*(_WORD *)v49 & 0x1FF) == 0x1A )
            *(_BYTE *)(v49 + 2) &= ~8u;
        }
        *(_QWORD *)(v39 + 48) = v38;
      }
    }
  }
  return (__int64)v32;
}
