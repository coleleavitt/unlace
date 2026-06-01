__int64 __fastcall sub_2107BE0(__int64 a1, _QWORD *a2, char a3)
{
  size_t v4; // r13
  _BYTE *v5; // r14
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rbx
  char v9; // al
  char v10; // bp
  size_t v12; // rax
  size_t v13; // rax
  _BYTE *v14; // r8
  char *v15; // r14
  char *v16; // r15
  __int64 v17; // rdx
  _BYTE *v18; // rdx
  char v19; // al
  char v20; // bp
  unsigned __int64 v21; // rax
  size_t v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  char v29; // bp
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  bool v33; // [rsp+Fh] [rbp-1C9h]
  _QWORD *v34; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-1C0h]
  __int64 (__fastcall **v36)(); // [rsp+20h] [rbp-1B8h] BYREF
  int v37; // [rsp+28h] [rbp-1B0h]
  __int128 v38; // [rsp+30h] [rbp-1A8h]
  __int64 v39; // [rsp+40h] [rbp-198h]
  char v40; // [rsp+48h] [rbp-190h]
  int v41; // [rsp+4Ch] [rbp-18Ch]
  void **p_ptr; // [rsp+50h] [rbp-188h]
  void *v43; // [rsp+60h] [rbp-178h] BYREF
  __m128i si128; // [rsp+68h] [rbp-170h]
  _BYTE v45[136]; // [rsp+78h] [rbp-160h] BYREF
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i v47; // [rsp+108h] [rbp-D0h]
  _WORD v48[96]; // [rsp+118h] [rbp-C0h] BYREF

  if ( !a2 )
  {
    v8 = sub_21236A0(80, 0, a1);
    v19 = 2 * (a3 & 1);
    v20 = *(_BYTE *)(v8 + 8);
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)v8 = 0;
    *(_DWORD *)(v8 + 16) = 0;
    *(_BYTE *)(v8 + 8) = v19 | v20 & 0xFD;
    v21 = *(_QWORD *)(v8 + 8) & 0xFFFF0000FFF00002LL;
    BYTE1(v21) |= 3u;
    *(_QWORD *)(v8 + 8) = v21;
    goto LABEL_7;
  }
  v4 = *a2;
  v5 = a2 + 3;
  v34 = a2 + 3;
  v35 = v4;
  v6 = j__strlen("._Renamed..");
  if ( v4 >= v6 && (!v6 || !memcmp(v5, "._Renamed..", v6))
    || (v7 = j__strlen("_Renamed.."), sub_9C7D00((__int64)&v34, "_Renamed..", v7)) )
  {
    ptr = "invalid symbol name from source";
    v48[4] = 259;
    sub_2100A30(a1, 0, (__int64)&ptr);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 152) + 48LL))(
         *(_QWORD *)(a1 + 152),
         v34,
         v35) )
  {
    v8 = sub_21236A0(80, a2, a1);
    v9 = 2 * (a3 & 1);
    v10 = *(_BYTE *)(v8 + 8);
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)v8 = 0;
    *(_DWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 - 8) = a2;
    *(_BYTE *)(v8 + 8) = v9 | v10 & 0xFD;
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(v8 + 8) & 0xFFFF0000FFF00002LL | 0x301;
LABEL_7:
    *(_BYTE *)(v8 + 33) = 0;
    *(_BYTE *)(v8 + 35) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_WORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0;
    *(_BYTE *)(v8 + 72) = 0;
    return v8;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v43 = v45;
  sub_A1FE50(&v43, v5, &v5[v4]);
  v12 = j__strlen(".");
  ptr = v43;
  v47.m128i_i64[0] = si128.m128i_i64[0];
  v33 = sub_9C7D00((__int64)&ptr, ".", v12);
  if ( v33 )
  {
    v22 = j__strlen("._Renamed..");
    ptr = v48;
    v47 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, "._Renamed..", &aRenamed[v22]);
    v14 = v43;
    v17 = si128.m128i_i64[0];
    v15 = (char *)v43 + si128.m128i_i64[0];
    if ( (char *)v43 + si128.m128i_i64[0] == v43 )
    {
LABEL_24:
      v23 = v14;
      if ( v17 )
      {
        v23 = v14 + 1;
        v14 += v17;
      }
      sub_A1FE50(&ptr, v23, v14);
      goto LABEL_27;
    }
  }
  else
  {
    v13 = j__strlen("_Renamed..");
    ptr = v48;
    v47 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, "_Renamed..", &aRenamed[v13 + 1]);
    v14 = v43;
    v15 = (char *)v43 + si128.m128i_i64[0];
    if ( (char *)v43 + si128.m128i_i64[0] == v43 )
    {
      v18 = v43;
      goto LABEL_21;
    }
  }
  v16 = v14;
  do
  {
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 40LL))(
              *(_QWORD *)(a1 + 152),
              (unsigned int)*v16)
         && *v16 != 95 )
    {
      if ( v15 == ++v16 )
        goto LABEL_19;
    }
    v38 = 0;
    ++v16;
    v37 = 2;
    v36 = &off_2BEBEE0;
    v40 = 0;
    v41 = 1;
    v39 = 0;
    p_ptr = &ptr;
    sub_227B8B0(&v36, 0, 0, 0);
    sub_227B990(&v36, *(v16 - 1));
    v36 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v36);
    *(v16 - 1) = 95;
  }
  while ( v15 != v16 );
LABEL_19:
  v14 = v43;
  v17 = si128.m128i_i64[0];
  if ( v33 )
    goto LABEL_24;
  v18 = (char *)v43 + si128.m128i_i64[0];
LABEL_21:
  sub_A1FE50(&ptr, v14, v18);
LABEL_27:
  v24 = sub_2107740(a1, ptr, v47.m128i_u64[0]);
  *(_BYTE *)(v24 + 20) = 1;
  v25 = v24;
  v26 = sub_21236A0(80, v24, a1);
  v27 = (__int64)v34;
  v28 = v35;
  v8 = v26;
  LOBYTE(v26) = 2 * (a3 & 1);
  v29 = *(_BYTE *)(v8 + 8);
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 - 8) = v25;
  *(_BYTE *)(v8 + 8) = v26 | v29 & 0xFD;
  v30 = *(_QWORD *)(v8 + 8) & 0xFFFF0000FFF00002LL | 0x301;
  *(_BYTE *)(v8 + 33) = 0;
  *(_QWORD *)(v8 + 8) = v30;
  *(_BYTE *)(v8 + 35) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_WORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_BYTE *)(v8 + 72) = 0;
  v31 = sub_2100420(v27, v28);
  *(_BYTE *)(v8 + 72) = 1;
  *(_QWORD *)(v8 + 56) = v31;
  *(_QWORD *)(v8 + 64) = v32;
  if ( ptr != v48 )
    free(ptr);
  if ( v43 != v45 )
    free(v43);
  return v8;
}
