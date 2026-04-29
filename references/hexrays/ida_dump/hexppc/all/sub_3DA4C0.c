unsigned __int64 __fastcall sub_3DA4C0(__int64 a1, __m128i a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  int v13; // edx
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  int v21; // ebx
  bool v22; // zf
  __int64 v23; // rdi
  int v24; // eax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v33; // rbp
  __int64 v34; // rdx
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  unsigned __int64 v37; // rbp
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v43; // [rsp+18h] [rbp-D0h]
  _QWORD v44[3]; // [rsp+30h] [rbp-B8h] BYREF
  __m128 v45; // [rsp+48h] [rbp-A0h]
  _QWORD v46[5]; // [rsp+58h] [rbp-90h] BYREF
  char v47; // [rsp+80h] [rbp-68h]
  __int64 v48; // [rsp+88h] [rbp-60h]
  __int64 v49; // [rsp+90h] [rbp-58h]
  __int64 v50; // [rsp+98h] [rbp-50h]
  __int64 v51; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v44[0] = &off_4D5F78;
  v44[1] = 0;
  v44[2] = 0;
  v45 = 0u;
  memset(&v46[1], 0, 32);
  v3 = *(_QWORD *)(a1 + 64);
  v47 = 0;
  v46[0] = off_4D5FA8;
  v48 = 0;
  v49 = 0;
  v50 = a1;
  v51 = -1;
  v4 = *(__int64 **)(a1 + 8);
  sub_3D7000(a1 + 88, (__int64)v4, *(_DWORD *)(a1 + 56), v3);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = *(_QWORD *)(a1 + 112);
        }
      }
    }
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 120);
  v12 = *(int *)(v10 + 64);
  v13 = *(_DWORD *)(v10 + 64);
  if ( v12 != v11 )
  {
    v42 = 0;
    a2.m128i_i64[0] = 0;
    v43 = 0;
    if ( v12 < v11 )
    {
      v37 = v12;
      do
      {
        v38 = (__int64 *)(*(_QWORD *)(a1 + 112) + 24 * v37);
        v39 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          qfree(v39);
        }
        ++v37;
      }
      while ( v37 < v11 );
      v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v12;
      v13 = *(_DWORD *)(v10 + 64);
    }
    else
    {
      v4 = *(__int64 **)(a1 + 112);
      v14 = a1 + 112;
      v15 = *(_QWORD *)(a1 + 128);
      if ( &v42 < v4 || &v42 >= &v4[3 * v15] )
      {
        if ( v15 < v12 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve(v14, v4, v12, 24);
          v11 = *(_QWORD *)(a1 + 120);
        }
        if ( v11 < v12 )
        {
          a2.m128i_i64[0] = 0;
          v16 = 24 * v11;
          do
          {
            ++v11;
            v17 = v16 + *(_QWORD *)(a1 + 112);
            v16 += 24;
            *(_QWORD *)v17 = 0;
            *(_OWORD *)(v17 + 8) = 0;
          }
          while ( v12 != v11 );
        }
      }
      else
      {
        if ( v15 < v12 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve(v14, v4, v12, 24);
          v11 = *(_QWORD *)(a1 + 120);
        }
        if ( v11 < v12 )
        {
          a2.m128i_i64[0] = 0;
          v40 = 24 * v11;
          do
          {
            ++v11;
            v41 = v40 + *(_QWORD *)(a1 + 112);
            v40 += 24;
            *(_QWORD *)v41 = 0;
            *(_OWORD *)(v41 + 8) = 0;
          }
          while ( v12 != v11 );
        }
      }
      v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v12;
      v13 = *(_DWORD *)(v10 + 64);
    }
  }
  v18 = 0;
  if ( v13 )
  {
    do
    {
      LODWORD(v51) = v18;
      if ( (unsigned int)v18 >= *(_DWORD *)(v10 + 64) )
      {
        if ( !under_debugger )
          sub_37EEE0(0xCDEFu, (__int64)v4, *(double *)a2.m128i_i64);
        BUG();
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v18);
      v20 = *(_QWORD *)(v19 + 48);
      if ( v20 )
      {
        v21 = 0;
        do
        {
          v23 = *(_QWORD *)(a1 + 112);
          v24 = v21++;
          HIDWORD(v51) = v24;
          v25 = (__int64 *)(24 * v18 + v23);
          v26 = v25[1];
          v27 = *v25;
          if ( v25[2] < (unsigned __int64)(v26 + 1) )
          {
            v27 = qvector_reserve(v25, v27, v26 + 1, 8);
            *v25 = v27;
            v26 = v25[1];
          }
          *(_QWORD *)(v27 + 8 * v26) = v20;
          a2 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
          ++v25[1];
          v22 = *(_BYTE *)(v20 + 64) == 0;
          v45 = (__m128)a2;
          if ( v22 && *(_DWORD *)(v20 + 68) != -1 )
            sub_3D9E80((__int64)v44, v20 + 64, 1);
          v4 = v46;
          sub_11AEC0((_BYTE *)v20, (__int64)v46);
          if ( *(_QWORD *)(v19 + 56) == v20 )
            break;
          v20 = *(_QWORD *)(v20 + 8);
        }
        while ( v20 );
        v10 = *(_QWORD *)(a1 + 64);
      }
      ++v18;
    }
    while ( (unsigned int)v18 < *(_DWORD *)(v10 + 64) );
  }
  v28 = *(unsigned __int64 **)(a1 + 160);
  if ( v28 )
  {
    v29 = *v28;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      *v28 = *v28 & 3 | (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 160) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160));
      **(_QWORD **)(a1 + 160) &= ~1uLL;
      **(_QWORD **)(a1 + 160) |= 2uLL;
      goto LABEL_33;
    }
    v33 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    v34 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v34 & 2) != 0 )
    {
LABEL_43:
      *v28 = v29 & 3 | (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 160) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160));
      **(_QWORD **)(a1 + 160) &= ~1uLL;
      **(_QWORD **)(a1 + 160) |= 2uLL;
      *(_QWORD *)(a1 + 168) = 0;
LABEL_33:
      v30 = *(_QWORD *)(a1 + 160);
      if ( v30 )
        qfree(v30);
      goto LABEL_35;
    }
    v35 = (__int64 *)v33[1];
    if ( (*(_BYTE *)v35 & 2) != 0 )
    {
      v36 = (__int64 *)v33[2];
      if ( (*(_BYTE *)v36 & 2) != 0 )
        goto LABEL_58;
    }
    else
    {
      sub_3CB580(v35);
      v36 = (__int64 *)v33[2];
      if ( (*(_BYTE *)v36 & 2) != 0 )
        goto LABEL_39;
    }
    sub_3CB580(v36);
LABEL_39:
    v34 = *v33;
    if ( (*v33 & 2) != 0 )
    {
LABEL_40:
      if ( v29 > 3 )
        qfree(v29 & 0xFFFFFFFFFFFFFFFCLL);
      v28 = *(unsigned __int64 **)(a1 + 160);
      v29 = *v28;
      goto LABEL_43;
    }
LABEL_58:
    *v33 = v34 | 2;
    goto LABEL_40;
  }
LABEL_35:
  v31 = v48;
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)(a1 + 160) = v31;
  *(_QWORD *)(a1 + 168) = v49;
  return v52 - __readfsqword(0x28u);
}
