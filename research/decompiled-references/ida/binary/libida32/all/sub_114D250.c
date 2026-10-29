__int64 __fastcall sub_114D250(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  size_t v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r13
  char *v16; // rax
  __int64 v17; // rdi
  size_t v18; // rax
  char *v19; // rsi
  char *v20; // rsi
  size_t v21; // rax
  char *v22; // rsi
  char *v23; // rsi
  size_t v24; // rax
  unsigned __int64 v25; // rdx
  const char *v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 (__fastcall *v29)(__int64, void *, void *); // r14
  bool v30; // zf
  char *v31; // rax
  __int64 v32; // rdx
  const char *v33; // r14
  size_t v34; // rax
  char *v35; // rsi
  char *v36; // rsi
  __int64 v37; // r15
  __int64 v38; // r14
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // r15
  char *v42; // [rsp+10h] [rbp-1B8h]
  _QWORD v44[2]; // [rsp+40h] [rbp-188h] BYREF
  void *ptr; // [rsp+50h] [rbp-178h] BYREF
  __m128i si128; // [rsp+58h] [rbp-170h]
  void *v47[2]; // [rsp+70h] [rbp-158h] BYREF
  char v48; // [rsp+80h] [rbp-148h]
  void *v49[2]; // [rsp+90h] [rbp-138h] BYREF
  char v50; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v51[2]; // [rsp+B0h] [rbp-118h] BYREF
  __int16 v52; // [rsp+D0h] [rbp-F8h]
  __m128i v53; // [rsp+E0h] [rbp-E8h] BYREF
  __int16 v54; // [rsp+100h] [rbp-C8h]
  __m128i v55[3]; // [rsp+110h] [rbp-B8h] BYREF
  const char *v56; // [rsp+140h] [rbp-88h] BYREF
  size_t v57; // [rsp+148h] [rbp-80h]
  __int64 v58; // [rsp+150h] [rbp-78h] BYREF

  v4 = a1;
  v5 = a2;
  if ( sub_10B8FF0(a3, 0x913u) )
  {
    v8 = j__strlen(&byte_22CD811);
    v9 = sub_2193E80(a3, 2323, &byte_22CD811, v8);
    v11 = v10;
  }
  else
  {
    if ( !sub_10B8FF0(a3, 0x8D4u) )
      goto LABEL_4;
    v24 = j__strlen(&byte_22CD811);
    v9 = sub_2193E80(a3, 2260, &byte_22CD811, v24);
    v11 = v25;
  }
  if ( v11 )
  {
    ptr = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
    sub_1007410((__int64)v47, a2, v9, v11, &ptr);
    if ( v48 )
    {
      sub_10059A0((__int64)&v56, a2, v47[0], (size_t)v47[1]);
      v26 = v56;
      v42 = (char *)&v56[16 * (unsigned int)v57];
      if ( v56 != v42 )
      {
        do
        {
          v37 = *(_QWORD *)v26;
          v38 = *((_QWORD *)v26 + 1);
          v39 = sub_2220DF0(*(_QWORD *)v26, v38);
          v40 = sub_2221120(&ptr, v37, v38, v39);
          if ( v40 == -1 )
            sub_1005BB0((__int64 **)v55, (__int64 *)ptr + si128.m128i_u32[0], 1);
          else
            sub_1005BB0((__int64 **)v55, (__int64 *)ptr + v40, 1);
          v41 = v55[0].m128i_i64[0];
          sub_1005BB0((__int64 **)v55, (__int64 *)ptr + si128.m128i_u32[0], 1);
          if ( v55[0].m128i_i64[0] != v41 )
          {
            v29 = *(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a3 + 16LL);
            v30 = *(_BYTE *)(*(_QWORD *)v41 + 8LL) == 0;
            v31 = "-";
            v54 = 261;
            if ( !v30 )
              v31 = "+";
            v53.m128i_i64[0] = *(_QWORD *)v26;
            v32 = *((_QWORD *)v26 + 1);
            v51[0].m128i_i64[0] = (__int64)v31;
            v53.m128i_i64[1] = v32;
            v52 = 259;
            sub_A1D840(v55, v51, &v53, 259, v27, v28);
            sub_222F820(v49, v55);
            v33 = (const char *)v29(a3, v49[0], v49[1]);
            v44[0] = v33;
            v34 = 0;
            if ( v33 )
              v34 = j__strlen(v33);
            v44[1] = v34;
            v35 = *(char **)(a4 + 8);
            if ( v35 == *(char **)(a4 + 16) )
            {
              sub_1052040(a4, v35, v44);
            }
            else
            {
              *(_QWORD *)v35 = v33;
              v36 = v35 + 16;
              *((_QWORD *)v36 - 1) = v34;
              *(_QWORD *)(a4 + 8) = v36;
            }
            if ( v49[0] != &v50 )
              operator delete(v49[0]);
          }
          v26 += 16;
        }
        while ( v42 != v26 );
        v4 = a1;
        v5 = a2;
        v42 = (char *)v56;
      }
      if ( v42 != (char *)&v58 )
        free(v42);
    }
    v13 = ptr;
    if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
    {
      v14 = 0;
      v15 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      v16 = (char *)ptr;
      do
      {
        v17 = *(_QWORD *)&v16[v14];
        if ( v17 && v17 != -8 )
        {
          operator delete();
          v16 = (char *)ptr;
        }
        v14 += 8;
      }
      while ( v14 != v15 );
      v13 = v16;
    }
    free(v13);
  }
LABEL_4:
  if ( (unsigned __int8)sub_2193B10(a3, 2969, 2764, 0) )
  {
    v56 = "+wavefrontsize64";
    v21 = j__strlen("+wavefrontsize64");
    v22 = *(char **)(a4 + 8);
    v57 = v21;
    if ( v22 == *(char **)(a4 + 16) )
    {
      sub_1052040(a4, v22, &v56);
    }
    else
    {
      *(_QWORD *)v22 = "+wavefrontsize64";
      v23 = v22 + 16;
      *((_QWORD *)v23 - 1) = v21;
      *(_QWORD *)(a4 + 8) = v23;
    }
  }
  if ( (unsigned __int8)sub_2193B10(a3, 2243, 2514, 0) )
  {
    v56 = "+precise-memory";
    v18 = j__strlen("+precise-memory");
    v19 = *(char **)(a4 + 8);
    v57 = v18;
    if ( v19 == *(char **)(a4 + 16) )
    {
      sub_1052040(a4, v19, &v56);
    }
    else
    {
      *(_QWORD *)v19 = "+precise-memory";
      v20 = v19 + 16;
      *((_QWORD *)v20 - 1) = v18;
      *(_QWORD *)(a4 + 8) = v20;
    }
  }
  return sub_11A89F0(v4, v5, a3, a4, 48);
}

