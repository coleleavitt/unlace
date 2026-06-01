__int64 __fastcall Z3_solver_get_help(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __m128i si128; // xmm4
  __int64 v8; // r15
  __int64 v9; // rdi
  void *v10; // rdx
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _DWORD *v16; // r15
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  char v24; // [rsp+17h] [rbp-221h]
  __int64 v25; // [rsp+18h] [rbp-220h]
  std::locale *v26[2]; // [rsp+20h] [rbp-218h] BYREF
  __m128i v27; // [rsp+30h] [rbp-208h] BYREF
  __m128i v28; // [rsp+40h] [rbp-1F8h] BYREF
  char v29[8]; // [rsp+58h] [rbp-1E0h] BYREF
  void *v30[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-1C8h] BYREF
  _OWORD v32[2]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-198h]
  __int128 v34; // [rsp+B0h] [rbp-188h]
  char v35[8]; // [rsp+C0h] [rbp-178h] BYREF
  int v36; // [rsp+C8h] [rbp-170h]
  void *v37; // [rsp+D0h] [rbp-168h]
  void *v38; // [rsp+D8h] [rbp-160h]
  _QWORD v39[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v40[28]; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v41; // [rsp+1D0h] [rbp-68h]
  __int128 v42; // [rsp+1D8h] [rbp-60h]
  __int128 v43; // [rsp+1E8h] [rbp-50h]

  v28.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v26 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v3;
  if ( v3 )
    sub_29D6A0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v27.m128i_i64[0] = (__int64)v32;
  std::ios_base::ios_base((std::ios_base *)v40);
  v42 = 0;
  v43 = 0;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  v41 = 0;
  v40[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = (_QWORD *)((char *)v32 + *(_QWORD *)(v4 - 24));
  *(_QWORD *)&v32[0] = v4;
  *v6 = v5;
  v25 = v5;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v26);
  v32[1] = 0;
  v32[0] = si128;
  v40[0] = (char *)&`vtable for'std::ostringstream + 64;
  v26[0] = (std::locale *)v35;
  v33 = 0;
  v34 = 0;
  std::locale::locale((std::locale *)v35);
  v36 = 16;
  v37 = v39;
  LOBYTE(v39[0]) = 0;
  *((_QWORD *)&v32[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v28.m128i_i64[1] = (__int64)v32 + 8;
  v38 = nullptr;
  std::ios::init();
  sub_1857380(v29);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = v8;
  if ( !v8 )
  {
    sub_2A74C0(a1, a2);
    v9 = *(_QWORD *)(a2 + 32);
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 112LL))(v9, v29);
  sub_15B1320(v29);
  if ( !v8 )
  {
    v16 = *(_DWORD **)(a2 + 32);
    if ( v16 )
    {
      if ( v16[12]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v16)(v16);
        sub_186B220(v16);
      }
    }
    *(_QWORD *)(a2 + 32) = 0;
  }
  sub_185C3C0(v29, v27.m128i_i64[0], 0, 0, 1);
  v10 = v37;
  if ( (_QWORD)v34 )
  {
    v11 = v33;
    if ( !(_QWORD)v33 || (unsigned __int64)v33 < (unsigned __int64)v34 )
      v11 = v34;
    v38 = (void *)(v11 - *((_QWORD *)&v33 + 1));
    *((_BYTE *)v37 + v11 - *((_QWORD *)&v33 + 1)) = 0;
    v10 = v37;
    v30[0] = v31;
    if ( v37 != v39 )
      goto LABEL_10;
  }
  else
  {
    v30[0] = v31;
    if ( v37 != v39 )
    {
LABEL_10:
      v30[0] = v10;
      v31[0] = v39[0];
      v12 = v38;
      goto LABEL_11;
    }
  }
  v12 = v38;
  v18 = v31;
  v19 = v39;
  v20 = (_DWORD)v38 + 1;
  if ( (unsigned int)((_DWORD)v38 + 1) >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)v31 + v23) = *(_QWORD *)((char *)v39 + v23);
    }
    while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
    v18 = (_DWORD *)((char *)v31 + v22);
    v19 = (_DWORD *)((char *)v39 + v22);
  }
  v21 = 0;
  if ( (v20 & 4) != 0 )
  {
    *v18 = *v19;
    v21 = 4;
  }
  if ( (v20 & 2) != 0 )
  {
    *(_WORD *)((char *)v18 + v21) = *(_WORD *)((char *)v19 + v21);
    v21 += 2;
  }
  if ( (v20 & 1) != 0 )
    *((_BYTE *)v18 + v21) = *((_BYTE *)v19 + v21);
LABEL_11:
  v30[1] = v12;
  v37 = v39;
  v38 = nullptr;
  LOBYTE(v39[0]) = 0;
  std::stringbuf::_M_sync();
  v13 = sub_24ED70((_QWORD *)a1, (__int64)v30);
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v28), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v30[0] != v31 )
    operator delete(v30[0], v31[0] + 1LL);
  sub_1857540(v29);
  v32[0] = _mm_load_si128(&v27);
  v40[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v37 != v39 )
    operator delete(v37, v39[0] + 1LL);
  *((_QWORD *)&v32[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v26[0]);
  v14 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v32[0] = v4;
  *(_QWORD *)((char *)v32 + v14) = v25;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v40);
  if ( v24 )
    byte_1C7EBA0 = 1;
  return v13;
}

