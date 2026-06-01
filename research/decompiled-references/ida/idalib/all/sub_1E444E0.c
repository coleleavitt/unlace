unsigned __int64 __fastcall sub_1E444E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  const __m128i *v15; // rsi
  unsigned int v16; // edx
  unsigned __int64 v17; // r12
  _QWORD *v19; // rax
  __int64 v20; // r15
  char v21; // [rsp+Fh] [rbp-269h] BYREF
  __int128 v22; // [rsp+10h] [rbp-268h] BYREF
  __int64 v23; // [rsp+20h] [rbp-258h]
  void *v24[2]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v25[96]; // [rsp+40h] [rbp-238h] BYREF
  void *ptr; // [rsp+A0h] [rbp-1D8h]
  __int64 v27; // [rsp+A8h] [rbp-1D0h]
  _WORD v28[49]; // [rsp+B0h] [rbp-1C8h] BYREF
  char v29; // [rsp+112h] [rbp-166h]
  void *v30[2]; // [rsp+120h] [rbp-158h] BYREF
  _BYTE v31[256]; // [rsp+130h] [rbp-148h] BYREF
  __int64 v32; // [rsp+230h] [rbp-48h]

  v32 = 0;
  v30[0] = v31;
  v30[1] = (void *)0x800000000LL;
  v7 = sub_BBFE00(a2);
  v8 = sub_1E38470(*a1, *(_DWORD *)(a2 + 24), v7, a1[4], 0, a3, a4, a5);
  if ( !v8 )
    goto LABEL_21;
  v9 = (_QWORD *)v8;
  v10 = *(_QWORD *)(a2 + 120);
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10 && (v10 & 4) != 0 )
  {
    if ( !v11 )
      goto LABEL_8;
    v11 = (_QWORD *)*v11;
  }
  v12 = *a1;
  if ( !v11 )
    goto LABEL_9;
  v13 = *(_DWORD *)v11;
  v14 = a1[4];
  v15 = (const __m128i *)(v11 + 2);
  LODWORD(v32) = v13;
  HIDWORD(v32) = v15[-1].m128i_i32[1];
  if ( (unsigned __int8)sub_1DD74F0(v12, v15, v15[-1].m128i_u32[2], v14, (__int64)v30, a3, a4) )
  {
LABEL_21:
    v17 = 0;
    goto LABEL_15;
  }
LABEL_8:
  v12 = *a1;
LABEL_9:
  v22 = 0;
  v24[0] = v25;
  ptr = v28;
  v16 = *(_DWORD *)(a2 + 24);
  v28[48] = 0;
  v24[1] = (void *)0x400000000LL;
  v27 = 0x400000000LL;
  v29 = 0;
  v23 = 0;
  if ( (unsigned __int8)sub_1CCEE60(
                          v12,
                          (__int64)v9,
                          v16,
                          (__int64)v30,
                          (__int64)&v22,
                          0,
                          (__m128)0LL,
                          a4,
                          (__int64)v24,
                          1,
                          nullptr)
    || (*(_QWORD *)&v22 = 0,
        v19 = sub_BC3BE0(v9, (__int64)ptr, (unsigned int)v27, (__int64)&v22),
        (v20 = (__int64)v19) != 0)
    && (unsigned __int8)sub_1CBF140(
                          *a1,
                          *(unsigned int *)(a2 + 24),
                          *(_BYTE *)(a2 + 140) & 7,
                          (__int64)v19,
                          *((_BYTE *)v19 + 140) & 7,
                          *((unsigned int *)v19 + 34),
                          &v21) )
  {
    v17 = 0;
  }
  else
  {
    v17 = sub_1E3B4C0(a1, v9, a2, (__int64 *)v30, (const __m128i *)ptr, (unsigned int)v27, (__m128)0LL, a4, a5, v20);
  }
  if ( ptr != v28 )
    free(ptr);
  if ( v24[0] != v25 )
    free(v24[0]);
LABEL_15:
  if ( v30[0] != v31 )
    free(v30[0]);
  return v17;
}
