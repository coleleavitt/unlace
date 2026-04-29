__int64 __fastcall sub_27F590(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int8 v8; // r15
  int tinfo_size; // r13d
  int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned int v17; // r13d
  __int64 v18; // rax
  __int64 v20; // r12
  int v21; // edi
  int v22; // eax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rdi
  char v28; // r12
  __m128i v31; // [rsp+20h] [rbp-B8h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-A8h]
  int v33; // [rsp+38h] [rbp-A0h]
  int v34; // [rsp+3Ch] [rbp-9Ch]
  __int64 v35; // [rsp+40h] [rbp-98h] BYREF
  __int64 v36; // [rsp+48h] [rbp-90h] BYREF
  __int64 v37; // [rsp+50h] [rbp-88h] BYREF
  __int64 v38; // [rsp+58h] [rbp-80h] BYREF
  __int64 v39; // [rsp+60h] [rbp-78h] BYREF
  __int64 v40; // [rsp+68h] [rbp-70h]
  __int128 v41; // [rsp+70h] [rbp-68h] BYREF
  __int64 v42; // [rsp+80h] [rbp-58h] BYREF
  int v43; // [rsp+88h] [rbp-50h]
  __int16 v44; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v45; // [rsp+98h] [rbp-40h]

  v33 = a4;
  v45 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 24);
  v35 = 0;
  copy_tinfo_t(&v35, v5 + 48);
  v6 = *(_QWORD *)(a1 + 32);
  v36 = 0;
  copy_tinfo_t(&v36, v6 + 48);
  v39 = 0;
  v40 = 0;
  if ( (unsigned __int8)get_tinfo_details(v35, 11, &v39) )
  {
    v38 = 0;
    v41 = 0;
    v37 = 0;
    copy_tinfo_t((char *)&v41 + 8, &v37);
    v42 = 0;
    copy_tinfo_t(&v42, &v38);
    v43 = 0;
    v44 = 0;
    clear_tinfo_t(&v37);
    clear_tinfo_t(&v38);
    v18 = v41;
    *(_QWORD *)&v41 = v39;
    v39 = v18;
    create_tinfo(&v35, 10, 10, &v41);
    clear_tinfo_t(&v42);
    clear_tinfo_t((char *)&v41 + 8);
    clear_tinfo_t(&v41);
    clear_tinfo_t(&v39);
  }
  else
  {
    clear_tinfo_t(&v39);
    if ( (get_tinfo_property(v35, 2) & 0xF) != 9 )
    {
      v31.m128i_i8[0] = (get_tinfo_property(v35, 2) & 0x2F) == 13;
      goto LABEL_4;
    }
  }
  v31.m128i_i8[0] = 1;
LABEL_4:
  v39 = 0;
  v40 = 0;
  if ( (unsigned __int8)get_tinfo_details(v36, 11, &v39) )
  {
    v38 = 0;
    v41 = 0;
    v37 = 0;
    copy_tinfo_t((char *)&v41 + 8, &v37);
    v42 = 0;
    copy_tinfo_t(&v42, &v38);
    v43 = 0;
    v44 = 0;
    clear_tinfo_t(&v37);
    clear_tinfo_t(&v38);
    v7 = v41;
    *(_QWORD *)&v41 = v39;
    v39 = v7;
    create_tinfo(&v36, 10, 10, &v41);
    clear_tinfo_t(&v42);
    clear_tinfo_t((char *)&v41 + 8);
    clear_tinfo_t(&v41);
    clear_tinfo_t(&v39);
  }
  else
  {
    clear_tinfo_t(&v39);
    if ( (get_tinfo_property(v36, 2) & 0xF) != 9 )
    {
      v8 = (get_tinfo_property(v36, 2) & 0x2F) == 13;
      goto LABEL_7;
    }
  }
  v8 = 1;
LABEL_7:
  tinfo_size = get_tinfo_size(0, v35, 0);
  v10 = get_tinfo_size(0, v36, 0);
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 > 0x45 || (*((_BYTE *)&off_4CD440 + 16 * (int)v11 + 11) & 8) == 0 )
  {
    sub_23ECA0(&v39, a2, (__int64)&v35, (__int64)&v36, 0);
    v31.m128i_i8[8] = *(_BYTE *)(a2 + 130);
    if ( a3 != (unsigned int)get_tinfo_property(v39, 3) )
    {
      if ( tinfo_size > v10 )
      {
LABEL_11:
        v12 = 0;
        clear_tinfo_t(&v39);
        v31.m128i_i8[0] = 1;
        v13 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( tinfo_size < v10 )
        goto LABEL_28;
      if ( a3 == 1 )
      {
        v8 = 1;
        v12 = 0;
        clear_tinfo_t(&v39);
        v31.m128i_i8[0] = 1;
        v13 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( (_BYTE)v35 && ((v35 & 0xE) != 0 || (v35 & 0x30) == 0) )
      {
        v34 = v10;
        *(_QWORD *)&v41 = 0;
        *(_QWORD *)&v41 = get_tinfo_property(v35, 9);
        tinfo_property = get_tinfo_property(v41, 2);
        clear_tinfo_t(&v41);
        if ( (tinfo_property & 0x3F) != 0x30 && (_BYTE)v36 && ((v36 & 0xE) != 0 || (v36 & 0x30) == 0) )
        {
          *(_QWORD *)&v41 = 0;
          *(_QWORD *)&v41 = get_tinfo_property(v36, 9);
          tinfo_property = get_tinfo_property(v41, 2);
          clear_tinfo_t(&v41);
          if ( (tinfo_property & 0x3F) != 0x30 )
          {
            LODWORD(tinfo_property) = v34;
            if ( ((unsigned int)get_tinfo_property(v35, 3) == 1 || v31.m128i_u8[8] > tinfo_size)
              && ((unsigned int)get_tinfo_property(v36, 3) == 1 || v31.m128i_u8[8] > v10) )
            {
              v25 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v25 + 8) == 61 )
              {
                if ( tinfo_size >= v31.m128i_u8[8] )
                  goto LABEL_11;
                v31.m128i_i64[1] = *(_QWORD *)(a1 + 24);
                if ( sub_27DDE0(v25) < 0 )
                {
                  v27 = v31.m128i_i64[1];
                  goto LABEL_55;
                }
              }
              else
              {
                if ( (unsigned int)get_tinfo_property(v36, 3) == 2 )
                {
                  v27 = *(_QWORD *)(a1 + 24);
                  if ( tinfo_size >= v31.m128i_u8[8] )
                    goto LABEL_11;
                  if ( *(_DWORD *)(v27 + 8) != 61 )
                    goto LABEL_55;
                  v26 = tinfo_size;
                  v28 = 1;
                }
                else
                {
                  v26 = tinfo_property;
                  if ( v10 >= v31.m128i_u8[8] )
                    goto LABEL_28;
                  v27 = *(_QWORD *)(a1 + 32);
                  v28 = 0;
                  if ( *(_DWORD *)(v27 + 8) != 61 )
                  {
LABEL_50:
                    *(_QWORD *)&v41 = 39;
                    v12 = sub_242EC0(v27, a2, &v41);
                    clear_tinfo_t(&v41);
                    goto LABEL_32;
                  }
                }
                v34 = v31.m128i_u8[8];
                LODWORD(tinfo_property) = v26;
                v31.m128i_i64[1] = v27;
                if ( sub_27DDE0(v27) < 0 )
                {
                  if ( v34 > (int)tinfo_property )
                  {
                    v27 = v31.m128i_i64[1];
                    if ( !v28 )
                      goto LABEL_50;
LABEL_55:
                    if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 2) <= 0xD )
                      goto LABEL_11;
                    goto LABEL_50;
                  }
                  if ( v28 )
                    goto LABEL_11;
LABEL_28:
                  v12 = 0;
                  clear_tinfo_t(&v39);
                  if ( !v31.m128i_i8[0] )
                    goto LABEL_29;
                  v13 = *(_DWORD *)(a1 + 8);
                  v8 = v31.m128i_i8[0];
                  goto LABEL_12;
                }
              }
            }
          }
        }
      }
    }
    v12 = 0;
LABEL_32:
    clear_tinfo_t(&v39);
    if ( !v31.m128i_i8[0] )
      goto LABEL_25;
    v13 = *(_DWORD *)(a1 + 8);
LABEL_12:
    if ( (unsigned int)(v13 - 2) <= 0xD )
      goto LABEL_13;
LABEL_24:
    v12 |= sub_27DE00(*(_QWORD *)(a1 + 24), a2, a3, v31.m128i_i8[0]);
    goto LABEL_25;
  }
  v31.m128i_i8[0] = 0;
  v12 = 0;
  if ( v11 - 2 > 0xD )
    goto LABEL_24;
LABEL_13:
  v14 = j__qalloc_or_throw(64);
  v15 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = 0;
  v16 = v14;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  sub_257370(v14, v15);
  v17 = sub_27DE00(*(_QWORD *)(a1 + 24), a2, a3, 0);
  if ( (_BYTE)v17 )
  {
    v20 = j__qalloc_or_throw(64);
    v21 = *(_DWORD *)(a1 + 8);
    v31 = *(__m128i *)(a1 + 24);
    v22 = sub_241350(v21);
    v23 = _mm_loadl_epi64(&v31);
    *(_QWORD *)(v20 + 12) = -1;
    v24 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
    *(_DWORD *)(v20 + 8) = v22;
    *(_QWORD *)v20 = -1;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 48) = 0;
    *(_DWORD *)(v20 + 56) = 0;
    *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64(v23, v24);
    *(_QWORD *)(a1 + 32) = v20;
    sub_240540(v20, *(_QWORD *)(a2 + 112), 0);
    sub_27E290(*(_QWORD *)(a1 + 32), a2, (unsigned __int8)v33, a1);
    *(_QWORD *)(a1 + 24) = v16;
    v12 = v17;
    *(_DWORD *)(a1 + 8) = 2;
  }
  else if ( v16 )
  {
    sub_2519B0(v16);
    clear_tinfo_t(v16 + 48);
    j__qfree(v16);
  }
LABEL_25:
  if ( v8 )
LABEL_29:
    v12 |= sub_27DE00(*(_QWORD *)(a1 + 32), a2, a3, 1);
  clear_tinfo_t(&v36);
  clear_tinfo_t(&v35);
  return v12;
}
