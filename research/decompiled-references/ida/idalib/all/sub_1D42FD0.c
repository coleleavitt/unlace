__int64 __fastcall sub_1D42FD0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v5; // r12
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rax
  __m128 si128; // xmm0
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // dl
  _BOOL4 v20; // eax
  int v21; // esi
  char v22; // dl
  unsigned int v23; // esi
  unsigned int v24; // r8d
  char v25; // al
  unsigned int v26; // r8d
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int32 v33; // ecx
  void *v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _WORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r14
  unsigned int v43; // eax
  int v44; // [rsp+8h] [rbp-170h]
  __int64 v45; // [rsp+8h] [rbp-170h]
  __int64 v46; // [rsp+10h] [rbp-168h]
  __int64 v47; // [rsp+18h] [rbp-160h]
  unsigned __int64 v48; // [rsp+18h] [rbp-160h]
  unsigned __int64 v49; // [rsp+18h] [rbp-160h]
  unsigned int v50; // [rsp+20h] [rbp-158h]
  void *v51; // [rsp+20h] [rbp-158h]
  __int32 v52; // [rsp+28h] [rbp-150h]
  void *v53; // [rsp+30h] [rbp-148h] BYREF
  __int64 v54; // [rsp+38h] [rbp-140h]
  _BYTE v55[32]; // [rsp+40h] [rbp-138h] BYREF
  void *v56; // [rsp+60h] [rbp-118h] BYREF
  __int64 v57; // [rsp+68h] [rbp-110h]
  _BYTE v58[32]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __m128 v60; // [rsp+98h] [rbp-E0h]
  _BYTE v61[16]; // [rsp+A8h] [rbp-D0h] BYREF
  char v62; // [rsp+B8h] [rbp-C0h]
  __m128 v63[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v64; // [rsp+108h] [rbp-70h]

  v5 = (_QWORD *)*a1;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = sub_BFB2C0(a2);
  v8 = v7;
  sub_18C7EB0(v5, v7, 0);
  v13 = sub_15F24E0(*a1, v8, v9, v10, v11, v12);
  *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) = *(_BYTE *)(v6 + 49) & 0x20
                                             | *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) & 0xDF;
  *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) = *(_BYTE *)(v6 + 49) & 0x80
                                             | *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) & 0x7F;
  v53 = v55;
  v54 = 0x400000000LL;
  v56 = v58;
  v57 = 0x400000000LL;
  v14 = sub_BFB290(a2, v8, (__int64)v58, (__int64)&v56);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v62 = 0;
  v16 = v14;
  ptr = v61;
  v60 = si128;
  v17 = *(_QWORD *)(v14 + 16) >> 24;
  if ( (v17 & 0x20) != 0 )
  {
    v18 = 8LL * *(unsigned __int16 *)(v16 + 22) + 48;
    v19 = v17;
    v20 = (v17 & 0x40) != 0;
    v21 = v16 + v18 + ((v19 >> 5) & 4) + 7;
    v22 = *(_BYTE *)(v16 + 19);
    v23 = v21 & 0xFFFFFFF8;
    if ( (v22 & 0x40) != 0 )
    {
      v24 = v23 + 8 * (((*(_BYTE *)(((v16 + v18 + ((v22 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v20);
      v25 = ((unsigned __int8)v22 >> 1) & 0xF;
      if ( v25 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v24 = v23 + 8 * v20;
      v25 = ((unsigned __int8)v22 >> 1) & 0xF;
      if ( v25 != 2 )
        goto LABEL_4;
    }
    v26 = v24 + 8 * (*(_WORD *)((v16 + v18 + ((v22 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v26 = 0;
  }
  v47 = v16;
  v50 = v26;
  v46 = *(_QWORD *)(v6 + 72);
  v44 = *(_DWORD *)(v6 + 80);
  sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_1D633C0((_DWORD)a1, v46, v44, 0, v50, (unsigned int)&v56, (__int64)&v53, (__int64)&ptr) )
  {
    v27 = *a1;
    v28 = a2;
LABEL_9:
    sub_BFB2C0(v28);
    v29 = 1;
    sub_190F3C0(v27, si128);
    goto LABEL_10;
  }
  v45 = sub_1D51630(a1, *(_QWORD *)(v47 + 24));
  sub_A5E110(v63, v47);
  v31 = (unsigned int)v57;
  if ( v62 )
  {
    v32 = v60.m128_u64[0];
    if ( v60.m128_u64[0] == (unsigned int)v57 )
    {
      v34 = ptr;
      v33 = v60.m128_i32[0];
    }
    else if ( v60.m128_u64[0] > (unsigned int)v57 )
    {
      v60.m128_u64[0] = (unsigned int)v57;
      v34 = ptr;
      v33 = v57;
    }
    else
    {
      v33 = v57;
      if ( (unsigned int)v57 > v60.m128_u64[1] )
      {
        v49 = (unsigned int)v57;
        sub_2236E10(&ptr, v61, (unsigned int)v57, 1);
        v33 = v57;
        v31 = v49;
        v32 = v60.m128_u64[0];
      }
      v34 = ptr;
      if ( (char *)ptr + v32 != (char *)ptr + v31 )
      {
        v52 = v33;
        v51 = ptr;
        v48 = v31;
        memset((char *)ptr + v32, 0, v31 - v32);
        v31 = v48;
        v34 = v51;
        v33 = v52;
      }
      v60.m128_u64[0] = v31;
    }
  }
  else
  {
    v33 = v57;
    v34 = nullptr;
  }
  v64 = v34;
  v35 = sub_1E6A200(*a1, v45, (_DWORD)v56, v33, 0, 0, (__int64)v63);
  v36 = (unsigned int)v54;
  *(_QWORD *)(v13 + 1544) = v35;
  if ( (_DWORD)v36 )
    sub_B7C580(*(_QWORD *)(v13 + 1528), v53, v36);
  if ( *(char *)(v6 + 49) >= 0 )
  {
    *(_BYTE *)(v13 + 1464) = 0;
    *(_QWORD *)(v13 + 1472) = v45;
  }
  v37 = (_WORD *)sub_BFB300(a2);
  v41 = sub_1D42130(a1, v37, 0, si128, a4, v38, v39, v40);
  v27 = *a1;
  v28 = a2;
  v42 = v41;
  if ( v41 == 1 )
    goto LABEL_9;
  v43 = sub_BFB2C0(a2);
  v29 = sub_1931970(v27, (__int128 *)v43, v42 & 0xFFFFFFFFFFFFFFFELL, si128, a4);
LABEL_10:
  if ( ptr != v61 )
    free(ptr);
  if ( v56 != v58 )
    free(v56);
  if ( v53 != v55 )
    free(v53);
  return v29;
}
