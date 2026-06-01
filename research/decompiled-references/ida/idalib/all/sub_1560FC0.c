__int64 __fastcall sub_1560FC0(__int64 a1, _BYTE *a2, unsigned int a3)
{
  int v5; // r13d
  __m128i v6; // xmm0
  __m128 v7; // xmm1
  __m128i v8; // xmm2
  unsigned __int64 v9; // rbx
  __int16 v10; // r12
  int v11; // eax
  __int64 v12; // rdi
  unsigned __int16 v13; // cx
  __int64 *v14; // rdi
  bool v15; // zf
  int v16; // eax
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rdi
  char *v24; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int16 v31; // dx
  char v32; // cl
  unsigned __int64 v33; // rcx
  bool v34; // si
  char v35; // dl
  bool v37; // [rsp+1Fh] [rbp-99h] BYREF
  __m128i v38; // [rsp+28h] [rbp-90h] BYREF
  __m128 v39; // [rsp+38h] [rbp-80h] BYREF
  __int64 v40; // [rsp+48h] [rbp-70h]
  __m128i v41; // [rsp+50h] [rbp-68h] BYREF
  int v42; // [rsp+60h] [rbp-58h]

  v5 = *(_DWORD *)(a1 + 88);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v7 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 64));
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v9 = *(unsigned int *)(a1 + 2712);
  v40 = *(_QWORD *)(a1 + 80);
  v10 = *(_WORD *)(a1 + 92);
  v11 = *(_DWORD *)(a1 + 32);
  v38 = v6;
  v12 = *(_QWORD *)(a1 + 8);
  v39 = v7;
  v41 = v8;
  v42 = v11;
  sub_1418D30(v12, 0);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    ++*(_WORD *)(a1 + 88);
  }
  else
  {
    v13 = *(_WORD *)(a1 + 88);
    if ( !v13 )
      goto LABEL_3;
    v26 = *(_DWORD *)(a1 + 2792);
    if ( v26 )
    {
      v27 = *(_QWORD *)(a1 + 2784) + 24LL * v26 - 24;
      do
      {
        if ( v13 == *(_WORD *)(v27 + 14) )
        {
          if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_17;
        }
        else if ( v13 > *(_WORD *)(v27 + 14) )
        {
          goto LABEL_17;
        }
        if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v27 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v27 + 18) )
          break;
LABEL_17:
        --v26;
        v27 -= 24;
        *(_DWORD *)(a1 + 2792) = v26;
      }
      while ( v26 );
    }
    *(_WORD *)(a1 + 88) = v13 - 1;
  }
LABEL_3:
  v14 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v14, (int *)(a1 + 16));
  v15 = *(_WORD *)(a1 + 32) == 23;
  v37 = 0;
  if ( !v15 )
  {
    v16 = sub_1560700((const __m128i *)a1, &v37, 0, a3, v6, v7);
    if ( v16 != 2 )
    {
      LOBYTE(a2) = v16 != 1;
      goto LABEL_6;
    }
    if ( *(_WORD *)(a1 + 32) != 23 )
      goto LABEL_25;
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_QWORD *)(v28 + 2944);
  if ( v29 >= *(unsigned int *)(v28 + 2912) )
    v30 = sub_14180A0(v28, 1u);
  else
    v30 = *(_QWORD *)(v28 + 2904) + 24 * v29;
  v31 = *(_WORD *)(v30 + 16);
  v32 = v31 - 109;
  if ( (unsigned __int16)(v31 - 109) > 0x37u )
  {
    v34 = (v31 & 0xFF7F) == 20;
    LOBYTE(v33) = 0;
    if ( (unsigned __int16)(v31 - 24) > 0x38u )
      v35 = 0;
    else
      v35 = (0x100010000002031uLL >> ((unsigned __int8)v31 - 24)) & 1;
  }
  else
  {
    LOBYTE(v31) = v31 & 0x7F;
    v33 = (0x80020000000001uLL >> v32) & 1;
    v34 = v31 == 20;
    v35 = 0;
  }
  if ( v34 | (unsigned __int8)v33 || v35 || (unsigned int)sub_14A7DC0((_QWORD *)a1, v30) )
    goto LABEL_32;
  if ( v37 )
  {
LABEL_25:
    LODWORD(a2) = 0;
    goto LABEL_6;
  }
  if ( !a2 )
  {
LABEL_32:
    LODWORD(a2) = 1;
  }
  else
  {
    *a2 = 1;
    LODWORD(a2) = 1;
  }
LABEL_6:
  sub_1417BC0(*(_QWORD *)(a1 + 8));
  v17 = _mm_loadu_si128(&v38);
  v18 = _mm_loadu_si128((const __m128i *)&v39);
  v19 = _mm_load_si128(&v41);
  *(_QWORD *)(a1 + 80) = v40;
  v20 = v42;
  *(__m128i *)(a1 + 48) = v17;
  *(_DWORD *)(a1 + 32) = v20;
  v21 = *(unsigned int *)(a1 + 2712);
  *(__m128i *)(a1 + 64) = v18;
  *(__m128i *)(a1 + 16) = v19;
  if ( v9 != v21 )
  {
    if ( v9 >= v21 )
    {
      if ( v9 > *(unsigned int *)(a1 + 2716) )
      {
        sub_2237220(a1 + 2704, a1 + 2720, v9, 8);
        v21 = *(unsigned int *)(a1 + 2712);
      }
      v22 = *(_QWORD *)(a1 + 2704);
      v23 = (char *)(v22 + 8 * v21);
      v24 = (char *)(v22 + 8 * v9);
      if ( v23 != v24 )
        memset(v23, 0, 8 * ((unsigned __int64)(v24 - 8 - v23) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 2712) = v9;
  }
  *(_DWORD *)(a1 + 88) = v5;
  *(_WORD *)(a1 + 92) = v10;
  return (unsigned int)a2;
}
