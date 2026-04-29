__int64 __fastcall sub_283210(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int8 v5; // r15
  __int64 v6; // rsi
  int tinfo_size; // r13d
  __int64 v8; // rcx
  int v9; // r12d
  unsigned int v10; // eax
  _UNKNOWN **v11; // rdx
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r13d
  __int64 v21; // r12
  int v22; // edi
  int v23; // eax
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rdi
  char v29; // r12
  __m128i v32; // [rsp+20h] [rbp-B8h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-A8h]
  int v34; // [rsp+38h] [rbp-A0h]
  int v35; // [rsp+3Ch] [rbp-9Ch]
  __int64 v36; // [rsp+40h] [rbp-98h] BYREF
  __int64 v37; // [rsp+48h] [rbp-90h] BYREF
  __int64 v38; // [rsp+50h] [rbp-88h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-78h] BYREF
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int128 v42; // [rsp+70h] [rbp-68h] BYREF
  __int64 v43; // [rsp+80h] [rbp-58h]
  int v44; // [rsp+88h] [rbp-50h]
  __int16 v45; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v34 = a4;
  v46 = __readfsqword(0x28u);
  v36 = 0;
  copy_tinfo_t();
  v37 = 0;
  copy_tinfo_t();
  v40 = 0;
  v41 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v39 = 0;
    v42 = 0;
    v38 = 0;
    copy_tinfo_t();
    v43 = 0;
    copy_tinfo_t();
    v44 = 0;
    v45 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v42 = v40;
    v40 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 9 )
    {
      v32.m128i_i8[0] = (get_tinfo_property() & 0x2F) == 13;
      goto LABEL_4;
    }
  }
  v32.m128i_i8[0] = 1;
LABEL_4:
  v40 = 0;
  v41 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v39 = 0;
    v42 = 0;
    v38 = 0;
    copy_tinfo_t();
    v43 = 0;
    copy_tinfo_t();
    v44 = 0;
    v45 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v42 = v40;
    v40 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 9 )
    {
      v5 = (get_tinfo_property() & 0x2F) == 13;
      goto LABEL_7;
    }
  }
  v5 = 1;
LABEL_7:
  v6 = v37;
  tinfo_size = get_tinfo_size();
  v9 = get_tinfo_size();
  v10 = *(_DWORD *)(a1 + 8);
  if ( v10 > 0x45 || (v11 = &off_4E0320 + 2 * (int)v10, (*((_BYTE *)v11 + 11) & 8) == 0) )
  {
    sub_242920(&v40, a2, (__int64)&v36, (__int64)&v37, 0);
    v6 = 3;
    v32.m128i_i8[8] = *(_BYTE *)(a2 + 130);
    if ( a3 != (unsigned int)get_tinfo_property() )
    {
      if ( tinfo_size > v9 )
      {
LABEL_11:
        v12 = 0;
        clear_tinfo_t();
        v32.m128i_i8[0] = 1;
        v13 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( tinfo_size < v9 )
        goto LABEL_28;
      if ( a3 == 1 )
      {
        v5 = 1;
        v12 = 0;
        clear_tinfo_t();
        v32.m128i_i8[0] = 1;
        v13 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( (_BYTE)v36 && ((v36 & 0xE) != 0 || (v36 & 0x30) == 0) )
      {
        v35 = v9;
        *(_QWORD *)&v42 = 0;
        v6 = 2;
        *(_QWORD *)&v42 = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 && (_BYTE)v37 && ((v37 & 0xE) != 0 || (v37 & 0x30) == 0) )
        {
          *(_QWORD *)&v42 = 0;
          v6 = 2;
          *(_QWORD *)&v42 = get_tinfo_property();
          tinfo_property = get_tinfo_property();
          clear_tinfo_t();
          if ( (tinfo_property & 0x3F) != 0x30 )
          {
            v6 = 3;
            LODWORD(tinfo_property) = v35;
            if ( (unsigned int)get_tinfo_property() == 1 || v32.m128i_u8[8] > tinfo_size )
            {
              v6 = 3;
              if ( (unsigned int)get_tinfo_property() == 1 || v32.m128i_u8[8] > v9 )
              {
                v26 = *(_QWORD *)(a1 + 24);
                if ( *(_DWORD *)(v26 + 8) == 61 )
                {
                  if ( tinfo_size >= v32.m128i_u8[8] )
                    goto LABEL_11;
                  v32.m128i_i64[1] = *(_QWORD *)(a1 + 24);
                  if ( sub_281A60(v26) < 0 )
                  {
                    v28 = v32.m128i_i64[1];
                    goto LABEL_55;
                  }
                }
                else
                {
                  v6 = 3;
                  if ( (unsigned int)get_tinfo_property() == 2 )
                  {
                    v28 = *(_QWORD *)(a1 + 24);
                    if ( tinfo_size >= v32.m128i_u8[8] )
                      goto LABEL_11;
                    if ( *(_DWORD *)(v28 + 8) != 61 )
                      goto LABEL_55;
                    v27 = tinfo_size;
                    v29 = 1;
                  }
                  else
                  {
                    v27 = tinfo_property;
                    if ( v9 >= v32.m128i_u8[8] )
                      goto LABEL_28;
                    v28 = *(_QWORD *)(a1 + 32);
                    v29 = 0;
                    if ( *(_DWORD *)(v28 + 8) != 61 )
                    {
LABEL_50:
                      v6 = a2;
                      *(_QWORD *)&v42 = 39;
                      v12 = sub_246B40(v28, a2, &v42);
                      clear_tinfo_t();
                      goto LABEL_32;
                    }
                  }
                  v35 = v32.m128i_u8[8];
                  LODWORD(tinfo_property) = v27;
                  v32.m128i_i64[1] = v28;
                  if ( sub_281A60(v28) < 0 )
                  {
                    if ( v35 > (int)tinfo_property )
                    {
                      v28 = v32.m128i_i64[1];
                      if ( !v29 )
                        goto LABEL_50;
LABEL_55:
                      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 2) <= 0xD )
                        goto LABEL_11;
                      goto LABEL_50;
                    }
                    if ( v29 )
                      goto LABEL_11;
LABEL_28:
                    v12 = 0;
                    clear_tinfo_t();
                    if ( !v32.m128i_i8[0] )
                      goto LABEL_29;
                    v13 = *(_DWORD *)(a1 + 8);
                    v5 = v32.m128i_i8[0];
                    goto LABEL_12;
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = 0;
LABEL_32:
    clear_tinfo_t();
    if ( !v32.m128i_i8[0] )
      goto LABEL_25;
    v13 = *(_DWORD *)(a1 + 8);
LABEL_12:
    if ( (unsigned int)(v13 - 2) <= 0xD )
      goto LABEL_13;
LABEL_24:
    v12 |= sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, v32.m128i_i8[0]);
    goto LABEL_25;
  }
  v32.m128i_i8[0] = 0;
  v12 = 0;
  if ( v10 - 2 > 0xD )
    goto LABEL_24;
LABEL_13:
  v14 = j__qalloc_or_throw(64, v6, (__int64)v11, v8);
  v15 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = 0;
  v16 = v14;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  sub_25AFF0(v14, v15);
  v19 = sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, 0);
  if ( (_BYTE)v19 )
  {
    v21 = j__qalloc_or_throw(64, a2, v17, v18);
    v22 = *(_DWORD *)(a1 + 8);
    v32 = *(__m128i *)(a1 + 24);
    v23 = sub_244FD0(v22);
    v24 = _mm_loadl_epi64(&v32);
    *(_QWORD *)(v21 + 12) = -1;
    v25 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
    *(_DWORD *)(v21 + 8) = v23;
    *(_QWORD *)v21 = -1;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 0;
    *(__m128i *)(v21 + 24) = _mm_unpacklo_epi64(v24, v25);
    *(_QWORD *)(a1 + 32) = v21;
    sub_2441C0(v21, *(_QWORD *)(a2 + 112), 0);
    sub_281F10(*(_QWORD *)(a1 + 32), a2, (unsigned __int8)v34, a1);
    *(_QWORD *)(a1 + 24) = v16;
    v12 = v19;
    *(_DWORD *)(a1 + 8) = 2;
  }
  else if ( v16 )
  {
    sub_255630(v16);
    clear_tinfo_t();
    j__qfree(v16);
  }
LABEL_25:
  if ( v5 )
LABEL_29:
    v12 |= sub_281A80(*(_QWORD *)(a1 + 32), a2, a3, 1);
  clear_tinfo_t();
  clear_tinfo_t();
  return v12;
}
