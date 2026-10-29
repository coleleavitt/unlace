void __fastcall sub_9D0F50(__int64 *a1, _WORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  __m128i v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
  {
    v5 = sub_BD7B00(a2);
    if ( (*(_WORD *)v5 & 0x1FF) == 4 && *(_BYTE *)(v5 + 2) >> 3 == 4 )
    {
      v7 = *(_QWORD *)(v5 + 16);
      if ( (*(_WORD *)v7 & 0x1FF) == 0x7B )
      {
        if ( sub_9C8E60(*(_QWORD *)(v5 + 16), (__int64)a2, v3, v4, v6) )
          v8 = *(_QWORD *)(v7 + 16);
        else
          v8 = *(_QWORD *)(v7 + 24);
        v9 = sub_BD7DA0(v8);
        if ( (*(_WORD *)v9 & 0x1FF) == 0x47 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          if ( v10 )
          {
            if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 40 <= 6 )
            {
              v15 = nullptr;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
              v17.m128i_i32[0] = sub_AD6A60(v5);
              v11 = j__strlen("AddressofArraySubscriptUnderUPC");
              v12 = sub_9D0C50((__int64)&v15, "AddressofArraySubscriptUnderUPC", v11);
              v17.m128i_i64[1] = v5;
              v13 = _mm_load_si128(&v17);
              v14 = _mm_load_si128(&v18);
              *(_QWORD *)(v12 + 32) = v19;
              *(__m128i *)v12 = v13;
              *(__m128i *)(v12 + 16) = v14;
              sub_9C8030(*a1, (__int64 *)&v15);
              sub_9C9380(&v15);
            }
          }
        }
      }
    }
  }
}

