__int64 __fastcall sub_1149860(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rdi
  const __m128i *v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  _QWORD *v13; // r12
  _BYTE *v14; // rbp
  size_t v15; // r13
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const __m128i *v29; // [rsp+10h] [rbp-298h]
  __int64 v30; // [rsp+28h] [rbp-280h]
  __int32 v31; // [rsp+30h] [rbp-278h]
  __int32 v32; // [rsp+34h] [rbp-274h]
  _QWORD v34[2]; // [rsp+40h] [rbp-268h] BYREF
  void *v35[2]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v36; // [rsp+60h] [rbp-248h] BYREF
  __m128i v37[2]; // [rsp+70h] [rbp-238h] BYREF
  __int16 v38; // [rsp+90h] [rbp-218h]
  __m128i v39[2]; // [rsp+A0h] [rbp-208h] BYREF
  __int16 v40; // [rsp+C0h] [rbp-1E8h]
  __m128i v41[3]; // [rsp+D0h] [rbp-1D8h] BYREF
  __m128i v42[2]; // [rsp+100h] [rbp-1A8h] BYREF
  __int16 v43; // [rsp+120h] [rbp-188h]
  __m128i v44[3]; // [rsp+130h] [rbp-178h] BYREF
  __m128i v45[2]; // [rsp+160h] [rbp-148h] BYREF
  __int16 v46; // [rsp+180h] [rbp-128h]
  __m128i v47[3]; // [rsp+190h] [rbp-118h] BYREF
  __m128i v48; // [rsp+1C0h] [rbp-E8h] BYREF
  __int16 v49; // [rsp+1E0h] [rbp-C8h]
  __m128i s1; // [rsp+1F0h] [rbp-B8h] BYREF
  _BYTE v51[32]; // [rsp+200h] [rbp-A8h] BYREF
  void *ptr; // [rsp+220h] [rbp-88h] BYREF
  __int64 v53; // [rsp+228h] [rbp-80h]
  _BYTE v54[120]; // [rsp+230h] [rbp-78h] BYREF

  v34[0] = a2;
  v34[1] = a3;
  ptr = v54;
  v53 = 0x400000000LL;
  sub_22239B0(v34, &ptr, 10, 0xFFFFFFFFLL, 1);
  v4 = ptr;
  v29 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v53);
  if ( v29 == ptr )
  {
    LODWORD(v5) = 1;
    goto LABEL_28;
  }
  v5 = (const __m128i *)ptr;
  v32 = -1;
  v31 = -1;
  v30 = a1 + 80;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v48 = _mm_loadu_si128(v5);
          v6 = v48.m128i_i64[1];
          v7 = sub_22233F0(&v48, asc_22BE270, 6, -1) + 1;
          v47[0].m128i_i8[0] = 61;
          if ( v7 > v48.m128i_i64[1] )
            v7 = v48.m128i_u64[1];
          s1.m128i_i64[0] = v48.m128i_i64[0];
          v8 = v48.m128i_i64[1] - v6 + v7;
          if ( v8 > v48.m128i_i64[1] )
            v8 = v48.m128i_u64[1];
          s1.m128i_i64[1] = v8;
          v9 = sub_2222D70(&s1, v47, 1, 0);
          if ( v9 == -1 )
          {
            v15 = s1.m128i_u64[1];
            v13 = (_QWORD *)s1.m128i_i64[0];
            v12 = 0;
            v14 = nullptr;
          }
          else
          {
            v10 = s1.m128i_i64[1];
            v11 = v9 + 1;
            if ( v9 + 1 > s1.m128i_i64[1] )
            {
              v11 = s1.m128i_i64[1];
              v12 = 0;
            }
            else
            {
              v12 = s1.m128i_i64[1] - v11;
            }
            v13 = (_QWORD *)s1.m128i_i64[0];
            v14 = (_BYTE *)(s1.m128i_i64[0] + v11);
            if ( v9 <= s1.m128i_i64[1] )
              v10 = v9;
            v15 = v10;
          }
          if ( v15 == 17 )
            break;
          if ( j__strlen("HIP_VERSION_MINOR") == v15 )
          {
            if ( !v15 )
              goto LABEL_25;
            goto LABEL_24;
          }
          if ( j__strlen("HIP_VERSION_PATCH") != v15 )
            goto LABEL_17;
          if ( v15 )
            goto LABEL_46;
LABEL_34:
          s1.m128i_i64[0] = (__int64)v51;
          if ( v14 )
          {
            sub_1148360(&s1, v14, (__int64)&v14[v12]);
          }
          else
          {
            s1.m128i_i64[1] = 0;
            v51[0] = 0;
          }
          sub_9E6D90(v30, &s1);
          if ( (_BYTE *)s1.m128i_i64[0] == v51 )
            goto LABEL_17;
          operator delete((void *)s1.m128i_i64[0]);
          if ( v29 == ++v5 )
            goto LABEL_18;
        }
        if ( *v13 ^ 0x535245565F504948LL | v13[1] ^ 0x4F4A414D5F4E4F49LL || *((_BYTE *)v13 + 16) != 82 )
          break;
        if ( (unsigned __int8)sub_2223C30(v14, v12, 0, &s1) || s1.m128i_i64[0] != s1.m128i_u32[0] )
        {
LABEL_27:
          v4 = ptr;
          LODWORD(v5) = 1;
          goto LABEL_28;
        }
        v31 = s1.m128i_i32[0];
        if ( v29 == ++v5 )
          goto LABEL_18;
      }
      if ( j__strlen("HIP_VERSION_MINOR") == 17 )
        break;
      if ( j__strlen("HIP_VERSION_PATCH") == 17 )
        goto LABEL_46;
LABEL_17:
      if ( v29 == ++v5 )
        goto LABEL_18;
    }
LABEL_24:
    if ( memcmp(v13, "HIP_VERSION_MINOR", v15) )
    {
      if ( j__strlen("HIP_VERSION_PATCH") != v15 )
        goto LABEL_17;
LABEL_46:
      if ( memcmp(v13, "HIP_VERSION_PATCH", v15) )
        goto LABEL_17;
      goto LABEL_34;
    }
LABEL_25:
    if ( (unsigned __int8)sub_2223C30(v14, v12, 0, &s1) || s1.m128i_i64[0] != s1.m128i_u32[0] )
      goto LABEL_27;
    v32 = s1.m128i_i32[0];
    ++v5;
  }
  while ( v29 != v5 );
LABEL_18:
  LOBYTE(v5) = v31 == -1 || v32 == -1;
  if ( !(_BYTE)v5 )
  {
    v43 = 265;
    v17 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 64) = v31;
    v18 = v32 & 0x7FFFFFFF | v17 & 0x80000000;
    v42[0].m128i_i32[0] = v32;
    *(_DWORD *)(a1 + 68) = v18;
    v46 = 259;
    *(_BYTE *)(a1 + 71) = HIBYTE(v18) | 0x80;
    v49 = 260;
    v48.m128i_i64[0] = a1 + 80;
    v40 = 259;
    v37[0].m128i_i32[0] = v31;
    v45[0].m128i_i64[0] = (__int64)".";
    v39[0].m128i_i64[0] = (__int64)".";
    v38 = 265;
    sub_A1D840(v41, v37, v39, 265, 265, v16);
    sub_A1D840(v44, v41, v42, v19, v20, v21);
    sub_A1D840(v47, v44, v45, v22, v23, v24);
    sub_A1D840(&s1, v47, &v48, v25, v26, v27);
    sub_222F820(v35, &s1);
    sub_9E6D90(a1 + 32, v35);
    if ( v35[0] != &v36 )
      operator delete(v35[0]);
  }
  v4 = ptr;
LABEL_28:
  if ( v4 != v54 )
    free(v4);
  return (unsigned int)v5;
}

