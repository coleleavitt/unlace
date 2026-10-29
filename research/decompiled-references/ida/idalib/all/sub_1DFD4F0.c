__int64 __fastcall sub_1DFD4F0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  _QWORD *v11; // r12
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128 si128; // xmm0
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // dl
  _BOOL8 v27; // rax
  __int64 v28; // rsi
  char v29; // dl
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r9
  char v32; // al
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rbx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int32 v42; // ecx
  void *v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _WORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  double v50; // xmm4_8
  double v51; // xmm5_8
  __int64 v52; // rax
  __int64 v53; // r14
  unsigned int v54; // eax
  int v55; // [rsp+8h] [rbp-170h]
  _QWORD *v56; // [rsp+8h] [rbp-170h]
  __int64 v57; // [rsp+10h] [rbp-168h]
  __int64 v58; // [rsp+18h] [rbp-160h]
  unsigned __int64 v59; // [rsp+18h] [rbp-160h]
  unsigned __int64 v60; // [rsp+18h] [rbp-160h]
  __int64 v61; // [rsp+20h] [rbp-158h]
  void *v62; // [rsp+20h] [rbp-158h]
  __int32 v63; // [rsp+28h] [rbp-150h]
  void *v64; // [rsp+30h] [rbp-148h] BYREF
  __int64 v65; // [rsp+38h] [rbp-140h]
  _BYTE v66[32]; // [rsp+40h] [rbp-138h] BYREF
  void *v67; // [rsp+60h] [rbp-118h] BYREF
  __int64 v68; // [rsp+68h] [rbp-110h]
  _BYTE v69[32]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __m128 v71; // [rsp+98h] [rbp-E0h]
  _BYTE v72[16]; // [rsp+A8h] [rbp-D0h] BYREF
  char v73; // [rsp+B8h] [rbp-C0h]
  __m128 v74[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v75; // [rsp+108h] [rbp-70h]

  v11 = *(_QWORD **)a1;
  v12 = *(_QWORD *)(a2 + 16);
  v13 = sub_BFB2C0(a2);
  v14 = v13;
  sub_18C7EB0(v11, v13, 0);
  v19 = sub_15F24E0(*(_QWORD *)a1, v14, v15, v16, v17, v18);
  *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) = *(_BYTE *)(v12 + 49) & 0x20
                                             | *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) & 0xDF;
  v20 = *(_QWORD *)(v19 + 1528);
  *(_BYTE *)(v20 + 49) = *(_BYTE *)(v12 + 49) & 0x80 | *(_BYTE *)(v20 + 49) & 0x7F;
  v64 = v66;
  v65 = 0x400000000LL;
  v67 = v69;
  v68 = 0x400000000LL;
  v21 = sub_BFB290(a2, v14, (__int64)v69, v20);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v73 = 0;
  v23 = v21;
  ptr = v72;
  v71 = si128;
  v24 = *(_QWORD *)(v21 + 16) >> 24;
  if ( (v24 & 0x20) != 0 )
  {
    v25 = 8LL * *(unsigned __int16 *)(v23 + 22) + 48;
    v26 = v24;
    v27 = (v24 & 0x40) != 0;
    v28 = v23 + v25 + ((v26 >> 5) & 4) + 7;
    v29 = *(_BYTE *)(v23 + 19);
    v30 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v29 & 0x40) != 0 )
    {
      v31 = v30 + 8 * (((*(_BYTE *)(((v23 + v25 + ((v29 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v27);
      v32 = ((unsigned __int8)v29 >> 1) & 0xF;
      if ( v32 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v31 = v30 + 8 * v27;
      v32 = ((unsigned __int8)v29 >> 1) & 0xF;
      if ( v32 != 2 )
        goto LABEL_4;
    }
    v33 = v31 + 8LL * (*(_WORD *)((v23 + v25 + ((v29 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v33 = 0;
  }
  v61 = v33;
  v58 = v23;
  v57 = *(_QWORD *)(v12 + 72);
  v55 = *(_DWORD *)(v12 + 80);
  v34 = sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_1DE36B0(
                          a1,
                          v34,
                          v57,
                          v55,
                          0,
                          v61,
                          si128,
                          a4,
                          (__int64)&v67,
                          (__int64)&v64,
                          (__int64)&ptr,
                          nullptr) )
  {
    v35 = *(_QWORD *)a1;
    v36 = a2;
LABEL_9:
    sub_BFB2C0(v36);
    v37 = v35;
    v38 = 1;
    sub_190F3C0(v37, si128);
    goto LABEL_10;
  }
  v56 = sub_1DD1AB0(a1, *(_QWORD *)(v58 + 24), si128, a4);
  sub_A5E110(v74, v58);
  v40 = (unsigned int)v68;
  if ( v73 )
  {
    v41 = v71.m128_u64[0];
    if ( v71.m128_u64[0] == (unsigned int)v68 )
    {
      v43 = ptr;
      v42 = v71.m128_i32[0];
    }
    else if ( v71.m128_u64[0] > (unsigned int)v68 )
    {
      v71.m128_u64[0] = (unsigned int)v68;
      v43 = ptr;
      v42 = v68;
    }
    else
    {
      v42 = v68;
      if ( (unsigned int)v68 > v71.m128_u64[1] )
      {
        v60 = (unsigned int)v68;
        sub_2236E10(&ptr, v72, (unsigned int)v68, 1);
        v42 = v68;
        v40 = v60;
        v41 = v71.m128_u64[0];
      }
      v43 = ptr;
      if ( (char *)ptr + v41 != (char *)ptr + v40 )
      {
        v63 = v42;
        v62 = ptr;
        v59 = v40;
        memset((char *)ptr + v41, 0, v40 - v41);
        v40 = v59;
        v43 = v62;
        v42 = v63;
      }
      v71.m128_u64[0] = v40;
    }
  }
  else
  {
    v42 = v68;
    v43 = nullptr;
  }
  v75 = v43;
  v44 = sub_1E6A200(
          *(_QWORD *)a1,
          (_DWORD)v56,
          (_DWORD)v67,
          v42,
          *(_DWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 48),
          (__int64)v74);
  v45 = (unsigned int)v65;
  *(_QWORD *)(v19 + 1544) = v44;
  if ( (_DWORD)v45 )
    sub_B7C580(*(_QWORD *)(v19 + 1528), v64, v45);
  if ( *(char *)(v12 + 49) >= 0 )
  {
    *(_BYTE *)(v19 + 1464) = 0;
    *(_QWORD *)(v19 + 1472) = v56;
  }
  v46 = (_WORD *)sub_BFB300(a2);
  v52 = sub_1DF6720((__int64 *)a1, v46, nullptr, si128, a4, a5, a6, v50, v51, a9, a10, v47, v48, v49);
  v35 = *(_QWORD *)a1;
  v36 = a2;
  v53 = v52;
  if ( v52 == 1 )
    goto LABEL_9;
  v54 = sub_BFB2C0(a2);
  v38 = sub_1931970(v35, (__int128 *)v54, v53 & 0xFFFFFFFFFFFFFFFELL, si128, a4);
LABEL_10:
  if ( ptr != v72 )
    free(ptr);
  if ( v67 != v69 )
    free(v67);
  if ( v64 != v66 )
    free(v64);
  return v38;
}
