__int64 __fastcall sub_82FF0(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // r14d
  unsigned __int8 *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  int v12; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // r13
  char v24; // bl
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // r14
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 *v33; // r14
  __m128i *v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r12
  __int64 v37; // r12
  __m128i v38; // xmm0
  __int64 v39; // rdi
  int v40; // eax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdi
  __m128i v49; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+18h] [rbp-A0h]
  __int64 v52; // [rsp+28h] [rbp-90h]
  __int128 v53; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+40h] [rbp-78h] BYREF
  __m128i v55; // [rsp+48h] [rbp-70h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h]
  __int128 v57; // [rsp+60h] [rbp-58h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v4 = sub_78B20((_QWORD *)a2);
  *(_DWORD *)(a1 + 284) = v4;
  if ( v4 != 13 )
  {
    v5 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)a1 = sub_78DC0(a2, 1u);
    *(_DWORD *)(a1 + 8) = sub_78B20((_QWORD *)a2);
    *(_DWORD *)(a1 + 12) = sub_78B20((_QWORD *)a2);
    *(_DWORD *)(a1 + 16) = sub_78B20((_QWORD *)a2);
    if ( *(_DWORD *)(a2 + 48) > 0xAu )
    {
      v7 = sub_78B20((_QWORD *)a2);
    }
    else
    {
      v6 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
        sub_762F0(a2);
      v7 = *v6;
      *(_QWORD *)a2 = v6 + 1;
    }
    *(_DWORD *)(a1 + 20) = v7;
    v8 = sub_792F0((_QWORD *)a2);
    if ( v8 >= 0 )
    {
      sub_7E240((_QWORD *)(a1 + 24), v8);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = v9 + 80LL * *(_QWORD *)(a1 + 32);
      if ( v10 == v9 )
      {
LABEL_12:
        v12 = sub_792F0((_QWORD *)a2);
        if ( v12 >= 0 )
        {
          v13 = *(_QWORD *)(a1 + 56);
          v14 = v12;
          if ( v12 != v13 )
          {
            v15 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)&v51 = 0;
            v50 = 0xFFFFFFFF00000000LL;
            if ( v12 < v13 )
            {
              v41 = v12;
              while ( 1 )
              {
                v42 = v41++;
                sub_118BA0(16 * v42 + v15);
                if ( v41 >= v13 )
                  break;
                v15 = *(_QWORD *)(a1 + 48);
              }
              *(_QWORD *)(a1 + 56) = v14;
            }
            else
            {
              v16 = *(_QWORD *)(a1 + 64);
              if ( (unsigned __int64)&v50 < v15 || (unsigned __int64)&v50 >= v15 + 16 * v16 )
              {
                if ( v16 < v14 )
                {
                  *(_QWORD *)(a1 + 48) = qvector_reserve(a1 + 48, v15, v14, 16);
                  v13 = *(_QWORD *)(a1 + 56);
                }
                while ( v13 < v14 )
                  sub_11F840(*(_QWORD *)(a1 + 48) + 16 * v13++, &v50);
                *(_QWORD *)(a1 + 56) = v14;
              }
              else
              {
                v49.m128i_i64[0] = a1 + 48;
                sub_11F840(&v54, &v50);
                if ( *(_QWORD *)(a1 + 64) < v14 )
                  *(_QWORD *)(a1 + 48) = qvector_reserve(v49.m128i_i64[0], *(_QWORD *)(a1 + 48), v14, 16);
                v17 = *(_QWORD *)(a1 + 56);
                if ( v17 < v14 )
                {
                  do
                  {
                    v49.m128i_i64[0] = v17;
                    sub_11F840(*(_QWORD *)(a1 + 48) + 16 * v17, &v54);
                    v17 = v49.m128i_i64[0] + 1;
                  }
                  while ( v14 != v49.m128i_i64[0] + 1 );
                }
                *(_QWORD *)(a1 + 56) = v14;
                sub_118BA0(&v54);
              }
            }
            sub_118BA0(&v50);
            v13 = *(_QWORD *)(a1 + 56);
          }
          v22 = *(_QWORD *)(a1 + 48);
          v23 = v22 + 16 * v13;
          if ( v23 == v22 )
          {
LABEL_35:
            sub_790C0((unsigned __int8 **)a2, a1 + 72, -1);
            if ( !(unsigned __int8)extract_argloc(a1 + 80, a2, 0) )
              sub_76330();
            if ( (unsigned __int8)sub_7A6A0((__int64 *)(a1 + 96), (__int64 *)a2) )
            {
              v24 = sub_76440(v5, 3, 0x88u);
              if ( (!v24 || (v24 = sub_7A6A0((__int64 *)(a1 + 136), (__int64 *)a2)) != 0)
                && (!(unsigned __int8)sub_76440(v5, 3, 0xB0u)
                 || (unsigned __int8)sub_7A6A0((__int64 *)(a1 + 176), (__int64 *)a2))
                && (!(unsigned __int8)sub_76440(v5, 3, 0xD8u)
                 || (unsigned __int8)sub_79E80((__int64 *)(a1 + 216), (__int64 *)a2))
                && (unsigned __int8)sub_7A6A0((__int64 *)(a1 + 240), (__int64 *)a2) )
              {
                v25 = sub_78B20((_QWORD *)a2);
                v26 = v25;
                if ( !v24 )
                {
                  BYTE1(v26) = BYTE1(v25) | 2;
                  v25 = v26;
                }
                *(_DWORD *)(a1 + 280) = v25;
                v27 = sub_792F0((_QWORD *)a2);
                v28 = v27;
                if ( v27 >= 0 )
                {
                  v29 = *(_QWORD *)(a1 + 296);
                  if ( v27 != v29 )
                  {
                    v30 = *(_QWORD *)(a1 + 288);
                    v50 = 0;
                    v52 = 0;
                    v51 = 0;
                    v53 = 0;
                    if ( v27 < v29 )
                    {
                      v45 = v27;
                      while ( 1 )
                      {
                        v46 = (__int64 *)(48 * v45 + v30);
                        v47 = v46[3];
                        if ( v47 )
                        {
                          v46[4] = 0;
                          qfree(v47);
                        }
                        v48 = *v46;
                        if ( *v46 )
                        {
                          v46[1] = 0;
                          qfree(v48);
                        }
                        if ( ++v45 >= v29 )
                          break;
                        v30 = *(_QWORD *)(a1 + 288);
                      }
                      *(_QWORD *)(a1 + 296) = v28;
                    }
                    else
                    {
                      v31 = (_QWORD *)(a1 + 288);
                      if ( (unsigned __int64)&v50 < v30 || (unsigned __int64)&v50 >= 48LL * *(_QWORD *)(a1 + 304) + v30 )
                      {
                        sub_82ED0(v31, v27, (__int64)&v50);
                      }
                      else
                      {
                        v56 = 0;
                        v54 = 0;
                        v55 = 0;
                        v57 = 0;
                        sub_82ED0(v31, v27, (__int64)&v54);
                        sub_7FBE0(&v54);
                      }
                    }
                    sub_7FBE0(&v50);
                    v29 = *(_QWORD *)(a1 + 296);
                  }
                  v32 = *(_QWORD *)(a1 + 288);
                  v33 = (unsigned __int64 *)(v32 + 48 * v29);
                  v34 = (__m128i *)(v32 + 24);
                  if ( v33 == (unsigned __int64 *)v32 )
                    return 1;
                  while ( 1 )
                  {
                    sub_78F50((__int64)&v54, (_QWORD *)a2);
                    v37 = v54;
                    v38 = _mm_loadu_si128(&v55);
                    v54 = 0;
                    v55 = 0;
                    v39 = v34[-2].m128i_i64[1];
                    if ( v39 )
                    {
                      v34[-1].m128i_i64[0] = 0;
                      v49 = v38;
                      qfree(v39);
                      v38 = _mm_load_si128(&v49);
                    }
                    v34[-2].m128i_i64[1] = v37;
                    v34[-1] = v38;
                    if ( v54 )
                    {
                      v55.m128i_i64[0] = 0;
                      qfree(v54);
                    }
                    v40 = sub_792F0((_QWORD *)a2);
                    if ( v40 < 0 )
                      return 0;
                    v35 = v34->m128i_u64[1];
                    v36 = v40;
                    if ( v35 < v40 )
                    {
                      v43 = v34->m128i_i64[0];
                      if ( v34[1].m128i_i64[0] < (unsigned __int64)v40 )
                      {
                        v44 = qvector_reserve(v34, v43, v40, 1);
                        v35 = v34->m128i_u64[1];
                        v34->m128i_i64[0] = v44;
                        v43 = v44;
                      }
                      memset((void *)(v43 + v35), 0, v36 - v35);
                    }
                    else if ( v40 == v35 )
                    {
                      goto LABEL_58;
                    }
                    v34->m128i_i64[1] = v36;
                    v35 = v36;
LABEL_58:
                    sub_79040(a2, v34->m128i_i64[0], v35);
                    if ( v33 == &v34[1].m128i_u64[1] )
                      return 1;
                    v34 += 3;
                  }
                }
              }
            }
          }
          else
          {
            while ( (unsigned __int8)sub_83790(v22, a2) )
            {
              v22 += 16;
              if ( v23 == v22 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_84060(v9, a2) )
        {
          v9 += 80;
          if ( v10 == v9 )
            goto LABEL_12;
        }
      }
    }
    return 0;
  }
  v18 = sub_78B20((_QWORD *)a2);
  *(_DWORD *)(a1 + 280) |= 0x11u;
  *(_DWORD *)(a1 + 20) = 112;
  v19 = v18;
  *(_DWORD *)(a1 + 8) = 2;
  sub_7E240((_QWORD *)(a1 + 24), 2u);
  sub_11C810(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 24), 0, 8, -1, 0);
  v20 = *(_QWORD *)(a1 + 24);
  v54 = 37;
  copy_tinfo_t(v20 + 24, &v54);
  clear_tinfo_t(&v54);
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1496LL);
  sub_11C810(
    *(_QWORD *)(a1 + 24) + 80LL,
    *(_QWORD *)(a2 + 24),
    v19,
    *(unsigned int *)(*(_QWORD *)(v21 + 112) + 80LL),
    -1,
    0);
  copy_tinfo_t(*(_QWORD *)(a1 + 24) + 104LL, v21 + 264);
  v54 = 50;
  copy_tinfo_t(a1 + 72, &v54);
  clear_tinfo_t(&v54);
  return 1;
}
