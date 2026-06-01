__int64 __fastcall sub_1782010(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rax
  __m128 si128; // xmm0
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // dl
  _BOOL8 v17; // rax
  __int64 v18; // rsi
  char v19; // dl
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // rbp
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rbx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int32 v31; // ecx
  void *v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r14
  unsigned int v41; // eax
  int v42; // [rsp+8h] [rbp-170h]
  void **v43; // [rsp+8h] [rbp-170h]
  __int64 *v44; // [rsp+10h] [rbp-168h]
  __int64 v45; // [rsp+18h] [rbp-160h]
  unsigned __int64 v46; // [rsp+18h] [rbp-160h]
  unsigned __int64 v47; // [rsp+18h] [rbp-160h]
  __int64 v48; // [rsp+20h] [rbp-158h]
  void *v49; // [rsp+20h] [rbp-158h]
  __int32 v50; // [rsp+28h] [rbp-150h]
  void *v51; // [rsp+30h] [rbp-148h] BYREF
  __int64 v52; // [rsp+38h] [rbp-140h]
  _BYTE v53[32]; // [rsp+40h] [rbp-138h] BYREF
  void *v54; // [rsp+60h] [rbp-118h] BYREF
  __int64 v55; // [rsp+68h] [rbp-110h]
  _BYTE v56[32]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __m128 v58; // [rsp+98h] [rbp-E0h]
  _BYTE v59[16]; // [rsp+A8h] [rbp-D0h] BYREF
  char v60; // [rsp+B8h] [rbp-C0h]
  __m128 v61[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v62; // [rsp+108h] [rbp-70h]

  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (unsigned int)sub_BFB2C0(a2);
  sub_18C7EB0(v3, v5, 0);
  v10 = sub_15F24E0(*a1, v5, v6, v7, v8, v9);
  *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) = *(_BYTE *)(v4 + 49) & 0x20
                                             | *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) & 0xDF;
  *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) = *(_BYTE *)(v4 + 49) & 0x80
                                             | *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) & 0x7F;
  v51 = v53;
  v52 = 0x400000000LL;
  v54 = v56;
  v55 = 0x400000000LL;
  v11 = sub_BFB290(a2, v5, (__int64)v56, (__int64)&v54);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v60 = 0;
  v13 = v11;
  ptr = v59;
  v58 = si128;
  v14 = *(_QWORD *)(v11 + 16) >> 24;
  if ( (v14 & 0x20) != 0 )
  {
    v15 = 8LL * *(unsigned __int16 *)(v13 + 22) + 48;
    v16 = v14;
    v17 = (v14 & 0x40) != 0;
    v18 = v13 + v15 + ((v16 >> 5) & 4) + 7;
    v19 = *(_BYTE *)(v13 + 19);
    v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 0x40) != 0 )
    {
      v21 = v20 + 8 * (((*(_BYTE *)(((v13 + v15 + ((v19 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v17);
      v22 = ((unsigned __int8)v19 >> 1) & 0xF;
      if ( v22 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v21 = v20 + 8 * v17;
      v22 = ((unsigned __int8)v19 >> 1) & 0xF;
      if ( v22 != 2 )
        goto LABEL_4;
    }
    v23 = v21 + 8LL * (*(_WORD *)((v13 + v15 + ((v19 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v23 = 0;
  }
  v45 = v13;
  v48 = v23;
  v44 = *(__int64 **)(v4 + 72);
  v42 = *(_DWORD *)(v4 + 80);
  sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_17789F0(
                          (unsigned int *)a1,
                          v44,
                          v42,
                          0,
                          v48,
                          (__int64)&v54,
                          si128,
                          (__int64)&v51,
                          (__int64)&ptr) )
  {
    v24 = *a1;
    v25 = a2;
LABEL_9:
    v26 = sub_BFB2C0(v25);
    v27 = 1;
    sub_190F3C0(v24, v26, 0);
    goto LABEL_10;
  }
  v43 = sub_176A2F0(a1, *(_QWORD *)(v45 + 24), si128);
  sub_A5E110(v61, v45);
  v29 = (unsigned int)v55;
  if ( v60 )
  {
    v30 = v58.m128_u64[0];
    if ( v58.m128_u64[0] == (unsigned int)v55 )
    {
      v32 = ptr;
      v31 = v58.m128_i32[0];
    }
    else if ( v58.m128_u64[0] > (unsigned int)v55 )
    {
      v58.m128_u64[0] = (unsigned int)v55;
      v32 = ptr;
      v31 = v55;
    }
    else
    {
      v31 = v55;
      if ( (unsigned int)v55 > v58.m128_u64[1] )
      {
        v47 = (unsigned int)v55;
        sub_2236E10(&ptr, v59, (unsigned int)v55, 1);
        v31 = v55;
        v29 = v47;
        v30 = v58.m128_u64[0];
      }
      v32 = ptr;
      if ( (char *)ptr + v30 != (char *)ptr + v29 )
      {
        v50 = v31;
        v49 = ptr;
        v46 = v29;
        memset((char *)ptr + v30, 0, v29 - v30);
        v29 = v46;
        v32 = v49;
        v31 = v50;
      }
      v58.m128_u64[0] = v29;
    }
  }
  else
  {
    v31 = v55;
    v32 = nullptr;
  }
  v62 = v32;
  v33 = sub_1E6A200(*a1, (_DWORD)v43, (_DWORD)v54, v31, 0, 0, (__int64)v61);
  v34 = (unsigned int)v52;
  *(_QWORD *)(v10 + 1544) = v33;
  if ( (_DWORD)v34 )
    sub_B7C580(*(_QWORD *)(v10 + 1528), v51, v34);
  if ( *(char *)(v4 + 49) >= 0 )
  {
    *(_BYTE *)(v10 + 1464) = 0;
    *(_QWORD *)(v10 + 1472) = v43;
  }
  v35 = (unsigned __int16 *)sub_BFB300(a2);
  v39 = sub_177B9C0(a1, v35, 0, *(double *)si128.m128_u64, v36, v37, v38);
  v24 = *a1;
  v25 = a2;
  v40 = v39;
  if ( v39 == 1 )
    goto LABEL_9;
  v41 = sub_BFB2C0(a2);
  v27 = sub_1931970(v24, v41, v40 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_10:
  if ( ptr != v59 )
    free(ptr);
  if ( v54 != v56 )
    free(v54);
  if ( v51 != v53 )
    free(v51);
  return v27;
}
