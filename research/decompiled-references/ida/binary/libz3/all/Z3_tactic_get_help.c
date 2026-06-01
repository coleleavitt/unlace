__int64 __fastcall Z3_tactic_get_help(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __m128i si128; // xmm4
  __int64 v7; // rdi
  void (*v8)(); // rax
  void *v9; // rdx
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  std::ios_base *v14; // rdi
  _DWORD *v16; // rdi
  _DWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __m128i v22; // [rsp+0h] [rbp-238h] BYREF
  std::ios_base *v23; // [rsp+18h] [rbp-220h]
  char v24; // [rsp+27h] [rbp-211h]
  _OWORD *v25; // [rsp+28h] [rbp-210h]
  std::locale *v26[2]; // [rsp+30h] [rbp-208h] BYREF
  __m128i v27; // [rsp+40h] [rbp-1F8h] BYREF
  char v28[8]; // [rsp+58h] [rbp-1E0h] BYREF
  void *v29[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-1C8h] BYREF
  _OWORD v31[2]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-198h]
  __int128 v33; // [rsp+B0h] [rbp-188h]
  char v34[8]; // [rsp+C0h] [rbp-178h] BYREF
  int v35; // [rsp+C8h] [rbp-170h]
  void *v36; // [rsp+D0h] [rbp-168h]
  void *v37; // [rsp+D8h] [rbp-160h]
  _QWORD v38[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v39[28]; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v40; // [rsp+1D0h] [rbp-68h]
  __int128 v41; // [rsp+1D8h] [rbp-60h]
  __int128 v42; // [rsp+1E8h] [rbp-50h]

  v22.m128i_i64[0] = a1;
  v27.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v26 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v2;
  if ( v2 )
    sub_29D250(v22.m128i_i64[0]);
  v25 = v31;
  *(_DWORD *)(v22.m128i_i64[0] + 1520) = 0;
  v23 = (std::ios_base *)v39;
  std::ios_base::ios_base((std::ios_base *)v39);
  v41 = 0;
  v42 = 0;
  v39[0] = (char *)&`vtable for'std::ios + 16;
  v40 = 0;
  v39[27] = 0;
  v3 = `VTT for'std::ostringstream[1];
  v4 = `VTT for'std::ostringstream[2];
  v5 = (_QWORD *)((char *)v31 + *(_QWORD *)(v3 - 24));
  *(_QWORD *)&v31[0] = v3;
  *v5 = v4;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v26);
  v31[1] = 0;
  v31[0] = si128;
  v39[0] = (char *)&`vtable for'std::ostringstream + 64;
  v26[0] = (std::locale *)v34;
  v32 = 0;
  v33 = 0;
  std::locale::locale((std::locale *)v34);
  v35 = 16;
  v36 = v38;
  LOBYTE(v38[0]) = 0;
  *((_QWORD *)&v31[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v27.m128i_i64[1] = (__int64)v31 + 8;
  v37 = nullptr;
  std::ios::init();
  sub_1857380(v28);
  if ( !a2 )
    BUG();
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(void (**)())(*(_QWORD *)v7 + 120LL);
  if ( v8 != nullsub_94 )
    ((void (__fastcall *)(__int64, char *))v8)(v7, v28);
  sub_185C3C0(v28, v25, 0, 0, 1);
  v9 = v36;
  if ( (_QWORD)v33 )
  {
    v10 = v32;
    if ( !(_QWORD)v32 || (unsigned __int64)v32 < (unsigned __int64)v33 )
      v10 = v33;
    v37 = (void *)(v10 - *((_QWORD *)&v32 + 1));
    *((_BYTE *)v36 + v10 - *((_QWORD *)&v32 + 1)) = 0;
    v9 = v36;
    v29[0] = v30;
    if ( v36 != v38 )
      goto LABEL_10;
  }
  else
  {
    v29[0] = v30;
    if ( v36 != v38 )
    {
LABEL_10:
      v29[0] = v9;
      v30[0] = v38[0];
      v11 = v37;
      goto LABEL_11;
    }
  }
  v11 = v37;
  v16 = v30;
  v17 = v38;
  v18 = (_DWORD)v37 + 1;
  if ( (unsigned int)((_DWORD)v37 + 1) >= 8 )
  {
    LODWORD(v20) = 0;
    do
    {
      v21 = (unsigned int)v20;
      v20 = (unsigned int)(v20 + 8);
      *(_QWORD *)((char *)v30 + v21) = *(_QWORD *)((char *)v38 + v21);
    }
    while ( (unsigned int)v20 < (v18 & 0xFFFFFFF8) );
    v16 = (_DWORD *)((char *)v30 + v20);
    v17 = (_DWORD *)((char *)v38 + v20);
  }
  v19 = 0;
  if ( (v18 & 4) != 0 )
  {
    *v16 = *v17;
    v19 = 4;
  }
  if ( (v18 & 2) != 0 )
  {
    *(_WORD *)((char *)v16 + v19) = *(_WORD *)((char *)v17 + v19);
    v19 += 2;
  }
  if ( (v18 & 1) != 0 )
    *((_BYTE *)v16 + v19) = *((_BYTE *)v17 + v19);
LABEL_11:
  v29[1] = v11;
  v36 = v38;
  v37 = nullptr;
  LOBYTE(v38[0]) = 0;
  std::stringbuf::_M_sync();
  v12 = sub_24ED70(v22.m128i_i64[0], v29);
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v27), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v29[0] != v30 )
    operator delete(v29[0], v30[0] + 1LL);
  sub_1857540(v28);
  v31[0] = _mm_load_si128(&v22);
  v39[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v36 != v38 )
    operator delete(v36, v38[0] + 1LL);
  *((_QWORD *)&v31[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v26[0]);
  v13 = *(_QWORD *)(v3 - 24);
  v14 = v23;
  *(_QWORD *)&v31[0] = v3;
  *(_QWORD *)((char *)v31 + v13) = v4;
  v39[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v14);
  if ( v24 )
    byte_1C7EBA0 = 1;
  return v12;
}

