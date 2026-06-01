_QWORD *__fastcall sub_129C090(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  size_t v9; // r12
  const void *v10; // r15
  char v11; // dl
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rdx
  char v15; // cl
  char v16; // al
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  char *v20; // rdi
  __int128 v21; // [rsp+0h] [rbp-298h]
  __int64 v22; // [rsp+20h] [rbp-278h]
  __int64 v23; // [rsp+30h] [rbp-268h]
  _QWORD v24[4]; // [rsp+40h] [rbp-258h] BYREF
  __int64 v25; // [rsp+60h] [rbp-238h]
  __int128 v26; // [rsp+70h] [rbp-228h]
  __int16 v27; // [rsp+90h] [rbp-208h]
  _QWORD v28[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-1E8h]
  char v30; // [rsp+C0h] [rbp-1D8h]
  char v31; // [rsp+C1h] [rbp-1D7h]
  void *v32[2]; // [rsp+D0h] [rbp-1C8h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-1A8h]
  _QWORD v35[2]; // [rsp+100h] [rbp-198h] BYREF
  __int128 v36; // [rsp+110h] [rbp-188h]
  __int64 v37; // [rsp+120h] [rbp-178h]
  _QWORD v38[4]; // [rsp+130h] [rbp-168h] BYREF
  __int16 v39; // [rsp+150h] [rbp-148h]
  _QWORD v40[4]; // [rsp+160h] [rbp-138h] BYREF
  __int16 v41; // [rsp+180h] [rbp-118h]
  _BYTE v42[32]; // [rsp+190h] [rbp-108h] BYREF
  __int16 v43; // [rsp+1B0h] [rbp-E8h]
  void *ptr; // [rsp+1C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1C8h] [rbp-D0h]
  _BYTE v46[192]; // [rsp+1D8h] [rbp-C0h] BYREF

  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v21 = a4;
  v9 = *(_QWORD *)(v8 + 256);
  *((_QWORD *)&v21 + 1) = a5;
  v10 = *(const void **)(v8 + 248);
  ptr = v46;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 > 0x80 )
  {
    sub_2236E10(&ptr, v46, v9, 1);
    v20 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v9 )
      goto LABEL_3;
    v20 = v46;
  }
  memcpy(v20, v10, v9);
  v9 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v9;
  v43 = 257;
  v41 = 260;
  v40[0] = a2 + 4984;
  sub_129BDF0((char *)v32, a2 + 16);
  v39 = 260;
  v35[0] = "lib";
  LOWORD(v37) = 259;
  v38[0] = v32;
  sub_228A3B0(&ptr, v35, v38, v40, v42);
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v11 = 108;
      v12 = "lib";
      v13 = ".a";
    }
    else
    {
      if ( a6 != 2 )
      {
        v43 = 257;
        v41 = 257;
        v39 = 257;
        v32[0] = nullptr;
        LOWORD(v34) = 259;
        v27 = 261;
        v26 = v21;
        v12 = "lib";
        goto LABEL_12;
      }
      v11 = 108;
      v12 = "lib";
      v13 = ".so";
    }
  }
  else
  {
    v11 = 0;
    v12 = (char *)&byte_22F0C30;
    v13 = ".o";
  }
  v32[0] = v13;
  v43 = 257;
  v26 = v21;
  v41 = 257;
  v39 = 257;
  LOWORD(v34) = 259;
  v27 = 261;
  if ( v11 )
  {
LABEL_12:
    v24[0] = v12;
    v24[2] = "clang_rt.";
    v16 = v27;
    LOWORD(v25) = 771;
    v14 = (char *)v24;
    v15 = 2;
    goto LABEL_21;
  }
  v14 = "clang_rt.";
  v15 = 3;
  LOWORD(v25) = 259;
  v24[0] = "clang_rt.";
  v22 = v24[1];
  v16 = 5;
LABEL_21:
  v28[0] = v14;
  v31 = v16;
  v28[1] = v22;
  v29 = v26;
  v30 = v15;
  v35[0] = v28;
  v36 = *(_OWORD *)v32;
  v35[1] = v23;
  LOBYTE(v37) = 2;
  BYTE1(v37) = v34;
  sub_228A3B0(&ptr, v35, v38, v40, v42);
  v17 = ptr;
  v18 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_129A690(a1, v17, (__int64)&v17[v18]);
  if ( ptr != v46 )
    free(ptr);
  return a1;
}
