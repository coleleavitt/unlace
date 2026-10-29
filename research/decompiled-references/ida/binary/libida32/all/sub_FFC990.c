__int64 __fastcall sub_FFC990(__int64 a1, int *a2, int a3, int a4, int a5)
{
  int v7; // r15d
  int v8; // r14d
  int v9; // r13d
  char v10; // r8
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r13
  const __m128i *v15; // rbp
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __m128i *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // ebp
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v27; // r12d
  __int64 v28; // rax
  int v29; // edx
  unsigned int v30; // edx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rsi
  unsigned __int8 v37; // cf
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rax
  char v41; // [rsp+Fh] [rbp-89h]
  _DWORD v42[5]; // [rsp+10h] [rbp-88h] BYREF
  char v43; // [rsp+24h] [rbp-74h]

  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  v10 = *((_BYTE *)a2 + 12);
  if ( a4 < 0 )
  {
    v41 = *((_BYTE *)a2 + 12);
    v27 = -2 - a4;
    v28 = sub_FFBB60(a1 + 264, (unsigned int)(-2 - a4));
    v29 = *(_DWORD *)v28;
    *(_DWORD *)(v28 + 8) = v7;
    *(_DWORD *)(v28 + 12) = v8;
    *(_DWORD *)(v28 + 16) = v9;
    v30 = a5 & 0x7FFFFFFF | v29 & 0x80000000;
    *(_BYTE *)(v28 + 20) = v41;
    *(_DWORD *)v28 = v30;
    v31 = v27 & 0x3F;
    *(_BYTE *)(v28 + 3) = HIBYTE(v30) | 0x80;
    v32 = 1LL << v31;
    v33 = 8LL * (v27 >> 6);
    v34 = (__int64 *)(v33 + *(_QWORD *)(a1 + 392));
    v35 = (__int64 *)(*(_QWORD *)(a1 + 320) + v33);
    v36 = (1LL << v31) | *v34;
    v37 = _bittest64(&v36, v31);
    *v34 = v36;
    if ( v37 )
      v38 = *v35 | v32;
    else
      v38 = *v35 & ~v32;
    *v35 = v38;
    return a5 | 0x80000000;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 312);
    v42[4] = a2[2];
    v13 = *(unsigned int *)(a1 + 196);
    v14 = *(_QWORD *)(a1 + 184);
    v42[3] = v8;
    v42[2] = v7;
    v15 = (const __m128i *)v42;
    v16 = v12 & 0x7FFFFFFF | v42[0] & 0x80000000;
    v17 = *(unsigned int *)(a1 + 192);
    v43 = v10;
    v18 = a1 + 200;
    v42[0] = v16;
    HIBYTE(v42[0]) = HIBYTE(v16) | 0x80;
    v19 = v17 + 1;
    v20 = (__m128i *)(v14 + 24 * v17);
    if ( v19 > v13 )
    {
      v39 = a1 + 184;
      if ( v14 > (unsigned __int64)v42 || v20 <= (__m128i *)v42 )
      {
        sub_22134E0(v39, v18, v19, 24);
        v20 = (__m128i *)(*(_QWORD *)(a1 + 184) + 24LL * *(unsigned int *)(a1 + 192));
      }
      else
      {
        sub_22134E0(v39, v18, v19, 24);
        v40 = *(_QWORD *)(a1 + 184);
        v15 = (const __m128i *)((char *)v42 + v40 - v14);
        v20 = (__m128i *)(v40 + 24LL * *(unsigned int *)(a1 + 192));
      }
    }
    *v20 = _mm_loadu_si128(v15);
    v20[1].m128i_i64[0] = v15[1].m128i_i64[0];
    v21 = *(unsigned int *)(a1 + 208);
    v22 = *(unsigned int *)(a1 + 212);
    ++*(_DWORD *)(a1 + 192);
    v23 = *(_DWORD *)(a1 + 312);
    if ( v21 + 1 > v22 )
    {
      sub_22134E0(v18, a1 + 216, v21 + 1, 4);
      v21 = *(unsigned int *)(a1 + 208);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 200) + 4 * v21) = v23;
    v24 = *(_DWORD *)(a1 + 312);
    ++*(_DWORD *)(a1 + 208);
    v25 = v24 + a3 + 1;
    if ( v24 >= v25 || v25 > *(_DWORD *)(a1 + 316) )
    {
      sub_FA3370((__int64)v42, *(_QWORD *)(a1 + 8), 0, 63);
      sub_AC6300((__int64)v42);
      sub_21FDF30("ran out of source locations", 1);
    }
    *(_DWORD *)(a1 + 312) = v25;
    return (~a3 + v25) | 0x80000000;
  }
}

