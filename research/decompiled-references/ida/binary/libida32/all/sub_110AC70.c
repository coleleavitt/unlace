__int64 __fastcall sub_110AC70(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        char a8)
{
  unsigned int v9; // r13d
  char v10; // cl
  char *v11; // rcx
  char *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v22; // ecx
  bool v23; // zf
  char *v24; // rcx
  __int64 (*v25)(); // rax
  __int64 v26; // rdi
  unsigned int v27; // r15d
  const char *v28; // r13
  size_t v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  size_t v34; // rax
  char *v35; // rcx
  char *v36; // rcx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-258h]
  __int64 v41; // [rsp+10h] [rbp-248h]
  char v42; // [rsp+1Fh] [rbp-239h]
  char *v43; // [rsp+20h] [rbp-238h]
  char *v44; // [rsp+28h] [rbp-230h]
  void *v45[2]; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v46[16]; // [rsp+40h] [rbp-218h] BYREF
  void *v47[2]; // [rsp+50h] [rbp-208h] BYREF
  __int64 v48; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v49[2]; // [rsp+70h] [rbp-1E8h] BYREF
  __int16 v50; // [rsp+90h] [rbp-1C8h]
  __m128i v51[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int16 v52; // [rsp+C0h] [rbp-198h]
  __m128i v53[3]; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v54; // [rsp+100h] [rbp-158h] BYREF
  __int16 v55; // [rsp+120h] [rbp-138h]
  __m128i v56[3]; // [rsp+130h] [rbp-128h] BYREF
  __m128i v57; // [rsp+160h] [rbp-F8h] BYREF
  _WORD v58[16]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v59; // [rsp+190h] [rbp-C8h] BYREF
  const char *v60; // [rsp+1A0h] [rbp-B8h]
  size_t v61; // [rsp+1A8h] [rbp-B0h]
  __int16 v62; // [rsp+1B0h] [rbp-A8h]
  __m128i v63[2]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v64; // [rsp+1E0h] [rbp-78h]
  __m128i v65[6]; // [rsp+1F0h] [rbp-68h] BYREF

  v9 = a2[15];
  v40.m128i_i64[0] = a4;
  v40.m128i_i64[1] = a5;
  if ( v9 != 15 || (v22 = a2[16], v22 - 27 > 1) && v22 )
  {
    if ( !a6 )
    {
      v42 = 0;
      v44 = (char *)&byte_22CD811;
      v43 = ".o";
      goto LABEL_10;
    }
    v42 = 108;
    v10 = 0;
    v44 = "lib";
    if ( a6 == 1 )
      goto LABEL_25;
  }
  else
  {
    v42 = 0;
    v10 = 1;
    v44 = (char *)&byte_22CD811;
    if ( a6 == 1 )
    {
LABEL_25:
      v23 = v10 == 0;
      v24 = ".a";
      if ( !v23 )
        v24 = ".lib";
      v43 = v24;
      goto LABEL_10;
    }
  }
  if ( a6 )
  {
    if ( a6 == 2 )
    {
      if ( v9 == 15 )
      {
        v35 = ".dll.a";
        if ( a2[16] != 1 )
          v35 = ".lib";
        v43 = v35;
      }
      else
      {
        v11 = ".so";
        if ( v9 == 20 )
          v11 = ".a";
        v43 = v11;
      }
    }
  }
  else
  {
    v23 = v10 == 0;
    v36 = ".o";
    if ( !v23 )
      v36 = ".obj";
    v43 = v36;
  }
LABEL_10:
  v46[0] = 0;
  v45[1] = nullptr;
  v45[0] = v46;
  if ( !a7 )
    goto LABEL_11;
  v25 = *(__int64 (**)())(*(_QWORD *)a2 + 504LL);
  if ( v25 == sub_10B4590 || (v41 = a3, v38 = ((__int64 (__fastcall *)(unsigned int *))v25)(a2), a3 = v41, !v38) )
  {
    v26 = a2[12];
    if ( (unsigned int)(v26 - 1) <= 1 )
    {
      v33 = sub_111B720(a2, a3);
      if ( v9 == 15 || (v28 = "armhf", v33 != 3) )
        v28 = "arm";
      v34 = j__strlen(v28);
      v27 = a2[16];
      v29 = v34;
    }
    else
    {
      if ( (_DWORD)v26 == 37 )
      {
        if ( a2[16] == 17 )
        {
          v28 = "i686";
          v29 = j__strlen("i686");
          goto LABEL_49;
        }
      }
      else if ( (_DWORD)v26 == 38 )
      {
        v27 = a2[16];
        if ( v27 == 12 || v27 == 25 )
        {
          v28 = "x32";
          v29 = j__strlen("x32");
          goto LABEL_40;
        }
      }
      v37 = sub_2291AE0(v26);
      v27 = a2[16];
      v28 = (const char *)v37;
    }
  }
  else
  {
    v39 = sub_2293740(a2 + 4);
    v27 = a2[16];
    v28 = (const char *)v39;
  }
LABEL_40:
  if ( v27 != 17 )
  {
    v64 = 257;
    goto LABEL_42;
  }
LABEL_49:
  v30 = 259;
  v63[0].m128i_i64[0] = (__int64)"-android";
  v64 = 259;
LABEL_42:
  v60 = v28;
  v59.m128i_i64[0] = (__int64)"-";
  v61 = v29;
  v62 = 1283;
  sub_A1D840(v65, &v59, v63, v30, v31, v32);
  sub_222F820(&v57, v65);
  sub_9E6D90((__int64)v45, &v57);
  if ( (_WORD *)v57.m128i_i64[0] != v58 )
    operator delete((void *)v57.m128i_i64[0]);
LABEL_11:
  v12 = "flang_rt.";
  if ( !a8 )
    v12 = "clang_rt.";
  sub_1107FF0(v47, v12);
  v64 = 257;
  if ( *v43 )
  {
    v63[0].m128i_i64[0] = (__int64)v43;
    LOBYTE(v64) = 3;
  }
  v58[8] = 260;
  v54 = v40;
  v57.m128i_i64[0] = (__int64)v45;
  v55 = 261;
  v50 = 260;
  v49[0].m128i_i64[0] = (__int64)v47;
  v52 = 257;
  if ( v42 )
  {
    LOBYTE(v52) = 3;
    v51[0].m128i_i64[0] = (__int64)v44;
  }
  sub_A1D840(v53, v51, v49, (__int64)v53, 260, 257);
  sub_A1D840(v56, v53, &v54, (__int64)v53, v13, v14);
  sub_A1D840(&v59, v56, &v57, v15, v16, v17);
  sub_A1D840(v65, &v59, v63, v18, v19, v20);
  sub_222F820(a1, v65);
  if ( v47[0] != &v48 )
    operator delete(v47[0]);
  if ( v45[0] != v46 )
    operator delete(v45[0]);
  return a1;
}

