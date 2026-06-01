void __fastcall sub_1FA2530(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // esi
  __m128i si128; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r14
  int v17; // esi
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rbp
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // r11d
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // [rsp+10h] [rbp-6B8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-6A8h]
  _BYTE *v35; // [rsp+28h] [rbp-6A0h]
  __int64 v36; // [rsp+30h] [rbp-698h]
  __int64 v37; // [rsp+38h] [rbp-690h]
  int v38; // [rsp+4Ch] [rbp-67Ch] BYREF
  __m128i v39; // [rsp+50h] [rbp-678h] BYREF
  int *v40; // [rsp+60h] [rbp-668h]
  __int64 v41; // [rsp+68h] [rbp-660h]
  void *ptr; // [rsp+70h] [rbp-658h] BYREF
  __int64 v43; // [rsp+78h] [rbp-650h]
  _BYTE v44[512]; // [rsp+80h] [rbp-648h] BYREF
  __int64 v45; // [rsp+280h] [rbp-448h]
  __int64 v46; // [rsp+288h] [rbp-440h] BYREF
  unsigned int v47; // [rsp+290h] [rbp-438h]
  __int64 v48; // [rsp+688h] [rbp-40h] BYREF

  v3 = a2;
  v45 = 1;
  v5 = &v46;
  do
  {
    *v5 = -4096;
    v5 += 2;
  }
  while ( v5 != &v48 );
  v33.m128_u64[0] = (unsigned __int64)&ptr;
  ptr = v44;
  v43 = 0x4000000000LL;
  v6 = *(_QWORD *)(a2 + 144);
  v7 = *(unsigned __int8 *)(v6 + 25);
  LOBYTE(v6) = *(_BYTE *)(v6 + 24);
  v33 = _mm_loadh_ps((const double *)v33.m128_u64);
  v38 = 0;
  sub_9B9C90(
    (__int64)&ptr,
    (2 * ((2 * ((2 * ((2 * ((2 * v7) | v6 & 1)) | ((v6 & 2) != 0))) | ((v6 & 4) != 0))) | ((v6 & 8) != 0)))
  | ((v6 & 0x10) != 0));
  si128 = _mm_load_si128((const __m128i *)&v33);
  v9 = *(_QWORD *)(v3 + 144);
  v40 = &v38;
  v41 = v3;
  v39 = si128;
  sub_1FA1F90(v39.m128i_i64, v9, a3, v10, v11, v12);
  v13 = (unsigned int)v43;
  v14 = v43;
  if ( HIDWORD(v43) <= (unsigned int)v43 )
  {
    sub_1F6B920((__int64)&ptr);
    v36 = 8 * v13;
  }
  else
  {
    v36 = 8LL * (unsigned int)v43;
    *(_QWORD *)((char *)ptr + v36) = 0;
    LODWORD(v43) = v14 + 1;
  }
  v15 = *(_QWORD *)(v3 + 120);
  v16 = v3 + 104;
  if ( v15 == v3 + 104 )
  {
    v29 = 0;
  }
  else
  {
    v33.m128_i32[0] = 0;
    v37 = v3;
    v35 = v44;
    do
    {
      if ( *(_DWORD *)(v15 + 32) )
      {
        if ( *(_BYTE *)(v15 + 52) )
        {
          v17 = *(_DWORD *)(v15 + 32);
          ++v33.m128_i32[0];
          v18 = sub_1F6E390(a1, v17);
          sub_9B9C90((__int64)&ptr, v18);
          v9 = *(unsigned int *)(v15 + 64);
          sub_9B9C90((__int64)&ptr, v9);
          v19 = *(_QWORD *)(v15 + 56);
          v20 = v19 + 16LL * *(unsigned int *)(v15 + 64);
          if ( v19 != v20 )
          {
            v21 = *(_QWORD *)(v15 + 56);
            do
            {
              v22 = sub_1F6E410(a1, *(_DWORD *)(v21 + 8));
              v25 = HIDWORD(v43);
              v27 = (unsigned int)(v26 - v22);
              v28 = (unsigned int)v43 + 1LL;
              if ( v28 <= HIDWORD(v43) )
              {
                *((_QWORD *)ptr + (unsigned int)v43) = v27;
              }
              else
              {
                v34 = v27;
                sub_2237220(&ptr, v35, v28, 8);
                *((_QWORD *)ptr + (unsigned int)v43) = v34;
              }
              v9 = *(_QWORD *)v21;
              v21 += 16;
              LODWORD(v43) = v43 + 1;
              sub_1FA1F90(v39.m128i_i64, v9, 0, v25, v23, v24);
            }
            while ( v20 != v21 );
          }
        }
      }
      v15 = std::_Rb_tree_increment(v15, (const char *)v9);
    }
    while ( v16 != v15 );
    v3 = v37;
    v29 = v33.m128_u32[0];
  }
  *(_QWORD *)((char *)ptr + v36) = v29;
  sub_1F6F570(a1, *(_DWORD *)(v3 + 160), (__int64)&ptr);
  sub_1FA1F90(v39.m128i_i64, *(_QWORD *)(v3 + 152), 0, v30, v31, v32);
  sub_1F6EB90(a1[2], 5u, (__int64)&ptr);
  if ( ptr != v44 )
    free(ptr);
  if ( (v45 & 1) == 0 )
    operator delete(v46, 16LL * v47, 8);
}
