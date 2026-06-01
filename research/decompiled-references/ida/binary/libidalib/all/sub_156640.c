unsigned __int64 __fastcall sub_156640(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 tinfo_property; // rax
  __int64 *v7; // rbx
  char *v8; // r13
  _BYTE *v9; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __m128i *v14; // rsi
  __m128i si128; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a5 )
  {
    get_idati();
    create_tinfo();
    sub_156530();
    tinfo_property = get_tinfo_property();
    v7 = *a2;
    v8 = "Y";
    if ( !tinfo_property )
      v8 = (char *)"N";
    v9 = (_BYTE *)v7[6];
    if ( (unsigned __int64)v7[8] <= 1 )
    {
      v16 = qvector_reserve();
      v7[6] = v16;
      v9 = (_BYTE *)v16;
    }
    v7[7] = 2;
    *v9 = *v8;
    *(_BYTE *)(v7[6] + 1) = 0;
    clear_tinfo_t();
  }
  else
  {
    v11 = *a2;
    v12 = **a2;
    if ( (unsigned __int64)(*a2)[2] <= 5 )
    {
      v18 = qvector_reserve();
      *v11 = v18;
      v12 = v18;
    }
    v11[1] = 6;
    *(_DWORD *)v12 = 1464159804;
    *(_BYTE *)(v12 + 4) = 62;
    *(_BYTE *)(*v11 + 5) = 0;
    v13 = *a2;
    v14 = (__m128i *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] <= 0x11 )
    {
      v17 = qvector_reserve();
      v13[9] = v17;
      v14 = (__m128i *)v17;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D39C0);
    v13[10] = 18;
    v14[1].m128i_i8[0] = 109;
    *v14 = si128;
    *(_BYTE *)(v13[9] + 17) = 0;
  }
  return v19 - __readfsqword(0x28u);
}

