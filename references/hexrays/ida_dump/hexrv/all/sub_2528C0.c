__int64 __fastcall sub_2528C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r14
  int v8; // r13d
  char tinfo_property; // al
  char v10; // al
  char v12; // al
  int v13; // r13d
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  char v20; // al
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i v30; // xmm0
  int tinfo_size; // edx
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // edx
  unsigned __int8 v38; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+18h] [rbp-E0h]
  int v40; // [rsp+18h] [rbp-E0h]
  __m128i v41; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+50h] [rbp-A8h] BYREF
  int v45; // [rsp+58h] [rbp-A0h]
  __int64 v46; // [rsp+60h] [rbp-98h]
  __int128 v47; // [rsp+68h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-80h]
  __int128 v49; // [rsp+80h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-68h]
  _QWORD *v51; // [rsp+98h] [rbp-60h]
  __int64 v52; // [rsp+A0h] [rbp-58h]
  int v53; // [rsp+A8h] [rbp-50h]
  bool v54; // [rsp+ACh] [rbp-4Ch]
  bool v55; // [rsp+ADh] [rbp-4Bh]
  unsigned __int64 v56; // [rsp+B8h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v5 = sub_3884A0(a2);
  if ( v5 )
  {
    v6 = (_QWORD *)(v5 + 80);
    v7 = 0;
    v8 = -991146299 * ((v5 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL)) >> 3);
  }
  else
  {
    if ( *(_DWORD *)a2 != 1 )
      return 0;
    v7 = *(_QWORD *)(a2 + 8);
    v21 = *(_DWORD *)(v7 + 8);
    if ( v21 > 69 )
      return 0;
    if ( (unsigned int)v21 <= 0x3C )
    {
      if ( (unsigned int)v21 <= 0x3A )
        return 0;
    }
    else if ( v21 != 64 )
    {
      return 0;
    }
    v6 = (_QWORD *)(v7 + 48);
    v8 = -1;
  }
  tinfo_property = get_tinfo_property(*v6, 2);
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  v44 = nullptr;
  v44 = (__int64 (__fastcall **)())get_tinfo_property(*v6, 9);
  v10 = get_tinfo_property(v44, 2);
  if ( (v10 & 0xFu) > 0xA && (v10 & 0x3F) != 0x2D )
  {
    clear_tinfo_t(&v44);
    return 0;
  }
  clear_tinfo_t(&v44);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) != get_tinfo_size(0, *v6, 0) )
    return 0;
  v12 = get_tinfo_property(*v6, 2);
  v54 = a3 != 0;
  v44 = off_4B2818;
  v55 = (v12 & 0xF) == 10;
  v45 = 2;
  v46 = 0;
  v48 = 0;
  v50 = v7;
  v51 = nullptr;
  v52 = 0;
  v53 = v8;
  v47 = 0;
  v49 = 0;
  if ( (unsigned int)sub_250E80((__int64 *)&v44, a1 + 16, 0) || v52 )
  {
    if ( a3 )
    {
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL);
      if ( v51 )
      {
        if ( v52 )
        {
          v14 = (_QWORD *)v51[1];
          if ( v51 != v14 )
          {
            v15 = 0;
            do
            {
              v16 = v14 + 3;
              if ( v14[3] >= v15 )
              {
                v22 = *(_QWORD *)(a3 + 8);
                v23 = *(_QWORD *)a3;
                if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v22 + 1) )
                {
                  v36 = qvector_reserve(a3, v23, v22 + 1, 144);
                  *(_QWORD *)a3 = v36;
                  v22 = *(_QWORD *)(a3 + 8);
                  v23 = v36;
                  v16 = v14 + 3;
                }
                v24 = v23 + 144 * v22;
                *(_OWORD *)v24 = 0;
                *(_QWORD *)(v24 + 16) = 0;
                *(_QWORD *)(v24 + 40) = 0;
                *(_QWORD *)(v24 + 112) = 1;
                *(_DWORD *)(v24 + 120) = -1;
                *(_QWORD *)(v24 + 128) = 0;
                *(_BYTE *)(v24 + 136) = 0;
                *(_OWORD *)(v24 + 24) = 0;
                *(_OWORD *)(v24 + 48) = 0;
                *(_OWORD *)(v24 + 64) = 0;
                ++*(_QWORD *)(a3 + 8);
                v25 = 8LL * *v16;
                *(_QWORD *)v24 = v25;
                if ( v13 )
                {
                  while ( (v25 & (v13 - 1)) != 0 )
                    v13 >>= 1;
                }
                copy_tinfo_t(v24 + 64, v16 + 1);
                sub_3267F0(&v42, v24 + 64);
                v26 = v42;
                v27 = _mm_loadu_si128(&v43);
                v42 = 0;
                v43 = 0;
                v28 = *(_QWORD *)(v24 + 16);
                if ( v28 )
                {
                  *(_QWORD *)(v24 + 24) = 0;
                  v39 = v26;
                  v41 = v27;
                  qfree(v28);
                  v29 = v42;
                  v30 = _mm_load_si128(&v41);
                  *(_QWORD *)(v24 + 16) = v39;
                  *(__m128i *)(v24 + 24) = v30;
                  if ( v29 )
                  {
                    v43.m128i_i64[0] = 0;
                    qfree(v29);
                  }
                }
                else
                {
                  *(_QWORD *)(v24 + 16) = v26;
                  *(__m128i *)(v24 + 24) = v27;
                }
                tinfo_size = get_tinfo_size(0, *(_QWORD *)(v24 + 64), 0);
                if ( tinfo_size == -1 )
                {
                  v37 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 130LL);
                  v42 = 7;
                  v40 = v37;
                  copy_tinfo_t(v24 + 64, &v42);
                  clear_tinfo_t(&v42);
                  tinfo_size = v40;
                }
                v32 = 8LL * tinfo_size;
                *(_QWORD *)(v24 + 8) = v32;
                v15 = (unsigned __int64)(*(_QWORD *)v24 + v32) >> 3;
              }
              if ( (*v14 & 2) == 0 )
              {
                v17 = (_QWORD *)v14[2];
                if ( (*(_BYTE *)v17 & 2) != 0 )
                {
                  v33 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFFCLL);
                  v34 = *v33;
                  if ( (*v33 & 2) == 0 )
                  {
                    while ( v14 == (_QWORD *)v33[2] )
                    {
                      v14 = v33;
                      v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                      v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v34 & 2) != 0 )
                      {
                        v14 = (_QWORD *)v35;
                        goto LABEL_22;
                      }
                      v33 = (_QWORD *)v35;
                    }
                  }
                  v14 = v33;
                }
                else
                {
                  do
                  {
                    v14 = v17;
                    v17 = (_QWORD *)v17[1];
                  }
                  while ( (*(_BYTE *)v17 & 2) == 0 );
                }
              }
LABEL_22:
              ;
            }
            while ( v51 != v14 );
          }
        }
      }
      v18 = (_QWORD *)(*(_QWORD *)a3 + 144LL * *(_QWORD *)(a3 + 8) - 144);
      v19 = *v18 + v18[1];
      *(_BYTE *)(a3 + 51) = 0;
      *(_QWORD *)(a3 + 24) = (unsigned __int64)(v19 + 7) >> 3;
      if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL) > v13 )
        *(_BYTE *)(a3 + 50) |= (unsigned __int8)log2ceil(v13) + 1;
    }
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  v38 = v20;
  sub_24FB60(&v44);
  return v38;
}
