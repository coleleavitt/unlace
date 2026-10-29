__int64 __fastcall Z3_simplifier_get_help(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i v7; // xmm4
  __int64 v8; // r14
  void *v9; // rbx
  __int64 v10; // r14
  void *v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v20; // rax
  std::ios_base *v21; // rdi
  _DWORD *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rsi
  __m128i v29; // [rsp+0h] [rbp-2E8h] BYREF
  std::ios_base *v30; // [rsp+10h] [rbp-2D8h]
  void *v31; // [rsp+18h] [rbp-2D0h]
  char v32; // [rsp+27h] [rbp-2C1h]
  __int64 v33; // [rsp+28h] [rbp-2C0h]
  __m128i v34; // [rsp+30h] [rbp-2B8h] BYREF
  std::locale *v35; // [rsp+40h] [rbp-2A8h]
  __m128i v36; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 **v37; // [rsp+58h] [rbp-290h]
  char v38[8]; // [rsp+60h] [rbp-288h] BYREF
  __int64 v39; // [rsp+68h] [rbp-280h] BYREF
  void *v40[2]; // [rsp+70h] [rbp-278h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-268h] BYREF
  __int64 *v42; // [rsp+90h] [rbp-258h] BYREF
  int v43; // [rsp+98h] [rbp-250h]
  char v44; // [rsp+9Ch] [rbp-24Ch]
  __int64 v45; // [rsp+A0h] [rbp-248h]
  int v46; // [rsp+A8h] [rbp-240h]
  __int64 (__fastcall **v47)(); // [rsp+B0h] [rbp-238h]
  __int64 v48; // [rsp+C0h] [rbp-228h]
  void *v49; // [rsp+C8h] [rbp-220h]
  __int64 v50; // [rsp+D8h] [rbp-210h]
  void *ptr; // [rsp+E0h] [rbp-208h]
  __int64 v52; // [rsp+E8h] [rbp-200h]
  __int64 *v53; // [rsp+F0h] [rbp-1F8h]
  __int64 v54; // [rsp+F8h] [rbp-1F0h]
  __int64 v55; // [rsp+100h] [rbp-1E8h]
  _BYTE v56[40]; // [rsp+108h] [rbp-1E0h] BYREF
  _OWORD v57[2]; // [rsp+130h] [rbp-1B8h] BYREF
  __int128 v58; // [rsp+150h] [rbp-198h]
  __int128 v59; // [rsp+160h] [rbp-188h]
  char v60[8]; // [rsp+170h] [rbp-178h] BYREF
  int v61; // [rsp+178h] [rbp-170h]
  void *v62; // [rsp+180h] [rbp-168h]
  void *v63; // [rsp+188h] [rbp-160h]
  _QWORD v64[2]; // [rsp+190h] [rbp-158h] BYREF
  _QWORD v65[28]; // [rsp+1A0h] [rbp-148h] BYREF
  __int16 v66; // [rsp+280h] [rbp-68h]
  __int128 v67; // [rsp+288h] [rbp-60h]
  __int128 v68; // [rsp+298h] [rbp-50h]

  v36.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v29 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v32 = v3;
  if ( v3 )
    sub_29CEB0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v30 = (std::ios_base *)v65;
  v34.m128i_i64[0] = (__int64)v57;
  std::ios_base::ios_base((std::ios_base *)v65);
  v67 = 0;
  v68 = 0;
  v65[0] = (char *)&`vtable for'std::ios + 16;
  v66 = 0;
  v65[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v57[0] = v4;
  v33 = v5;
  *(_QWORD *)((char *)v57 + v6) = v5;
  std::ios::init();
  v7 = _mm_load_si128(&v29);
  v57[1] = 0;
  v57[0] = v7;
  v65[0] = (char *)&`vtable for'std::ostringstream + 64;
  v35 = (std::locale *)v60;
  v58 = 0;
  v59 = 0;
  std::locale::locale((std::locale *)v60);
  v61 = 16;
  v62 = v64;
  *((_QWORD *)&v57[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v63 = nullptr;
  LOBYTE(v64[0]) = 0;
  std::ios::init();
  v29.m128i_i64[0] = (__int64)v38;
  sub_1857380(v38);
  v8 = *(_QWORD *)(a1 + 232);
  v43 = 0;
  v42 = qword_1C63778;
  v44 = 0;
  v45 = 0;
  v47 = &off_1C62200;
  v46 = 0;
  v48 = 0;
  v49 = nullptr;
  v50 = 0;
  ptr = nullptr;
  v52 = v8;
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  v36.m128i_i64[1] = (__int64)v56;
  sub_180C0A0(v56);
  v39 = 0;
  v42 = (__int64 *)&off_1C4C830;
  if ( !a2 )
    BUG();
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v37 = &v42;
    v31 = &v39;
    std::__throw_bad_function_call();
  }
  v37 = &v42;
  v31 = &v39;
  v9 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(a2 + 48))(a2 + 24, v8, &v39);
  v10 = v29.m128i_i64[0];
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, v29.m128i_i64[0]);
  sub_185C3C0(v10, v34.m128i_i64[0], 0, 0, 1);
  v11 = v62;
  if ( (_QWORD)v59 )
  {
    v12 = v58;
    if ( !(_QWORD)v58 || (unsigned __int64)v58 < (unsigned __int64)v59 )
      v12 = v59;
    v63 = (void *)(v12 - *((_QWORD *)&v58 + 1));
    *((_BYTE *)v62 + v12 - *((_QWORD *)&v58 + 1)) = 0;
    v11 = v62;
    v40[0] = v41;
    if ( v62 != v64 )
      goto LABEL_9;
LABEL_36:
    v13 = v63;
    v23 = v41;
    v24 = v64;
    v25 = (_DWORD)v63 + 1;
    if ( (unsigned int)((_DWORD)v63 + 1) >= 8 )
    {
      LODWORD(v27) = 0;
      do
      {
        v28 = (unsigned int)v27;
        v27 = (unsigned int)(v27 + 8);
        *(_QWORD *)((char *)v41 + v28) = *(_QWORD *)((char *)v64 + v28);
      }
      while ( (unsigned int)v27 < (v25 & 0xFFFFFFF8) );
      v23 = (_DWORD *)((char *)v41 + v27);
      v24 = (_DWORD *)((char *)v64 + v27);
    }
    v26 = 0;
    if ( (v25 & 4) != 0 )
    {
      *v23 = *v24;
      v26 = 4;
    }
    if ( (v25 & 2) != 0 )
    {
      *(_WORD *)((char *)v23 + v26) = *(_WORD *)((char *)v24 + v26);
      v26 += 2;
    }
    if ( (v25 & 1) != 0 )
      *((_BYTE *)v23 + v26) = *((_BYTE *)v24 + v26);
    goto LABEL_10;
  }
  v40[0] = v41;
  if ( v62 == v64 )
    goto LABEL_36;
LABEL_9:
  v40[0] = v11;
  v41[0] = v64[0];
  v13 = v63;
LABEL_10:
  v40[1] = v13;
  v62 = v64;
  v63 = nullptr;
  LOBYTE(v64[0]) = 0;
  std::stringbuf::_M_sync();
  v14 = sub_24ED70(a1, v40);
  v34 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v36), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v40[0] != v41 )
    operator delete(v40[0], v41[0] + 1LL);
  (**(void (__fastcall ***)(void *))v9)(v9);
  sub_186B220(v9);
  sub_18572D0(v31);
  v42 = qword_1C63778;
  sub_180C0E0(v36.m128i_i64[1]);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v15 = v53;
  if ( v53 )
  {
    v16 = (unsigned __int64)&v53[*((unsigned int *)v53 - 1)];
    if ( (unsigned __int64)v53 >= v16 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v52;
          if ( (*(_DWORD *)(v17 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_23;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_23:
    v15 = v53;
    if ( v53 )
LABEL_24:
      sub_186B220(v15 - 1);
  }
  v47 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v49 )
    sub_186B220(v49);
  sub_1857540(v29.m128i_i64[0]);
  v57[0] = _mm_load_si128(&v34);
  v65[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v62 != v64 )
    operator delete(v62, v64[0] + 1LL);
  *((_QWORD *)&v57[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v35);
  v20 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v57[0] = v4;
  v21 = v30;
  *(_QWORD *)((char *)v57 + v20) = v33;
  v65[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v21);
  if ( v32 )
    byte_1C7EBA0 = 1;
  return v14;
}

