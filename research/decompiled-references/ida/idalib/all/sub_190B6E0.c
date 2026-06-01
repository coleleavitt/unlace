__int64 __fastcall sub_190B6E0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int8 a4, _QWORD *a5)
{
  __m128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  int v16; // ecx
  __int64 *v17; // rsi
  __int32 v18; // eax
  size_t v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  size_t v30; // rbp
  _QWORD *v31; // rax
  void **v32; // r12
  size_t v33; // rdx
  _QWORD *v34; // r14
  __int64 v35; // rbp
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rbp
  unsigned int v40; // ebp
  __int64 v41; // r12
  __int32 v42; // eax
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  void *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp-8h] [rbp-1F0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-1E0h]
  __int64 v53; // [rsp+8h] [rbp-1E0h]
  int v54; // [rsp+14h] [rbp-1D4h]
  __int64 v55; // [rsp+18h] [rbp-1D0h]
  __int64 v56; // [rsp+28h] [rbp-1C0h] BYREF
  void *v57; // [rsp+30h] [rbp-1B8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-1B0h]
  void *v59[2]; // [rsp+48h] [rbp-1A0h] BYREF
  _DWORD v60[5]; // [rsp+58h] [rbp-190h] BYREF
  char v61; // [rsp+6Ch] [rbp-17Ch]
  _BYTE v62[144]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v63; // [rsp+100h] [rbp-E8h] BYREF
  void *ptr; // [rsp+108h] [rbp-E0h]
  __int64 v65; // [rsp+110h] [rbp-D8h]
  _BYTE v66[64]; // [rsp+118h] [rbp-D0h] BYREF
  void *v67[2]; // [rsp+158h] [rbp-90h]
  __int64 v68; // [rsp+168h] [rbp-80h]
  _QWORD *v69; // [rsp+170h] [rbp-78h]
  __m128 v70; // [rsp+178h] [rbp-70h]
  __int64 v71; // [rsp+188h] [rbp-60h]
  __int64 v72; // [rsp+190h] [rbp-58h]
  __int64 v73; // [rsp+198h] [rbp-50h]
  __int64 v74; // [rsp+1A0h] [rbp-48h]

  v9 = (__m128)_mm_loadu_si128(a3);
  v69 = (_QWORD *)a1;
  v63 = 0;
  ptr = v66;
  v65 = 0x800000000LL;
  v10 = a3[1].m128i_i64[0];
  *(_OWORD *)v67 = 0;
  v71 = v10;
  v68 = 0;
  v70 = v9;
  v72 = 0;
  v73 = 0;
  v74 = 0x101010000LL;
  sub_1A395A0(&v63);
  sub_1A5D3E0(a1, (unsigned int)&v63, 0, a2, 0, 0, 0);
  v13 = v51;
  if ( (_DWORD)v63 == 5 )
  {
LABEL_41:
    v35 = 1;
    goto LABEL_42;
  }
  if ( (_DWORD)v63 == 1 || *(_DWORD *)a2 && (v11 = *(unsigned int *)(a2 + 4), (_DWORD)v11) && !*(_QWORD *)(a2 + 8) )
  {
    v35 = sub_1CB4410(a1, a2, 0, a3, 0);
    goto LABEL_42;
  }
  if ( !(_DWORD)v65 )
  {
    v37 = sub_16A2930(a1, a2, 0, v11, v51, v12);
    if ( (*(_BYTE *)(v37 + 8) & 0x7Fu) - 59 > 2 || v37 == 64 || *(char *)(v37 - 36) >= 0 )
    {
      sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), a3->m128i_u32[2], 0x10B2u, 0);
      v56 = a3->m128i_i64[0];
      v38 = sub_15894B0((__int64)v62, &v56);
      v39 = v38;
      if ( *(_BYTE *)(v38 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v38 + 32), v37, 0xCu);
      }
      else if ( *(_BYTE *)(v38 + 132) )
      {
        v48 = sub_168B9E0((_QWORD *)v38);
        v49 = *(void **)(v39 + 16);
        if ( v49 )
          v49 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v49 + 32LL))(*(_QWORD *)(v39 + 16));
        v57 = v49;
        v50 = sub_1587BC0(v48, (__int64 *)&v57, v44, v45, v46, v47);
        sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * *(unsigned int *)(v39 + 128) + 8), v37, 0xCu);
      }
      v57 = *(void **)a2;
      sub_1587DB0(v39, (__int64 *)&v57);
      sub_15F7200(v62);
    }
    goto LABEL_41;
  }
  if ( (_DWORD)v63 != 2 )
    goto LABEL_68;
  v14 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v15 = *(_BYTE *)(v14 + 28) & 0x7F;
  v16 = v15;
  if ( ((v15 + 52) & 0x7Fu) <= 1 || (unsigned int)v15 - 53 <= 1 )
  {
    v14 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    v16 = *(_BYTE *)(v14 + 28) & 0x7F;
  }
  if ( (unsigned int)(v16 - 58) > 9 )
  {
LABEL_68:
    if ( (unsigned __int8)sub_19C4B30(a1, a2, &v63, a4, v13, v12) )
      v35 = sub_19CC8A0(a1, a2, 0, &v63, 0, 0);
    else
      v35 = sub_190B490(a1, (__int64 *)a2, (__int64)&v63, 0, 0, v43, (__m128i)0LL, v9);
LABEL_42:
    if ( !BYTE3(v74) )
      goto LABEL_43;
    goto LABEL_27;
  }
  v52 = *(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !*(_QWORD *)(v14 + 48) )
    v52 = sub_A7AA70(*(_QWORD *)(a1 + 248), v14, 0, *(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL, v13, v12);
  v17 = (__int64 *)(a1 + 8);
  v56 = sub_1E5F850(a1, 6, a2, v52, 0);
  if ( a5 )
  {
    v54 = *(_DWORD *)a2;
    sub_168B9F0((__int64)v62, v17, *(_DWORD *)a2, (**(_BYTE **)(a1 + 232) & 0x20) == 0 ? 5328 : 5714, 0);
    v55 = sub_1605D30((__int64)v62, &v56);
    v18 = sub_B85A10((__int64)a3);
    if ( !v18 )
      v18 = a3->m128i_i32[2];
    v57 = (void *)__PAIR64__(v18, v54);
    sub_1587DB0(v55, (__int64 *)&v57);
    v19 = j__strlen("typename ");
    sub_9EC740((__int64)&v57, v54, "typename ", v19, 0);
    sub_1589170((__int64)v62, &v57);
    if ( v59[0] != v60 )
      operator delete(v59[0]);
    v57 = v59;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v60[4] = 0;
    v61 = 0;
    sub_1EA6140(&v57, v52, 4, 4);
    *v20 = a3->m128i_i32[2];
    v21 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v56 + 18) >> 3) == 6 )
      v21 = 16LL * (*(_QWORD *)(v56 + 32) != 0);
    v23 = sub_1EA6140(&v57, v56, v21, 8);
    v26 = v22;
    if ( (unsigned __int8)(*(_WORD *)(v23 + 18) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
      *v22 = 0;
    v53 = v23;
    sub_15AB9E0(a2, *(_QWORD **)(a1 + 248), (__int64)v22, v23, v24, v25);
    if ( (unsigned __int8)(*(_WORD *)(v53 + 18) >> 3) != 6 || *(_QWORD *)(v53 + 32) )
      *((_QWORD *)v26 + 1) = v27;
    v30 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v31 = sub_A81BC0(*(_QWORD **)(a1 + 248), v56, si128.m128i_i32[0] - si128.m128i_i32[2], v53, v28, v29);
    v32 = (void **)v57;
    v33 = v30;
    v34 = v31;
    v35 = 0;
    memcpy(v31 + 1, (char *)v57 + si128.m128i_i64[1], v33);
    *a5 = v34;
    if ( v32 != v59 && v32 )
      operator delete[](v32);
  }
  else
  {
    v40 = *(_DWORD *)a2;
    sub_168B9F0((__int64)v62, v17, *(_DWORD *)a2, 0x14D0u, 0);
    v41 = sub_1605D30((__int64)v62, &v56);
    v42 = sub_B85A10((__int64)a3);
    if ( !v42 )
      v42 = a3->m128i_i32[2];
    v57 = (void *)__PAIR64__(v42, v40);
    v35 = 1;
    sub_1587DB0(v41, (__int64 *)&v57);
  }
  sub_15F7200(v62);
  if ( !BYTE3(v74) )
  {
LABEL_43:
    if ( BYTE4(v74) && (_DWORD)v63 == 5 )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_27:
  if ( (_DWORD)v63 != 5 )
  {
    if ( !v67[1] || (*(_BYTE *)(v69[29] + 46LL) & 0x20) == 0 )
      goto LABEL_30;
    sub_1663B80(v69, (__int64)&v63);
    goto LABEL_43;
  }
  if ( BYTE4(v74) )
LABEL_45:
    sub_1A445B0(v69, &v63);
LABEL_30:
  if ( v67[0] )
    sub_1A39780(v67[0]);
  if ( ptr != v66 )
    free(ptr);
  return v35;
}
