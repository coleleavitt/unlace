__int64 *__fastcall sub_21BC320(__int64 *a1, __int64 a2, __int64 (__fastcall ***a3)(_QWORD), int *a4, __int64 a5)
{
  char *v7; // rax
  size_t v8; // rdx
  char *v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // ebp
  int v12; // eax
  __int64 v13; // r15
  char *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r12
  __int64 v20; // rdx
  _DWORD *v21; // r12
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  size_t v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned int *i; // r12
  unsigned int v31; // r13d
  char *v32; // rbp
  int v33; // ebx
  bool v34; // zf
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r13
  char *v40; // r15
  __int64 v41; // r14
  __int64 v42; // [rsp-10h] [rbp-D8h]
  __int64 v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+8h] [rbp-C0h]
  int v46; // [rsp+1Ch] [rbp-ACh]
  __int64 v47; // [rsp+38h] [rbp-90h] BYREF
  char *v48; // [rsp+40h] [rbp-88h] BYREF
  size_t v49; // [rsp+48h] [rbp-80h]
  _QWORD v50[2]; // [rsp+50h] [rbp-78h] BYREF
  __m128 v51; // [rsp+60h] [rbp-68h] BYREF
  __m128 v52; // [rsp+70h] [rbp-58h] BYREF
  __int64 v53; // [rsp+80h] [rbp-48h]

  v46 = *a4;
  v7 = (char *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a4);
  v8 = 0;
  v9 = v7;
  v48 = v7;
  if ( v7 )
    v8 = strlen(v7);
  v10 = *(_QWORD *)(a2 + 80);
  v49 = v8;
  v52.m128_u64[0] = v10;
  v52.m128_u64[1] = *(unsigned int *)(a2 + 88);
  if ( (unsigned __int8)sub_21BABE0((__int64 *)&v52, v48, v8) )
  {
    v11 = (*a4)++;
    v12 = *(_DWORD *)(a2 + 64);
    if ( v12 )
      sub_21B97F0(&v52, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v12 - 1), a2);
    else
      sub_21B97F0(&v52, 0, 0);
    v13 = v52.m128_i64[1];
    v43 = v52.m128_u64[0];
    v14 = v48;
    v15 = v49;
    v16 = operator new(0x58u);
    v17 = v11;
    v42 = (__int64)v9;
    v18 = v16;
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 32);
    v21 = (_DWORD *)(v20 + 80LL * *(unsigned int *)(a2 + 72));
    v22 = v20 + 80LL * *(_QWORD *)(a2 + 40);
    v23 = sub_2246FB0(&v48, *(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 152), 0);
    v26 = v49;
    v27 = 0;
    if ( v23 < v49 )
    {
      v26 = v23;
      v27 = v49 - v23;
    }
    v28 = *(_QWORD *)(a2 + 24);
    v29 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v50[1] = v27;
    v50[0] = &v48[v26];
    v52 = (__m128)v29;
    v53 = v28;
    for ( i = sub_21BAA70(v21, v22, (__int64)v50, v27, v24, v25, (__int64 *)v29.m128i_i64[0], v29.m128i_i64[1]);
          (unsigned int *)v22 != i;
          i += 20 )
    {
      v31 = sub_21BADF0(
              *(void ***)(a2 + 8),
              *(_QWORD *)(a2 + 16),
              *(_QWORD *)(a2 + 24),
              i,
              v48,
              v49,
              *(_BYTE *)(a2 + 48));
      if ( v31 )
      {
        sub_21B97F0(&v51, (__int64)i, a2);
        if ( !*(_QWORD *)(a5 + 16) )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128 *))(a5 + 24))(a5, &v51) )
        {
          v37 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a4);
          sub_21BA060(&v47, (const __m128i *)&v51, a3, v37, v31, 0, a4);
          if ( v47 )
          {
            *a1 = v47;
            return a1;
          }
          if ( *a4 != v46 )
          {
            *a1 = 0;
            return a1;
          }
        }
      }
    }
    v32 = v48;
    v33 = *a4;
    v34 = *v48 == 47;
    ++*a4;
    if ( v34 )
    {
      v38 = *(_DWORD *)(a2 + 64);
      if ( v38 )
        sub_21B97F0(&v51, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v38 - 1), a2);
      else
        sub_21B97F0(&v51, 0, 0);
      v39 = v51.m128_i64[1];
      v40 = v48;
      v41 = v49;
      v44 = v51.m128_u64[0];
      v18 = operator new(0x58u);
      sub_21B5910(v18, v44, v39, (__int64)v40, v41, v33, (__int64)v32, 0);
      goto LABEL_8;
    }
    v35 = *(_DWORD *)(a2 + 68);
    if ( v35 )
      sub_21B97F0(&v51, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v35 - 1), a2);
    else
      sub_21B97F0(&v51, 0, 0);
    v13 = v51.m128_i64[1];
    v43 = v51.m128_u64[0];
    v14 = v48;
    v15 = v49;
    v36 = operator new(0x58u);
    v17 = v33;
    v18 = v36;
    v42 = (__int64)v32;
  }
  sub_21B5910(v18, v43, v13, (__int64)v14, v15, v17, v42, 0);
LABEL_8:
  *a1 = v18;
  return a1;
}
