unsigned __int64 __fastcall sub_13C9F00(
        _BYTE *a1,
        char *a2,
        size_t a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8,
        _BYTE *a9,
        bool *a10)
{
  _BYTE *v12; // rax
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r12
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  size_t v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  char *v34; // r14
  char *v35; // rbx
  unsigned __int32 v36; // ebp
  size_t v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  void *v40; // rax
  size_t v41; // r8
  unsigned __int8 v42; // bl
  unsigned __int64 *v43; // rbp
  unsigned __int64 v44; // rbx
  char *v45; // rbp
  __int64 v46; // r13
  char v47; // dl
  char v48; // al
  __int64 v49; // rdx
  size_t v50; // r13
  const void *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int8 v55; // dl
  __m128i v56; // xmm2
  size_t v57; // rax
  int v58; // eax
  __int64 v59; // [rsp+0h] [rbp-8E8h]
  unsigned int v62; // [rsp+18h] [rbp-8D0h]
  __int64 v63; // [rsp+18h] [rbp-8D0h]
  __int64 v64; // [rsp+18h] [rbp-8D0h]
  size_t v65; // [rsp+18h] [rbp-8D0h]
  __int64 v66; // [rsp+18h] [rbp-8D0h]
  __int64 v67; // [rsp+18h] [rbp-8D0h]
  _BYTE *v68; // [rsp+20h] [rbp-8C8h]
  __int64 v69; // [rsp+20h] [rbp-8C8h]
  void *v70; // [rsp+20h] [rbp-8C8h]
  __m128i si128; // [rsp+30h] [rbp-8B8h] BYREF
  _QWORD v73[4]; // [rsp+40h] [rbp-8A8h] BYREF
  __int16 v74; // [rsp+60h] [rbp-888h]
  void *src; // [rsp+70h] [rbp-878h] BYREF
  __m128i v76; // [rsp+78h] [rbp-870h]
  _BYTE v77[1032]; // [rsp+88h] [rbp-860h] BYREF
  void *ptr; // [rsp+490h] [rbp-458h] BYREF
  __m128i v79; // [rsp+498h] [rbp-450h]
  _BYTE v80[1088]; // [rsp+4A8h] [rbp-440h] BYREF

  if ( !a3 )
    return 0;
  v12 = memchr(a2, 47, a3);
  v68 = v12;
  if ( !v12 )
    return 0;
  v13 = v12 - a2;
  v14 = v13;
  v59 = *(_QWORD *)(a4 + 40);
  if ( v13 == -1 )
    return 0;
  v15 = v13;
  if ( a3 <= v13 )
    v15 = a3;
  v16 = sub_2244B30(a2, v15);
  v17 = (unsigned int)sub_2244CB0(a4 + 480, a2, v15, v16);
  v18 = (__int64 *)(*(_QWORD *)(a4 + 480) + 8 * v17);
  if ( *v18 )
  {
    if ( *v18 != -8 )
    {
      sub_13C52C0((__int64 **)&ptr, v18, 0);
      v19 = (__int64 *)ptr;
      goto LABEL_9;
    }
    --*(_DWORD *)(a4 + 496);
  }
  si128.m128i_i64[0] = (__int64)v18;
  v62 = v17;
  v25 = sub_13C4900(24, a2, v15, (__int64 *)(a4 + 504), (__int64)v18, v17);
  v26 = (unsigned __int64 *)si128.m128i_i64[0];
  *(_QWORD *)v25 = v15;
  *(_BYTE *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 8) = 0;
  *v26 = v25;
  ++*(_DWORD *)(a4 + 492);
  v27 = sub_22450D0(a4 + 480, v62);
  sub_13C52C0((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(a4 + 480) + 8LL * v27), 0);
  v19 = (__int64 *)ptr;
LABEL_9:
  v20 = *v19;
  v21 = *(_QWORD *)(*v19 + 8);
  v22 = (a1[8] >> 3) & 3;
  if ( v21 )
  {
    if ( v22 == 1 )
    {
      v28 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( *(_QWORD *)(v28 + 8) == *(_QWORD *)(v21 + 8) )
        {
          src = v77;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
          v76 = si128;
          goto LABEL_20;
        }
      }
    }
    return 0;
  }
  src = v77;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v76 = si128;
  if ( v22 != 1 )
    BUG();
  v28 = *(_QWORD *)a1;
LABEL_20:
  v63 = v20;
  sub_A1FE50(&src, (_BYTE *)(v28 + 32), (_BYTE *)(v28 + 32 + *(_QWORD *)v28));
  v29 = v76.m128i_i64[0];
  v30 = v63;
  if ( !v76.m128i_i64[0] || *((char *)src + v76.m128i_i64[0] - 1) != 47 )
  {
    if ( (unsigned __int64)(v76.m128i_i64[0] + 1) > v76.m128i_i64[1] )
    {
      sub_2236E10(&src, v77, v76.m128i_i64[0] + 1, 1);
      v29 = v76.m128i_i64[0];
      v30 = v63;
    }
    *((_BYTE *)src + v29) = 47;
    ++v76.m128i_i64[0];
  }
  v64 = v30;
  sub_A1FE50(&src, a2, v68);
  v31 = j__strlen(".framework/");
  sub_A1FE50(&src, ".framework/", &aFramework_2[v31]);
  v32 = v64;
  v33 = *(_QWORD *)(v64 + 8);
  if ( !v33 )
  {
    _InterlockedAdd64(&qword_2C86CF8, 1u);
    if ( !byte_2C86D00 )
    {
      sub_2241470(off_2C86CE0);
      v32 = v64;
      v33 = 0;
    }
    v69 = v32;
    v66 = v33;
    v54 = sub_13C4290(v59, (char *)src, v76.m128i_u64[0]);
    v33 = v66;
    v32 = v69;
    if ( !v54 )
      goto LABEL_43;
    v55 = a1[8];
    if ( ((v55 >> 3) & 3) == 1 )
      v33 = *(_QWORD *)a1;
    *(_QWORD *)(v69 + 8) = v33;
    if ( (v55 & 7) == 0 )
    {
      v56 = _mm_load_si128(&si128);
      ptr = v80;
      v79 = v56;
      if ( v76.m128i_i64[0] )
      {
        sub_9C3DB0(&ptr, (const void **)&src);
        v32 = v69;
      }
      v67 = v32;
      v57 = j__strlen(".system_framework");
      sub_A1FE50(&ptr, ".system_framework", &aSystemFramewor[v57]);
      v74 = 261;
      v73[0] = ptr;
      v73[1] = v79.m128i_i64[0];
      v58 = sub_228C1E0(v73, 0);
      v32 = v67;
      if ( !v58 )
        *(_BYTE *)(v67 + 16) = 1;
      if ( ptr != v80 )
      {
        free(ptr);
        v32 = v67;
      }
      v33 = *(_QWORD *)(v32 + 8);
    }
  }
  v34 = &a2[v14 + 1];
  *a9 = *(_BYTE *)(v32 + 16);
  *a10 = v33 != 0;
  v35 = &a2[a3];
  if ( a6 )
  {
    a6[1] = 0;
    sub_A1FE50(a6, v34, v35);
  }
  v36 = v76.m128i_i32[0];
  v37 = j__strlen("Headers/");
  sub_A1FE50(&src, "Headers/", &aPrivateheaders_0[v37 + 7]);
  if ( !a5 )
  {
    sub_A1FE50(&src, v34, v35);
    v42 = a8 == nullptr;
    v23 = sub_12ED8B0(v59, src, v76.m128i_u64[0], a8 == nullptr, 1u);
    if ( v23 )
      goto LABEL_34;
    sub_13C13C0((__int64 *)&src, (char *)src + v36, (char *)"Private", "");
    goto LABEL_54;
  }
  v38 = v76.m128i_i64[0];
  a5[1] = 0;
  v39 = 0;
  v40 = src;
  v41 = v38 - 1;
  if ( v38 - 1 > (unsigned __int64)a5[2] )
  {
    v70 = src;
    sub_2236E10(a5, a5 + 3, v41, 1);
    v41 = v38 - 1;
    v39 = a5[1];
    v40 = v70;
  }
  if ( v41 )
  {
    v65 = v41;
    memcpy((void *)(*a5 + v39), v40, v41);
    v41 = v65;
    v39 = a5[1];
  }
  a5[1] = v39 + v41;
  sub_A1FE50(&src, v34, v35);
  v42 = a8 == nullptr;
  v23 = sub_12ED8B0(v59, src, v76.m128i_u64[0], a8 == nullptr, 1u);
  if ( !v23 )
  {
    sub_13C13C0((__int64 *)&src, (char *)src + v36, (char *)"Private", "");
    sub_13C13C0(a5, (char *)(v36 + *a5), (char *)"Private", "");
LABEL_54:
    v23 = sub_12ED8B0(v59, src, v76.m128i_u64[0], v42, 1u);
    if ( v23 )
      goto LABEL_34;
LABEL_43:
    v23 = 0;
    goto LABEL_44;
  }
LABEL_34:
  if ( a8 || a7 && (*(_BYTE *)(a7 + 905) & 0x20) != 0 )
  {
    v43 = *(unsigned __int64 **)(v23 + 16);
    v44 = *v43;
    v45 = (char *)(v43 + 4);
    while ( 1 )
    {
      sub_FD9440((__int64)&ptr, v59, v45, v44, 1);
      v46 = sub_A05D80(&ptr);
      if ( !v47 )
        break;
      sub_A04D70((__int64 *)&ptr);
      if ( v46 )
      {
        v50 = j__strlen(".framework");
        v51 = (const void *)sub_228AB90(v45, v44, 0);
        if ( v50 == v52 && (!v50 || !memcmp(v51, ".framework", v50)) )
        {
          if ( (unsigned __int8)sub_13C9AB0((_QWORD *)a4, v23, v45, v44, a7, a8, (a1[8] & 7) != 0) )
            goto LABEL_44;
          goto LABEL_43;
        }
        v45 = (char *)sub_228A4B0(v45, v44, 0);
        v44 = v53;
        if ( v53 )
          continue;
      }
      goto LABEL_40;
    }
    sub_A04D70((__int64 *)&ptr);
LABEL_40:
    v48 = a1[8];
    v49 = 0;
    if ( (v48 & 0x18) == 0 )
      v49 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int8)sub_13C8900(a4, v23, v49, a7, a8, (v48 & 7) != 0) )
      goto LABEL_44;
    goto LABEL_43;
  }
LABEL_44:
  if ( src != v77 )
    free(src);
  return v23;
}
