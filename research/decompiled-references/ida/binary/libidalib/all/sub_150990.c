__int64 __fastcall sub_150990(__int64 a1, __int64 *a2, void (__fastcall ***a3)(_QWORD, __int64, int *))
{
  void (__fastcall **v6)(_QWORD, __int64, int *); // rax
  char v7; // r12
  unsigned int v8; // ebx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  int type_ordinal; // ecx
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  size_t v17; // r8
  const void *v18; // r9
  void *v19; // rdi
  __int16 v20; // ax
  char tinfo; // al
  __int64 v22; // rdi
  __int16 v23; // r12
  __int64 v24; // r12
  _QWORD *v25; // r15
  const void *v26; // r8
  void *v27; // rdi
  const void *v28; // r8
  void *v29; // rdi
  __int64 v30; // rsi
  __m128i si128; // xmm0
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-D8h]
  const void *v37; // [rsp+0h] [rbp-D8h]
  const void *v38; // [rsp+0h] [rbp-D8h]
  char v39; // [rsp+8h] [rbp-D0h]
  const void *v40; // [rsp+8h] [rbp-D0h]
  int v41; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v42; // [rsp+18h] [rbp-C0h] BYREF
  void *dest; // [rsp+20h] [rbp-B8h]
  __int128 v44; // [rsp+28h] [rbp-B0h]
  void *v45; // [rsp+40h] [rbp-98h]
  __int128 v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+60h] [rbp-78h] BYREF
  __int128 v48; // [rsp+68h] [rbp-70h]
  __int128 v49; // [rsp+78h] [rbp-60h]
  __int64 v50; // [rsp+88h] [rbp-50h]
  int v51; // [rsp+90h] [rbp-48h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  get_idati();
  v42 = 0;
  v41 = 0;
  dest = nullptr;
  v45 = nullptr;
  v44 = 0;
  v6 = *a3;
  v46 = 0;
  (*v6)(a3, 100, &v41);
  v7 = v41;
  if ( v41 <= 1 )
  {
    if ( v41 < 0 )
      goto LABEL_14;
    v15 = a1 + 8;
    if ( v41 == 1 )
      v15 = a1 + 64;
    v16 = *(_QWORD *)(v15 + 8);
    if ( !v16 || (v17 = v16 - 1, v16 == 1) )
    {
      *(_QWORD *)&v44 = 0;
    }
    else
    {
      v18 = *(const void **)v15;
      v19 = dest;
      if ( *((_QWORD *)&v44 + 1) < v16 )
      {
        v40 = *(const void **)v15;
        dest = (void *)qvector_reserve();
        v18 = v40;
        v19 = dest;
        v17 = v16 - 1;
      }
      *(_QWORD *)&v44 = v16;
      memmove(v19, v18, v17);
      *((char *)dest + v16 - 1) = 0;
    }
    v20 = *(_WORD *)(a1 + 56) & 0xFFF7;
    if ( *(_BYTE *)(a1 + 296) == 29 )
      v20 = *(_WORD *)(a1 + 56) | 8;
    *(_WORD *)(a1 + 56) = v20;
    v39 = v7 & 1;
    if ( (v7 & 1) != 0 )
    {
      if ( !(unsigned __int8)sub_14F9E0((__int64)&v42, a1 + 64, a2, a1 + 136) )
        goto LABEL_4;
LABEL_50:
      if ( (*(_QWORD *)(a1 + 136) <= 0xFFu || !(unsigned int)get_tinfo_pdata()) && v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree();
        v45 = nullptr;
        *((_QWORD *)&v46 + 1) = 0;
      }
      goto LABEL_14;
    }
    v48 = 0;
    v47 = 0;
    v50 = 0;
    v51 = 1;
    v49 = 0;
    if ( (unsigned __int8)get_tinfo_details() && (sub_14E740(a1 + 8, (__int64)&v47), (tinfo = create_tinfo()) != 0) )
    {
      v22 = v47;
      if ( !v47 )
      {
LABEL_43:
        v23 = *(_WORD *)(a1 + 32) & 1;
        if ( (_BYTE)v23 != ((get_tinfo_property() & 0x400) != 0) )
          set_tinfo_property4();
        if ( v23 )
        {
          if ( *(__int64 *)(a1 + 40) < 0 )
          {
            v30 = *a2;
            if ( (unsigned __int64)a2[2] <= 0x21 )
            {
              v34 = qvector_reserve();
              *a2 = v34;
              v30 = v34;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_1D3950);
            a2[1] = 34;
            *(_BYTE *)(v30 + 32) = 101;
            *(__m128i *)v30 = si128;
            *(__m128i *)(v30 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3960);
            *(_BYTE *)(*a2 + 33) = 0;
            goto LABEL_4;
          }
          if ( (unsigned int)set_tinfo_property4() )
            goto LABEL_65;
        }
        goto LABEL_50;
      }
      v39 = tinfo;
      v36 = v48;
      if ( !(_QWORD)v48 )
      {
        qfree();
        goto LABEL_43;
      }
    }
    else
    {
      sub_94440(a2);
      v22 = v47;
      if ( !v47 )
        goto LABEL_4;
      v36 = v48;
      if ( !(_QWORD)v48 )
      {
        qfree();
        goto LABEL_4;
      }
    }
    v24 = 0;
    do
    {
      v25 = (_QWORD *)(v22 + 144 * v24);
      clear_tinfo_t();
      if ( v25[5] )
      {
        v25[6] = 0;
        qfree();
      }
      if ( v25[2] )
      {
        v25[3] = 0;
        qfree();
      }
      v22 = v47;
      ++v24;
    }
    while ( v36 != v24 );
    *(_QWORD *)&v48 = 0;
    qfree();
    if ( !v39 )
      goto LABEL_4;
    goto LABEL_43;
  }
  if ( v41 == 2 )
  {
    if ( !*(_BYTE *)(a1 + 136) )
    {
LABEL_4:
      v8 = 0;
      goto LABEL_5;
    }
    copy_tinfo_t();
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 > 1 )
    {
      v28 = *(const void **)(a1 + 144);
      v29 = dest;
      if ( *((_QWORD *)&v44 + 1) < v10 )
      {
        v38 = *(const void **)(a1 + 144);
        dest = (void *)qvector_reserve();
        v28 = v38;
        v29 = dest;
      }
      *(_QWORD *)&v44 = v10;
      memmove(v29, v28, v10 - 1);
      *((char *)dest + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v44 = 0;
    }
    v11 = *(_QWORD *)(a1 + 176);
    if ( v11 > 1 )
    {
      v26 = *(const void **)(a1 + 168);
      v27 = v45;
      if ( *((_QWORD *)&v46 + 1) < v11 )
      {
        v37 = *(const void **)(a1 + 168);
        v45 = (void *)qvector_reserve();
        v26 = v37;
        v27 = v45;
      }
      *(_QWORD *)&v46 = v11;
      memmove(v27, v26, v11 - 1);
      *((char *)v45 + v11 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v46 = 0;
    }
  }
LABEL_14:
  type_ordinal = get_type_ordinal();
  if ( type_ordinal && type_ordinal != *(_DWORD *)(a1 + 312) )
  {
    sub_94440(a2);
    goto LABEL_4;
  }
  if ( (unsigned int)save_tinfo() )
    goto LABEL_65;
  set_tinfo_property4();
  v13 = *(_DWORD **)(a1 + 272);
  v14 = &v13[*(_QWORD *)(a1 + 280)];
  if ( v13 == v14 )
    goto LABEL_66;
  while ( *v13 )
  {
    if ( v14 == ++v13 )
      goto LABEL_66;
  }
  if ( v14 == v13 )
LABEL_66:
    set_type_choosable();
  if ( !v41 )
  {
    if ( (*(_QWORD *)(a1 + 48) & (*(_QWORD *)(a1 + 48) - 1LL)) != 0 )
    {
      v32 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x1E )
      {
        v35 = qvector_reserve();
        *a2 = v35;
        v32 = v35;
      }
      v33 = _mm_load_si128((const __m128i *)&xmmword_1D3970);
      a2[1] = 31;
      *(__m128i *)v32 = v33;
      *(__m128i *)(v32 + 14) = _mm_load_si128((const __m128i *)&xmmword_1D3980);
      *(_BYTE *)(*a2 + 30) = 0;
      goto LABEL_4;
    }
    if ( (unsigned int)set_tinfo_property4() )
    {
LABEL_65:
      tinfo_errstr();
      sub_94440(a2);
      goto LABEL_4;
    }
  }
  v8 = 1;
LABEL_5:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v8;
}

