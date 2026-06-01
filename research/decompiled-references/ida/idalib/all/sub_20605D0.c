__int64 __fastcall sub_20605D0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int32 a5, __int64 a6, __int64 a7)
{
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r15
  int v17; // eax
  char v18; // dl
  __int32 v19; // eax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r15
  __m128i v29; // xmm0
  __int64 *v30; // r12
  __int64 *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int8 v37; // dl
  __int64 v38; // rbx
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  char v41; // bl
  int v42; // eax
  int v43; // eax
  __int64 v44; // rbx
  __int64 *v45; // rsi
  __m128i v46; // [rsp+8h] [rbp-150h] BYREF
  __int64 v47; // [rsp+18h] [rbp-140h]
  void **v48; // [rsp+20h] [rbp-138h]
  __int64 v49; // [rsp+28h] [rbp-130h] BYREF
  __int64 v50; // [rsp+38h] [rbp-120h]
  void *v51[2]; // [rsp+40h] [rbp-118h] BYREF
  char *v52; // [rsp+50h] [rbp-108h]
  _BYTE v53[8]; // [rsp+60h] [rbp-F8h] BYREF
  void *v54; // [rsp+68h] [rbp-F0h]
  signed __int64 v55; // [rsp+70h] [rbp-E8h]
  __int64 v56; // [rsp+78h] [rbp-E0h]
  __int64 v57; // [rsp+80h] [rbp-D8h]
  __int64 v58; // [rsp+88h] [rbp-D0h]
  __int64 v59; // [rsp+90h] [rbp-C8h] BYREF
  int v60; // [rsp+98h] [rbp-C0h]
  __int64 v61; // [rsp+A0h] [rbp-B8h]
  int v62; // [rsp+A8h] [rbp-B0h]
  char v63; // [rsp+B0h] [rbp-A8h]
  __int64 v64; // [rsp+C0h] [rbp-98h] BYREF
  int v65; // [rsp+C8h] [rbp-90h]
  __int64 v66; // [rsp+D0h] [rbp-88h]
  int v67; // [rsp+D8h] [rbp-80h]
  char v68; // [rsp+E0h] [rbp-78h]
  _BYTE v69[104]; // [rsp+F0h] [rbp-68h] BYREF

  v11 = *(_BYTE *)(a6 + 32) == 0;
  v49 = a2;
  v46.m128i_i32[2] = a5;
  v68 = 0;
  if ( !v11 )
  {
    sub_20150B0((__int64)&v64, a6);
    v68 = 1;
  }
  v12 = sub_2050780(a1, v49, (unsigned __int64)&v64, a3, a4, a6);
  v15 = v12;
  if ( v68 )
  {
    sub_200ED00((__int64)&v64);
    if ( v15 )
      return v15;
  }
  else if ( v12 )
  {
    return v15;
  }
  v47 = *(_QWORD *)(v49 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(v47 + 8) - 17 > 1 )
  {
    v22 = &a3[a4];
    if ( a3 != v22 )
    {
      v23 = *(_QWORD *)(*a3 + 8);
      v24 = *(unsigned __int8 *)(v23 + 8);
      if ( (unsigned int)(v24 - 17) > 1 )
      {
        v45 = a3;
        while ( v22 != ++v45 )
        {
          v23 = *(_QWORD *)(*v45 + 8);
          v24 = *(unsigned __int8 *)(v23 + 8);
          if ( (unsigned int)(v24 - 17) <= 1 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v25 = *(unsigned int *)(v23 + 32);
        BYTE4(v64) = (_BYTE)v24 == 18;
        LODWORD(v64) = v25;
        v47 = sub_20C5270(v47, v64, v13, v25, v22, v14);
      }
    }
  }
  if ( a7 != v47 )
  {
    v17 = *(unsigned __int8 *)(v47 + 8);
    BYTE4(v50) = 0;
    v46.m128i_i32[3] = 0;
    v18 = v17;
    if ( (unsigned int)(v17 - 17) <= 1 )
    {
      v19 = *(_DWORD *)(v47 + 32);
      BYTE4(v50) = v18 == 18;
      v46.m128i_i32[3] = v19;
      LODWORD(v50) = v19;
    }
    v20 = a4 + 1;
    v52 = nullptr;
    *(_OWORD *)v51 = 0;
    if ( (unsigned __int64)(a4 + 1) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::reserve");
    if ( a4 == -1 )
    {
      sub_20535D0((__int64)v51, nullptr, &v49);
    }
    else
    {
      v46.m128i_i64[0] = 8 * v20;
      v26 = (_QWORD *)operator new(8 * v20);
      v27 = v46.m128i_i64[0];
      v28 = v26;
      if ( v51[0] )
      {
        operator delete(v51[0]);
        v27 = v46.m128i_i64[0];
      }
      v46.m128i_i64[0] = (__int64)v28;
      v29 = _mm_loadl_epi64(&v46);
      v52 = (char *)v28 + v27;
      v51[0] = (void *)_mm_unpacklo_epi64(v29, v29).m128i_u64[0];
      *v28 = v49;
      v51[1] = v28 + 1;
    }
    v30 = &a3[a4];
    v31 = a3;
    v48 = v51;
    v32 = a1 & 0xFFFFFFFFFFFFFFF9LL | 4;
    if ( a3 == v30 )
    {
LABEL_39:
      v41 = *(_BYTE *)(a6 + 32);
      v68 = 0;
      if ( v41 )
      {
        sub_20150B0((__int64)&v64, a6);
        v68 = 1;
      }
      v53[0] = 34;
      v58 = a1;
      v54 = v51[0];
      v53[1] = v46.m128i_i8[8];
      v55 = ((char *)v51[1] - (char *)v51[0]) >> 3;
      v56 = 0;
      v57 = 0;
      v63 = 0;
      if ( v41 )
      {
        v42 = v65;
        v65 = 0;
        v63 = 1;
        v60 = v42;
        v59 = v64;
        v43 = v67;
        v67 = 0;
        v62 = v43;
        v61 = v66;
        sub_200ED00((__int64)&v64);
      }
      v44 = *(_QWORD *)sub_20CB0D0(v49);
      sub_2051AE0((__int64)&v64, (__int64)v53);
      v15 = sub_205DE40(v44 + 1704, v47, (__int64)&v64);
      if ( v69[32] )
        sub_200ED00((__int64)v69);
      if ( v63 )
        sub_200ED00((__int64)&v59);
      if ( v51[0] )
        operator delete(v51[0]);
      return v15;
    }
    while ( 1 )
    {
      v33 = *v31;
      v64 = *v31;
      v38 = (v32 >> 1) & 3;
      if ( ((v32 >> 1) & 3) != 0 )
        break;
      v39 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v33 + 8) + 8LL) - 17;
      if ( (unsigned int)v39 > 1 )
        goto LABEL_25;
      v46.m128i_i64[0] = v32;
      v33 = (__int64)sub_205FD90(v33, 0, v39, v32, v32 >> 1, v21);
      v32 = v46.m128i_i64[0];
      v34 = (__int64 *)v51[1];
      v64 = v33;
      if ( v51[1] == v52 )
      {
LABEL_35:
        v46.m128i_i64[0] = v32;
        sub_20535D0((__int64)v48, v34, &v64);
        v35 = v46.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
        v36 = v46.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v46.m128i_i64[0] )
          goto LABEL_36;
        goto LABEL_27;
      }
LABEL_26:
      *v34 = v33;
      v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      v51[1] = v34 + 1;
      v36 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v32 )
        goto LABEL_36;
LABEL_27:
      if ( v38 == 2 )
      {
        if ( !v35 )
          goto LABEL_36;
LABEL_29:
        v37 = *(_BYTE *)(v36 + 8);
        if ( v37 != 16 )
          goto LABEL_37;
LABEL_30:
        v32 = *(_QWORD *)(v36 + 24) & 0xFFFFFFFFFFFFFFF9LL | 4;
LABEL_31:
        if ( v30 == ++v31 )
          goto LABEL_39;
      }
      else
      {
        if ( v38 == 1 && v35 )
        {
          v36 = *(_QWORD *)(v35 + 24);
          goto LABEL_29;
        }
LABEL_36:
        v36 = sub_20C3270(v35, *v31);
        v37 = *(_BYTE *)(v36 + 8);
        if ( v37 == 16 )
          goto LABEL_30;
LABEL_37:
        v40 = v36 & 0xFFFFFFFFFFFFFFF9LL;
        if ( (unsigned int)v37 - 17 > 1 )
        {
          v32 = 0;
          if ( v37 == 15 )
            v32 = v40;
          goto LABEL_31;
        }
        ++v31;
        v32 = v40 | 2;
        if ( v30 == v31 )
          goto LABEL_39;
      }
    }
    if ( v46.m128i_i32[3] && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v33 + 8) + 8LL) - 17 > 1 )
    {
      LODWORD(v50) = v46.m128i_i32[3];
      v46.m128i_i64[0] = v32;
      v33 = sub_205EF10(v50, v33);
      v32 = v46.m128i_i64[0];
      v64 = v33;
    }
LABEL_25:
    v34 = (__int64 *)v51[1];
    if ( v51[1] == v52 )
      goto LABEL_35;
    goto LABEL_26;
  }
  return v15;
}
