unsigned __int64 __fastcall sub_1DDB640(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // edi
  int v16; // esi
  unsigned __int64 v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // rdx
  const __m128i *v20; // rdi
  __int64 v21; // rdx
  __m128i v22; // xmm0
  bool v23; // zf
  __int64 v24; // rdi
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  unsigned __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rsi
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v35; // r8
  unsigned int *v36; // rdx
  __int64 v37; // rsi
  __m128i v38; // xmm2
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // [rsp+8h] [rbp-C0h]
  char v46; // [rsp+Ch] [rbp-BCh]
  __m128i v47; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-A8h]
  __m128i v49; // [rsp+30h] [rbp-98h] BYREF
  __int64 v50; // [rsp+40h] [rbp-88h]
  __m128i v51; // [rsp+50h] [rbp-78h] BYREF
  __int64 v52; // [rsp+60h] [rbp-68h]
  __m128i v53; // [rsp+70h] [rbp-58h] BYREF
  __int64 v54; // [rsp+80h] [rbp-48h]

  v10 = a3;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(unsigned int *)(v11 + 112);
  v14 = *(_WORD *)(a3 + 20) & 0x7FFF;
  v15 = v13 + v12;
  if ( v14 >= (int)v13 + (int)v12 )
  {
    v35 = *(_QWORD *)(a3 + 32);
    if ( v35 )
    {
      v35 = sub_1DD8310(a1, *a4, *(_QWORD *)(a3 + 32), v13, v35, v12, a6, a7);
      v14 = *(_WORD *)(v10 + 20) & 0x7FFF;
      LODWORD(v12) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    }
    v33 = sub_A77DD0(
            *(_QWORD *)(*(_QWORD *)a1 + 248LL),
            v14 - (unsigned int)v12,
            *(unsigned __int16 *)(v10 + 22),
            (unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)(v10 + 16)) >> 8) >> 7,
            v35);
    goto LABEL_14;
  }
  if ( v14 >= (unsigned int)v13
    && (v16 = ~v14,
        v17 = *(unsigned __int16 *)(a3 + 22),
        v18 = *(unsigned __int16 *)(a3 + 22),
        v19 = *(_QWORD *)v11 + 24LL * (unsigned int)(v16 + v15),
        *(_QWORD *)(v19 + 16) > v17)
    && (v20 = (const __m128i *)(*(_QWORD *)(v19 + 8) + 24 * v17),
        v21 = v20->m128i_i32[0] & 0x7FFFFFFF,
        (v20->m128i_i32[0] & 0x7FFFFFFF) != 0) )
  {
    v22 = _mm_loadu_si128(v20);
    v23 = *(_BYTE *)(v11 + 116) == 1;
    v49 = v22;
    v24 = v20[1].m128i_i64[0];
    v50 = v24;
    if ( v23 )
    {
      v37 = *(_QWORD *)a1;
      if ( (_DWORD)v21 == 9 )
      {
        v42 = *(unsigned int *)(v37 + 12632);
        if ( (_DWORD)v42 )
        {
          sub_1DB7720(&v51, v37, v21, v42, a5, v17, v22, v49.m128i_i64[0]);
          v37 = *(_QWORD *)a1;
          v38 = _mm_load_si128(&v51);
          v39 = v52;
        }
        else
        {
          v53 = _mm_loadu_si128((const __m128i *)v49.m128i_i64[1]);
          v54 = *(_QWORD *)(v49.m128i_i64[1] + 16);
          if ( sub_F1D570((__int64)&v53) )
          {
            sub_F1DF30((__int64)&v47, v53.m128i_i64, v43, v44);
            v53 = _mm_loadu_si128(&v47);
            v54 = v48;
          }
          v39 = v54;
          v37 = *(_QWORD *)a1;
          v51 = _mm_load_si128(&v53);
          v38 = v51;
          v52 = v54;
        }
      }
      else
      {
        v52 = v24;
        v38 = v22;
        v39 = v24;
        v51 = v22;
      }
      v49 = v38;
      v40 = *a4;
      v41 = *(_QWORD *)(v37 + 248);
      v50 = v39;
      sub_1EA6B50(a2, v41, v38.m128i_i64[1], v40);
      return v38.m128i_u64[1];
    }
    else
    {
      v25 = 0;
      v26 = *(_QWORD *)v11;
      v27 = *(_QWORD *)(*(_QWORD *)v11 + 24LL * (unsigned int)(*(_DWORD *)(v11 + 8) + v13 + v16));
      v28 = v27 >> 2;
      v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      v30 = v28 & 1;
      if ( *(char *)(v10 + 21) < 0 )
      {
        v31 = *(_QWORD *)a1;
        v32 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
        if ( !v32 )
        {
          v33 = sub_AB6EF0(*(_QWORD **)(v31 + 248), v29, (unsigned int)v17, v30, &v49);
LABEL_14:
          v10 = v33;
          goto LABEL_15;
        }
        v46 = a5;
        v45 = v30;
        v25 = v49.m128i_i32[1] + 1 - v32;
        sub_1DB7720(&v47, v31, v26, v30, a5, v17, v22, v49.m128i_i64[0]);
        v18 = *(unsigned __int16 *)(v10 + 22);
        v49 = _mm_loadu_si128(&v47);
        v50 = v48;
        LOBYTE(a5) = v46;
        v30 = v45;
      }
      return sub_1DB8C50(a1, a2, a5, v30, v29, v18, v25, v49.m128i_i32[0], v49.m128i_u64[1], v50, *a4);
    }
  }
  else
  {
    result = 0;
    v23 = *(_BYTE *)(a1 + 58) == 0;
    *(_BYTE *)(a1 + 57) = 1;
    if ( v23 )
    {
LABEL_15:
      sub_1EA6140(a2, v10, 4, 4);
      *v36 = *a4;
      return v10;
    }
  }
  return result;
}
