__int64 __fastcall sub_BFA40(__int64 a1, __int64 a2, const char *a3, unsigned __int64 a4, double a5, double a6)
{
  unsigned __int64 v8; // rbp
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  __int64 v11; // r9
  unsigned __int64 *v12; // rdi
  unsigned __int64 *v13; // rax
  __int64 v14; // r8
  unsigned __int64 v16; // r15
  unsigned __int64 *v17; // rsi
  char *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // [rsp+8h] [rbp-520h]
  __int64 v26; // [rsp+8h] [rbp-520h]
  __int64 v27; // [rsp+8h] [rbp-520h]
  __int64 v28; // [rsp+10h] [rbp-518h]
  char v29[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+4E8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v8 = a4;
  if ( a4 == -1 )
    v8 = *(_QWORD *)(a2 + 8);
  v9.m128i_i64[0] = -1;
  setup_selector();
  sub_B7B50((__int64)v29, 1024, a2);
  v10 = add_segm_ex();
  if ( !(_BYTE)v10 )
    return 0;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( !v11
      || (v12 = *(unsigned __int64 **)a1,
          v25 = *(_QWORD *)(a1 + 8),
          v13 = sub_B8D40(*(unsigned __int64 **)a1, v25, 0, (unsigned __int64)(a3 + 1)),
          v11 = v25,
          !v13) )
    {
      v14 = 0;
      goto LABEL_15;
    }
    if ( (unsigned __int64)a3 >= v13[1] )
    {
LABEL_11:
      v14 = (char *)v13 - (char *)v12 + 24;
LABEL_15:
      v16 = *(_QWORD *)(a1 + 16);
      if ( v16 < v11 + 1 )
      {
        v26 = v14;
        v19 = qvector_reserve();
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v16;
        v22 = *(const __m128i **)a1;
        v17 = (unsigned __int64 *)v19;
        v23 = v20 - 1;
        if ( v23 >= 0 )
        {
          do
          {
            v9 = _mm_loadu_si128(v22);
            v19 += 24;
            v22 = (const __m128i *)((char *)v22 + 24);
            *(__m128i *)(v19 - 24) = v9;
            *(_QWORD *)(v19 - 8) = v22[-1].m128i_i64[1];
          }
          while ( v23-- != 0 );
        }
        v28 = v26;
        v27 = v21;
        qfree();
        v14 = v28;
        *(_QWORD *)(a1 + 16) = v27;
        v11 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v17;
      }
      else
      {
        v17 = *(unsigned __int64 **)a1;
      }
      v18 = (char *)v17 + v14;
      if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * v11 - v14) >> 3) - 1) >= 0 )
        memmove(
          (char *)v17 + 24 * v11 + 24 - 8 * ((24 * v11 - v14) >> 3),
          &v17[3 * v11 - ((24 * v11 - v14) >> 3)],
          24 * v11 - v14);
      *(_QWORD *)v18 = a3;
      *((_QWORD *)v18 + 1) = v8;
      v18[16] = 1;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_20;
    }
    if ( a3 != (const char *)*v13 )
    {
      v13[1] = (unsigned __int64)a3;
      v12 = *(unsigned __int64 **)a1;
      v11 = *(_QWORD *)(a1 + 8);
      goto LABEL_11;
    }
    v13[1] = v8;
  }
LABEL_20:
  if ( (dword_245190 & 1) != 0 )
    sub_8F740((__int64)"%a: created segment %s, end: %a\n", *(double *)v9.m128i_i64, a3, a6);
  return v10;
}

