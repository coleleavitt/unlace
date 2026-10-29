_QWORD *__fastcall sub_1E39AE0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  unsigned __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  const __m128i *v14; // rsi
  unsigned int v15; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // r11d
  __int64 v27; // r15
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  int v36; // esi
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  int v40; // esi
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // rbx
  __int64 v60; // rax
  _QWORD *v61; // rax
  unsigned __int64 v62; // [rsp+8h] [rbp-300h]
  __int64 v63; // [rsp+8h] [rbp-300h]
  __int64 v64; // [rsp+8h] [rbp-300h]
  __int64 v65; // [rsp+8h] [rbp-300h]
  __int64 v66; // [rsp+8h] [rbp-300h]
  char v67; // [rsp+1Fh] [rbp-2E9h] BYREF
  __int64 v68; // [rsp+20h] [rbp-2E8h] BYREF
  __int64 v69; // [rsp+28h] [rbp-2E0h] BYREF
  __int128 v70; // [rsp+30h] [rbp-2D8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-2C8h]
  unsigned __int8 *v72; // [rsp+50h] [rbp-2B8h] BYREF
  char v73; // [rsp+A8h] [rbp-260h]
  unsigned int v74; // [rsp+B0h] [rbp-258h]
  char v75; // [rsp+B4h] [rbp-254h]
  void *v76[2]; // [rsp+C0h] [rbp-248h] BYREF
  _BYTE v77[96]; // [rsp+D0h] [rbp-238h] BYREF
  void *ptr; // [rsp+130h] [rbp-1D8h]
  __int64 v79; // [rsp+138h] [rbp-1D0h]
  _WORD v80[49]; // [rsp+140h] [rbp-1C8h] BYREF
  char v81; // [rsp+1A2h] [rbp-166h]
  void *v82[2]; // [rsp+1B0h] [rbp-158h] BYREF
  _BYTE v83[256]; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v84; // [rsp+2C0h] [rbp-48h]

  v7 = sub_BBF290(a2);
  v8 = (_QWORD *)sub_1E38470(*a1, *(_DWORD *)(a2 + 24), v7, a1[4], 0, a3, a4, a5);
  if ( !v8 )
    return v8;
  v84 = 0;
  v82[0] = v83;
  v82[1] = (void *)0x800000000LL;
  v9 = *(_QWORD *)(a2 + 160);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9 && (v9 & 4) != 0 )
  {
    if ( !v10 )
      goto LABEL_8;
    v10 = (_QWORD *)*v10;
  }
  v11 = *a1;
  if ( !v10 )
    goto LABEL_9;
  v12 = *(_DWORD *)v10;
  v13 = a1[4];
  v14 = (const __m128i *)(v10 + 2);
  LODWORD(v84) = v12;
  HIDWORD(v84) = v14[-1].m128i_i32[1];
  if ( !(unsigned __int8)sub_1DD74F0(v11, v14, v14[-1].m128i_u32[2], v13, (__int64)v82, a3, a4) )
  {
LABEL_8:
    v11 = *a1;
LABEL_9:
    v70 = 0;
    v80[48] = 0;
    v76[0] = v77;
    ptr = v80;
    v15 = *(_DWORD *)(a2 + 24);
    v76[1] = (void *)0x400000000LL;
    v79 = 0x400000000LL;
    v81 = 0;
    v71 = 0;
    if ( (unsigned __int8)sub_1CCEE60(
                            v11,
                            (__int64)v8,
                            v15,
                            (__int64)v82,
                            (__int64)&v70,
                            0,
                            (__m128)0LL,
                            a4,
                            (__int64)v76,
                            1,
                            nullptr) )
    {
LABEL_10:
      v8 = nullptr;
LABEL_11:
      if ( ptr != v80 )
        free(ptr);
      if ( v76[0] != v77 )
        free(v76[0]);
      goto LABEL_15;
    }
    v68 = 0;
    v17 = sub_BC4EE0(v8, (__int64)ptr, (unsigned int)v79, (__int64)&v68);
    v18 = v17;
    if ( !v17 )
      goto LABEL_43;
    v62 = v17;
    v19 = sub_1CBF140(
            *a1,
            *(unsigned int *)(a2 + 24),
            *(_BYTE *)(a2 + 180) & 7,
            v17,
            *(_BYTE *)(v17 + 180) & 7,
            *(unsigned int *)(v17 + 176),
            &v67);
    v18 = v62;
    if ( v19 )
      goto LABEL_10;
    v24 = *(_QWORD *)(v62 + 128);
    if ( v24
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v62 + 104) + 96LL), *(_QWORD *)(v62 + 104), v20, v21, v22, v23),
          v18 = v62,
          (v24 = *(_QWORD *)(v62 + 128)) != 0) )
    {
      v25 = *a1;
      v26 = *(_DWORD *)(a2 + 24);
      if ( *(_QWORD *)(v24 + 88) && (*(_BYTE *)(a2 + 74) & 1) != 0 )
      {
        v64 = v18;
        sub_168B9F0((__int64)&v70, (__int64 *)(v25 + 8), v26, 0x1326u, 0);
        v46 = v64;
        if ( v73 )
        {
          sub_AE9DF0(&v72, v64, 0xAu);
          v46 = v64;
        }
        else if ( v75 )
        {
          v53 = sub_168B9E0(&v70);
          v58 = v64;
          v59 = v53;
          v60 = v71;
          if ( v71 )
          {
            v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
            v58 = v64;
          }
          v66 = v58;
          v69 = v60;
          v61 = sub_1587BC0(v59, &v69, v54, v55, v56, v57);
          sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v74 + 8), v66, 0xAu);
          v46 = v66;
        }
        v65 = v46;
        sub_15F7200(&v70);
        v51 = *(_QWORD *)(v65 + 128);
        v52 = (__int64 *)(*a1 + 8);
        if ( !v51 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v65 + 104) + 96LL), *(_QWORD *)(v65 + 104), v47, v48, v49, v50);
          v51 = *(_QWORD *)(v65 + 128);
          if ( !v51 )
            BUG();
        }
        sub_168B9F0((__int64)&v70, v52, *(_DWORD *)(*(_QWORD *)(v51 + 88) + 24LL), 0x71u, 0);
        sub_15F7200(&v70);
        goto LABEL_10;
      }
    }
    else
    {
LABEL_43:
      v26 = *(_DWORD *)(a2 + 24);
      v25 = *a1;
    }
    v63 = v18;
    v27 = sub_BC2FB0(
            *(_QWORD **)(v25 + 248),
            *(_BYTE *)(a2 + 73) >> 5,
            a1[3],
            *(_DWORD *)(a2 + 56),
            v26,
            (__int64)v8,
            (const __m128i *)ptr,
            (unsigned int)v79,
            v81,
            v18);
    v28 = (_QWORD *)sub_B8C330(v27);
    v33 = sub_F1ED40(v28, (__int64 *)v82, v29, v30, v31, v32);
    v34 = *(_QWORD *)(v27 + 160);
    if ( v34 && (v34 & 4) != 0 && (v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
      *v35 = v33;
    else
      *(_QWORD *)(v27 + 160) = v33 & 0xFFFFFFFFFFFFFFFBLL;
    if ( !v63 )
      sub_BC3800(v8, v27, v68);
    if ( !(unsigned __int8)sub_1DFDC70(*a1, a2, v27, a1[4]) )
    {
      *(_BYTE *)(v27 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v27 + 29) & 0x9F;
      sub_B9B800(v27, a2, 1);
      v36 = 0;
      *(_BYTE *)(v27 + 180) = *(_BYTE *)(a2 + 180) & 7 | *(_BYTE *)(v27 + 180) & 0xF8;
      v37 = *(_QWORD *)(a2 + 160);
      if ( v37 )
      {
        if ( (v37 & 4) != 0 )
        {
          v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v38 )
            v36 = *(_DWORD *)(v38 + 8);
        }
      }
      sub_BC13A0(v27, v36);
      v39 = *(_QWORD *)(a2 + 160);
      v40 = 0;
      if ( v39 )
      {
        if ( (v39 & 4) != 0 )
        {
          v41 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v41 )
            v40 = *(_DWORD *)(v41 + 12);
        }
      }
      v8 = (_QWORD *)v27;
      sub_BC1440(v27, v40);
      sub_B94AD0((__m128i *)a1[3], v27, v42, v43, v44, v45);
      if ( (*(_BYTE *)(a2 + 74) & 1) == 0
        || !(unsigned __int8)sub_1DD54A0(*a1, *(_DWORD *)(a2 + 24), (__int64 *)v27, a2, a1[4], 1, 0.0, a4, 1) )
      {
        goto LABEL_11;
      }
    }
    goto LABEL_10;
  }
  v8 = nullptr;
LABEL_15:
  if ( v82[0] != v83 )
    free(v82[0]);
  return v8;
}
