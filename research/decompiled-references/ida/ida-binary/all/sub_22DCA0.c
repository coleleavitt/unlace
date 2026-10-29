__int64 __fastcall sub_22DCA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int16 v16; // ax
  __m128 v17; // xmm0
  const char *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  unsigned __int64 *v24; // rdi
  unsigned __int64 *v25; // rax
  char v27; // al
  unsigned __int64 v28; // r15
  unsigned __int64 *v29; // rsi
  char *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  const __m128i *v34; // rdi
  __int64 v35; // rdx
  char v37; // [rsp+0h] [rbp-528h]
  __int64 v38; // [rsp+8h] [rbp-520h]
  __int64 v39; // [rsp+8h] [rbp-520h]
  __int64 v40; // [rsp+8h] [rbp-520h]
  __int64 v41; // [rsp+10h] [rbp-518h]
  _QWORD v42[2]; // [rsp+20h] [rbp-508h] BYREF
  __int128 v43; // [rsp+30h] [rbp-4F8h]
  __int64 v44; // [rsp+40h] [rbp-4E8h]
  __int64 v45; // [rsp+48h] [rbp-4E0h]
  __int64 v46; // [rsp+50h] [rbp-4D8h]
  __int128 v47; // [rsp+58h] [rbp-4D0h]
  __int128 v48; // [rsp+68h] [rbp-4C0h]
  __int128 v49; // [rsp+78h] [rbp-4B0h]
  __int128 v50; // [rsp+88h] [rbp-4A0h]
  __int128 v51; // [rsp+98h] [rbp-490h]
  __int128 v52; // [rsp+A8h] [rbp-480h]
  __int128 v53; // [rsp+B8h] [rbp-470h]
  __int128 v54; // [rsp+C8h] [rbp-460h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-450h]
  _BYTE v56[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+4E8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v14 = a4;
  if ( a4 == -1 )
    v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 64);
  v42[0] = a3;
  v55 = 0xFFFFFFFF00000000LL;
  v45 = 513;
  v16 = *(_WORD *)(a2 + 72);
  v43 = 0;
  v17 = (__m128)-1LL;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v52 = -1;
  v53 = -1;
  v54 = -1;
  v44 = 0;
  v42[1] = v14;
  WORD1(v45) = __ROL2__(v16, 8);
  HIDWORD(v45) = 4;
  v46 = setup_selector(v15);
  sub_226FF0((__int64)v56, 1024, a2);
  if ( *(_QWORD *)(a2 + 48) <= 1u )
  {
    v27 = *(_BYTE *)(a2 + 73);
    v18 = "CODE";
    if ( (v27 & 1) == 0 )
    {
      v18 = "CONST";
      if ( (v27 & 6) != 4 )
        v18 = "DATA";
    }
  }
  else
  {
    v18 = *(const char **)(a2 + 40);
  }
  v19 = add_segm_ex(v42, v56, v18, 8);
  if ( !(_BYTE)v19 )
    return 0;
  if ( a1 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    if ( !v21
      || (v24 = *(unsigned __int64 **)a1,
          v38 = *(_QWORD *)(a1 + 8),
          v25 = sub_228140(*(unsigned __int64 **)a1, v38, 0, a3 + 1),
          v21 = v38,
          !v25) )
    {
      v20 = 0;
      goto LABEL_21;
    }
    if ( a3 >= v25[1] )
    {
LABEL_13:
      v20 = (char *)v25 - (char *)v24 + 24;
LABEL_21:
      v28 = *(_QWORD *)(a1 + 16);
      if ( v28 < v21 + 1 )
      {
        v39 = v20;
        v31 = qvector_reserve(a1, 0, v21 + 1, 24);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v28;
        v34 = *(const __m128i **)a1;
        v29 = (unsigned __int64 *)v31;
        v35 = v32 - 1;
        if ( v35 >= 0 )
        {
          do
          {
            v17 = (__m128)_mm_loadu_si128(v34);
            v31 += 24;
            v34 = (const __m128i *)((char *)v34 + 24);
            *(__m128 *)(v31 - 24) = v17;
            *(_QWORD *)(v31 - 8) = v34[-1].m128i_i64[1];
          }
          while ( v35-- != 0 );
          v34 = *(const __m128i **)a1;
        }
        v41 = v39;
        v40 = v33;
        *(double *)v17.m128_u64 = qfree(v34, (const char *)v29);
        v20 = v41;
        *(_QWORD *)(a1 + 16) = v40;
        v21 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v29;
      }
      else
      {
        v29 = *(unsigned __int64 **)a1;
      }
      v30 = (char *)v29 + v20;
      if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * v21 - v20) >> 3) - 1) >= 0 )
        memmove(
          (char *)v29 + 24 * v21 + 24 - 8 * ((24 * v21 - v20) >> 3),
          &v29[3 * v21 - ((24 * v21 - v20) >> 3)],
          24 * v21 - v20);
      *(_QWORD *)v30 = a3;
      *((_QWORD *)v30 + 1) = v14;
      v30[16] = 1;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_26;
    }
    if ( a3 != *v25 )
    {
      v25[1] = a3;
      v24 = *(unsigned __int64 **)a1;
      v21 = *(_QWORD *)(a1 + 8);
      goto LABEL_13;
    }
    v25[1] = v14;
  }
LABEL_26:
  if ( (dword_8BA5B0 & 1) != 0 )
    sub_169700(
      (int)"%a: created segment %s, end: %a\n",
      a3,
      (__int64)v56,
      v14,
      v20,
      v21,
      v17,
      a6,
      a7,
      a8,
      v22,
      v23,
      a11,
      a12,
      v37);
  return v19;
}
