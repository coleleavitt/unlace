unsigned __int64 __fastcall sub_FCD9F0(__int64 a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 **v11; // rax
  int *v12; // rdi
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 **v15; // r15
  __int64 v16; // r8
  __m128i si128; // xmm0
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  int v21; // ecx
  __int64 v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *i; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  char *v31; // rbp
  char *v32; // r12
  __int64 *v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // rcx
  __m128 v38; // [rsp+0h] [rbp-138h] BYREF
  _QWORD v39[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v40; // [rsp+20h] [rbp-118h]
  char v41; // [rsp+28h] [rbp-110h] BYREF
  int v42; // [rsp+2Ch] [rbp-10Ch] BYREF
  __int64 v43; // [rsp+30h] [rbp-108h] BYREF
  _QWORD *v44; // [rsp+38h] [rbp-100h]
  _QWORD v45[2]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v46[2]; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v47; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+78h] [rbp-C0h]
  _QWORD v50[23]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = a2;
  v42 = a3;
  v39[0] = a5;
  v39[1] = a6;
  v41 = a4;
  if ( !a2
    || (v9 = *(unsigned int *)(a2 + 416), result = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2, v9 >= result)
    || !*(_DWORD *)(*(_QWORD *)a1 + 4 * v9) )
  {
    ++*(_DWORD *)(a1 + 24);
    v38.m128_u64[0] = (unsigned __int64)sub_FCDDC0;
    v47.m128i_i64[0] = 0;
    v38 = _mm_loadh_ps((const double *)v38.m128_u64);
    v11 = (__int64 **)operator new(0x30u);
    v12 = &v42;
    v13 = v39;
    v14 = *(_QWORD *)(a1 + 8);
    v15 = v11;
    v16 = *(_QWORD *)a1;
    si128 = _mm_load_si128((const __m128i *)&v38);
    *v11 = (__int64 *)a1;
    v11[1] = (__int64 *)&v42;
    v11[2] = v39;
    v11[3] = (__int64 *)&v41;
    v18 = (v14 - v16) >> 2;
    v11[5] = (__int64 *)&a7;
    v19 = *(unsigned int *)(a2 + 416);
    v15[4] = v46;
    v46[0] = v15;
    v47 = si128;
    v43 = a2;
    v44 = nullptr;
    if ( v18 <= v19 )
    {
      v35 = (unsigned int)(v19 + 1);
      v36 = 4 * v19;
      if ( v18 < v35 )
      {
        sub_FCD810(a1, v35 - v18);
        v12 = (int *)v15[1];
        v13 = v15[2];
        v7 = v43;
        v20 = (_DWORD *)(**v15 + v36);
      }
      else
      {
        v20 = (_DWORD *)(v16 + v36);
        if ( v18 > v35 )
        {
          v37 = v16 + 4 * v35;
          if ( v14 != v37 )
            *(_QWORD *)(a1 + 8) = v37;
        }
      }
    }
    else
    {
      v20 = (_DWORD *)(v16 + 4 * v19);
      if ( *v20 )
        return sub_FC92C0((void **)v46, (const __m128i **)v46, 3);
    }
    v21 = *v12;
    v22 = v13[1];
    *v20 = v21;
    ((void (__fastcall *)(__int64, __int64))*v13)(v22, v7);
    if ( *(_BYTE *)v15[3] )
    {
      v38.m128_u64[0] = (unsigned __int64)&ptr;
      ptr = v50;
      v49 = 0x1000000000LL;
      sub_FCB570(v43, (__int64)&ptr);
      v31 = (char *)ptr + 8 * (unsigned int)v49;
      if ( ptr != v31 )
      {
        v32 = (char *)ptr;
        do
        {
          if ( (*(_BYTE *)(*(_QWORD *)v32 + 904LL) & 1) == 0 )
          {
            v33 = v15[4];
            v45[0] = *(_QWORD *)v32;
            v45[1] = &v43;
            if ( !v33[2] )
              std::__throw_bad_function_call();
            ((void (__fastcall *)(__int64 *, _QWORD *))v33[3])(v33, v45);
          }
          v32 += 8;
        }
        while ( v31 != v32 );
        v31 = (char *)ptr;
      }
      if ( v31 != (char *)(v38.m128_u64[0] + 16) )
        free(v31);
    }
    v23 = *(_QWORD **)(v43 + 1760);
    for ( i = *(_QWORD **)(v43 + 1752); v23 != i; i += 5 )
    {
      if ( *i )
      {
        v25 = *(unsigned int *)(*i + 416LL);
        v26 = **v15;
        if ( v25 < ((*v15)[1] - v26) >> 2 )
        {
          if ( *(_DWORD *)(v26 + 4 * v25) )
          {
            v27 = v44;
            ptr = v50;
            v49 = 0x800000001LL;
            v50[0] = v43;
            v28 = 1;
            if ( v44 )
            {
              v29 = 1;
              do
              {
                while ( 1 )
                {
                  v30 = v28 + 1;
                  if ( v30 > HIDWORD(v49) )
                    break;
                  *((_QWORD *)ptr + v29) = *v27;
                  v27 = (_QWORD *)v27[1];
                  v29 = (unsigned int)(v49 + 1);
                  LODWORD(v49) = v29;
                  v28 = (unsigned int)v29;
                  if ( !v27 )
                    goto LABEL_18;
                }
                v40 = *v27;
                v38.m128_u64[0] = (unsigned __int64)v27;
                sub_22134E0(&ptr, v50, v30, 8);
                v34 = v38.m128_u64[0];
                *((_QWORD *)ptr + (unsigned int)v49) = v40;
                v27 = *(_QWORD **)(v34 + 8);
                v28 = (unsigned int)(v49 + 1);
                v29 = v28;
                LODWORD(v49) = v49 + 1;
              }
              while ( v27 );
            }
LABEL_18:
            ((void (__fastcall *)(__int64, void *, __int64, _QWORD, _QWORD, _QWORD))*v15[5])(
              v15[5][1],
              ptr,
              v28,
              *i,
              i[1],
              i[2]);
            if ( ptr != v50 )
              free(ptr);
          }
        }
      }
    }
    result = v47.m128i_i64[0];
    if ( v47.m128i_i64[0] )
      return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v47.m128i_i64[0])(v46, v46, 3);
  }
  return result;
}

