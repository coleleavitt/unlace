void __fastcall sub_194A90(__int64 a1, __int64 *a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rax
  void (*v8)(void); // rax
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r9
  _QWORD *v14; // rax
  void (__fastcall *v15)(_QWORD *); // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void *v23; // r10
  size_t v24; // r8
  __m128i v25; // xmm2
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // r13
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  size_t n; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h]
  void *v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  __int128 v40; // [rsp+38h] [rbp-60h]
  char v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)a1;
  v42 = __readfsqword(0x28u);
  v8 = *(void (**)(void))(v6 + 392);
  if ( v8 != nullsub_121 )
    v8();
  v9 = *(_QWORD *)(a3 + 24);
  if ( (a4 & 0x400) == 0 )
  {
    if ( v9 == -1 )
      goto LABEL_38;
    v10 = *(_QWORD **)a3;
    v11 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)a3 == v11 )
      goto LABEL_38;
    while ( v9 != *v10 )
    {
      if ( (_QWORD *)v11 == ++v10 )
        goto LABEL_38;
    }
    if ( (_QWORD *)v11 == v10 )
    {
LABEL_38:
      v28 = *(_QWORD *)(a3 + 8);
      v9 = -1;
      if ( v28 )
        v9 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v28 - 8);
    }
  }
  v12 = *a2;
  v13 = *a2 + 32 * a2[1];
  if ( v13 != *a2 )
  {
LABEL_13:
    while ( *(_QWORD *)(v12 + 8) != -2 || (a4 & 1) == 0 )
    {
      v12 += 32;
      if ( v13 == v12 )
        goto LABEL_24;
    }
    while ( 1 )
    {
      v14 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 )
      {
        v15 = *(void (__fastcall **)(_QWORD *))(*v14 + 8LL);
        if ( v15 == sub_18F850 )
        {
          v16 = v14[1];
          *v14 = &off_23D2A8;
          if ( v16 )
          {
            v14[2] = 0;
            n = v13;
            v35.m128i_i64[0] = (__int64)v14;
            qfree();
            v13 = n;
            v14 = (_QWORD *)v35.m128i_i64[0];
          }
          v35.m128i_i64[0] = v13;
          operator delete(v14, 0x20u);
          v13 = v35.m128i_i64[0];
        }
        else
        {
          v35.m128i_i64[0] = v13;
          v15(v14);
          v13 = v35.m128i_i64[0];
        }
      }
      *(_QWORD *)v12 = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        n = v13;
        v21 = operator new(0x20u);
        v22 = *(_QWORD *)(a3 + 8);
        v23 = nullptr;
        v24 = v21;
        v13 = n;
        *(_QWORD *)v21 = &off_23D2A8;
        *(_QWORD *)(v21 + 8) = 0;
        *(_OWORD *)(v21 + 16) = 0;
        v35 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
        if ( v22 )
        {
          v38 = (void *)v13;
          v37 = v21;
          n = 8 * v22;
          v26 = (void *)qalloc_or_throw();
          v27 = memcpy(v26, *(const void **)a3, n);
          v24 = v37;
          v13 = (__int64)v38;
          v23 = v27;
          if ( *(_QWORD *)(v37 + 8) )
          {
            *(_QWORD *)(v37 + 16) = 0;
            v37 = v13;
            n = v24;
            v38 = v27;
            qfree();
            v23 = v38;
            v13 = v37;
            v24 = n;
          }
        }
        v25 = _mm_load_si128(&v35);
        *(_QWORD *)(v24 + 8) = v23;
        *(__m128i *)(v24 + 16) = v25;
        *(_QWORD *)v12 = v24;
      }
      v12 += 32;
      if ( v13 == v12 )
        break;
      if ( *(_QWORD *)(v12 + 8) != -2 )
      {
        v12 += 32;
        if ( v13 != v12 )
          goto LABEL_13;
        break;
      }
    }
  }
LABEL_24:
  if ( (a4 & 2) != 0 )
  {
    v41 = 0;
    v39 = 0;
    v40 = 0;
    if ( (v9 == -1
       || *(_DWORD *)(a1 + 2512) == 2
       || (v17 = operator new(0x20u),
           *(_QWORD *)v17 = &off_23D2A8,
           *(_QWORD *)(v17 + 8) = 0,
           *(_OWORD *)(v17 + 16) = 0,
           v35.m128i_i64[0] = v17,
           v18 = qvector_reserve(),
           v19 = v35.m128i_i64[0],
           v20 = *(_QWORD *)(v35.m128i_i64[0] + 16),
           *(_QWORD *)(v35.m128i_i64[0] + 8) = v18,
           *(_QWORD *)(v18 + 8 * v20) = v9,
           v39 = v19,
           ++*(_QWORD *)(v19 + 16),
           *(_QWORD *)&v40 = -2,
           !v19))
      && (a4 & 4) != 0 )
    {
      sub_17F4E0(&v39);
    }
    else
    {
      sub_17F530((__int64)a2, &v39);
      sub_17F4E0(&v39);
    }
  }
  if ( (a4 & 0x10) != 0 && *(_DWORD *)(a1 + 2512) && sub_17FA80(a1 + 160, 0xFFFFFFFFFFFFFFFELL) )
  {
    v29 = *(__int64 **)a3;
    v30 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
    if ( v30 != *(_QWORD *)a3 )
    {
      do
      {
        v31 = *v29;
        v32 = sub_194470(a1, *v29, 1);
        if ( v32 != -1 )
          sub_193F00((_QWORD *)a1, v32, v31);
        ++v29;
      }
      while ( (__int64 *)v30 != v29 );
    }
    v33 = *(_QWORD *)(a3 + 24);
    if ( v33 != -1 )
    {
      v34 = sub_194470(a1, *(_QWORD *)(a3 + 24), 1);
      if ( v34 != -1 )
        sub_193F00((_QWORD *)a1, v34, v33);
    }
  }
}

