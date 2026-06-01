unsigned __int64 __fastcall venum_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  _DWORD *v8; // r13
  __int64 *v9; // rdi
  __int64 tinfo_property; // rax
  __int64 *v11; // rbx
  char *v12; // r13
  _BYTE *v13; // rsi
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __m128i *v18; // rsi
  __m128i si128; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v25; // [rsp+20h] [rbp-38h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a5 )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v23 = 0;
    v8 = (_DWORD *)(v6 + 8 * a5 - 8);
    LODWORD(v6) = *v8;
    v25 = 257;
    v24[1] = (unsigned int)v6;
    v24[0] = get_idati(a1);
    create_tinfo(&v23, 61, 189, v24);
    v9 = *a2;
    if ( (v23 & 0x100) != 0 )
    {
      get_tinfo_pdata(v9, v23, 0);
      v9 = *a2;
    }
    sub_1ABB70(a1 + 184, (__int64)(v9 + 3), (__int64)v8);
    tinfo_property = get_tinfo_property(v23, 291);
    v11 = *a2;
    v12 = "Y";
    if ( !tinfo_property )
      v12 = "N";
    v13 = (_BYTE *)v11[6];
    if ( (unsigned __int64)v11[8] <= 1 )
    {
      v20 = qvector_reserve(v11 + 6, v13, 2, 1);
      v11[6] = v20;
      v13 = (_BYTE *)v20;
    }
    v11[7] = 2;
    *v13 = *v12;
    *(_BYTE *)(v11[6] + 1) = 0;
    if ( v23 > 0xFF )
      get_tinfo_pdata(*a2 + 9, v23, 5);
    clear_tinfo_t(&v23);
  }
  else
  {
    v15 = *a2;
    v16 = **a2;
    if ( (unsigned __int64)(*a2)[2] <= 5 )
    {
      v22 = qvector_reserve(*a2, v16, 6, 1);
      *v15 = v22;
      v16 = v22;
    }
    v15[1] = 6;
    *(_DWORD *)v16 = 1464159804;
    *(_BYTE *)(v16 + 4) = 62;
    *(_BYTE *)(*v15 + 5) = 0;
    v17 = *a2;
    v18 = (__m128i *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] <= 0x11 )
    {
      v21 = qvector_reserve(v17 + 9, v18, 18, 1);
      v17[9] = v21;
      v18 = (__m128i *)v21;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC570);
    v17[10] = 18;
    v18[1].m128i_i8[0] = 109;
    *v18 = si128;
    *(_BYTE *)(v17[9] + 17) = 0;
  }
  return v26 - __readfsqword(0x28u);
}
