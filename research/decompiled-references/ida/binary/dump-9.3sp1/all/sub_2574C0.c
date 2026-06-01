__int64 __fastcall sub_2574C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // r13d
  char tinfo_property; // al
  char v9; // al
  int v11; // r13d
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  char v18; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rdi
  __m128i v28; // xmm0
  int tinfo_size; // edx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  unsigned __int8 v36; // [rsp+8h] [rbp-F0h]
  __int64 v37; // [rsp+18h] [rbp-E0h]
  int v38; // [rsp+18h] [rbp-E0h]
  __m128i v39; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v41; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+50h] [rbp-A8h] BYREF
  int v43; // [rsp+58h] [rbp-A0h]
  __int64 v44; // [rsp+60h] [rbp-98h]
  __int128 v45; // [rsp+68h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-80h]
  __int128 v47; // [rsp+80h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-68h]
  _QWORD *v49; // [rsp+98h] [rbp-60h]
  __int64 v50; // [rsp+A0h] [rbp-58h]
  int v51; // [rsp+A8h] [rbp-50h]
  bool v52; // [rsp+ACh] [rbp-4Ch]
  bool v53; // [rsp+ADh] [rbp-4Bh]
  unsigned __int64 v54; // [rsp+B8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v5 = sub_38D720(a2);
  if ( v5 )
  {
    v6 = 0;
    v7 = -991146299 * ((v5 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL)) >> 3);
  }
  else
  {
    if ( *(_DWORD *)a2 != 1 )
      return 0;
    v6 = *(_QWORD *)(a2 + 8);
    v19 = *(_DWORD *)(v6 + 8);
    if ( v19 > 69 )
      return 0;
    if ( (unsigned int)v19 <= 0x3C )
    {
      if ( (unsigned int)v19 <= 0x3A )
        return 0;
    }
    else if ( v19 != 64 )
    {
      return 0;
    }
    v7 = -1;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  v42 = (__int64 (__fastcall **)())get_tinfo_property();
  v9 = get_tinfo_property();
  if ( (v9 & 0xFu) > 0xA && (v9 & 0x3F) != 0x2D )
  {
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) != get_tinfo_size() )
    return 0;
  v52 = a3 != 0;
  v42 = off_4DFDD8;
  v53 = (get_tinfo_property() & 0xF) == 10;
  v43 = 2;
  v44 = 0;
  v46 = 0;
  v48 = v6;
  v49 = nullptr;
  v50 = 0;
  v51 = v7;
  v45 = 0;
  v47 = 0;
  if ( (unsigned int)sub_255A80((__int64 *)&v42, a1 + 16, 0) || v50 )
  {
    if ( a3 )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL);
      if ( v49 )
      {
        if ( v50 )
        {
          v12 = (_QWORD *)v49[1];
          if ( v49 != v12 )
          {
            v13 = 0;
            do
            {
              v14 = v12 + 3;
              if ( v12[3] >= v13 )
              {
                v20 = *(_QWORD *)(a3 + 8);
                v21 = *(_QWORD *)a3;
                if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v20 + 1) )
                {
                  v34 = qvector_reserve(a3, v21, v20 + 1, 144);
                  *(_QWORD *)a3 = v34;
                  v20 = *(_QWORD *)(a3 + 8);
                  v21 = v34;
                  v14 = v12 + 3;
                }
                v22 = v21 + 144 * v20;
                *(_OWORD *)v22 = 0;
                *(_QWORD *)(v22 + 16) = 0;
                *(_QWORD *)(v22 + 40) = 0;
                *(_QWORD *)(v22 + 112) = 1;
                *(_DWORD *)(v22 + 120) = -1;
                *(_QWORD *)(v22 + 128) = 0;
                *(_BYTE *)(v22 + 136) = 0;
                *(_OWORD *)(v22 + 24) = 0;
                *(_OWORD *)(v22 + 48) = 0;
                *(_OWORD *)(v22 + 64) = 0;
                ++*(_QWORD *)(a3 + 8);
                v23 = 8LL * *v14;
                *(_QWORD *)v22 = v23;
                if ( v11 )
                {
                  while ( (v23 & (v11 - 1)) != 0 )
                    v11 >>= 1;
                }
                copy_tinfo_t();
                sub_32BAA0(&v40, v22 + 64);
                v24 = v40;
                v25 = _mm_loadu_si128(&v41);
                v40 = 0;
                v41 = 0;
                v26 = *(_QWORD *)(v22 + 16);
                if ( v26 )
                {
                  *(_QWORD *)(v22 + 24) = 0;
                  v37 = v24;
                  v39 = v25;
                  qfree(v26);
                  v27 = v40;
                  v28 = _mm_load_si128(&v39);
                  *(_QWORD *)(v22 + 16) = v37;
                  *(__m128i *)(v22 + 24) = v28;
                  if ( v27 )
                  {
                    v41.m128i_i64[0] = 0;
                    qfree(v27);
                  }
                }
                else
                {
                  *(_QWORD *)(v22 + 16) = v24;
                  *(__m128i *)(v22 + 24) = v25;
                }
                tinfo_size = get_tinfo_size();
                if ( tinfo_size == -1 )
                {
                  v35 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 130LL);
                  v40 = 7;
                  v38 = v35;
                  copy_tinfo_t();
                  clear_tinfo_t();
                  tinfo_size = v38;
                }
                v30 = 8LL * tinfo_size;
                *(_QWORD *)(v22 + 8) = v30;
                v13 = (unsigned __int64)(*(_QWORD *)v22 + v30) >> 3;
              }
              if ( (*v12 & 2) == 0 )
              {
                v15 = (_QWORD *)v12[2];
                if ( (*(_BYTE *)v15 & 2) != 0 )
                {
                  v31 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
                  v32 = *v31;
                  if ( (*v31 & 2) == 0 )
                  {
                    while ( v12 == (_QWORD *)v31[2] )
                    {
                      v12 = v31;
                      v33 = v32 & 0xFFFFFFFFFFFFFFFCLL;
                      v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v32 & 2) != 0 )
                      {
                        v12 = (_QWORD *)v33;
                        goto LABEL_22;
                      }
                      v31 = (_QWORD *)v33;
                    }
                  }
                  v12 = v31;
                }
                else
                {
                  do
                  {
                    v12 = v15;
                    v15 = (_QWORD *)v15[1];
                  }
                  while ( (*(_BYTE *)v15 & 2) == 0 );
                }
              }
LABEL_22:
              ;
            }
            while ( v49 != v12 );
          }
        }
      }
      v16 = (_QWORD *)(*(_QWORD *)a3 + 144LL * *(_QWORD *)(a3 + 8) - 144);
      v17 = *v16 + v16[1];
      *(_BYTE *)(a3 + 51) = 0;
      *(_QWORD *)(a3 + 24) = (unsigned __int64)(v17 + 7) >> 3;
      if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL) > v11 )
        *(_BYTE *)(a3 + 50) |= (unsigned __int8)log2ceil() + 1;
    }
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  v36 = v18;
  sub_254760(&v42);
  return v36;
}
