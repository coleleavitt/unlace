__int64 __fastcall sub_150A00(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int ordinal_limit; // r13d
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // rdi
  const char *v20; // rsi
  unsigned int v21; // r12d
  int v22; // r13d
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r13
  _QWORD *v28; // r15
  __int16 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rax
  bool v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __m128i si128; // xmm0
  __int64 v37; // rax
  __int64 v38; // [rsp+10h] [rbp-98h]
  char v39; // [rsp+10h] [rbp-98h]
  char tinfo; // [rsp+1Fh] [rbp-89h]
  __int64 v41; // [rsp+28h] [rbp-80h] BYREF
  __int64 v42; // [rsp+30h] [rbp-78h] BYREF
  __int128 v43; // [rsp+38h] [rbp-70h]
  __int128 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+58h] [rbp-50h]
  __int16 v46; // [rsp+60h] [rbp-48h]
  char v47; // [rsp+62h] [rbp-46h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  get_idati();
  v4 = *(_DWORD *)(a1 + 284);
  if ( v4 <= 1 )
  {
    if ( v4 < 0 )
      return 1;
    if ( v4 == 1 )
    {
      if ( !(unsigned int)get_type_ordinal() )
      {
        v41 = 0;
        if ( (unsigned __int8)sub_14F210((__int64)&v41, a1 + 56, a2, 0) )
          goto LABEL_16;
        goto LABEL_25;
      }
    }
    else if ( !(unsigned int)get_type_ordinal() )
    {
      v41 = 0;
      v42 = 0;
      v45 = 0;
      v46 = 1;
      v47 = 0;
      v43 = 0;
      v44 = 0;
      sub_14DF80(a1 + 8, (__int64)&v42);
      tinfo = create_tinfo();
      if ( tinfo )
      {
        v19 = v42;
        if ( v42 )
        {
          v38 = v43;
          if ( (_QWORD)v43 )
          {
LABEL_48:
            v27 = 0;
            do
            {
              v28 = (_QWORD *)(v19 + (v27 << 7));
              clear_tinfo_t();
              if ( v28[5] )
              {
                v28[6] = 0;
                qfree();
              }
              if ( v28[2] )
              {
                v28[3] = 0;
                qfree();
              }
              v19 = v42;
              ++v27;
            }
            while ( v38 != v27 );
            *(_QWORD *)&v43 = 0;
            qfree();
            if ( !tinfo )
              goto LABEL_25;
            goto LABEL_55;
          }
          qfree();
        }
LABEL_55:
        if ( (*(_BYTE *)(a1 + 52) & 8) == 0 )
        {
          v29 = *(_WORD *)(a1 + 32) & 1;
          v39 = *(_WORD *)(a1 + 32) & 1;
          if ( v39 != ((get_tinfo_property() & 0x400) != 0) )
            set_tinfo_property4();
          if ( v29 )
          {
            if ( *(__int64 *)(a1 + 40) < 0 )
            {
              v35 = *a2;
              if ( (unsigned __int64)a2[2] <= 0x21 )
              {
                v37 = qvector_reserve();
                *a2 = v37;
                v35 = v37;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_1D2940);
              a2[1] = 34;
              *(_BYTE *)(v35 + 32) = 101;
              *(__m128i *)v35 = si128;
              *(__m128i *)(v35 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2950);
              *(_BYTE *)(*a2 + 33) = 0;
              goto LABEL_25;
            }
            if ( (unsigned int)set_tinfo_property4() )
              goto LABEL_68;
          }
          v32 = (*(_BYTE *)(a1 + 52) & 4) != 0;
          if ( v32 != ((get_tinfo_property() & 0x800) != 0) )
          {
            if ( (unsigned int)set_tinfo_property4() )
            {
LABEL_68:
              tinfo_errstr();
              sub_94360(a2);
              goto LABEL_25;
            }
          }
        }
LABEL_16:
        v13 = alloc_type_ordinals();
        if ( !v13 )
        {
          v17 = *a2;
          if ( (unsigned __int64)a2[2] <= 0x20 )
          {
            v33 = qvector_reserve();
            *a2 = v33;
            v17 = v33;
          }
          v18 = _mm_load_si128((const __m128i *)&xmmword_1D2980);
          a2[1] = 33;
          *(__m128i *)v17 = v18;
          *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2990);
          *(_BYTE *)(*a2 + 32) = 0;
          goto LABEL_25;
        }
        if ( !(unsigned int)save_tinfo() )
        {
          v14 = *(_QWORD *)(a1 + 264);
          v15 = *(_QWORD *)(a1 + 256);
          if ( *(_QWORD *)(a1 + 272) < (unsigned __int64)(v14 + 1) )
          {
            v34 = qvector_reserve();
            *(_QWORD *)(a1 + 256) = v34;
            v15 = v34;
            v14 = *(_QWORD *)(a1 + 264);
          }
          *(_DWORD *)(v15 + 4 * v14) = v13;
          ++*(_QWORD *)(a1 + 264);
          *(_DWORD *)(a1 + 280) = v13;
          set_type_choosable();
          clear_tinfo_t();
          return 1;
        }
        goto LABEL_68;
      }
      sub_94360(a2);
      v19 = v42;
      if ( v42 )
      {
        v38 = v43;
        if ( !(_QWORD)v43 )
        {
          qfree();
          goto LABEL_25;
        }
        goto LABEL_48;
      }
LABEL_25:
      clear_tinfo_t();
      return 0;
    }
    sub_94360(a2);
    return 0;
  }
  if ( v4 != 2 )
    return 1;
  if ( *(_QWORD *)(a1 + 192) <= 1u )
    return 0;
  get_idati();
  ordinal_limit = get_ordinal_limit();
  v6 = copy_named_type();
  if ( v6 )
  {
    v7 = 1;
    sub_8F660((__int64)"Successfully imported type \"%s\"\n", *(const char **)(a1 + 184));
    *(_DWORD *)(a1 + 280) = v6;
    if ( ordinal_limit )
      v7 = ordinal_limit;
    v8 = get_ordinal_limit();
    v9 = v8;
    if ( v7 < v8 )
    {
      v10 = 0;
      v11 = 0;
      v12 = v8 - ordinal_limit;
      v43 = 0;
      v42 = 0;
      if ( v8 != ordinal_limit )
      {
        v42 = qvector_reserve();
        v12 = v43;
        v11 = v42;
        v10 = *((_QWORD *)&v43 + 1);
      }
      do
      {
        if ( v10 < v12 + 1 )
        {
          v42 = qvector_reserve();
          v12 = v43;
          v11 = v42;
        }
        *(_DWORD *)(v11 + 4 * v12) = v7++;
        v11 = v42;
        v10 = *((_QWORD *)&v43 + 1);
        v12 = v43 + 1;
        *(_QWORD *)&v43 = v43 + 1;
      }
      while ( v9 != v7 );
      v30 = *(_QWORD *)(a1 + 256);
      v31 = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(a1 + 256) = v42;
      *(_QWORD *)(a1 + 264) = v12;
      *(_QWORD *)(a1 + 272) = v10;
      v42 = v30;
      *((_QWORD *)&v43 + 1) = v31;
      if ( v30 )
      {
        *(_QWORD *)&v43 = 0;
        qfree();
      }
    }
    return 1;
  }
  v20 = s1;
  v21 = get_ordinal_limit() - 1;
  if ( v21 > 0xFFFFFFFD )
    v21 = v6;
  if ( *(_QWORD *)(a1 + 192) )
    v20 = *(const char **)(a1 + 184);
  if ( !(unsigned int)parse_decls() )
  {
    v22 = get_ordinal_limit();
    if ( (unsigned int)(v22 - 1) <= 0xFFFFFFFD )
    {
      v23 = v21 + 1;
      if ( v22 - 1 >= v23 )
      {
        do
        {
          v24 = *(_QWORD *)(a1 + 264);
          v25 = *(_QWORD *)(a1 + 256);
          if ( *(_QWORD *)(a1 + 272) < (unsigned __int64)(v24 + 1) )
          {
            v26 = qvector_reserve();
            *(_QWORD *)(a1 + 256) = v26;
            v25 = v26;
            v24 = *(_QWORD *)(a1 + 264);
          }
          *(_DWORD *)(v25 + 4 * v24) = v23;
          ++*(_QWORD *)(a1 + 264);
          *(_DWORD *)(a1 + 280) = v23++;
          set_type_choosable();
        }
        while ( v23 != v22 );
      }
    }
    return 1;
  }
  sub_92120((__int64)"Bad declaration. See the message window for details.", v20);
  return 0;
}

