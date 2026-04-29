bool __fastcall sub_CD90(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  unsigned __int64 v5; // rbx
  bool result; // al
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // r14
  unsigned __int64 v13; // r13
  unsigned __int8 v14; // r14
  char byte; // al
  char v16; // dl
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r13d
  __int64 named_type_tid; // r15
  __int64 v28; // [rsp+0h] [rbp-E8h]
  __int64 v29; // [rsp+0h] [rbp-E8h]
  __int64 v30; // [rsp+0h] [rbp-E8h]
  __int64 v31; // [rsp+8h] [rbp-E0h]
  __int64 dword; // [rsp+18h] [rbp-D0h]
  __int64 v33; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+48h] [rbp-A0h]
  int v37; // [rsp+58h] [rbp-90h]
  __m128i v38; // [rsp+60h] [rbp-88h]
  __m128i v39; // [rsp+70h] [rbp-78h]
  __m128i v40; // [rsp+80h] [rbp-68h]
  __m128i v41; // [rsp+90h] [rbp-58h]
  unsigned __int64 v42; // [rsp+A8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v5 = a3;
  v38 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_27BD8),
          (__m128i)(unsigned __int64)"FUNCDATA_LocalsPointerMaps");
  v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_27BE0), (__m128i)(unsigned __int64)"FUNCDATA_InlTree");
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_27BE8), (__m128i)(unsigned __int64)"FUNCDATA_ArgInfo");
  v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_27BF0), (__m128i)(unsigned __int64)"FUNCDATA_WrapInfo");
  if ( (unsigned __int64)a5 > 7 )
    return 0;
  result = a3 == -1 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) == a3;
  if ( result )
    return 1;
  v8 = *(_DWORD *)(a1 + 404);
  if ( v8 <= 0x66 )
  {
    v9 = (unsigned __int16)word_23B40[a5];
    if ( (v9 & 0x8000u) != 0LL )
      return result;
    if ( a5 )
    {
      if ( (__int16)v9 <= 7 )
        goto LABEL_7;
    }
    else if ( (__int16)v9 <= 7 )
    {
LABEL_7:
      switch ( v9 )
      {
        case 2LL:
          dword = (unsigned int)get_dword();
          if ( !(unsigned __int8)get_data_value() || !dword )
            goto LABEL_10;
          if ( a4[6] == -1 )
          {
            v26 = *(_DWORD *)(*a4 + 404LL);
            named_type_tid = get_named_type_tid();
            if ( named_type_tid == -1 )
            {
              getinf();
              v33 = 0;
              v34 = 0;
              if ( v26 != 117 )
                sub_CCD0(&v33);
              v35 = 0;
              v36 = 0;
              sub_CCD0(&v35);
              parse_decls();
              named_type_tid = get_named_type_tid();
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree();
              }
              if ( v33 )
              {
                *(_QWORD *)&v34 = 0;
                qfree();
              }
            }
            a4[6] = named_type_tid;
          }
LABEL_58:
          create_data();
          goto LABEL_10;
        case 3LL:
          if ( a4[7] == -1 )
          {
            v23 = get_named_type_tid();
            if ( v23 == -1 )
            {
              v33 = 0;
              v35 = 0;
              v34 = 0;
              v36 = 0;
              sub_CCD0(&v33);
              sub_CCD0(&v35);
              parse_decls();
              v24 = get_named_type_tid();
              v23 = v24;
              if ( v35 )
              {
                v29 = v24;
                *(_QWORD *)&v36 = 0;
                qfree();
                v23 = v29;
              }
              if ( v33 )
              {
                v30 = v23;
                *(_QWORD *)&v34 = 0;
                qfree();
                v23 = v30;
              }
            }
            a4[7] = v23;
          }
          goto LABEL_58;
        case 4LL:
          if ( (unsigned __int8)is_loaded() )
          {
            v13 = v5;
            v14 = 0;
            do
            {
              v14 += 7;
              byte = get_byte();
              v16 = v13++;
            }
            while ( byte < 0 && v14 <= 0x3Fu );
            if ( v14 <= 0x40u )
            {
              v17 = v5 + (unsigned __int8)(v16 - v5 + 1);
              if ( (unsigned __int8)is_loaded() )
              {
                v18 = v17;
                v19 = 0;
                do
                {
                  v19 += 7;
                  ++v18;
                }
                while ( (get_byte() & 0x80u) != 0LL && v19 <= 0x3Fu );
                if ( v19 <= 0x40u )
                  goto LABEL_56;
              }
            }
          }
          goto LABEL_10;
        case 5LL:
          if ( a4[4] == -1 )
          {
            v28 = get_named_type_tid();
            if ( v28 == -1 )
            {
              v36 = 0;
              v35 = 0;
              sub_CCD0(&v35);
              parse_decls();
              v28 = get_named_type_tid();
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree();
              }
            }
            a4[4] = v28;
          }
          if ( a4[3] == -1 )
          {
            v22 = get_named_type_tid();
            if ( v22 == -1 )
            {
              v36 = 0;
              v35 = 0;
              sub_CCD0(&v35);
              parse_decls();
              v22 = get_named_type_tid();
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree();
              }
            }
            a4[3] = v22;
          }
          v11 = v5;
          break;
        case 6LL:
LABEL_56:
          create_data();
          goto LABEL_10;
        case 7LL:
          v20 = *(_QWORD *)(a1 + 408);
          create_data();
          v37 = 9;
          v35 = -1;
          v36 = v20;
          op_offset_ex();
          create_xrefs_from();
          goto LABEL_10;
        default:
          goto LABEL_8;
      }
      while ( 1 )
      {
        v12 = get_byte();
        if ( v12 > 0xEFu )
          break;
        if ( v11 != -1 )
        {
          do
          {
            v5 += 2LL;
            v12 = get_byte();
          }
          while ( v12 <= 0xEFu );
          break;
        }
LABEL_38:
        v11 = v5;
        v5 += 2LL;
      }
      if ( v11 < v5 )
        create_data();
      while ( 1 )
      {
        create_data();
        op_enum();
        if ( v12 == 0xFF )
          goto LABEL_10;
        ++v5;
        v12 = get_byte();
        if ( v12 <= 0xEFu )
          goto LABEL_38;
      }
    }
LABEL_28:
    if ( (_WORD)v9 != 256 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( v8 <= 0x69 )
  {
    v10 = word_23B30[a5];
    v9 = (unsigned int)v10;
    if ( v10 < 0 )
      return result;
    if ( a5 == 2 )
    {
      if ( (__int16)v10 <= 7 )
        goto LABEL_7;
      goto LABEL_28;
    }
    goto LABEL_22;
  }
  if ( v8 <= 0x6C )
  {
    v10 = word_23B20[a5];
    v9 = (unsigned int)v10;
    if ( v10 < 0 )
      return result;
    goto LABEL_22;
  }
  if ( v8 <= 0x6E )
  {
    v10 = word_23B10[a5];
    v9 = (unsigned int)v10;
    if ( v10 < 0 )
      return result;
    goto LABEL_22;
  }
  switch ( v8 )
  {
    case 'o':
      v10 = word_23B00[a5];
      v9 = (unsigned int)v10;
      if ( v10 < 0 )
        return result;
      goto LABEL_22;
    case 'p':
      v10 = word_23AF0[a5];
      v9 = (unsigned int)v10;
      if ( v10 < 0 )
        return result;
      goto LABEL_22;
    case 'q':
      v10 = word_23AE0[a5];
      v9 = (unsigned int)v10;
      if ( v10 < 0 )
        return result;
      goto LABEL_22;
  }
  if ( v8 <= 0x73 )
  {
    v10 = word_23AD0[a5];
    v9 = (unsigned int)v10;
    if ( v10 < 0 )
      return result;
LABEL_22:
    if ( v10 != 256 )
    {
      if ( (__int16)v9 <= 7 )
        goto LABEL_7;
LABEL_10:
      set_cmt();
      return 1;
    }
LABEL_8:
    get_dword();
    get_dword();
    if ( a4[5] == -1 )
    {
      v21 = get_named_type_tid();
      if ( v21 == -1 )
      {
        v36 = 0;
        v35 = 0;
        sub_CCD0(&v35);
        parse_decls();
        v25 = get_named_type_tid();
        v21 = v25;
        if ( v35 )
        {
          v31 = v25;
          *(_QWORD *)&v36 = 0;
          qfree();
          v21 = v31;
        }
      }
      a4[5] = v21;
    }
    create_data();
    goto LABEL_10;
  }
  v10 = word_23B50[a5];
  v9 = (unsigned int)v10;
  if ( v10 >= 0 )
    goto LABEL_22;
  return result;
}
