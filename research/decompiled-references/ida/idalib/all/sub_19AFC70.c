__int64 __fastcall sub_19AFC70(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // r15
  unsigned int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r12
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // r12
  __int64 *v38; // rax
  _BOOL4 v39; // r12d
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r12
  __int64 *v51; // r12
  char v52; // r12
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  signed int v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+8h] [rbp-F0h]
  int v61; // [rsp+10h] [rbp-E8h]
  __int64 v62[2]; // [rsp+18h] [rbp-E0h] BYREF
  unsigned int v63; // [rsp+2Ch] [rbp-CCh] BYREF
  __int64 v64; // [rsp+30h] [rbp-C8h]
  __int64 *v65; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v66)(); // [rsp+40h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B0h]
  __int64 v68; // [rsp+50h] [rbp-A8h]
  int v69; // [rsp+58h] [rbp-A0h]
  __int64 v70; // [rsp+60h] [rbp-98h]
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-80h]
  _BYTE v73[120]; // [rsp+80h] [rbp-78h] BYREF

  v8 = a2;
  v62[0] = a3;
  if ( a6 == 4
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    return (__int64)a2;
  }
  v11 = *(_DWORD *)a4 & 0x7FFFFFFF;
  if ( v11 == 2 )
  {
    v27 = *(_QWORD *)(a4 + 136);
    if ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x25 )
    {
      v28 = *(_QWORD *)(a1 + 248);
      v29 = sub_B72690(v27 + 72);
      v33 = v29 - 64;
      if ( v29 )
        v29 -= 64LL;
      a2 = (__int64 *)v29;
      v34 = sub_A7AC20(v28, v29, v33, v30, v31, v32);
      v61 = 19;
    }
    else
    {
      v52 = *(_BYTE *)(a4 + 72);
      if ( (v52 & 1) != 0 )
      {
        v39 = (v52 & 2) != 0;
        v60 = sub_C1BEF0((__int64)v62, (__int64)a2, a3, a4);
        v53 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, *(double *)a7.m128_u64);
        v65 = a2;
        v63 = v53;
        v64 = *(_QWORD *)(a4 + 144);
        goto LABEL_40;
      }
      ptr = *(void **)(**(_QWORD **)(v27 + 120) + 48LL);
      v34 = sub_C1BEF0((__int64)&ptr, (__int64)a2, a3, a4);
      v61 = 20;
    }
    v37 = *(_BYTE *)(a4 + 72);
    if ( (v37 & 1) == 0 )
    {
      a2 = v8;
      v38 = sub_19AE170((_QWORD *)a1, v8, v34, (unsigned __int8 *)(a4 + 16), 3, a6, a7, a8);
      if ( v38 == (__int64 *)((char *)&dword_0 + 1) )
        return 1;
      v37 = *(_BYTE *)(a4 + 72);
      v8 = (__int64 *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFELL);
    }
    v39 = (v37 & 2) != 0;
    v60 = sub_C1BEF0((__int64)v62, (__int64)a2, v35, v36);
    v40 = sub_EEB7E0((unsigned __int64)v8, (__int64)a2, *(double *)a7.m128_u64);
    v65 = v8;
    v42 = *(_QWORD *)(a4 + 144);
    v63 = v40;
    v64 = v42;
    if ( v61 != 20 )
    {
      sub_1663420((_QWORD *)a1, v40, (unsigned __int64)v8, 0, v42, v41, *(double *)a7.m128_u64);
      if ( (unsigned __int8)sub_18F5260(a1, v27, (int *)&v63, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
        return 1;
      v43 = sub_1BF8E10(a1, v65, v64 & 0xFFFFFFFFFFFFFFF8LL, v27, v39);
      if ( v43 == 1 )
        return 1;
      v44 = *(unsigned int *)(a1 + 1952);
      v45 = *(unsigned int *)(a1 + 1956);
      if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v45, v44) )
      {
        v45 = 0;
        v44 = 0;
      }
      v46 = sub_C0A3E0(
              *(_QWORD **)(a1 + 248),
              *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFFELL) + 8),
              19,
              v43 & 0xFFFFFFFFFFFFFFFELL,
              0,
              (*(_BYTE *)((v43 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3,
              (v45 << 32) | v44)
          & 0xFFFFFFFFFFFFFFFELL;
      v50 = v46;
      if ( !v46 )
        return 1;
      if ( (*(_BYTE *)(v46 + 1) & 6) != 0 )
      {
LABEL_35:
        v51 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFELL);
        result = (__int64)v51;
        if ( a6 != 4 )
          return (__int64)sub_19AE170((_QWORD *)a1, v51, v62[0], (unsigned __int8 *)(a4 + 80), 3, a6, a7, a8);
        return result;
      }
      v50 = sub_19A1850(a1, (unsigned __int16 *)v46, v47, v48, v49, a7, a8);
LABEL_34:
      if ( v50 == 1 )
        return 1;
      goto LABEL_35;
    }
LABEL_40:
    LODWORD(v67) = 2984;
    ptr = v73;
    v72 = 0x800000000LL;
    v66 = off_2BC6500;
    if ( (unsigned __int8)sub_1866EA0(
                            (_QWORD *)a1,
                            v63,
                            v60,
                            (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v66)
      || (unsigned __int8)sub_183E070(a1, (_QWORD *)v27, v60, (__int64)&v65, 1u, v63, (__m128i)a7, (__int64)&ptr, 0, 0)
      || (LODWORD(v66) = 9,
          v67 = 0,
          v68 = v60,
          v69 = 0,
          v70 = 0,
          sub_1661560((_QWORD *)a1, v63, v27, v64, (__int64)&v66, 0),
          (unsigned __int8)sub_18F5260(a1, v27, (int *)&v63, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0))
      || (v54 = sub_1887530(
                  a1,
                  v63,
                  v60,
                  v64 & 0xFFFFFFFFFFFFFFF8LL,
                  v27,
                  v39,
                  (__int64)ptr,
                  (unsigned int)v72,
                  0,
                  0,
                  0,
                  0,
                  0),
          v54 == 1)
      || (v58 = v54 & 0xFFFFFFFFFFFFFFFELL, (v50 = v58) == 0) )
    {
      v50 = 1;
    }
    else if ( (*(_BYTE *)(v58 + 1) & 6) == 0 )
    {
      v50 = sub_19A1850(a1, (unsigned __int16 *)v58, v55, v56, v57, a7, a8);
    }
    if ( ptr != v73 )
      free(ptr);
    goto LABEL_34;
  }
  if ( v11 > 2 )
  {
    if ( v11 != 3 )
    {
      if ( v11 == 5 )
      {
        v12 = a2[1];
        v59 = a5;
        v13 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
        v14 = v13;
        v15 = sub_18D3BF0(a1, v13, v62[0], v12, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
        v16 = v8[1];
        v17 = v15;
        v21 = sub_C00A40((unsigned __int64)v8, v14, v18, v19, v20);
        if ( !v17 )
          v17 = 18;
        sub_18DCB30(a1, v17, v21, v62[0], v16, (unsigned __int64)v8, v59, nullptr);
        return 1;
      }
      return (__int64)a2;
    }
    sub_168B9B0((__int64)&ptr, a1 + 8, 5210);
    LOBYTE(v67) = 1;
    v66 = (__int64 (__fastcall **)())sub_EEC8C0((unsigned __int64)a2, a1 + 8, *(double *)a7.m128_u64);
    sub_AEC610((__int64 *)&ptr, (__int64 *)&v66);
    v26 = sub_C00A40((unsigned __int64)a2, (__int64)&v66, v23, v24, v25);
    sub_1BE6DB0(a4, a1, v26, &ptr);
    if ( ptr && v72 )
      sub_1580C40(v72, (unsigned __int64)ptr);
    return 1;
  }
  if ( v11 )
    return (__int64)a2;
  result = (__int64)sub_19AE170((_QWORD *)a1, a2, v62[0], (unsigned __int8 *)(a4 + 16), a5, a6, a7, a8);
  if ( result != 1 )
    return result & 0xFFFFFFFFFFFFFFFELL;
  return result;
}
