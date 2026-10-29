__int64 __fastcall sub_2273810(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int128 v15; // xmm0
  __int64 *v16; // r12
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // edx
  __m128i v23; // xmm2
  __int64 v24; // rdx
  __m128i *v25; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __m128i v36; // xmm1
  __int64 v37; // rax
  __m128i *v38; // rdi
  __int128 v39; // [rsp+0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+10h] [rbp-58h]
  void *v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+20h] [rbp-48h]
  __m128i v43[4]; // [rsp+28h] [rbp-40h] BYREF

  v7 = (__int64 *)(a1 + 176);
  if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      sub_226E8F0(a1);
      a4 = *(_QWORD **)(a1 + 224);
      v8 = *(_QWORD *)(a1 + 184);
      v9 = 3LL * *(unsigned int *)(a1 + 232);
      v10 = &a4[v9];
      a3 = 0xAAAAAAAAAAAAAAABLL * ((v9 * 8) >> 3);
      if ( !(a3 >> 2) )
      {
        a2 = *(_QWORD **)(a1 + 224);
LABEL_15:
        if ( a3 != 2 )
        {
          if ( a3 != 3 )
          {
            if ( a3 != 1 )
              return v8 + 16;
            goto LABEL_21;
          }
          if ( v8 == *a2 )
            goto LABEL_22;
          a2 += 3;
        }
        if ( v8 == *a2 )
          goto LABEL_22;
        a2 += 3;
LABEL_21:
        if ( v8 != *a2 )
          return v8 + 16;
LABEL_22:
        if ( v10 == a2 )
          return v8 + 16;
        goto LABEL_23;
      }
      if ( v8 == *a4 )
      {
        a2 = *(_QWORD **)(a1 + 224);
        if ( v10 == a4 )
          return v8 + 16;
      }
      else if ( v8 == a4[3] )
      {
        a2 = a4 + 3;
        if ( v10 == a4 + 3 )
          return v8 + 16;
      }
      else if ( v8 == a4[6] )
      {
        a2 = a4 + 6;
        if ( v10 == a4 + 6 )
          return v8 + 16;
      }
      else
      {
        if ( v8 != a4[9] )
        {
          a3 = (__int64)&a4[12 * (a3 >> 2)];
          while ( 1 )
          {
            a2 = a4 + 12;
            if ( (_QWORD *)a3 == a4 + 12 )
            {
              a4 = (_QWORD *)0xAAAAAAAAAAAAAAABLL;
              a3 = 0xAAAAAAAAAAAAAAABLL * (v10 - a2);
              goto LABEL_15;
            }
            if ( v8 == a4[12] )
              goto LABEL_22;
            if ( v8 == a4[15] )
            {
              a2 = a4 + 15;
              if ( v10 != a4 + 15 )
                goto LABEL_23;
              return v8 + 16;
            }
            if ( v8 == a4[18] )
            {
              a2 = a4 + 18;
              if ( v10 != a4 + 18 )
                goto LABEL_23;
              return v8 + 16;
            }
            if ( v8 == a4[21] )
              break;
            a4 += 12;
          }
          a2 = a4 + 21;
          if ( v10 != a4 + 21 )
            goto LABEL_23;
          return v8 + 16;
        }
        a2 = a4 + 9;
        if ( v10 == a4 + 9 )
          return v8 + 16;
      }
LABEL_23:
      if ( *(_BYTE *)(a1 + 72) )
      {
        v11 = sub_2272300(a1, (__int64)a2, a3, (__int64)a4, a5, a6);
        goto LABEL_25;
      }
      sub_226EAB0(a1);
      if ( *(_QWORD *)(a1 + 40) != *(_QWORD *)(a1 + 48) )
        break;
      v30 = *(unsigned int *)(a1 + 60);
      if ( (_DWORD)v30 )
      {
        ++*(_DWORD *)(a1 + 64);
        *(_DWORD *)(a1 + 60) = 0;
      }
      sub_2270A60(a1, -1, v30, v27, v28, v29);
      *(_DWORD *)(a1 + 232) = 0;
      *(_WORD *)(a1 + 73) = 0;
      v41 = v43;
      v33 = *(_QWORD *)(a1 + 40);
      v42 = 0;
      *((_QWORD *)&v39 + 1) = v33;
      v34 = *(_QWORD *)(a1 + 80);
      v43[0].m128i_i8[0] = 0;
      v35 = (v34 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      *(_QWORD *)(a1 + 160) += 72LL;
      v40 = 0;
      if ( *(_QWORD *)(a1 + 88) >= v35 + 72 && v34 )
        *(_QWORD *)(a1 + 80) = v35 + 72;
      else
        v35 = sub_986170(a1 + 80, 72, 72, 4, v31, v32);
      v36 = _mm_loadu_si128((const __m128i *)((char *)&v39 + 8));
      *(_DWORD *)(v35 + 16) = 2;
      *(_QWORD *)(v35 + 40) = v35 + 56;
      *(_OWORD *)v35 = 0;
      *(__m128i *)(v35 + 24) = v36;
      sub_226E090((_QWORD *)(v35 + 40), v41, (__int64)v41 + v42);
      v37 = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(v35 + 8) = v7;
      *(_QWORD *)v35 = v37;
      *(_QWORD *)(v37 + 8) = v35;
      v38 = (__m128i *)v41;
      *(_QWORD *)(a1 + 176) = v35;
      if ( v38 != v43 )
        operator delete(v38);
    }
    v11 = sub_2273430(a1);
LABEL_25:
    ;
  }
  while ( v11 );
  v14 = *(__int64 **)(a1 + 184);
  v15 = 0;
  if ( v7 != v14 )
  {
    while ( 1 )
    {
      v16 = (__int64 *)v14[1];
      v17 = *v14;
      v18 = v14 + 7;
      *v16 = v17;
      *(_QWORD *)(v17 + 8) = v16;
      v19 = (_QWORD *)*(v18 - 2);
      *(_OWORD *)(v18 - 7) = v15;
      if ( v19 == v18 )
      {
        if ( v7 == v16 )
          break;
      }
      else
      {
        operator delete(v19);
        v15 = 0;
        if ( v7 == v16 )
          break;
      }
      v14 = v16;
    }
  }
  v20 = *(_QWORD *)(a1 + 80);
  v43[0].m128i_i8[0] = 0;
  v39 = 0;
  v41 = v43;
  v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(a1 + 232) = 0;
  v40 = 0;
  v42 = 0;
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= v21 + 72 && v20 )
  {
    *(_QWORD *)(a1 + 80) = v21 + 72;
    v22 = 0;
  }
  else
  {
    v21 = sub_986170(a1 + 80, 72, 72, 4, v12, v13);
    v22 = v39;
  }
  v23 = _mm_loadu_si128((const __m128i *)((char *)&v39 + 8));
  *(_DWORD *)(v21 + 16) = v22;
  *(_OWORD *)v21 = 0;
  *(__m128i *)(v21 + 24) = v23;
  *(_QWORD *)(v21 + 40) = v21 + 56;
  if ( v41 == v43 )
  {
    *(__m128i *)(v21 + 56) = _mm_loadu_si128(v43);
  }
  else
  {
    *(_QWORD *)(v21 + 40) = v41;
    *(_QWORD *)(v21 + 56) = v43[0].m128i_i64[0];
  }
  *(_QWORD *)(v21 + 48) = v42;
  v24 = *(_QWORD *)(a1 + 176);
  v41 = v43;
  v42 = 0;
  v43[0].m128i_i8[0] = 0;
  *(_QWORD *)(v21 + 8) = v7;
  *(_QWORD *)v21 = v24;
  *(_QWORD *)(v24 + 8) = v21;
  v25 = (__m128i *)v41;
  *(_QWORD *)(a1 + 176) = v21;
  if ( v25 != v43 )
    operator delete(v25);
  return *(_QWORD *)(a1 + 184) + 16LL;
}
