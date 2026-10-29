__int64 __fastcall sub_871F0(__int64 a1, __int64 a2)
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
  __int64 v20; // rbx
  __int64 v21; // r13
  char v22; // bl
  int v23; // eax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r12
  __int64 v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rdi
  int v39; // eax
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __m128i v48; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+18h] [rbp-A0h]
  __int64 v51; // [rsp+28h] [rbp-90h]
  __int128 v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+40h] [rbp-78h] BYREF
  __m128i v54; // [rsp+48h] [rbp-70h] BYREF
  __int64 v55; // [rsp+58h] [rbp-60h]
  __int128 v56; // [rsp+60h] [rbp-58h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v4 = sub_7CD20((_QWORD *)a2);
  *(_DWORD *)(a1 + 284) = v4;
  if ( v4 != 13 )
  {
    v5 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)a1 = sub_7CFC0(a2, 1u);
    *(_DWORD *)(a1 + 8) = sub_7CD20((_QWORD *)a2);
    *(_DWORD *)(a1 + 12) = sub_7CD20((_QWORD *)a2);
    *(_DWORD *)(a1 + 16) = sub_7CD20((_QWORD *)a2);
    if ( *(_DWORD *)(a2 + 48) > 0xAu )
    {
      v7 = sub_7CD20((_QWORD *)a2);
    }
    else
    {
      v6 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
        sub_7A4F0(a2);
      v7 = *v6;
      *(_QWORD *)a2 = v6 + 1;
    }
    *(_DWORD *)(a1 + 20) = v7;
    v8 = sub_7D4F0((_QWORD *)a2);
    if ( v8 >= 0 )
    {
      sub_82440((__int64 *)(a1 + 24), v8);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = v9 + 80LL * *(_QWORD *)(a1 + 32);
      if ( v10 == v9 )
      {
LABEL_12:
        v12 = sub_7D4F0((_QWORD *)a2);
        if ( v12 >= 0 )
        {
          v13 = *(_QWORD *)(a1 + 56);
          v14 = v12;
          if ( v12 != v13 )
          {
            v15 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)&v50 = 0;
            v49 = 0xFFFFFFFF00000000LL;
            if ( v12 < v13 )
            {
              v40 = v12;
              while ( 1 )
              {
                v41 = v40++;
                sub_11CDA0(16 * v41 + v15);
                if ( v40 >= v13 )
                  break;
                v15 = *(_QWORD *)(a1 + 48);
              }
              *(_QWORD *)(a1 + 56) = v14;
            }
            else
            {
              v16 = *(_QWORD *)(a1 + 64);
              if ( (unsigned __int64)&v49 < v15 || (unsigned __int64)&v49 >= v15 + 16 * v16 )
              {
                if ( v16 < v14 )
                {
                  *(_QWORD *)(a1 + 48) = qvector_reserve(a1 + 48, v15, v14, 16);
                  v13 = *(_QWORD *)(a1 + 56);
                }
                while ( v13 < v14 )
                  sub_123A40(*(_QWORD *)(a1 + 48) + 16 * v13++);
                *(_QWORD *)(a1 + 56) = v14;
              }
              else
              {
                v48.m128i_i64[0] = a1 + 48;
                sub_123A40(&v53);
                if ( *(_QWORD *)(a1 + 64) < v14 )
                  *(_QWORD *)(a1 + 48) = qvector_reserve(v48.m128i_i64[0], *(_QWORD *)(a1 + 48), v14, 16);
                v17 = *(_QWORD *)(a1 + 56);
                if ( v17 < v14 )
                {
                  do
                  {
                    v48.m128i_i64[0] = v17;
                    sub_123A40(*(_QWORD *)(a1 + 48) + 16 * v17);
                    v17 = v48.m128i_i64[0] + 1;
                  }
                  while ( v14 != v48.m128i_i64[0] + 1 );
                }
                *(_QWORD *)(a1 + 56) = v14;
                sub_11CDA0(&v53);
              }
            }
            sub_11CDA0(&v49);
            v13 = *(_QWORD *)(a1 + 56);
          }
          v20 = *(_QWORD *)(a1 + 48);
          v21 = v20 + 16 * v13;
          if ( v21 == v20 )
          {
LABEL_35:
            sub_7D2C0((unsigned __int8 **)a2, a1 + 72, -1);
            if ( !(unsigned __int8)extract_argloc() )
              sub_7A530(a1 + 80, a2);
            if ( (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 96), (unsigned __int64 *)a2) )
            {
              v22 = sub_7A640(v5, 3, 0x88u);
              if ( (!v22 || (v22 = sub_7E8A0((__int64 *)(a1 + 136), (unsigned __int64 *)a2)) != 0)
                && (!(unsigned __int8)sub_7A640(v5, 3, 0xB0u)
                 || (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 176), (unsigned __int64 *)a2))
                && (!(unsigned __int8)sub_7A640(v5, 3, 0xD8u) || (unsigned __int8)sub_7E080((__int64 *)(a1 + 216), a2))
                && (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 240), (unsigned __int64 *)a2) )
              {
                v23 = sub_7CD20((_QWORD *)a2);
                v24 = v23;
                if ( !v22 )
                {
                  BYTE1(v24) = BYTE1(v23) | 2;
                  v23 = v24;
                }
                *(_DWORD *)(a1 + 280) = v23;
                v25 = sub_7D4F0((_QWORD *)a2);
                v27 = v25;
                if ( v25 >= 0 )
                {
                  v28 = *(_QWORD *)(a1 + 296);
                  if ( v25 != v28 )
                  {
                    v29 = *(_QWORD *)(a1 + 288);
                    v49 = 0;
                    v51 = 0;
                    v50 = 0;
                    v52 = 0;
                    if ( v25 < v28 )
                    {
                      v44 = v25;
                      while ( 1 )
                      {
                        v45 = (__int64 *)(48 * v44 + v29);
                        v46 = v45[3];
                        if ( v46 )
                        {
                          v45[4] = 0;
                          qfree(v46);
                        }
                        v47 = *v45;
                        if ( *v45 )
                        {
                          v45[1] = 0;
                          qfree(v47);
                        }
                        if ( ++v44 >= v28 )
                          break;
                        v29 = *(_QWORD *)(a1 + 288);
                      }
                      *(_QWORD *)(a1 + 296) = v27;
                    }
                    else
                    {
                      v30 = (__int64 *)(a1 + 288);
                      if ( (unsigned __int64)&v49 < v29 || (unsigned __int64)&v49 >= 48LL * *(_QWORD *)(a1 + 304) + v29 )
                      {
                        sub_870D0(v30, (const void *)v25, (__int64)&v49, v26);
                      }
                      else
                      {
                        v55 = 0;
                        v53 = 0;
                        v54 = 0;
                        v56 = 0;
                        sub_870D0(v30, (const void *)v25, (__int64)&v53, v26);
                        sub_83DE0(&v53);
                      }
                    }
                    sub_83DE0(&v49);
                    v28 = *(_QWORD *)(a1 + 296);
                  }
                  v31 = *(_QWORD *)(a1 + 288);
                  v32 = v31 + 48 * v28;
                  v33 = v31 + 24;
                  if ( v32 == v31 )
                    return 1;
                  while ( 1 )
                  {
                    sub_7D150((__int64)&v53, (_QWORD *)a2);
                    v36 = v53;
                    v37 = _mm_loadu_si128(&v54);
                    v53 = 0;
                    v54 = 0;
                    v38 = *(_QWORD *)(v33 - 24);
                    if ( v38 )
                    {
                      *(_QWORD *)(v33 - 16) = 0;
                      v48 = v37;
                      qfree(v38);
                      v37 = _mm_load_si128(&v48);
                    }
                    *(_QWORD *)(v33 - 24) = v36;
                    *(__m128i *)(v33 - 16) = v37;
                    if ( v53 )
                    {
                      v54.m128i_i64[0] = 0;
                      qfree(v53);
                    }
                    v39 = sub_7D4F0((_QWORD *)a2);
                    if ( v39 < 0 )
                      return 0;
                    v34 = *(_QWORD *)(v33 + 8);
                    v35 = v39;
                    if ( v34 < v39 )
                    {
                      v42 = *(_QWORD *)v33;
                      if ( *(_QWORD *)(v33 + 16) < (unsigned __int64)v39 )
                      {
                        v43 = qvector_reserve(v33, v42, v39, 1);
                        v34 = *(_QWORD *)(v33 + 8);
                        *(_QWORD *)v33 = v43;
                        v42 = v43;
                      }
                      memset((void *)(v42 + v34), 0, v35 - v34);
                    }
                    else if ( v39 == v34 )
                    {
                      goto LABEL_58;
                    }
                    *(_QWORD *)(v33 + 8) = v35;
                    v34 = v35;
LABEL_58:
                    sub_7D240(a2, *(_BYTE **)v33, v34);
                    if ( v32 == v33 + 24 )
                      return 1;
                    v33 += 48;
                  }
                }
              }
            }
          }
          else
          {
            while ( (unsigned __int8)sub_87990(v20, a2) )
            {
              v20 += 16;
              if ( v21 == v20 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_88260(v9, a2) )
        {
          v9 += 80;
          if ( v10 == v9 )
            goto LABEL_12;
        }
      }
    }
    return 0;
  }
  v18 = sub_7CD20((_QWORD *)a2);
  *(_DWORD *)(a1 + 280) |= 0x11u;
  *(_DWORD *)(a1 + 20) = 112;
  v19 = v18;
  *(_DWORD *)(a1 + 8) = 2;
  sub_82440((__int64 *)(a1 + 24), 2u);
  sub_120A10(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 24), 0, 8, -1, 0);
  v53 = 37;
  copy_tinfo_t();
  clear_tinfo_t();
  sub_120A10(
    *(_QWORD *)(a1 + 24) + 80LL,
    *(_QWORD *)(a2 + 24),
    v19,
    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1496LL) + 112LL) + 80LL),
    -1,
    0);
  copy_tinfo_t();
  v53 = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  return 1;
}
