__int64 __fastcall sub_199E8A0(__int64 *a1, __int64 a2, double a3, __m128 a4)
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
  _BOOL8 v20; // rax
  __int64 v21; // rsi
  char v22; // dl
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r8
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // r9
  __int64 v29; // rbx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int32 v33; // ecx
  void *v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int16 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // r14
  unsigned int v44; // eax
  int v45; // [rsp+8h] [rbp-170h]
  _QWORD *v46; // [rsp+8h] [rbp-170h]
  __int64 *v47; // [rsp+10h] [rbp-168h]
  __int64 v48; // [rsp+18h] [rbp-160h]
  unsigned __int64 v49; // [rsp+18h] [rbp-160h]
  unsigned __int64 v50; // [rsp+18h] [rbp-160h]
  __int64 v51; // [rsp+20h] [rbp-158h]
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
    v23 = v21 & 0xFFFFFFFFFFFFFFF8LL;
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
    v26 = v24 + 8LL * (*(_WORD *)((v16 + v18 + ((v22 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v26 = 0;
  }
  v48 = v16;
  v51 = v26;
  v47 = *(__int64 **)(v6 + 72);
  v45 = *(_DWORD *)(v6 + 80);
  sub_BFB2C0(a2);
  if ( (unsigned __int8)sub_1995580(a1, v47, v45, 0, v51, (__int64)&v57, si128, a4, (__int64)&v54, (__int64)&ptr) )
  {
    v27 = *a1;
    sub_BFB2C0(a2);
    sub_18C3E40(v27);
    sub_190D5E0(v27, si128);
    sub_17A2E10(v27);
    sub_15F7280((__int64 *)v64, v27, nullptr, 0, 0, v28);
    if ( v64[0].m128_u64[1] )
      sub_15F2350((__int64 *)v64, (_BYTE *)v64[0].m128_u64[1]);
    goto LABEL_10;
  }
  v46 = sub_19885D0(a1, *(_QWORD *)(v48 + 24), si128, a4);
  sub_A5E110(v64, v48);
  v31 = (unsigned int)v58;
  if ( v63 )
  {
    v32 = v61.m128_u64[0];
    if ( v61.m128_u64[0] == (unsigned int)v58 )
    {
      v34 = ptr;
      v33 = v61.m128_i32[0];
    }
    else if ( v61.m128_u64[0] > (unsigned int)v58 )
    {
      v61.m128_u64[0] = (unsigned int)v58;
      v34 = ptr;
      v33 = v58;
    }
    else
    {
      v33 = v58;
      if ( (unsigned int)v58 > v61.m128_u64[1] )
      {
        v50 = (unsigned int)v58;
        sub_2236E10(&ptr, v62, (unsigned int)v58, 1);
        v33 = v58;
        v31 = v50;
        v32 = v61.m128_u64[0];
      }
      v34 = ptr;
      if ( (char *)ptr + v32 != (char *)ptr + v31 )
      {
        v53 = v33;
        v52 = ptr;
        v49 = v31;
        memset((char *)ptr + v32, 0, v31 - v32);
        v31 = v49;
        v34 = v52;
        v33 = v53;
      }
      v61.m128_u64[0] = v31;
    }
  }
  else
  {
    v33 = v58;
    v34 = nullptr;
  }
  v65 = v34;
  v35 = sub_1E6A200(*a1, (_DWORD)v46, (_DWORD)v57, v33, 0, 0, (__int64)v64);
  v36 = (unsigned int)v55;
  *(_QWORD *)(v13 + 1544) = v35;
  if ( (_DWORD)v36 )
    sub_B7C580(*(_QWORD *)(v13 + 1528), v54, v36);
  if ( *(char *)(v6 + 49) >= 0 )
  {
    *(_BYTE *)(v13 + 1464) = 0;
    *(_QWORD *)(v13 + 1472) = v46;
  }
  v37 = (unsigned __int16 *)sub_BFB300(a2);
  v41 = sub_1998500(a1, v37, 0, si128, a4, v38, v39, v40);
  v42 = *a1;
  v43 = v41;
  if ( v41 == 1 )
  {
    sub_BFB2C0(a2);
    sub_1933660(v42, si128);
LABEL_10:
    v29 = 1;
    goto LABEL_11;
  }
  v44 = sub_BFB2C0(a2);
  v29 = sub_19327E0(v42, (__int128 *)v44, v43 & 0xFFFFFFFFFFFFFFFELL, si128, a4);
LABEL_11:
  if ( ptr != v62 )
    free(ptr);
  if ( v57 != v59 )
    free(v57);
  if ( v54 != v56 )
    free(v54);
  return v29;
}
