__int64 __fastcall sub_283210(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int8 v5; // r15
  int tinfo_size; // r13d
  int v7; // r12d
  unsigned int v8; // eax
  unsigned int v9; // r12d
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // r13d
  __int64 v16; // r12
  int v17; // edi
  int v18; // eax
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rdi
  char v24; // r12
  __m128i v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-A8h]
  int v29; // [rsp+38h] [rbp-A0h]
  int v30; // [rsp+3Ch] [rbp-9Ch]
  __int64 v31; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+48h] [rbp-90h] BYREF
  __int64 v33; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-78h] BYREF
  __int64 v36; // [rsp+68h] [rbp-70h]
  __int128 v37; // [rsp+70h] [rbp-68h] BYREF
  __int64 v38; // [rsp+80h] [rbp-58h]
  int v39; // [rsp+88h] [rbp-50h]
  __int16 v40; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v41; // [rsp+98h] [rbp-40h]

  v29 = a4;
  v41 = __readfsqword(0x28u);
  v31 = 0;
  copy_tinfo_t();
  v32 = 0;
  copy_tinfo_t();
  v35 = 0;
  v36 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v34 = 0;
    v37 = 0;
    v33 = 0;
    copy_tinfo_t();
    v38 = 0;
    copy_tinfo_t();
    v39 = 0;
    v40 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v37 = v35;
    v35 = 0;
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
      v27.m128i_i8[0] = (get_tinfo_property() & 0x2F) == 13;
      goto LABEL_4;
    }
  }
  v27.m128i_i8[0] = 1;
LABEL_4:
  v35 = 0;
  v36 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v34 = 0;
    v37 = 0;
    v33 = 0;
    copy_tinfo_t();
    v38 = 0;
    copy_tinfo_t();
    v39 = 0;
    v40 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v37 = v35;
    v35 = 0;
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
  tinfo_size = get_tinfo_size();
  v7 = get_tinfo_size();
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 8) == 0 )
  {
    sub_242920(&v35, a2, (__int64)&v31, (__int64)&v32, 0);
    v27.m128i_i8[8] = *(_BYTE *)(a2 + 130);
    if ( a3 != (unsigned int)get_tinfo_property() )
    {
      if ( tinfo_size > v7 )
      {
LABEL_11:
        v9 = 0;
        clear_tinfo_t();
        v27.m128i_i8[0] = 1;
        v10 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( tinfo_size < v7 )
        goto LABEL_28;
      if ( a3 == 1 )
      {
        v5 = 1;
        v9 = 0;
        clear_tinfo_t();
        v27.m128i_i8[0] = 1;
        v10 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( (_BYTE)v31 && ((v31 & 0xE) != 0 || (v31 & 0x30) == 0) )
      {
        v30 = v7;
        *(_QWORD *)&v37 = 0;
        *(_QWORD *)&v37 = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 && (_BYTE)v32 && ((v32 & 0xE) != 0 || (v32 & 0x30) == 0) )
        {
          *(_QWORD *)&v37 = 0;
          *(_QWORD *)&v37 = get_tinfo_property();
          tinfo_property = get_tinfo_property();
          clear_tinfo_t();
          if ( (tinfo_property & 0x3F) != 0x30 )
          {
            LODWORD(tinfo_property) = v30;
            if ( ((unsigned int)get_tinfo_property() == 1 || v27.m128i_u8[8] > tinfo_size)
              && ((unsigned int)get_tinfo_property() == 1 || v27.m128i_u8[8] > v7) )
            {
              v21 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v21 + 8) == 61 )
              {
                if ( tinfo_size >= v27.m128i_u8[8] )
                  goto LABEL_11;
                v27.m128i_i64[1] = *(_QWORD *)(a1 + 24);
                if ( sub_281A60(v21) < 0 )
                {
                  v23 = v27.m128i_i64[1];
                  goto LABEL_55;
                }
              }
              else
              {
                if ( (unsigned int)get_tinfo_property() == 2 )
                {
                  v23 = *(_QWORD *)(a1 + 24);
                  if ( tinfo_size >= v27.m128i_u8[8] )
                    goto LABEL_11;
                  if ( *(_DWORD *)(v23 + 8) != 61 )
                    goto LABEL_55;
                  v22 = tinfo_size;
                  v24 = 1;
                }
                else
                {
                  v22 = tinfo_property;
                  if ( v7 >= v27.m128i_u8[8] )
                    goto LABEL_28;
                  v23 = *(_QWORD *)(a1 + 32);
                  v24 = 0;
                  if ( *(_DWORD *)(v23 + 8) != 61 )
                  {
LABEL_50:
                    *(_QWORD *)&v37 = 39;
                    v9 = sub_246B40(v23, a2, &v37);
                    clear_tinfo_t();
                    goto LABEL_32;
                  }
                }
                v30 = v27.m128i_u8[8];
                LODWORD(tinfo_property) = v22;
                v27.m128i_i64[1] = v23;
                if ( sub_281A60(v23) < 0 )
                {
                  if ( v30 > (int)tinfo_property )
                  {
                    v23 = v27.m128i_i64[1];
                    if ( !v24 )
                      goto LABEL_50;
LABEL_55:
                    if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 2) <= 0xD )
                      goto LABEL_11;
                    goto LABEL_50;
                  }
                  if ( v24 )
                    goto LABEL_11;
LABEL_28:
                  v9 = 0;
                  clear_tinfo_t();
                  if ( !v27.m128i_i8[0] )
                    goto LABEL_29;
                  v10 = *(_DWORD *)(a1 + 8);
                  v5 = v27.m128i_i8[0];
                  goto LABEL_12;
                }
              }
            }
          }
        }
      }
    }
    v9 = 0;
LABEL_32:
    clear_tinfo_t();
    if ( !v27.m128i_i8[0] )
      goto LABEL_25;
    v10 = *(_DWORD *)(a1 + 8);
LABEL_12:
    if ( (unsigned int)(v10 - 2) <= 0xD )
      goto LABEL_13;
LABEL_24:
    v9 |= sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, v27.m128i_i8[0]);
    goto LABEL_25;
  }
  v27.m128i_i8[0] = 0;
  v9 = 0;
  if ( v8 - 2 > 0xD )
    goto LABEL_24;
LABEL_13:
  v11 = j__qalloc_or_throw();
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v11 = -1;
  *(_DWORD *)(v11 + 8) = 0;
  v13 = v11;
  *(_QWORD *)(v11 + 12) = -1;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  sub_25AFF0(v11, v12);
  v14 = sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, 0);
  if ( (_BYTE)v14 )
  {
    v16 = j__qalloc_or_throw();
    v17 = *(_DWORD *)(a1 + 8);
    v27 = *(__m128i *)(a1 + 24);
    v18 = sub_244FD0(v17);
    v19 = _mm_loadl_epi64(&v27);
    *(_QWORD *)(v16 + 12) = -1;
    v20 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
    *(_DWORD *)(v16 + 8) = v18;
    *(_QWORD *)v16 = -1;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0;
    *(_DWORD *)(v16 + 56) = 0;
    *(__m128i *)(v16 + 24) = _mm_unpacklo_epi64(v19, v20);
    *(_QWORD *)(a1 + 32) = v16;
    sub_2441C0(v16, *(_QWORD *)(a2 + 112), 0);
    sub_281F10(*(_QWORD *)(a1 + 32), a2, (unsigned __int8)v29, a1);
    *(_QWORD *)(a1 + 24) = v13;
    v9 = v14;
    *(_DWORD *)(a1 + 8) = 2;
  }
  else if ( v13 )
  {
    sub_255630(v13);
    clear_tinfo_t();
    j__qfree();
  }
LABEL_25:
  if ( v5 )
LABEL_29:
    v9 |= sub_281A80(*(_QWORD *)(a1 + 32), a2, a3, 1);
  clear_tinfo_t();
  clear_tinfo_t();
  return v9;
}
