unsigned __int64 __fastcall sub_2D8F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // r14
  int v10; // esi
  __int16 v11; // dx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm2
  __m128i v15; // xmm0
  char v16; // di
  char v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rdi
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v32; // [rsp+0h] [rbp-148h] BYREF
  __int64 v33; // [rsp+18h] [rbp-130h]
  __m128i v34; // [rsp+20h] [rbp-128h] BYREF
  __int64 v35; // [rsp+30h] [rbp-118h]
  int v36; // [rsp+3Ch] [rbp-10Ch]
  __int64 v37; // [rsp+40h] [rbp-108h]
  __int64 v38; // [rsp+48h] [rbp-100h]
  int v39; // [rsp+50h] [rbp-F8h]
  __int16 v40; // [rsp+54h] [rbp-F4h]
  char v41; // [rsp+56h] [rbp-F2h]
  char v42; // [rsp+57h] [rbp-F1h]
  __int64 v43; // [rsp+58h] [rbp-F0h]
  __m128i v44; // [rsp+68h] [rbp-E0h]
  __m128i v45; // [rsp+A0h] [rbp-A8h]
  __m128i v46; // [rsp+C0h] [rbp-88h] BYREF
  void (__fastcall *v47)(__m128i *, __m128i *, __int64); // [rsp+D0h] [rbp-78h]
  _BYTE v48[16]; // [rsp+E0h] [rbp-68h] BYREF
  void (__fastcall *v49)(_BYTE *, _BYTE *, __int64); // [rsp+F0h] [rbp-58h]
  unsigned __int64 v50; // [rsp+108h] [rbp-40h]

  v33 = a2;
  v50 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 96 )
  {
    v5 = a1 + 192;
    do
    {
      while ( 1 )
      {
        v7 = v5 - 96;
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5 - 96, a1) >= 0 )
          break;
        v8 = _mm_loadu_si128((const __m128i *)(v5 - 88));
        v9 = v5;
        v10 = *(_DWORD *)(v5 - 72);
        v11 = *(_WORD *)(v5 - 68);
        v12 = 0;
        v37 = *(_QWORD *)(v5 - 64);
        v13 = *(_QWORD *)(v5 - 40);
        v44 = v8;
        v14 = _mm_loadu_si128((const __m128i *)(v5 - 56));
        *(_OWORD *)(v5 - 56) = 0;
        v15 = _mm_loadu_si128((const __m128i *)(v5 - 32));
        v16 = *(_BYTE *)(v5 - 66);
        v38 = v13;
        LODWORD(v13) = *(_DWORD *)(v5 - 16);
        *(_QWORD *)(v5 - 64) = 0;
        v17 = *(_BYTE *)(v5 - 65);
        v36 = v13;
        v18 = *(_QWORD *)(v5 - 8);
        v34 = v14;
        v35 = v18;
        v19 = 0xAAAAAAAAAAAAAAABLL * ((v7 - a1) >> 5);
        v45 = v15;
        if ( v7 - a1 > 0 )
        {
          v40 = v11;
          v39 = v10;
          v41 = v16;
          v42 = v17;
          v43 = a3;
          do
          {
            v20 = *(_QWORD *)(v7 - 88);
            v21 = *(_QWORD *)(v7 + 32);
            v7 -= 96;
            v22 = *(_QWORD *)(v7 + 32);
            v23 = _mm_loadu_si128((const __m128i *)(v7 + 40));
            *(_OWORD *)(v7 + 40) = v12;
            *(_QWORD *)(v7 + 104) = v20;
            LODWORD(v20) = *(_DWORD *)(v7 + 16);
            *(_QWORD *)(v7 + 32) = 0;
            *(_DWORD *)(v7 + 112) = v20;
            *(_DWORD *)(v7 + 120) = *(_DWORD *)(v7 + 24);
            *(_BYTE *)(v7 + 124) = *(_BYTE *)(v7 + 28);
            *(_BYTE *)(v7 + 125) = *(_BYTE *)(v7 + 29);
            *(_BYTE *)(v7 + 126) = *(_BYTE *)(v7 + 30);
            *(_BYTE *)(v7 + 127) = *(_BYTE *)(v7 + 31);
            if ( v21 )
            {
              *(_QWORD *)(v7 + 136) = 0;
              v32 = v23;
              qfree(v21);
              v23 = _mm_load_si128(&v32);
              v12 = 0;
            }
            v24 = *(_QWORD *)(v7 + 56);
            *(_QWORD *)(v7 + 128) = v22;
            *(__m128i *)(v7 + 136) = v23;
            *(_QWORD *)(v7 + 152) = v24;
            *(_QWORD *)(v7 + 160) = *(_QWORD *)(v7 + 64);
            *(_DWORD *)(v7 + 168) = *(_DWORD *)(v7 + 72);
            *(_DWORD *)(v7 + 176) = *(_DWORD *)(v7 + 80);
            *(_QWORD *)(v7 + 184) = *(_QWORD *)(v7 + 88);
            --v19;
          }
          while ( v19 );
          v11 = v40;
          v10 = v39;
          v16 = v41;
          v17 = v42;
          a3 = v43;
        }
        v25 = v44.m128i_i64[0];
        *(_BYTE *)(a1 + 30) = v16;
        v26 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 24) = v10;
        *(_QWORD *)(a1 + 8) = v25;
        LODWORD(v25) = v44.m128i_i32[2];
        *(_WORD *)(a1 + 28) = v11;
        *(_DWORD *)(a1 + 16) = v25;
        *(_BYTE *)(a1 + 31) = v17;
        if ( v26 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          qfree(v26);
        }
        v27 = v45.m128i_i64[0];
        v5 += 96;
        v28 = _mm_load_si128(&v34);
        *(_QWORD *)(a1 + 32) = v37;
        v29 = v38;
        *(_QWORD *)(a1 + 64) = v27;
        LODWORD(v27) = v45.m128i_i32[2];
        *(_QWORD *)(a1 + 56) = v29;
        LODWORD(v29) = v36;
        *(_DWORD *)(a1 + 72) = v27;
        *(_DWORD *)(a1 + 80) = v29;
        v30 = v35;
        *(__m128i *)(a1 + 40) = v28;
        *(_QWORD *)(a1 + 88) = v30;
        if ( v33 == v9 )
          return v50 - __readfsqword(0x28u);
      }
      sub_2CA2A0((__int64)&v46, (const __m128i *)a3);
      sub_2CA2A0((__int64)v48, &v46);
      sub_2D8C80(v5 - 96, (__int64)v48);
      if ( v49 )
        v49(v48, v48, 3);
      if ( v47 )
        v47(&v46, &v46, 3);
      v6 = v5;
      v5 += 96;
    }
    while ( v33 != v6 );
  }
  return v50 - __readfsqword(0x28u);
}
