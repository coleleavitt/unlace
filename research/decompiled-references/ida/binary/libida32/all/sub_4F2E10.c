void __fastcall sub_4F2E10(__int64 *a1, char *a2, const __m128i *a3, double a4, __m128 a5)
{
  __m128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // xmm1_8
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  _DWORD *v11; // r12
  char *v12; // r14
  signed __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // r9
  signed __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  bool v19; // cf
  unsigned __int64 v20; // rax
  _DWORD *v21; // rbp
  bool v22; // zf
  _DWORD *v23; // r10
  _DWORD *v24; // rax
  __int64 i; // rbp
  __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v28; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+8h] [rbp-C0h]
  __int64 v30; // [rsp+10h] [rbp-B8h]
  signed __int64 v31; // [rsp+18h] [rbp-B0h]
  signed __int64 v32; // [rsp+18h] [rbp-B0h]
  _DWORD *v33; // [rsp+18h] [rbp-B0h]
  _DWORD *src; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  size_t na; // [rsp+28h] [rbp-A0h]
  char v37; // [rsp+37h] [rbp-91h]
  __int64 v38; // [rsp+38h] [rbp-90h]
  char v39; // [rsp+4Fh] [rbp-79h] BYREF
  __m128 v40; // [rsp+50h] [rbp-78h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  void *v42[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-48h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v5 = (__m128)_mm_loadu_si128(a3);
  v6 = a3[1].m128i_i64[0];
  v44 = __readfsqword(0x28u);
  v7 = *a1;
  a3[1].m128i_i64[0] = 0;
  v8 = _mm_movehl_ps(a5, v5).m128_u64[0];
  v40 = v5;
  v38 = v6;
  v41 = v6;
  v30 = v7;
  *a3 = 0;
  v37 = *a2;
  if ( *a2 && v8 != v5.m128_u64[0] )
  {
    v9 = v5.m128_u64[0];
    v10 = 0;
    v11 = nullptr;
    v12 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v9 + 8);
        v15 = *(_DWORD **)v9;
        if ( v14 != *(_QWORD *)v9 )
          break;
LABEL_7:
        v9 += 24;
        if ( v8 == v9 )
          goto LABEL_22;
      }
      v13 = v14 - (_QWORD)v15;
      if ( v10 - (unsigned __int64)v11 >= v13 )
      {
        if ( v13 <= 4 )
        {
          if ( v13 == 4 )
            *v11 = *v15;
        }
        else
        {
          v27 = v13;
          memmove(v11, *(const void **)v9, v13);
          v13 = v27;
        }
        v11 = (_DWORD *)((char *)v11 + v13);
        goto LABEL_7;
      }
      v16 = (char *)v11 - v12;
      v17 = v13 >> 2;
      v18 = ((char *)v11 - v12) >> 2;
      if ( 0x1FFFFFFFFFFFFFFFLL - v18 < v13 >> 2 )
        std::__throw_length_error("vector::_M_range_insert");
      if ( v17 < v18 )
        v17 = ((char *)v11 - v12) >> 2;
      v19 = __CFADD__(v18, v17);
      v20 = v18 + v17;
      if ( v19 )
      {
        v29 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v28 = 0;
        v21 = nullptr;
        if ( !v20 )
        {
          v22 = v16 == 4;
          if ( v16 <= 4 )
            goto LABEL_37;
          goto LABEL_16;
        }
        v26 = 0x1FFFFFFFFFFFFFFFLL;
        if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
          v26 = v20;
        v29 = v26;
      }
      na = v13;
      v33 = *(_DWORD **)v9;
      v21 = (_DWORD *)operator new(v29 * 4);
      v16 = (char *)v11 - v12;
      v13 = na;
      v15 = v33;
      v28 = (unsigned __int64)&v21[v29];
      v22 = (char *)v11 - v12 == 4;
      if ( (char *)v11 - v12 <= 4 )
      {
LABEL_37:
        if ( v22 )
          *v21 = *(_DWORD *)v12;
        goto LABEL_17;
      }
LABEL_16:
      n = v13;
      src = v15;
      v31 = v16;
      memmove(v21, v12, v16);
      v16 = v31;
      v15 = src;
      v13 = n;
LABEL_17:
      v23 = (_DWORD *)((char *)v21 + v16);
      if ( v13 == 4 )
      {
        *v23 = *v15;
      }
      else
      {
        v32 = v13;
        v24 = memmove(v23, v15, v13);
        v13 = v32;
        v23 = v24;
      }
      v11 = (_DWORD *)((char *)v23 + v13);
      if ( v12 )
        operator delete(v12, v10 - (_QWORD)v12);
      v9 += 24;
      v10 = v28;
      v12 = (char *)v21;
      if ( v8 == v9 )
        goto LABEL_22;
    }
  }
  v10 = 0;
  v11 = nullptr;
  v12 = nullptr;
LABEL_22:
  v42[0] = v12;
  v42[1] = v11;
  v39 = v37;
  v43 = v10;
  if ( !*(_QWORD *)(v30 + 16) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *, void **))(v30 + 24))(v30, &v39, v42);
  if ( v42[0] )
    operator delete(v42[0], v43 - (unsigned __int64)v42[0]);
  for ( i = v5.m128_u64[0]; i != v8; i += 24 )
  {
    if ( *(_QWORD *)i )
      operator delete(*(void **)i, *(_QWORD *)(i + 16) - *(_QWORD *)i);
  }
  if ( v5.m128_u64[0] )
    operator delete((void *)v5.m128_u64[0], v38 - v5.m128_u64[0]);
}

