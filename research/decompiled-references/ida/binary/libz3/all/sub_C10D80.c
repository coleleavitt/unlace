_BOOL8 __fastcall sub_C10D80(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm0
  int v11; // edx
  int v12; // edx
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rsi
  _BOOL4 v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+8h] [rbp-90h]
  __m128i v30; // [rsp+10h] [rbp-88h] BYREF
  int v31[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h]
  int v33[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  __m128i v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+50h] [rbp-48h]

  v2 = 24LL * a2;
  v4 = *a1;
  v5 = *(_QWORD *)(a1[117] + v2 + 8);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v32 = v4;
  v34 = v4;
  *(_QWORD *)v31 = 0;
  *(_QWORD *)v33 = 0;
  sub_14BB8A0(a1 + 3, v5, v31, v33);
  v6 = *a1;
  v7 = *(_QWORD *)v33;
  if ( *(_DWORD *)(*a1 + 712) )
  {
    v24 = sub_15DE0E0(*a1, *(_QWORD *)(a1[117] + v2 + 16), *(_QWORD *)v33);
    v7 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      v26 = v34;
      v16 = (*(_DWORD *)(*(_QWORD *)v33 + 8LL))-- == 1;
      if ( v16 )
        sub_15D7BC0(v26, v25);
    }
    *(_QWORD *)v33 = v7;
    v6 = *a1;
  }
  v8 = *(_QWORD *)v31;
  v36 = v7;
  v9 = a1[117];
  v10 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v31, (__m128i)(unsigned __int64)v7);
  v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)*(unsigned __int64 *)v31);
  if ( *(_QWORD *)v31 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)v31 + 8LL);
    *(_DWORD *)(*(_QWORD *)v31 + 8LL) = v11 + 1;
    if ( !v7 )
    {
      *(_DWORD *)(v8 + 8) = v11 + 2;
      goto LABEL_8;
    }
    ++*(_DWORD *)(v7 + 8);
    ++*(_DWORD *)(v8 + 8);
    v12 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    if ( !v7 )
      goto LABEL_8;
    v12 = *(_DWORD *)(v7 + 8) + 1;
  }
  *(_DWORD *)(v7 + 8) = v12 + 1;
LABEL_8:
  v13 = (_QWORD *)(v9 + v2);
  v14 = v13[1];
  v15 = *v13;
  if ( v14 )
  {
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
    {
      v29 = v8;
      v30 = v10;
      sub_15D7BC0(v15, v14);
      v15 = *v13;
      v10 = _mm_load_si128(&v30);
      v8 = v29;
    }
  }
  v17 = v13[2];
  if ( v17 )
  {
    v16 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v16 )
    {
      v28 = v8;
      v30 = v10;
      sub_15D7BC0(v15, v17);
      v10 = _mm_load_si128(&v30);
      v8 = v28;
    }
  }
  *(__m128i *)(v13 + 1) = v10;
  if ( v8 == *(_QWORD *)(*a1 + 864) )
    *((_BYTE *)a1 + 2200) = 1;
  v27 = v8;
  sub_C10940(a1, *(__int64 *)v31, *(__int64 *)v33);
  v18 = *(_QWORD *)v31 != v5;
  if ( v27 )
  {
    v16 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v6, v27);
  }
  if ( v7 )
  {
    v16 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v6, v7);
  }
  v19 = *(_QWORD *)v33;
  if ( *(_QWORD *)v33 )
  {
    v20 = v34;
    v16 = (*(_DWORD *)(*(_QWORD *)v33 + 8LL))-- == 1;
    if ( v16 )
      sub_15D7BC0(v20, v19);
  }
  v21 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    v22 = v32;
    v16 = (*(_DWORD *)(*(_QWORD *)v31 + 8LL))-- == 1;
    if ( v16 )
      sub_15D7BC0(v22, v21);
  }
  if ( v5 )
  {
    v16 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v4, v5);
  }
  return v18;
}

