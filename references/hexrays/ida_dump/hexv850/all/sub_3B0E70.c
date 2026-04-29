unsigned __int64 __fastcall sub_3B0E70(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(__int64, __int64))
{
  __int64 v3; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  const __m128i *v8; // r12
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 (__fastcall *v13)(__int64, __int64); // r8
  __int64 v14; // rsi
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rdi
  __int64 j; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 k; // rdx
  __int64 *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 m; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 n; // rdx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v42; // [rsp+8h] [rbp-C0h]
  __int64 v43; // [rsp+10h] [rbp-B8h]
  __int64 v44; // [rsp+10h] [rbp-B8h]
  __int64 v45; // [rsp+18h] [rbp-B0h]
  __int64 v46; // [rsp+18h] [rbp-B0h]
  __int64 v47; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+28h] [rbp-A0h] BYREF
  __m128i i; // [rsp+38h] [rbp-90h] BYREF
  __int64 v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+50h] [rbp-78h] BYREF
  __m128i v52; // [rsp+58h] [rbp-70h]
  __m128i v53; // [rsp+68h] [rbp-60h]
  __int64 v54; // [rsp+78h] [rbp-50h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v3 = a2 - a1;
  v55 = __readfsqword(0x28u);
  if ( v3 > 48 )
  {
    v42 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
    v6 = (v42 - 2) / 2;
    v7 = 16 * (v6 + ((v42 - 2 + ((unsigned __int64)(v42 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    v8 = (const __m128i *)(a1 + v7 + 8);
    v9 = *(_QWORD *)(a1 + v7);
    v47 = v9;
    if ( !v9 )
      goto LABEL_43;
LABEL_3:
    v10 = *(_DWORD *)(v9 + 104);
    v51 = v9;
    *(_DWORD *)(v9 + 104) = v10 + 1;
    v11 = v8[2].m128i_i64[0];
    v48 = _mm_loadu_si128(v8);
    v12 = _mm_loadu_si128(v8 + 1);
    v50 = v11;
    *(_DWORD *)(v9 + 104) = v10 + 2;
    for ( i = v12; ; i = v40 )
    {
      v13 = *a3;
      v14 = v6;
      v52 = _mm_loadu_si128(&v48);
      v15 = _mm_loadu_si128(&i);
      v54 = v50;
      v53 = v15;
      sub_3B0790(a1, v6, v42, &v51, v13);
      if ( v9 )
      {
        v16 = *(_DWORD *)(v9 + 104) - 1;
        *(_DWORD *)(v9 + 104) = v16;
        if ( v16 )
        {
          if ( !v6 )
            goto LABEL_45;
        }
        else
        {
          sub_2535B0((__int64 *)v9);
          v17 = *(_QWORD *)(v9 + 184);
          if ( v17 )
          {
            v14 = *(_QWORD *)(v9 + 192);
            if ( v14 )
            {
              for ( j = 0; j != v14; ++j )
              {
                v19 = (__int64 *)(v17 + 24 * j);
                v20 = *v19;
                if ( *v19 )
                {
                  v19[1] = 0;
                  v43 = j;
                  qfree(v20);
                  j = v43;
                  v17 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree(v17);
          }
          v21 = *(_QWORD *)(v9 + 160);
          if ( v21 )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree(v21);
          }
          v22 = *(_QWORD *)(v9 + 128);
          if ( v22 )
          {
            v14 = *(_QWORD *)(v9 + 136);
            if ( v14 )
            {
              for ( k = 0; k != v14; ++k )
              {
                v24 = (__int64 *)(v22 + 32 * k);
                v25 = *v24;
                if ( *v24 )
                {
                  v24[1] = 0;
                  v45 = k;
                  qfree(v25);
                  k = v45;
                  v22 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree(v22);
          }
          sub_24FC90(v9 + 16);
          j__qfree(v9);
          if ( !v6 )
          {
LABEL_45:
            sub_13B580(&v47, v14);
            return v55 - __readfsqword(0x28u);
          }
          v16 = *(_DWORD *)(v9 + 104);
        }
        v26 = v16 - 1;
        *(_DWORD *)(v9 + 104) = v26;
        if ( !v26 )
        {
          sub_2535B0((__int64 *)v9);
          v27 = *(_QWORD *)(v9 + 184);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v9 + 192);
            if ( v28 )
            {
              for ( m = 0; m != v28; ++m )
              {
                v30 = (__int64 *)(v27 + 24 * m);
                v31 = *v30;
                if ( *v30 )
                {
                  v30[1] = 0;
                  v46 = m;
                  qfree(v31);
                  m = v46;
                  v27 = *(_QWORD *)(v9 + 184);
                }
              }
            }
            *(_QWORD *)(v9 + 192) = 0;
            qfree(v27);
          }
          v32 = *(_QWORD *)(v9 + 160);
          if ( v32 )
          {
            *(_QWORD *)(v9 + 168) = 0;
            qfree(v32);
          }
          v33 = *(_QWORD *)(v9 + 128);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v9 + 136);
            if ( v34 )
            {
              for ( n = 0; n != v34; ++n )
              {
                v36 = (__int64 *)(v33 + 32 * n);
                v37 = *v36;
                if ( *v36 )
                {
                  v36[1] = 0;
                  v44 = n;
                  qfree(v37);
                  n = v44;
                  v33 = *(_QWORD *)(v9 + 128);
                }
              }
            }
            *(_QWORD *)(v9 + 136) = 0;
            qfree(v33);
          }
          sub_24FC90(v9 + 16);
          j__qfree(v9);
        }
      }
      else if ( !v6 )
      {
        goto LABEL_45;
      }
      v9 = v8[-4].m128i_i64[1];
      v8 -= 3;
      --v6;
      v47 = v9;
      if ( v9 )
        goto LABEL_3;
LABEL_43:
      v38 = _mm_loadu_si128(v8);
      v39 = v8[2].m128i_i64[0];
      v51 = 0;
      v48 = v38;
      v40 = _mm_loadu_si128(v8 + 1);
      v50 = v39;
    }
  }
  return v55 - __readfsqword(0x28u);
}
