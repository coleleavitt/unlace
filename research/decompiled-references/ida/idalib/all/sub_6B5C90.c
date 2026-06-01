__int64 __fastcall sub_6B5C90(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 *v11; // r13
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i *v15; // rsi
  __int64 *v16; // rsi
  unsigned __int64 v17; // r12
  char *v18; // rdi
  unsigned int v19; // r12d
  unsigned __int64 *v20; // r13
  char *v21; // r15
  char v22; // r12
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // rdi
  char *v25; // r13
  unsigned __int64 *v26; // rax
  unsigned __int64 *v27; // r14
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i *v32; // rsi
  __int64 *v33; // [rsp+8h] [rbp-F8h]
  __m128i v34; // [rsp+18h] [rbp-E8h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+30h] [rbp-D0h]
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  _BYTE *v38; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h]
  char *v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h]
  unsigned int v42; // [rsp+54h] [rbp-ACh]
  __m128i v43; // [rsp+58h] [rbp-A8h] BYREF
  char v44; // [rsp+6Eh] [rbp-92h] BYREF
  char v45; // [rsp+6Fh] [rbp-91h] BYREF
  void *v46; // [rsp+70h] [rbp-90h] BYREF
  __int128 v47; // [rsp+78h] [rbp-88h]
  void *v48; // [rsp+90h] [rbp-70h] BYREF
  __int128 v49; // [rsp+98h] [rbp-68h]
  _BYTE ptr[24]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+C8h] [rbp-38h]

  v36 = a2;
  v51 = __readfsqword(0x28u);
  v6 = *a1;
  *(_OWORD *)ptr = 0;
  v38 = ptr;
  sub_630CA0(*v6, 26, ptr, 0x10u, a5);
  v7 = *a1;
  v46 = nullptr;
  v39 = *(_QWORD *)ptr;
  v8 = v7 + 250;
  v48 = nullptr;
  v35 = *(_QWORD *)&ptr[8];
  v9 = a1[2];
  v47 = 0;
  v33 = v9;
  v34.m128i_i64[1] = (__int64)"CREF";
  v49 = 0;
  if ( (_BYTE)a2 )
  {
    v8 = v7 + 224;
    v34.m128i_i64[1] = (__int64)"DREF";
  }
  v10 = v8[10];
  v11 = v8 + 8;
  if ( (__int64 *)v10 != v11 )
  {
    v42 = (_BYTE)v36 == 0 ? 120 : 100;
    v37 = (_BYTE)v36 == 0 ? 88 : 68;
    v41 = (unsigned __int8)v36;
    v40 = &v44;
    while ( 1 )
    {
      memset(ptr, 0, sizeof(ptr));
      v16 = v7;
      v17 = *(_QWORD *)(v10 + 40);
      v18 = v40;
      v43.m128i_i64[0] = *(_QWORD *)(v10 + 32);
      if ( !(unsigned __int8)sub_6B3C90(v40, v7, v43.m128i_u64[0], v17, v42) )
        break;
      v16 = v7;
      v18 = &v45;
      if ( !(unsigned __int8)sub_6B3C90(&v45, v7, v17, v43.m128i_u64[0], v37) || v44 != v45 )
        break;
      if ( !sub_6B4220(a1, (__int64)v38, v43.m128i_u64[0], v17, *(_BYTE *)(v10 + 48), v41) )
      {
        if ( *((_BYTE *)a1 + 40) )
        {
          v29 = v47;
          v30 = _mm_loadl_epi64((const __m128i *)(v10 + 32));
          v31 = _mm_loadl_epi64((const __m128i *)(v10 + 40));
          v32 = (__m128i *)v46;
          if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
          {
            v34.m128i_i64[0] = v31.m128i_i64[0];
            v43.m128i_i64[0] = v30.m128i_i64[0];
            v46 = (void *)qvector_reserve(&v46, v46, v47 + 1, 16);
            v32 = (__m128i *)v46;
            v31 = _mm_loadl_epi64(&v34);
            v30 = _mm_loadl_epi64(&v43);
            v29 = v47;
          }
          v32[v29] = _mm_unpacklo_epi64(v30, v31);
          *(_QWORD *)&v47 = v47 + 1;
        }
        else
        {
          sub_6B4500(a1, -1);
        }
      }
      if ( !*(_QWORD *)ptr )
        goto LABEL_12;
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
      v10 = std::_Rb_tree_increment(v10);
      if ( v11 == (__int64 *)v10 )
        goto LABEL_22;
LABEL_13:
      v7 = *a1;
    }
    if ( *((_BYTE *)a1 + 40) || (get_merge_state(v18, v16) & 3) != 0 )
    {
      v12 = v49;
      v13 = _mm_loadl_epi64((const __m128i *)(v10 + 32));
      v14 = _mm_loadl_epi64((const __m128i *)(v10 + 40));
      v15 = (__m128i *)v48;
      if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
      {
        v34.m128i_i64[0] = v14.m128i_i64[0];
        v43.m128i_i64[0] = v13.m128i_i64[0];
        v48 = (void *)qvector_reserve(&v48, v48, v49 + 1, 16);
        v12 = v49;
        v15 = (__m128i *)v48;
        v14 = _mm_loadl_epi64(&v34);
        v13 = _mm_loadl_epi64(&v43);
      }
      v15[v12] = _mm_unpacklo_epi64(v13, v14);
      *(_QWORD *)&v49 = v49 + 1;
    }
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
LABEL_12:
    v10 = std::_Rb_tree_increment(v10);
    if ( v11 == (__int64 *)v10 )
      goto LABEL_22;
    goto LABEL_13;
  }
LABEL_22:
  v19 = *((unsigned __int8 *)a1 + 40);
  if ( !(_BYTE)v19 )
  {
    v24 = (unsigned __int64 *)v48;
    v25 = (char *)v48 + 16 * v49;
    if ( v25 == v48 )
    {
LABEL_37:
      LOBYTE(v19) = a1[2] == v33;
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v20 = (unsigned __int64 *)v46;
  v21 = (char *)v46 + 16 * v47;
  if ( v21 != v46 )
  {
    v22 = v36;
    do
    {
      sub_411DE0((__int64)*a1, *v20, v20[1], v22);
      v23 = *v20;
      if ( *v20 < v39 || v23 >= v35 )
        sub_3A61A0(*a1, v23, v23 + 1, 0x28u);
      v20 += 2;
    }
    while ( v21 != (char *)v20 );
    v24 = (unsigned __int64 *)v48;
    v25 = (char *)v48 + 16 * v49;
    if ( v25 == v48 )
    {
LABEL_36:
      v19 = *((unsigned __int8 *)a1 + 40);
      if ( (_BYTE)v19 )
        goto LABEL_38;
      goto LABEL_37;
    }
LABEL_33:
    v26 = v24;
    do
    {
      v27 = v26;
      sub_411DC0((__int64)*a1, *v26, v26[1], v22);
      v26 = v27 + 2;
    }
    while ( v25 != (char *)(v27 + 2) );
    v24 = (unsigned __int64 *)v48;
    goto LABEL_36;
  }
  v24 = (unsigned __int64 *)v48;
  v25 = (char *)v48 + 16 * v49;
  if ( v48 != v25 )
  {
LABEL_32:
    v22 = v36;
    goto LABEL_33;
  }
LABEL_38:
  if ( v24 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v24);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  return v19;
}
