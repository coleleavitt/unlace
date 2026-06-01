void __fastcall sub_17B3900(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i si128,
        double a8)
{
  __int64 v8; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  char v19; // al
  char v20; // dl
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // r14
  int v26; // edx
  char v27; // r14
  unsigned int v28; // r15d
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned int *v31; // rax
  size_t v32; // r13
  const void *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // r14
  __int64 v40; // rax
  char *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+0h] [rbp-178h]
  __int64 v49; // [rsp+0h] [rbp-178h]
  __int64 *src; // [rsp+10h] [rbp-168h]
  void *srca; // [rsp+10h] [rbp-168h]
  __int64 v52; // [rsp+18h] [rbp-160h]
  bool v53; // [rsp+23h] [rbp-155h] BYREF
  __int64 v54; // [rsp+24h] [rbp-154h] BYREF
  int v55; // [rsp+2Ch] [rbp-14Ch]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __m128i v57; // [rsp+38h] [rbp-140h]
  char v58; // [rsp+48h] [rbp-130h] BYREF
  _BYTE v59[7]; // [rsp+49h] [rbp-12Fh] BYREF
  __int64 v60[3]; // [rsp+70h] [rbp-108h] BYREF
  void *v61; // [rsp+88h] [rbp-F0h]
  __int64 v62; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v63[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v65; // [rsp+D0h] [rbp-A8h] BYREF
  char v66; // [rsp+128h] [rbp-50h]
  unsigned int v67; // [rsp+130h] [rbp-48h]
  char v68; // [rsp+134h] [rbp-44h]

  if ( *(char *)(a2 + 28) < 0 )
    return;
  if ( *(_QWORD *)(a2 + 40) )
    return;
  v8 = *(_QWORD *)(a2 + 120);
  if ( (v8 & 4) == 0 && (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return;
  v12 = sub_A7AC20(a1[31], a2, a3, a4, a5, a6);
  v15 = *(_QWORD *)(a3 + 80);
  if ( (v15 & 4) != 0 )
    v16 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  v17 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
  v18 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
  v19 = v17 | v12;
  v20 = v18 | v16;
  v21 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  v22 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  v23 = v22 | v20 & 7;
  if ( v23 != (v21 | v19 & 7) )
  {
    if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
      sub_A681C0(a1[31]);
    return;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    v39 = *(_BYTE *)(a2 + 32);
    v55 = 0;
    v54 = 0;
    v27 = v39 & 7;
  }
  else
  {
    v24 = sub_17ABDE0(a2, *(double *)si128.m128i_i64, v22, v23, v21, v13, v14);
    v25 = *(_BYTE *)(a2 + 32);
    v54 = v24;
    v55 = v26;
    v27 = v25 & 7;
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 == 6 )
        return;
      v28 = v27 == 0 ? 5631 : 4291;
      goto LABEL_16;
    }
  }
  if ( !v27 )
  {
LABEL_28:
    sub_B78380(a2, a3);
    sub_167AF90((__int64)a1, a2, v35, v36, v37, v38, si128, a8);
    return;
  }
  v28 = 5325;
LABEL_16:
  v29 = sub_15F0EF0((__int64)a1, *(_DWORD *)(a2 + 56), 0, si128, a8);
  v58 = 32;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DC0);
  v48 = v29;
  v30 = *(_QWORD *)(a3 + 40);
  ptr = &v58;
  v57 = si128;
  if ( (v30 & 7) != 0 )
    BUG();
  v31 = *(unsigned int **)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v32 = *v31;
  v33 = v31 + 4;
  if ( v32 + 1 > 0x28 )
  {
    srca = v31 + 4;
    sub_2236E10(&ptr, &v58, v32 + 1, 1);
    v33 = srca;
    v41 = (char *)ptr + v57.m128i_i64[0];
LABEL_37:
    memcpy(v41, v33, v32);
    v34 = v32 + v57.m128i_i64[0];
    goto LABEL_19;
  }
  v34 = 1;
  if ( v32 )
  {
    v41 = v59;
    goto LABEL_37;
  }
LABEL_19:
  v57.m128i_i64[0] = v34;
  src = a1 + 1;
  sub_168B9F0((__int64)v63, a1 + 1, v48, v28, 0);
  v53 = (*(_BYTE *)(a3 + 28) & 0x7F) == 65;
  v52 = sub_1588420((__int64)v63, (unsigned __int8 *)&v53);
  sub_9EC740((__int64)v60, v48, ptr, v57.m128i_i64[0], 0);
  sub_1589170(v52, v60);
  if ( v61 != &v62 )
    operator delete(v61);
  sub_15F7200(v63);
  if ( (_DWORD)v54 )
  {
    sub_168B9F0((__int64)v63, src, HIDWORD(v54), 0x17E0u, 0);
    LODWORD(v60[0]) = v54 - 1;
    v40 = sub_1587D10((__int64)v63, (int *)v60);
    sub_15884C0(v40, (__int64 *)((char *)&v54 + 4));
    sub_15F7200(v63);
  }
  sub_168B9F0((__int64)v63, src, *(_DWORD *)(a3 + 24), 0x191Cu, 0);
  if ( v66 )
  {
    sub_AE9DF0(&v65, a3, 0xAu);
  }
  else if ( v68 )
  {
    v42 = sub_168B9E0(v63);
    v46 = v64;
    if ( v64 )
    {
      v49 = v42;
      v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v42 = v49;
    }
    v60[0] = v46;
    v47 = sub_1587BC0(v42, v60, v42, v43, v44, v45);
    sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v67 + 8), a3, 0xAu);
  }
  LOBYTE(v60[0]) = (*(_BYTE *)(a3 + 28) & 0x7F) == 65;
  sub_1588420((__int64)v63, (unsigned __int8 *)v60);
  sub_15F7200(v63);
  if ( !v27 )
  {
    if ( ptr != &v58 )
      free(ptr);
    goto LABEL_28;
  }
  if ( ptr != &v58 )
    free(ptr);
}
