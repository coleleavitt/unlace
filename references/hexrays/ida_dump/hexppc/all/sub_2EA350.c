unsigned __int64 __fastcall sub_2EA350(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r11
  __m128i v9; // xmm0
  __int64 v10; // r10
  int v11; // r8d
  __int64 v12; // rcx
  void (__fastcall *v13)(__int128 *, const __m128i *, __int64); // rax
  __int64 v15; // [rsp+0h] [rbp-128h]
  __int64 v16; // [rsp+8h] [rbp-120h]
  int v17; // [rsp+14h] [rbp-114h]
  __int64 v18; // [rsp+18h] [rbp-110h]
  __m128i v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+30h] [rbp-F8h]
  __int64 v21; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall **v22)(); // [rsp+40h] [rbp-E8h]
  __int64 v23; // [rsp+48h] [rbp-E0h]
  __int64 v24; // [rsp+50h] [rbp-D8h]
  __m128i v25; // [rsp+58h] [rbp-D0h]
  __int64 v26; // [rsp+68h] [rbp-C0h]
  int v27; // [rsp+70h] [rbp-B8h]
  __int64 v28; // [rsp+78h] [rbp-B0h]
  _QWORD v29[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-98h]
  __m128i v31; // [rsp+98h] [rbp-90h]
  __int64 v32; // [rsp+A8h] [rbp-80h]
  int v33; // [rsp+B0h] [rbp-78h]
  __int64 v34; // [rsp+B8h] [rbp-70h]
  __int128 v35; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v36; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v3 = a2 - a1;
  v20 = a1;
  v37 = __readfsqword(0x28u);
  if ( v3 > 64 )
  {
    v21 = v3 >> 6;
    v5 = ((v3 >> 6) - 2) / 2;
    v6 = a1 + (v5 << 6);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(_QWORD *)(v6 + 8);
      v9 = _mm_loadu_si128((const __m128i *)(v6 + 24));
      v10 = *(_QWORD *)(v6 + 40);
      *(_QWORD *)(v6 + 16) = 0;
      v11 = *(_DWORD *)(v6 + 48);
      v12 = *(_QWORD *)(v6 + 56);
      *(_OWORD *)(v6 + 24) = 0;
      v13 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v23 = v8;
      v24 = v7;
      v26 = v10;
      v27 = v11;
      v22 = off_4CFD80;
      v28 = v12;
      v36 = 0u;
      v25 = v9;
      v35 = 0;
      if ( v13 )
      {
        v18 = v12;
        v17 = v11;
        v16 = v10;
        v15 = v8;
        v19 = v9;
        v13(&v35, a3, 2);
        v9 = _mm_load_si128(&v19);
        v12 = v18;
        v11 = v17;
        v10 = v16;
        v8 = v15;
        v36 = _mm_loadu_si128(a3 + 1);
      }
      v30 = v7;
      v33 = v11;
      v34 = v12;
      v29[1] = v8;
      v24 = 0;
      v32 = v10;
      v29[0] = off_4CFD80;
      v31 = v9;
      v25 = 0;
      sub_2E9E30(v20, v5, v21, (__int64)v29, (__int64)&v35);
      if ( v30 )
        qfree(v30);
      if ( v36.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v36.m128i_i64[0])(&v35, &v35, 3);
      v6 -= 64;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v37 - __readfsqword(0x28u);
}
