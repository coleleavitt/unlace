__int64 __fastcall sub_1CE8430(__int64 a1, __int64 a2, double a3, __m128 a4)
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
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int32 v34; // ecx
  void *v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _WORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r14
  unsigned int v44; // eax
  int v45; // [rsp+8h] [rbp-170h]
  __int64 v46; // [rsp+8h] [rbp-170h]
  __int64 v47; // [rsp+10h] [rbp-168h]
  __int64 v48; // [rsp+18h] [rbp-160h]
  unsigned __int64 v49; // [rsp+18h] [rbp-160h]
  unsigned __int64 v50; // [rsp+18h] [rbp-160h]
  unsigned int v51; // [rsp+20h] [rbp-158h]
  void *v52; // [rsp+20h] [rbp-158h]
  __int32 v53; // [rsp+28h] [rbp-150h]
  void *v54; // [rsp+30h] [rbp-148h] BYREF
  __int64 v55; // [rsp+38h] [rbp-140h]
  _BYTE v56[32]; // [rsp+40h] [rbp-138h] BYREF
  void *v57; // [rsp+60h] [rbp-118h] BYREF
  __int64 v58; // [rsp+68h] [rbp-110h]
  _BYTE v59[32]; // [rsp+70h] [rbp-108h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __m128 v61; // [rsp+98h] [rbp-E0h]
  _BYTE v62[16]; // [rsp+A8h] [rbp-D0h] BYREF
  char v63; // [rsp+B8h] [rbp-C0h]
  __m128 v64[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v65; // [rsp+108h] [rbp-70h]

  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = sub_BFB2C0(a2);
  v8 = v7;
  sub_18C7EB0(v5, v7, 0);
  v13 = sub_15F24E0(*(_QWORD *)a1, v8, v9, v10, v11, v12);
  *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) = *(_BYTE *)(v6 + 49) & 0x20
                                             | *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) & 0xDF;
  *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) = *(_BYTE *)(v6 + 49) & 0x80
                                             | *(_BYTE *)(*(_QWORD *)(v13 + 1528) + 49LL) & 0x7F;
  v54 = v56;
  v55 = 0x400000000LL;
  v57 = v59;
  v58 = 0x400000000LL;
  v14 = sub_BFB290(a2, v8, (__int64)v59, (__int64)&v57);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v63 = 0;
  v16 = v14;
  ptr = v62;
  v61 = si128;
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
  v48 = v16;
  v51 = v26;
  v47 = *(_QWORD *)(v6 + 72);
  v45 = *(_DWORD *)(v6 + 80);
  sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_1D0C210(a1, v47, v45, 0, v51, (unsigned int)&v57, (__int64)&v54, (__int64)&ptr) )
  {
    v27 = *(_QWORD *)a1;
    v28 = a2;
LABEL_9:
    sub_BFB2C0(v28);
    v29 = v27;
    v30 = 1;
    sub_190F3C0(v29, si128);
    goto LABEL_10;
  }
  v46 = sub_1CF6840(a1, *(_QWORD *)(v48 + 24));
  sub_A5E110(v64, v48);
  v32 = (unsigned int)v58;
  if ( v63 )
  {
    v33 = v61.m128_u64[0];
    if ( v61.m128_u64[0] == (unsigned int)v58 )
    {
      v35 = ptr;
      v34 = v61.m128_i32[0];
    }
    else if ( v61.m128_u64[0] > (unsigned int)v58 )
    {
      v61.m128_u64[0] = (unsigned int)v58;
      v35 = ptr;
      v34 = v58;
    }
    else
    {
      v34 = v58;
      if ( (unsigned int)v58 > v61.m128_u64[1] )
      {
        v50 = (unsigned int)v58;
        sub_2236E10(&ptr, v62, (unsigned int)v58, 1);
        v34 = v58;
        v32 = v50;
        v33 = v61.m128_u64[0];
      }
      v35 = ptr;
      if ( (char *)ptr + v33 != (char *)ptr + v32 )
      {
        v53 = v34;
        v52 = ptr;
        v49 = v32;
        memset((char *)ptr + v33, 0, v32 - v33);
        v32 = v49;
        v35 = v52;
        v34 = v53;
      }
      v61.m128_u64[0] = v32;
    }
  }
  else
  {
    v34 = v58;
    v35 = nullptr;
  }
  v65 = v35;
  v36 = sub_1E6A200(*(_QWORD *)a1, v46, (_DWORD)v57, v34, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), (__int64)v64);
  v37 = (unsigned int)v55;
  *(_QWORD *)(v13 + 1544) = v36;
  if ( (_DWORD)v37 )
    sub_B7C580(*(_QWORD *)(v13 + 1528), v54, v37);
  if ( *(char *)(v6 + 49) >= 0 )
  {
    *(_BYTE *)(v13 + 1464) = 0;
    *(_QWORD *)(v13 + 1472) = v46;
  }
  v38 = (_WORD *)sub_BFB300(a2);
  v42 = sub_1CE7590((__int64 *)a1, v38, 0, si128, a4, v39, v40, v41);
  v27 = *(_QWORD *)a1;
  v28 = a2;
  v43 = v42;
  if ( v42 == 1 )
    goto LABEL_9;
  v44 = sub_BFB2C0(a2);
  v30 = sub_1931970(v27, (__int128 *)v44, v43 & 0xFFFFFFFFFFFFFFFELL, si128, a4);
LABEL_10:
  if ( ptr != v62 )
    free(ptr);
  if ( v57 != v59 )
    free(v57);
  if ( v54 != v56 )
    free(v54);
  return v30;
}
