__int64 __fastcall sub_FE10(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  struct _Unwind_Exception *v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // r9
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // r14
  __int64 v17; // r9
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __m128i v20; // xmm0
  _DWORD *v21; // rax
  __int64 v22; // r14
  __m128i v23; // xmm0
  __int64 v25; // rax
  __m128i si128; // xmm0
  __int64 v27; // r14
  __int64 v28; // r9
  unsigned __int64 v29; // r15
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __m128i *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // [rsp+0h] [rbp-E0h]
  __int64 v35; // [rsp+0h] [rbp-E0h]
  __int64 v36; // [rsp+0h] [rbp-E0h]
  __m128i v38; // [rsp+10h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+28h] [rbp-B8h]
  __int64 v40; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+38h] [rbp-A8h]
  __int64 v42; // [rsp+50h] [rbp-90h]
  __m128i v43; // [rsp+58h] [rbp-88h] BYREF
  __int64 idati; // [rsp+70h] [rbp-70h] BYREF
  __m128i v45; // [rsp+78h] [rbp-68h]
  _DWORD *v46; // [rsp+88h] [rbp-58h]
  __int128 v47; // [rsp+90h] [rbp-50h]
  int v48; // [rsp+A0h] [rbp-40h]
  bool v49; // [rsp+A4h] [rbp-3Ch]
  unsigned __int64 v50; // [rsp+A8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( a2 > 0x1Cu )
    goto LABEL_60;
  v39 = 0;
  v5 = (struct _Unwind_Exception *)off_27700[2 * a2];
  if ( !a4 )
  {
    if ( v5 )
    {
      v45.m128i_i64[0] = (__int64)off_27700[2 * a2];
      v45.m128i_i16[4] = 256;
      idati = get_idati();
      if ( (unsigned __int8)create_tinfo() )
      {
        if ( !get_tinfo_property() )
        {
          v38.m128i_i64[0] = get_tinfo_tid();
          if ( v38.m128i_i64[0] != -1 )
          {
            if ( !a3 )
              goto LABEL_36;
            goto LABEL_35;
          }
        }
      }
    }
  }
  v6 = *(_BYTE *)(a1 + 565) == 8;
  v40 = 0;
  v38.m128i_i64[0] = (__int64)&v40;
  v41 = 0;
  if ( v6 )
  {
    v25 = qvector_reserve();
    v40 = v25;
    *(_QWORD *)&v41 = 42;
    *(__m128i *)v25 = _mm_load_si128((const __m128i *)&xmmword_23E20);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23E30);
    v27 = v41;
    *(_BYTE *)(v25 + 41) = 0;
    *(__m128i *)(v25 + 16) = si128;
    *(__m128i *)(v25 + 25) = _mm_load_si128((const __m128i *)&xmmword_23E40);
    if ( v27 )
    {
      v28 = v27 + 32;
      v29 = v27 + 33;
      v30 = v40;
      --v27;
      if ( *((_QWORD *)&v41 + 1) >= v29 )
      {
LABEL_41:
        *(_QWORD *)&v41 = v29;
        v31 = _mm_load_si128((const __m128i *)&xmmword_23E50);
        *(_BYTE *)(v30 + v28) = 0;
        v32 = (__m128i *)(v27 + v40);
        *v32 = v31;
        v33 = _mm_load_si128((const __m128i *)&xmmword_23E60);
        v32[2].m128i_i8[0] = 10;
        v32[1] = v33;
        goto LABEL_11;
      }
    }
    else
    {
      v30 = v40;
      v29 = 34;
      v28 = 33;
      if ( *((_QWORD *)&v41 + 1) >= 0x22u )
        goto LABEL_41;
    }
    v36 = v28;
    v40 = qvector_reserve();
    v28 = v36;
    v30 = v40;
    goto LABEL_41;
  }
  v7 = qvector_reserve();
  v40 = v7;
  *(_QWORD *)&v41 = 42;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_23E20);
  v8 = _mm_load_si128((const __m128i *)&xmmword_23E70);
  v9 = v41;
  *(_BYTE *)(v7 + 41) = 0;
  *(__m128i *)(v7 + 16) = v8;
  *(__m128i *)(v7 + 25) = _mm_load_si128((const __m128i *)&xmmword_23E80);
  if ( v9 )
  {
    v12 = v9 + 32;
    v11 = v9 + 33;
    v10 = v40;
    --v9;
    if ( *((_QWORD *)&v41 + 1) >= v11 )
      goto LABEL_8;
  }
  else
  {
    v10 = v40;
    v11 = 34;
    v12 = 33;
    if ( *((_QWORD *)&v41 + 1) >= 0x22u )
      goto LABEL_8;
  }
  v34 = v12;
  v40 = qvector_reserve();
  v12 = v34;
  v10 = v40;
LABEL_8:
  *(_QWORD *)&v41 = v11;
  v13 = _mm_load_si128((const __m128i *)&xmmword_23E50);
  *(_BYTE *)(v10 + v12) = 0;
  v14 = (__m128i *)(v9 + v40);
  *v14 = v13;
  v15 = _mm_load_si128((const __m128i *)&xmmword_23E90);
  v16 = v41;
  v14[2].m128i_i8[0] = 10;
  v14[1] = v15;
  if ( !v16 )
  {
    v19 = v40;
    v18 = 17;
    v17 = 16;
    if ( *((_QWORD *)&v41 + 1) >= 0x11u )
      goto LABEL_10;
LABEL_15:
    v35 = v17;
    v40 = qvector_reserve();
    v17 = v35;
    v19 = v40;
    goto LABEL_10;
  }
  v17 = v16 + 15;
  v18 = v16 + 16;
  v19 = v40;
  --v16;
  if ( *((_QWORD *)&v41 + 1) < v18 )
    goto LABEL_15;
LABEL_10:
  v20 = _mm_load_si128((const __m128i *)&xmmword_23EA0);
  *(_QWORD *)&v41 = v18;
  *(_BYTE *)(v19 + v17) = 0;
  *(__m128i *)(v40 + v16) = v20;
LABEL_11:
  switch ( a2 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
      goto LABEL_20;
    case 3u:
      sub_F6F0();
      goto LABEL_20;
    case 4u:
      sub_F6F0();
      sub_F880((__int64 *)v38.m128i_i64[0]);
      goto LABEL_21;
    case 5u:
    case 6u:
      sub_F6F0();
      sub_F5F0();
      sub_F880((__int64 *)v38.m128i_i64[0]);
      goto LABEL_21;
    case 0xCu:
      sub_FB60(a1, (__int64 *)v38.m128i_i64[0]);
      goto LABEL_21;
    case 0x13u:
      if ( get_named_type_tid() == -1 )
      {
        v45 = 0;
        idati = 0;
        sub_CCD0(&idati);
        parse_decls();
        get_named_type_tid();
        if ( idati )
        {
          v45.m128i_i64[0] = 0;
          qfree();
        }
      }
LABEL_20:
      sub_F880((__int64 *)v38.m128i_i64[0]);
LABEL_21:
      idati = 0;
      v46 = nullptr;
      v45 = 0;
      v47 = 0;
      v21 = (_DWORD *)qvector_reserve();
      v46 = v21;
      *(_QWORD *)&v47 = 8;
      *v21 = 1819240239;
      *(_DWORD *)((char *)v21 + 3) = 1735287148;
      *((_BYTE *)v46 + 7) = 0;
      v48 = 0;
      get_std_dirtree();
      v42 = 0;
      v43 = 0;
      dirtree_getcwd();
      v22 = v42;
      v42 = 0;
      v23 = _mm_loadu_si128(&v43);
      v43 = 0;
      if ( idati )
      {
        v38 = v23;
        v45.m128i_i64[0] = 0;
        qfree();
        idati = v22;
        v45 = _mm_load_si128(&v38);
        if ( v42 )
        {
          v43.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        idati = v22;
        v45 = v23;
      }
      v49 = (unsigned __int8)dirtree_mkdir() == 0;
      dirtree_chdir();
      parse_decls();
      get_type_ordinal();
      set_type_choosable();
      v38.m128i_i64[0] = get_named_type_tid();
      get_std_dirtree();
      dirtree_chdir();
      if ( v49 )
        dirtree_rmdir();
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree();
      }
      if ( idati )
      {
        v45.m128i_i64[0] = 0;
        qfree();
      }
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree();
      }
      if ( v38.m128i_i64[0] == -1 )
      {
        if ( under_debugger )
          goto LABEL_62;
        interr();
LABEL_60:
        if ( !under_debugger )
          interr();
LABEL_62:
        BUG();
      }
      if ( a3 && v5 )
      {
LABEL_35:
        v45.m128i_i16[4] = 256;
        v45.m128i_i64[0] = (__int64)v5;
        idati = get_idati();
        create_tinfo();
      }
LABEL_36:
      clear_tinfo_t();
      return v38.m128i_i64[0];
    default:
      if ( !under_debugger )
      {
        interr();
        if ( idati )
        {
          v45.m128i_i64[0] = 0;
          qfree();
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree();
        }
        clear_tinfo_t();
        _Unwind_Resume(v5);
      }
      goto LABEL_62;
  }
}
