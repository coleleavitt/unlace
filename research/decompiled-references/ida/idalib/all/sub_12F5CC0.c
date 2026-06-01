void __fastcall sub_12F5CC0(__int64 a1)
{
  _BYTE *v2; // rsi
  __int64 v3; // rdx
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rdx
  __int64 v6; // r13
  std::_V2 *v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  size_t v11; // rbx
  const void *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  void *v16; // rdi
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  size_t v22; // rdx
  size_t v23; // rbx
  const void *v24; // r13
  char v25; // bl
  __int64 v26; // rdx
  volatile signed __int32 *v27; // r13
  unsigned int v28; // ebx
  __int64 v29; // rax
  time_t v30; // [rsp+18h] [rbp-278h]
  int v31; // [rsp+48h] [rbp-248h] BYREF
  __int64 v32; // [rsp+50h] [rbp-240h]
  __int64 v33; // [rsp+58h] [rbp-238h] BYREF
  volatile signed __int32 *v34; // [rsp+60h] [rbp-230h]
  __int128 v35; // [rsp+78h] [rbp-218h] BYREF
  __int64 v36; // [rsp+88h] [rbp-208h]
  __int16 v37; // [rsp+98h] [rbp-1F8h]
  __int64 v38; // [rsp+A8h] [rbp-1E8h] BYREF
  volatile signed __int32 *v39; // [rsp+B0h] [rbp-1E0h]
  __int16 v40; // [rsp+C8h] [rbp-1C8h]
  void *v41; // [rsp+D8h] [rbp-1B8h] BYREF
  volatile signed __int32 *v42; // [rsp+E0h] [rbp-1B0h]
  _QWORD v43[2]; // [rsp+E8h] [rbp-1A8h] BYREF
  __int16 v44; // [rsp+F8h] [rbp-198h]
  _OWORD v45[2]; // [rsp+108h] [rbp-188h] BYREF
  __int128 v46; // [rsp+128h] [rbp-168h]
  __int128 v47; // [rsp+138h] [rbp-158h]
  __int64 v48; // [rsp+148h] [rbp-148h]
  void **v49; // [rsp+158h] [rbp-138h] BYREF
  __int64 v50; // [rsp+160h] [rbp-130h]
  char v51; // [rsp+168h] [rbp-128h] BYREF
  int v52; // [rsp+178h] [rbp-118h]
  __int128 v53; // [rsp+17Ch] [rbp-114h]
  __int128 v54; // [rsp+18Ch] [rbp-104h]
  __int128 v55; // [rsp+19Ch] [rbp-F4h]
  int v56; // [rsp+1ACh] [rbp-E4h]
  void *ptr; // [rsp+1B8h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1C0h] [rbp-D0h]
  _BYTE v59[192]; // [rsp+1D0h] [rbp-C0h] BYREF

  v2 = *(_BYTE **)(a1 + 112);
  v3 = *(_QWORD *)(a1 + 120);
  v46 = 0;
  memset(v45, 0, sizeof(v45));
  v47 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v59;
  v48 = 0;
  HIDWORD(v46) = 0xFFFF;
  sub_A1FE50(&ptr, v2, &v2[v3]);
  v44 = 257;
  v40 = 257;
  *(_QWORD *)&v35 = "modules.timestamp";
  LOWORD(v52) = 257;
  v37 = 259;
  sub_228A3B0(&ptr, &v35, &v38, &v41, &v49);
  LOWORD(v52) = 261;
  v49 = (void **)ptr;
  v50 = si128.m128i_i64[0];
  v4 = sub_228C3C0(&v49, v45, 1);
  LODWORD(v41) = v4;
  v42 = v5;
  if ( v4 )
  {
    v27 = v5;
    v28 = v4;
    v50 = std::_V2::generic_category((std::_V2 *)&v49);
    v29 = *(_QWORD *)v27;
    LODWORD(v49) = 2;
    if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *, _QWORD, void ***))(v29 + 48))(v27, v28, &v49)
      || (*(unsigned __int8 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v50 + 56LL))(
           v50,
           &v41,
           (unsigned int)v49) )
    {
      sub_12F5C10((std::_V2 *)ptr, si128.m128i_i64[0]);
    }
  }
  else
  {
    v6 = sub_228BB60(v45) / 1000000000;
    v30 = time(nullptr);
    if ( v30 - v6 <= *(unsigned int *)(a1 + 284) )
      goto LABEL_3;
    v7 = (std::_V2 *)ptr;
    sub_12F5C10((std::_V2 *)ptr, si128.m128i_i64[0]);
    v31 = 0;
    v32 = std::_V2::system_category(v7);
    v49 = (void **)(a1 + 112);
    LOWORD(v52) = 260;
    sub_12EBA80((__int64)&v33, &v49, (__int64)&v31, 1);
    v36 = 1;
    v35 = 0;
    while ( !sub_12E96C0(&v33, (__int64 *)&v35) && !v31 )
    {
      LOWORD(v52) = 260;
      v49 = (void **)(v33 + 8);
      v8 = sub_228B230(&v49, &v41);
      v9 = v33;
      if ( !v8 && (_BYTE)v41 )
      {
        v49 = (void **)(v33 + 8);
        LOWORD(v52) = 260;
        sub_12EBA80((__int64)&v38, &v49, (__int64)&v31, 1);
        v10 = v38;
        if ( v38 )
        {
          while ( 1 )
          {
            v49 = (void **)&v51;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v50 = 0;
            v51 = 0;
            v52 = 9;
            LOBYTE(v53) = 1;
            v56 = 0xFFFF;
            v20 = *(_QWORD *)(v10 + 16);
            if ( !v20 || v31 )
              goto LABEL_39;
            v21 = sub_228AB90(*(_QWORD *)(v10 + 8), v20, 0);
            v23 = v22;
            v24 = (const void *)v21;
            if ( v22 != j__strlen(".pcm") )
              break;
            if ( !v23 || !memcmp(v24, ".pcm", v23) )
            {
LABEL_20:
              LOWORD(v52) = 260;
              v49 = (void **)(v38 + 8);
              if ( !(unsigned int)sub_228C3C0(&v49, v45, 1)
                && v30 - sub_228BB50(v45) / 1000000000 > *(unsigned int *)(a1 + 288) )
              {
                LOWORD(v52) = 260;
                v49 = (void **)(v38 + 8);
                sub_228BF70(&v49, 1);
                v41 = v43;
                sub_12E94C0(&v41, *(_BYTE **)(v38 + 8), *(_QWORD *)(v38 + 8) + *(_QWORD *)(v38 + 16));
                v14 = j__strlen(".timestamp");
                if ( v14 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v42 )
                  std::__throw_length_error("basic_string::append");
                v15 = (volatile signed __int32 *)((char *)v42 + v14);
                v16 = v41;
                if ( v41 == v43 )
                  v17 = 15;
                else
                  v17 = v43[0];
                if ( (unsigned __int64)v15 > v17 )
                {
                  sub_998B30((__int64)&v41, (size_t)v42, 0, ".timestamp", v14);
                  v16 = v41;
                }
                else if ( v14 )
                {
                  v18 = (char *)v41 + (_QWORD)v42;
                  if ( v14 == 1 )
                    *v18 = 46;
                  else
                    memcpy(v18, ".timestamp", v14);
                  v16 = v41;
                }
                v42 = v15;
                *((_BYTE *)v15 + (_QWORD)v16) = 0;
                LOWORD(v52) = 260;
                v49 = &v41;
                sub_228BF70(&v49, 1);
                if ( v41 != v43 )
                  operator delete(v41);
              }
              goto LABEL_32;
            }
            if ( v23 == j__strlen(".timestamp") )
              goto LABEL_16;
LABEL_17:
            v11 = j__strlen("modules.idx");
            v12 = (const void *)sub_228AA60(*(_QWORD *)(v38 + 8), *(_QWORD *)(v38 + 16), 0);
            if ( v11 == v13 && (!v11 || !memcmp(v12, "modules.idx", v11)) )
              goto LABEL_20;
LABEL_32:
            v31 = sub_228C920(v38);
            v10 = v38;
            v32 = v19;
            if ( !v38 )
              goto LABEL_39;
          }
          if ( v23 != j__strlen(".timestamp") )
            goto LABEL_17;
          if ( !v23 )
            goto LABEL_20;
LABEL_16:
          if ( !memcmp(v24, ".timestamp", v23) )
            goto LABEL_20;
          goto LABEL_17;
        }
LABEL_39:
        if ( v39 )
          sub_4343A0(v39);
        LOWORD(v52) = 260;
        v41 = nullptr;
        v49 = (void **)(v33 + 8);
        v42 = nullptr;
        LOBYTE(v43[0]) = 1;
        sub_12EBA80((__int64)&v38, &v49, (__int64)&v31, 1);
        v25 = sub_12E96C0(&v38, (__int64 *)&v41);
        if ( v25 )
          v25 = v31 == 0;
        if ( v39 )
          sub_4343A0(v39);
        if ( v42 )
          sub_4343A0(v42);
        v9 = v33;
        if ( v25 )
        {
          v49 = (void **)(v33 + 8);
          LOWORD(v52) = 260;
          sub_228BF70(&v49, 1);
          v9 = v33;
        }
      }
      v31 = sub_228C920(v9);
      v32 = v26;
    }
    if ( *((_QWORD *)&v35 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v35 + 1));
    if ( v34 )
      sub_4343A0(v34);
  }
LABEL_3:
  if ( ptr != v59 )
    free(ptr);
}
