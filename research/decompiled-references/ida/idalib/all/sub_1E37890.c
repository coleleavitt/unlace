__int64 __fastcall sub_1E37890(
        __int64 *a1,
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
  __int64 v20; // rax
  __m128 si128; // xmm0
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // dl
  _BOOL8 v26; // rax
  __int64 v27; // rsi
  char v28; // dl
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r8
  char v31; // al
  __int64 v32; // r8
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int32 v39; // ecx
  void *v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int16 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  double v47; // xmm4_8
  double v48; // xmm5_8
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned int v51; // eax
  int v52; // [rsp+8h] [rbp-170h]
  _QWORD *v53; // [rsp+8h] [rbp-170h]
  __int64 *v54; // [rsp+10h] [rbp-168h]
  __int64 v55; // [rsp+18h] [rbp-160h]
  unsigned __int64 v56; // [rsp+18h] [rbp-160h]
  unsigned __int64 v57; // [rsp+18h] [rbp-160h]
  __int64 v58; // [rsp+20h] [rbp-158h]
  void *v59; // [rsp+20h] [rbp-158h]
  __int32 v60; // [rsp+28h] [rbp-150h]
  void *v61; // [rsp+30h] [rbp-148h] BYREF
  __int64 v62; // [rsp+38h] [rbp-140h]
  _BYTE v63[32]; // [rsp+40h] [rbp-138h] BYREF
  void *v64; // [rsp+60h] [rbp-118h] BYREF
  __int64 v65; // [rsp+68h] [rbp-110h]
  _BYTE v66[32]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __m128 v68; // [rsp+98h] [rbp-E0h]
  _BYTE v69[16]; // [rsp+A8h] [rbp-D0h] BYREF
  char v70; // [rsp+B8h] [rbp-C0h]
  __m128 v71[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v72; // [rsp+108h] [rbp-70h]

  v11 = (_QWORD *)*a1;
  v12 = *(_QWORD *)(a2 + 16);
  v13 = sub_BFB2C0(a2);
  v14 = v13;
  sub_18C7EB0(v11, v13, 0);
  v19 = sub_15F24E0(*a1, v14, v15, v16, v17, v18);
  *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) = *(_BYTE *)(v12 + 49) & 0x20
                                             | *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) & 0xDF;
  *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) = *(_BYTE *)(v12 + 49) & 0x80
                                             | *(_BYTE *)(*(_QWORD *)(v19 + 1528) + 49LL) & 0x7F;
  v61 = v63;
  v62 = 0x400000000LL;
  v64 = v66;
  v65 = 0x400000000LL;
  v20 = sub_BFB290(a2, v14, (__int64)v66, (__int64)&v64);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v70 = 0;
  v22 = v20;
  ptr = v69;
  v68 = si128;
  v23 = *(_QWORD *)(v20 + 16) >> 24;
  if ( (v23 & 0x20) != 0 )
  {
    v24 = 8LL * *(unsigned __int16 *)(v22 + 22) + 48;
    v25 = v23;
    v26 = (v23 & 0x40) != 0;
    v27 = v22 + v24 + ((v25 >> 5) & 4) + 7;
    v28 = *(_BYTE *)(v22 + 19);
    v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v28 & 0x40) != 0 )
    {
      v30 = v29 + 8 * (((*(_BYTE *)(((v22 + v24 + ((v28 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v26);
      v31 = ((unsigned __int8)v28 >> 1) & 0xF;
      if ( v31 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v30 = v29 + 8 * v26;
      v31 = ((unsigned __int8)v28 >> 1) & 0xF;
      if ( v31 != 2 )
        goto LABEL_4;
    }
    v32 = v30 + 8LL * (*(_WORD *)((v22 + v24 + ((v28 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v32 = 0;
  }
  v55 = v22;
  v58 = v32;
  v54 = *(__int64 **)(v12 + 72);
  v52 = *(_DWORD *)(v12 + 80);
  sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_1E2FA80(a1, v54, v52, 0, v58, (__int64)&v64, si128, a4, (__int64)&v61, (__int64)&ptr) )
  {
    v33 = *a1;
    v34 = a2;
LABEL_9:
    sub_BFB2C0(v34);
    v35 = 1;
    sub_190F3C0(v33, si128);
    goto LABEL_10;
  }
  v53 = sub_1E1F4E0(a1, *(_QWORD *)(v55 + 24), si128, a4);
  sub_A5E110(v71, v55);
  v37 = (unsigned int)v65;
  if ( v70 )
  {
    v38 = v68.m128_u64[0];
    if ( v68.m128_u64[0] == (unsigned int)v65 )
    {
      v40 = ptr;
      v39 = v68.m128_i32[0];
    }
    else if ( v68.m128_u64[0] > (unsigned int)v65 )
    {
      v68.m128_u64[0] = (unsigned int)v65;
      v40 = ptr;
      v39 = v65;
    }
    else
    {
      v39 = v65;
      if ( (unsigned int)v65 > v68.m128_u64[1] )
      {
        v57 = (unsigned int)v65;
        sub_2236E10(&ptr, v69, (unsigned int)v65, 1);
        v39 = v65;
        v37 = v57;
        v38 = v68.m128_u64[0];
      }
      v40 = ptr;
      if ( (char *)ptr + v38 != (char *)ptr + v37 )
      {
        v60 = v39;
        v59 = ptr;
        v56 = v37;
        memset((char *)ptr + v38, 0, v37 - v38);
        v37 = v56;
        v40 = v59;
        v39 = v60;
      }
      v68.m128_u64[0] = v37;
    }
  }
  else
  {
    v39 = v65;
    v40 = nullptr;
  }
  v72 = v40;
  v41 = sub_1E6A200(*a1, (_DWORD)v53, (_DWORD)v64, v39, 0, 0, (__int64)v71);
  v42 = (unsigned int)v62;
  *(_QWORD *)(v19 + 1544) = v41;
  if ( (_DWORD)v42 )
    sub_B7C580(*(_QWORD *)(v19 + 1528), v61, v42);
  if ( *(char *)(v12 + 49) >= 0 )
  {
    *(_BYTE *)(v19 + 1464) = 0;
    *(_QWORD *)(v19 + 1472) = v53;
  }
  v43 = (unsigned __int16 *)sub_BFB300(a2);
  v49 = sub_1E31000(a1, v43, nullptr, si128, a4, a5, a6, v47, v48, a9, a10, v44, v45, v46);
  v33 = *a1;
  v34 = a2;
  v50 = v49;
  if ( v49 == 1 )
    goto LABEL_9;
  v51 = sub_BFB2C0(a2);
  v35 = sub_1931970(v33, (__int128 *)v51, v50 & 0xFFFFFFFFFFFFFFFELL, si128, a4);
LABEL_10:
  if ( ptr != v69 )
    free(ptr);
  if ( v64 != v66 )
    free(v64);
  if ( v61 != v63 )
    free(v61);
  return v35;
}
