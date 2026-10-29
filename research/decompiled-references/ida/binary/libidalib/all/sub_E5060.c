__int64 __fastcall sub_E5060(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // rbx
  bool v4; // zf
  void *v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __m128i v9; // xmm2
  size_t v11; // rbp
  char v12; // al
  _DWORD *v13; // rsi
  void (__fastcall ***v14)(_QWORD); // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  unsigned __int64 *v17; // r14
  unsigned __int64 i; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 *v21; // r13
  __int64 j; // rax
  unsigned __int64 *v23; // r8
  char *v24; // r12
  void (__fastcall ***v25)(_QWORD); // rdx
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+10h] [rbp-A8h]
  __int64 v29; // [rsp+18h] [rbp-A0h]
  _QWORD *v30; // [rsp+20h] [rbp-98h]
  __int64 *v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h] BYREF
  __int64 v33; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v34; // [rsp+40h] [rbp-78h] BYREF
  _DWORD *v35; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 *v36; // [rsp+50h] [rbp-68h] BYREF
  __int128 v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+70h] [rbp-48h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v3 = a1;
  v4 = *a2 == 0;
  v40 = __readfsqword(0x28u);
  if ( v4 )
  {
    if ( a3 >= (unsigned __int64)xmmword_2521D8 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v6 = nullptr;
    v7 = qword_2521D0 + 24LL * (int)a3;
    v8 = *(_QWORD *)(v7 + 8);
    v27 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v8 )
    {
      v11 = 8 * v8;
      v6 = (void *)qalloc_or_throw();
      memcpy(v6, *(const void **)v7, v11);
      if ( !*(_QWORD *)a1 )
        goto LABEL_6;
    }
    else if ( !*(_QWORD *)a1 )
    {
LABEL_6:
      v9 = _mm_load_si128(&v27);
      *(_QWORD *)a1 = v6;
      *(__m128i *)(a1 + 8) = v9;
      LODWORD(v3) = 1;
      return (unsigned int)v3;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
    goto LABEL_6;
  }
  v31 = &v33;
  sub_E4ED0(&v33, (__int64)a2, &v32);
  v29 = v33;
  if ( v33 )
  {
    v28 = *(_QWORD *)(a1 + 8);
    v30 = &v34;
    (*(void (__fastcall **)(_DWORD **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 56LL))(&v34, v32, v33, a3, 0);
    if ( v34 )
    {
      v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 8LL))(v34);
      v13 = v34;
      while ( v12 )
      {
        v39 = -1;
        v36 = nullptr;
        v38 = 0;
        v37 = 0;
        v15 = *(_QWORD *)v13;
        v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
        v27.m128i_i64[0] = (__int64)&v35;
        if ( v16 == sub_B7810 )
          (*(void (__fastcall **)(_DWORD **))(v15 + 24))(&v35);
        else
          ((void (__fastcall *)(_DWORD **))v16)(&v35);
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned __int64 **))(*(_QWORD *)v35 + 72LL))(v35, &v36) )
        {
          v17 = v36;
          if ( 16LL * (_QWORD)v37 )
          {
            do
            {
              for ( i = *v17; i < v17[1]; i = next_that() )
              {
                if ( *v17 == i || (get_flags_ex() & 0x1000) != 0 )
                {
                  v19 = *(_QWORD *)(v3 + 8);
                  v20 = 8 * v19;
                  v21 = *(unsigned __int64 **)v3;
                  for ( j = (8 * v19) >> 3; j > 0; j >>= 1 )
                  {
                    while ( 1 )
                    {
                      v23 = &v21[j >> 1];
                      if ( *v23 >= i )
                        break;
                      v21 = v23 + 1;
                      j = j - 1 - (j >> 1);
                      if ( j <= 0 )
                        goto LABEL_31;
                    }
                  }
LABEL_31:
                  if ( (unsigned __int64 *)(*(_QWORD *)v3 + 8 * v19) == v21 || *v21 != i )
                  {
                    v24 = (char *)v21 - *(_QWORD *)v3;
                    if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v19 + 1) )
                    {
                      v26 = qvector_reserve();
                      *(_QWORD *)v3 = v26;
                      v21 = (unsigned __int64 *)&v24[v26];
                      v20 = 8LL * *(_QWORD *)(v3 + 8);
                    }
                    memmove(v21 + 1, v21, v20 - (_QWORD)v24);
                    *v21 = i;
                    ++*(_QWORD *)(v3 + 8);
                  }
                }
              }
              v17 += 2;
            }
            while ( v17 != &v36[2 * (_QWORD)v37] );
          }
        }
        v14 = (void (__fastcall ***)(_QWORD))v35;
        if ( v35 )
        {
          v4 = v35[2]-- == 1;
          if ( v4 )
            (**v14)(v14);
        }
        if ( v36 )
        {
          *(_QWORD *)&v37 = 0;
          qfree();
        }
        v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 16LL))(v34);
        v13 = v34;
      }
      LOBYTE(v3) = *(_QWORD *)(v3 + 8) != v28;
      if ( v13 )
      {
        v4 = v13[2]-- == 1;
        if ( v4 )
          (**(void (__fastcall ***)(_DWORD *))v13)(v13);
      }
    }
    else
    {
      LOBYTE(v3) = *(_QWORD *)(a1 + 8) != v28;
    }
    v25 = (void (__fastcall ***)(_QWORD))v29;
    v27.m128i_i32[0] = *(_DWORD *)(v29 + 8);
    v4 = v27.m128i_i32[0] == 1;
    *(_DWORD *)(v29 + 8) = v27.m128i_i32[0] - 1;
    if ( v4 )
      (**v25)(v25);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  return (unsigned int)v3;
}

