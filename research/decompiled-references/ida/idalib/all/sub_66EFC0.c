__int64 __fastcall sub_66EFC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, int a6)
{
  __int64 *v9; // r12
  __int64 *v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 **v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r11
  __m128i *v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // r14
  _QWORD *v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 *v30; // rbx
  int v31; // eax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i *v35; // rsi
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __m128i v39; // [rsp+10h] [rbp-78h] BYREF
  char v40; // [rsp+23h] [rbp-65h]
  int v41; // [rsp+24h] [rbp-64h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  __m128i v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v41 = a6;
  v40 = a5;
  v45 = __readfsqword(0x28u);
  v9 = *(__int64 **)(a1 + 1672);
  v10 = (__int64 *)sub_506150((__int64)(v9 + 203));
  sub_632610(*v9, 19, *v10);
  v11 = sub_5060F0((__int64)(v9 + 203), 0xFFFFFFFFFFFFFFFFLL);
  sub_632610(*v9, 20, v11[1]);
  v12 = *(unsigned __int64 ***)a3;
  v13 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
  v14 = a2[1];
  if ( v13 != *(_QWORD *)a3 )
  {
    v15 = a4;
    do
    {
      v17 = v14 + 1;
      v18 = **v12;
      v19 = (*v12)[1] - v18;
      v20 = *(_QWORD *)(v9[3] + 16) & (v18 - v15);
      v35 = (__m128i *)*a2;
      v44 = v19;
      v21 = (__m128i)(unsigned __int64)v20;
      v22 = a2[2];
      v34 = _mm_unpacklo_epi64(v21, (__m128i)v18);
      v43 = v34;
      if ( &v43 < v35 || &v43 >= (__m128i *)((char *)v35 + 24 * v22) )
      {
        if ( v22 < v17 )
        {
          v39.m128i_i64[0] = v15;
          v37 = v13;
          v25 = qvector_reserve(a2, v35, v17, 24);
          v15 = v39.m128i_i64[0];
          v13 = v37;
          *a2 = v25;
          v35 = (__m128i *)v25;
          v14 = a2[1];
        }
        v23 = _mm_load_si128(&v43);
        v24 = (__m128i *)((char *)v35 + 24 * v14);
        v24[1].m128i_i64[0] = v44;
        *v24 = v23;
      }
      else
      {
        if ( v22 < v17 )
        {
          v42 = v15;
          v38 = v13;
          v39 = v34;
          v33 = qvector_reserve(a2, v35, v17, 24);
          v15 = v42;
          v34 = _mm_load_si128(&v39);
          *a2 = v33;
          v35 = (__m128i *)v33;
          v13 = v38;
          v14 = a2[1];
        }
        v16 = (__m128i *)((char *)v35 + 24 * v14);
        v16[1].m128i_i64[0] = v19;
        *v16 = v34;
      }
      ++v12;
      v14 = a2[1] + 1;
      a2[1] = v14;
    }
    while ( (unsigned __int64 **)v13 != v12 );
  }
  if ( v14 )
  {
    v26 = (unsigned __int8)v41;
    v27 = *a2 + 24 * v14;
    v28 = (_QWORD *)*a2;
    if ( *a2 != v27 )
    {
      do
      {
        if ( v40 )
          sub_3BBF30(
            (int)"HIDECANCEL\nMoving segment from 0x%0*a to 0x%0*a...",
            (unsigned int)(2 * *(_DWORD *)(a1 + 1512)),
            *v28,
            (unsigned int)(2 * *(_DWORD *)(a1 + 1512)),
            v28[1]);
        v29 = v28[1];
        v28 += 3;
        v30 = sub_505D70(*(_QWORD *)(a1 + 1672) + 1624LL, v29);
        sub_39ADA0(0x1Eu, *(v28 - 3), *(v28 - 2), *(v28 - 1), v26);
        sub_50E830(a1, v30, *(v28 - 3));
        sub_453CA0(*(_QWORD *)(a1 + 1672), *(v28 - 3), v30, v26);
      }
      while ( (_QWORD *)v27 != v28 );
    }
    sub_4BB940(a1, (__int64)a2);
  }
  v31 = getinf(4);
  return setinf(4, (unsigned int)(v31 + 1));
}
