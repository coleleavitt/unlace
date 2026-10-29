_QWORD *__fastcall sub_128E7F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // edx
  _BYTE *v8; // rsi
  void *v9; // rdx
  void **v11; // r13
  void *v12; // rax
  void *v13; // rdx
  __int64 v14; // rax
  char *v15; // rax
  char v16; // al
  _QWORD *v17; // rcx
  char v18; // dl
  void **v19; // rcx
  char v20; // al
  void *v21; // rdi
  __m128i v22; // xmm1
  __m128i v23; // xmm5
  void *v24; // [rsp+0h] [rbp-1C8h]
  void *v25; // [rsp+8h] [rbp-1C0h]
  __int64 v26; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-1B0h]
  _QWORD v28[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-198h] BYREF
  void *v30[2]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v31; // [rsp+50h] [rbp-178h] BYREF
  __m128i v32; // [rsp+60h] [rbp-168h] BYREF
  __m128i v33; // [rsp+70h] [rbp-158h] BYREF
  __int64 v34; // [rsp+80h] [rbp-148h]
  _QWORD v35[4]; // [rsp+90h] [rbp-138h] BYREF
  __int16 v36; // [rsp+B0h] [rbp-118h]
  void *v37[2]; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v38; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-E8h]
  void *v40[2]; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v41; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+110h] [rbp-B8h]
  void *v43[2]; // [rsp+120h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+130h] [rbp-98h] BYREF
  __int64 v45; // [rsp+140h] [rbp-88h]
  void *v46[2]; // [rsp+150h] [rbp-78h] BYREF
  _DWORD v47[26]; // [rsp+160h] [rbp-68h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 712LL))(a2, 0);
  v5 = 0;
  v27 = v6;
  v26 = v4;
  if ( (v6 & 0x80000000LL) != 0 )
    v5 = v27 & 0x7FFFFFFF;
  v7 = 0;
  if ( v26 < 0 )
    v7 = HIDWORD(v26) & 0x7FFFFFFF;
  HIDWORD(v26) = v7 | HIDWORD(v26) & 0x80000000;
  HIBYTE(v26) |= 0x80u;
  v27 = v5 & 0x7FFFFFFF | 0x80000000LL;
  sub_112B310((__int64)v43, a2);
  sub_22B9ED0(v46, v43);
  if ( v43[0] != &v44 )
    operator delete(v43[0]);
  if ( v47[8] == 27 )
  {
    v11 = v40;
    v12 = (void *)sub_22B76B0(v46);
    v43[1] = v13;
    v43[0] = v12;
    LOBYTE(v40[0]) = 45;
    v14 = sub_2246AB0(v43, v40, 1, 0);
    if ( v14 == -1 || (v15 = (char *)(v14 + 1), v15 >= v43[1]) )
    {
      sub_2257830(v37, &v26);
      v43[0] = (void *)"msvc";
      LOWORD(v45) = 1027;
      v44.m128i_i64[0] = (__int64)v37;
      sub_2253560(v40, v43);
      sub_22BA340(v46, v40[0], v40[1]);
      if ( v40[0] != &v41 )
        operator delete(v40[0]);
      v21 = v37[0];
      if ( v37[0] == &v38 )
        goto LABEL_8;
LABEL_26:
      operator delete(v21);
      goto LABEL_8;
    }
    v40[0] = &v15[(unsigned __int64)v43[0]];
    LOWORD(v42) = 261;
    v36 = 264;
    v40[1] = (void *)((char *)v43[1] - (char *)v15);
    LOBYTE(v35[0]) = 45;
    sub_2257830(v28, &v26);
    v33.m128i_i64[0] = (__int64)v28;
    v32.m128i_i64[0] = (__int64)"msvc";
    v16 = v36;
    LOWORD(v34) = 1027;
    if ( (_BYTE)v36 )
    {
      if ( (_BYTE)v36 == 1 )
      {
        v22 = _mm_load_si128(&v33);
        v20 = v34;
        *(__m128i *)v37 = _mm_load_si128(&v32);
        v38 = v22;
        v39 = v34;
        v18 = v42;
        if ( (_BYTE)v42 )
        {
          if ( (_BYTE)v42 != 1 )
          {
            if ( BYTE1(v39) == 1 )
            {
              v24 = v37[1];
              v19 = (void **)v37[0];
              goto LABEL_20;
            }
LABEL_19:
            v19 = v37;
            v20 = 2;
LABEL_20:
            if ( BYTE1(v42) == 1 )
            {
              v11 = (void **)v40[0];
              v25 = v40[1];
            }
            else
            {
              v18 = 2;
            }
            v43[0] = v19;
            v44.m128i_i64[0] = (__int64)v11;
            v43[1] = v24;
            LOBYTE(v45) = v20;
            v44.m128i_i64[1] = (__int64)v25;
            BYTE1(v45) = v18;
LABEL_29:
            sub_2253560(v30, v43);
            sub_22BA340(v46, v30[0], v30[1]);
            if ( v30[0] != &v31 )
              operator delete(v30[0]);
            v21 = (void *)v28[0];
            if ( (__int64 *)v28[0] == &v29 )
              goto LABEL_8;
            goto LABEL_26;
          }
LABEL_37:
          v23 = _mm_load_si128(&v38);
          *(__m128i *)v43 = _mm_load_si128((const __m128i *)v37);
          v44 = v23;
          v45 = v39;
          goto LABEL_29;
        }
      }
      else
      {
        if ( HIBYTE(v36) == 1 )
        {
          v2 = v35[1];
          v17 = (_QWORD *)v35[0];
        }
        else
        {
          v17 = v35;
          v16 = 2;
        }
        v38.m128i_i64[0] = (__int64)v17;
        v37[0] = &v32;
        v18 = v42;
        v38.m128i_i64[1] = v2;
        LOBYTE(v39) = 2;
        BYTE1(v39) = v16;
        if ( (_BYTE)v42 )
        {
          if ( (_BYTE)v42 != 1 )
            goto LABEL_19;
          goto LABEL_37;
        }
      }
    }
    else
    {
      LOWORD(v39) = 256;
    }
    LOWORD(v45) = 256;
    goto LABEL_29;
  }
LABEL_8:
  v8 = v46[0];
  v9 = v46[1];
  *a1 = a1 + 2;
  sub_1286F90(a1, v8, (__int64)v9 + (_QWORD)v8);
  if ( v46[0] != v47 )
    operator delete(v46[0]);
  return a1;
}
