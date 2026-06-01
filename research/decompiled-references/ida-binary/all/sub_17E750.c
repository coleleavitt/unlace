unsigned __int64 __fastcall sub_17E750(
        __int64 a1,
        __int64 *a2,
        char a3,
        char a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        int a14)
{
  __int64 v17; // rcx
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __m128 v21; // xmm0
  _QWORD *v22; // rdi
  __m128 v23; // xmm1
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r8
  _QWORD *v30; // r12
  unsigned int v32; // eax
  _QWORD *v33; // [rsp+0h] [rbp-48h] BYREF
  __m128 v34; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v17 = *a2;
  v34 = 0;
  sub_37A5A0(0, a3 == 0 ? 100 : -1, 1, v17, (unsigned int)&v33, a14, 0);
  v21 = (__m128)_mm_loadu_si128((const __m128i *)&v34);
  v22 = *(_QWORD **)a1;
  v23 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
  v24 = v33;
  v25 = *(unsigned __int8 *)(a1 + 24);
  v26 = *(_DWORD *)(a1 + 32);
  v33 = *(_QWORD **)a1;
  v27 = v21.m128_u64[0];
  *(_QWORD *)a1 = v24;
  *(__m128 *)(a1 + 8) = v21;
  v34 = v23;
  if ( a3 )
  {
    v32 = v26 & 0xFFFFFFFE;
    v28 = 2;
    v29 = v32;
    *(_DWORD *)(a1 + 28) = 2;
    *(_DWORD *)(a1 + 32) = v32;
    if ( !(_BYTE)v25 )
      goto LABEL_4;
  }
  else
  {
    v28 = 1;
    v29 = v26 & 0xFFFFFFFE;
    if ( v21.m128_u64[0] == 100 )
    {
      *(_DWORD *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 32) = v26 | 1;
      if ( (_BYTE)v25 )
        goto LABEL_12;
      goto LABEL_18;
    }
    *(_DWORD *)(a1 + 32) = v29;
    *(_DWORD *)(a1 + 28) = 1;
    if ( !(_BYTE)v25 )
    {
LABEL_4:
      if ( v21.m128_u64[0] <= 0x63 )
      {
        v30 = &v24[v21.m128_u64[0]];
        if ( v24 != v30 )
        {
          while ( !(unsigned __int8)has_backup_metadata(*v24, v28, v27) )
          {
            if ( v30 == ++v24 )
              goto LABEL_10;
          }
          *(_BYTE *)(a1 + 24) = 1;
        }
        goto LABEL_10;
      }
LABEL_18:
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_12;
    }
  }
LABEL_10:
  if ( !a4 && !*(_QWORD *)(a1 + 8) )
    sub_169700(
      (int)"No function to operate on\n",
      v28,
      v27,
      v25,
      v29,
      v18,
      v21,
      v23,
      a7,
      a8,
      v19,
      v20,
      a11,
      a12,
      (char)v33);
  v22 = v33;
LABEL_12:
  if ( v22 )
  {
    v34.m128_u64[0] = 0;
    qfree(v22, v28, v27, v25, v29);
  }
  return v35 - __readfsqword(0x28u);
}
