__int64 __fastcall sub_255FF0(__int64 *a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rbx
  bool v6; // zf
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm2
  size_t v14; // rbp
  void *v15; // rax
  char v16; // al
  _DWORD *v17; // rsi
  void (__fastcall ***v18)(_QWORD); // rdi
  double v19; // xmm0_8
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64); // rdx
  const char *v22; // rsi
  unsigned __int64 *v23; // r14
  unsigned __int64 i; // r15
  __int64 v25; // rdi
  unsigned __int64 *v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 *v28; // r13
  __int64 j; // rax
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rdi
  char *v32; // r12
  void (__fastcall ***v33)(_QWORD); // rdx
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-A8h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  _QWORD *v38; // [rsp+20h] [rbp-98h]
  __int64 *v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h] BYREF
  __int64 v41; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v42; // [rsp+40h] [rbp-78h] BYREF
  _DWORD *v43; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 *v44; // [rsp+50h] [rbp-68h] BYREF
  __int128 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  int v47; // [rsp+70h] [rbp-48h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v5 = a1;
  v6 = *a2 == 0;
  v48 = __readfsqword(0x28u);
  v7 = a3;
  if ( v6 )
  {
    if ( (unsigned int)a3 >= (unsigned __int64)xmmword_8CC058 )
    {
      if ( !under_debugger )
        interr(40066, a2, a3, a4, a5);
      BUG();
    }
    v8 = 0;
    v9 = qword_8CC050 + 24LL * (int)a3;
    v10 = *(_QWORD *)(v9 + 8);
    v35 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( v10 )
    {
      v14 = 8 * v10;
      v15 = (void *)qalloc_or_throw(8 * v10);
      a2 = *(char **)v9;
      v8 = (__int64)v15;
      memcpy(v15, *(const void **)v9, v14);
      v11 = *a1;
      if ( !*v5 )
        goto LABEL_6;
    }
    else
    {
      v11 = *a1;
      if ( !*v5 )
      {
LABEL_6:
        v12 = _mm_load_si128(&v35);
        *v5 = v8;
        *(__m128i *)(v5 + 1) = v12;
        LODWORD(v5) = 1;
        return (unsigned int)v5;
      }
    }
    v5[1] = 0;
    qfree(v11, a2);
    goto LABEL_6;
  }
  v39 = &v41;
  sub_255E20(&v41, a2, &v40);
  v37 = v41;
  if ( v41 )
  {
    v36 = a1[1];
    v38 = &v42;
    (*(void (__fastcall **)(_DWORD **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 56LL))(&v42, v40, v41, v7, 0);
    if ( v42 )
    {
      v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v42 + 8LL))(v42);
      v17 = v42;
      while ( v16 )
      {
        v19 = 0.0;
        v47 = -1;
        v44 = nullptr;
        v46 = 0;
        v45 = 0;
        v20 = *(_QWORD *)v17;
        v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL);
        v35.m128i_i64[0] = (__int64)&v43;
        if ( v21 == sub_1992A0 )
          (*(void (__fastcall **)(_DWORD **))(v20 + 24))(&v43);
        else
          ((void (__fastcall *)(_DWORD **))v21)(&v43);
        v22 = (const char *)&v44;
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned __int64 **))(*(_QWORD *)v43 + 72LL))(v43, &v44) )
        {
          v23 = v44;
          if ( 16LL * (_QWORD)v45 )
          {
            do
            {
              for ( i = *v23; i < v23[1]; i = next_that(i, v22, sub_20A790, 0) )
              {
                if ( *v23 == i || (get_flags_ex(i, 4) & 0x1000) != 0 )
                {
                  v25 = v5[1];
                  v26 = (unsigned __int64 *)*v5;
                  v27 = 8 * v25;
                  v28 = (unsigned __int64 *)*v5;
                  for ( j = (8 * v25) >> 3; j > 0; j >>= 1 )
                  {
                    while ( 1 )
                    {
                      v30 = &v28[j >> 1];
                      if ( *v30 >= i )
                        break;
                      v28 = v30 + 1;
                      j = j - 1 - (j >> 1);
                      if ( j <= 0 )
                        goto LABEL_31;
                    }
                  }
LABEL_31:
                  if ( (unsigned __int64 *)(*v5 + 8 * v25) == v28 || *v28 != i )
                  {
                    v31 = v25 + 1;
                    v32 = (char *)((char *)v28 - (char *)v26);
                    if ( v5[2] < v31 )
                    {
                      v34 = qvector_reserve(v5, v26, v31, 8);
                      *v5 = v34;
                      v28 = (unsigned __int64 *)&v32[v34];
                      v27 = 8 * v5[1];
                    }
                    memmove(v28 + 1, v28, v27 - (_QWORD)v32);
                    *v28 = i;
                    ++v5[1];
                  }
                }
                v22 = (const char *)v23[1];
              }
              v23 += 2;
            }
            while ( v23 != &v44[2 * (_QWORD)v45] );
          }
        }
        v18 = (void (__fastcall ***)(_QWORD))v43;
        if ( v43 )
        {
          v6 = v43[2]-- == 1;
          if ( v6 )
            (**v18)(v18);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          v19 = qfree(v44, v22);
        }
        v16 = (*(__int64 (__fastcall **)(_DWORD *, double))(*(_QWORD *)v42 + 16LL))(v42, v19);
        v17 = v42;
      }
      LOBYTE(v5) = v5[1] != v36;
      if ( v17 )
      {
        v6 = v17[2]-- == 1;
        if ( v6 )
          (**(void (__fastcall ***)(_DWORD *))v17)(v17);
      }
    }
    else
    {
      LOBYTE(v5) = a1[1] != v36;
    }
    v33 = (void (__fastcall ***)(_QWORD))v37;
    v35.m128i_i32[0] = *(_DWORD *)(v37 + 8);
    v6 = v35.m128i_i32[0] == 1;
    *(_DWORD *)(v37 + 8) = v35.m128i_i32[0] - 1;
    if ( v6 )
      (**v33)(v33);
  }
  else
  {
    LODWORD(v5) = 0;
  }
  return (unsigned int)v5;
}
