__int64 __fastcall sub_415FA0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  char v8; // dl
  char v9; // al
  char v10; // bp
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  _QWORD *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  int *v29; // r10
  int *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r12
  unsigned __int8 v35; // al
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  const void *v39; // r15
  void *v40; // rax
  const void *v41; // r15
  void *v42; // rdi
  __int64 (__fastcall *v43)(__m128i **, const __m128i **, int); // rax
  __int64 v44; // r14
  int v45; // ecx
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  int *v50; // [rsp+10h] [rbp-A8h]
  int *v51; // [rsp+18h] [rbp-A0h]
  int v52; // [rsp+24h] [rbp-94h]
  int v53; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-78h] BYREF
  __int64 v56; // [rsp+48h] [rbp-70h] BYREF
  __int128 v57; // [rsp+50h] [rbp-68h] BYREF
  __m128i v58; // [rsp+60h] [rbp-58h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]

  v8 = *((_BYTE *)a1 + 52);
  v59 = __readfsqword(0x28u);
  v9 = 0;
  if ( a5 != -1 )
    v9 = a5;
  v10 = v9;
  if ( (v8 & 7) != 0 )
  {
    v11 = 1 << ((v8 & 7) - 1);
  }
  else
  {
    v35 = getinf(61);
    v8 = *((_BYTE *)a1 + 52);
    v11 = v35;
  }
  v12 = 8 * v11;
  v13 = -1;
  if ( v12 <= 63 )
    v13 = (1LL << v12) - 1;
  if ( (v8 & 0x10) != 0 && a4 != -1 )
  {
    if ( !a3 || (v13 & a3 & a4) != 0 )
    {
      v48 = v13;
      v58 = 0u;
      v57 = 0;
      v26 = (_QWORD *)operator new(0x28u);
      v13 = v48;
      *v26 = a1;
      v27 = _mm_loadl_epi64((const __m128i *)off_2B27AA8);
      v26[1] = &v54;
      v26[2] = &v55;
      v26[3] = a4;
      v26[4] = v48;
      *(_QWORD *)&v57 = v26;
      v28 = a1[4];
      v58 = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)sub_412140);
      if ( v28 )
      {
        v29 = (int *)a1[3];
        v50 = &v29[v28];
        if ( v29 != v50 )
        {
          v30 = (int *)a1[3];
          v31 = 0;
          while ( 1 )
          {
            v32 = *v30;
            if ( !(_DWORD)v32 )
              break;
            v31 += v32;
            if ( v50 == ++v30 )
            {
              if ( v31 != a1[1] )
                break;
              v43 = sub_412440;
              v44 = 0;
              do
              {
                v45 = *v29;
                v56 = v44;
                v53 = v45;
                if ( !v43 )
                  std::__throw_bad_function_call();
                v52 = v45;
                v51 = v29;
                v49 = v13;
                v46 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v58.m128i_i64[1])(&v57, &v56, &v53);
                v13 = v49;
                v43 = (__int64 (__fastcall *)(__m128i **, const __m128i **, int))v58.m128i_i64[0];
                if ( v46 )
                {
                  if ( v58.m128i_i64[0] )
                  {
                    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
                    v13 = v49;
                  }
                  v16 = v55;
                  v15 = v54;
                  v14 = a1[1];
                  goto LABEL_10;
                }
                v44 += v52;
                v29 = v51 + 1;
              }
              while ( v50 != v51 + 1 );
              if ( v58.m128i_i64[0] )
                ((void (__fastcall *)(__int128 *, __int128 *, __int64, _QWORD, __int64))v58.m128i_i64[0])(
                  &v57,
                  &v57,
                  3,
                  v52,
                  v49);
              return -1;
            }
          }
        }
      }
      sub_412440((__m128i **)&v57, (const __m128i **)&v57, 3);
    }
    return -1;
  }
  v54 = 0;
  v14 = a1[1];
  v15 = 0;
  v55 = v14;
  v16 = v14;
LABEL_10:
  if ( v15 >= v14 )
    return -1;
  if ( v13 == -1 )
  {
    if ( (*((_BYTE *)a1 + 52) & 7) != 0 )
    {
      v36 = 1 << ((*((_BYTE *)a1 + 52) & 7) - 1);
    }
    else
    {
      v36 = (unsigned __int8)getinf(61);
      v14 = a1[1];
    }
    v37 = 8 * v36;
    v17 = a3;
    if ( v37 <= 63 )
    {
      v38 = 1LL << v37;
      v17 = a3 & (v38 - 1);
      a3 |= -v38;
    }
  }
  else
  {
    v17 = v13 & a3;
    a3 |= ~v13;
  }
  v18 = *a1;
  v19 = v14 < v16 ? 56 * v14 : 56 * v16;
  v20 = (__int64 *)(v18 + v19);
  v21 = 56 * v15;
  v22 = (__int64 *)(v18 + 56 * v15);
  if ( v19 == v21 )
    return -1;
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = v22[6];
      if ( v23 == v17 || v23 == a3 )
        break;
      v22 += 7;
      if ( v20 == v22 )
        return -1;
    }
    if ( !v10 )
      break;
    v22 += 7;
    --v10;
    if ( v20 == v22 )
      return -1;
  }
  v24 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v22 - v18) >> 3);
  if ( (__int64 *)((char *)v22 - v18) != (__int64 *)-56LL && a2 )
  {
    if ( v22 != a2 )
    {
      v33 = v22[1];
      if ( v33 > 1 )
      {
        v41 = (const void *)*v22;
        v42 = (void *)*a2;
        if ( a2[2] < v33 )
        {
          v47 = qvector_reserve(a2, *a2, v22[1], 1);
          *a2 = v47;
          v42 = (void *)v47;
        }
        a2[1] = v33;
        memmove(v42, v41, v33 - 1);
        *(_BYTE *)(*a2 + v33 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    if ( a2 + 3 != v22 + 3 )
    {
      v34 = v22[4];
      if ( v34 > 1 )
      {
        v39 = (const void *)v22[3];
        v40 = (void *)a2[3];
        if ( a2[5] < v34 )
        {
          v40 = (void *)qvector_reserve(a2 + 3, a2[3], v22[4], 1);
          a2[3] = (__int64)v40;
        }
        a2[4] = v34;
        memmove(v40, v39, v34 - 1);
        *(_BYTE *)(a2[3] + v34 - 1) = 0;
      }
      else
      {
        a2[4] = 0;
      }
    }
    a2[6] = v22[6];
  }
  return v24;
}
