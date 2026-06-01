__int64 __fastcall sub_223E070(__int64 a1, __m128i **a2, _BYTE *a3, __int64 a4, __int32 a5, int a6, char a7)
{
  __m128i *v9; // rbx
  _QWORD *v11; // rax
  __m128i si128; // xmm0
  __m128i *v13; // rbx
  __m128i *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-1E0h]
  _BYTE *v20; // [rsp+10h] [rbp-1D8h]
  __int32 v21; // [rsp+1Ch] [rbp-1CCh] BYREF
  _BYTE *v22; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-1C0h]
  _QWORD *v24; // [rsp+38h] [rbp-1B0h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-1A0h] BYREF
  void *v27[2]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v28; // [rsp+60h] [rbp-188h] BYREF
  void *v29[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v30; // [rsp+80h] [rbp-168h] BYREF
  __int64 v31; // [rsp+90h] [rbp-158h]
  _QWORD v32[4]; // [rsp+C0h] [rbp-128h] BYREF
  __int16 v33; // [rsp+E0h] [rbp-108h]
  _QWORD v34[4]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v35; // [rsp+110h] [rbp-D8h]
  _QWORD v36[4]; // [rsp+120h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+140h] [rbp-A8h]
  _QWORD v38[4]; // [rsp+150h] [rbp-98h] BYREF
  __int16 v39; // [rsp+170h] [rbp-78h]
  _QWORD v40[4]; // [rsp+180h] [rbp-68h] BYREF
  __int16 v41; // [rsp+1A0h] [rbp-48h]

  v9 = a2[1];
  v22 = a3;
  v23 = a4;
  v21 = a5;
  if ( v9 == a2[2] )
  {
    sub_223C9C0(a2, v9, (__int64)&v22, &v21);
    v14 = a2[1];
    v13 = (__m128i *)((char *)v14 - 72);
  }
  else
  {
    v20 = v22;
    v19 = v23;
    v11 = (_QWORD *)operator new(0x30u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
    *v11 = 0;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v11[5] = 0;
    v9->m128i_i64[0] = (__int64)v11;
    v9[2].m128i_i64[0] = (__int64)v9[3].m128i_i64;
    v9->m128i_i64[1] = 0;
    v9[1] = si128;
    sub_223C020((__m128i *)v9[2].m128i_i64, v20, (__int64)&v20[v19]);
    v9[4].m128i_i32[0] = a5;
    v13 = a2[1];
    v14 = (__m128i *)((char *)v13 + 72);
    a2[1] = (__m128i *)((char *)v13 + 72);
  }
  sub_223D830((size_t *)&v24, (__m128 *)v14[-5].m128i_i64[1], v22, v23, a6, a7);
  if ( v24 )
  {
    v25 = v24;
    v24 = nullptr;
    sub_2221210((__int64)v27, &v25);
    LODWORD(v31) = a6;
    v32[0] = "malformed section at line ";
    v35 = 770;
    v32[2] = v31;
    v33 = 2307;
    v34[0] = v32;
    v34[2] = ": '";
    v36[0] = v34;
    v37 = 1282;
    v36[2] = v22;
    v39 = 770;
    v36[3] = v23;
    v38[0] = v36;
    v38[2] = "': ";
    v41 = (unsigned __int16)&elf_gnu_hash_indexes[43] + 2;
    v40[0] = v38;
    v40[2] = v27;
    v15 = std::_V2::generic_category((std::_V2 *)((char *)&elf_gnu_hash_indexes[43] + 2));
    sub_2253560(v29, v40);
    sub_22205D0(&v26, (__int64)v29, 22, v15);
    if ( v29[0] != &v30 )
      operator delete(v29[0]);
    v16 = v26;
    v17 = (__int64 *)v27[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v16;
    if ( v17 != &v28 )
      operator delete(v17);
    if ( v25 )
      (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
    if ( v24 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24);
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v13;
  }
  return a1;
}
