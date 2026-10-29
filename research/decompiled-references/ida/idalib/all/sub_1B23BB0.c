__int64 __fastcall sub_1B23BB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __int128 a8)
{
  char v10; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // [rsp+8h] [rbp-100h]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  unsigned int v39; // [rsp+18h] [rbp-F0h]
  char v40; // [rsp+27h] [rbp-E1h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v44[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v45; // [rsp+58h] [rbp-B0h]
  unsigned int v46; // [rsp+5Ch] [rbp-ACh]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  int v48; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v49; // [rsp+70h] [rbp-98h]
  __m128i v50; // [rsp+78h] [rbp-90h]

  v10 = a5;
  v39 = sub_C00A40(a4, a2, a3, a4, a5);
  v13 = sub_EEC8C0(a4, a2, a7);
  v15 = _mm_loadu_si128((const __m128i *)&a8);
  v42 = v13;
  v47 = v13;
  v49 = &v41;
  v16 = *(unsigned int *)(a2 + 344);
  v40 = 0;
  v41 = 0;
  v44[0] = &v40;
  v44[1] = a1;
  v44[2] = a3;
  v45 = v10;
  v46 = v39;
  v48 = a6;
  v50 = v15;
  if ( !(_DWORD)v16
    || (v17 = *(_QWORD *)(a2 + 336) + 6776 * v16 - 6776, *(_QWORD *)(v17 + 6768) != *(_QWORD *)(a2 + 328))
    || (v19 = *(_DWORD *)(v17 + 8), v20 = *(unsigned int *)(a2 + 27504), v19 <= (unsigned int)v20)
    || (v21 = *(_QWORD *)v17, v22 = v21 + 1688 * (v19 - v20), v21 == v22) )
  {
LABEL_3:
    result = 0;
    goto LABEL_4;
  }
  v23 = v22 - 1688;
  v38 = v22 - 1688;
  if ( v10 )
    goto LABEL_11;
  v22 -= 1688;
  if ( v21 == v23 )
    return 0;
  v38 = v21;
LABEL_11:
  while ( 1 )
  {
    v24 = *(unsigned int *)(v22 - 968);
    v25 = *(_QWORD *)(v22 - 984);
    if ( (_DWORD)v24 )
    {
      v26 = (v24 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v27 = v25 + 1184LL * v26;
      if ( a3 == *(_QWORD *)v27 )
        goto LABEL_13;
      if ( *(_QWORD *)v27 != -4096 )
        break;
    }
LABEL_18:
    v22 -= 1688;
    if ( v38 == v22 )
      goto LABEL_3;
  }
  v36 = 1;
  while ( 1 )
  {
    v26 = (v24 - 1) & (v36 + v26);
    v27 = v25 + 1184LL * v26;
    if ( a3 == *(_QWORD *)v27 )
      break;
    ++v36;
    if ( *(_QWORD *)v27 == -4096 )
      goto LABEL_18;
  }
LABEL_13:
  if ( v27 == 1184 * v24 + v25 )
    goto LABEL_18;
  v28 = *(_QWORD *)(v27 + 8);
  v29 = 144LL * *(unsigned int *)(v27 + 16);
  v37 = v28 + v29;
  if ( v28 == v28 + v29 )
    goto LABEL_18;
  v30 = *(_QWORD *)(v27 + 8);
  while ( 1 )
  {
    result = sub_1B23270(
               (__int64)v44,
               *(_QWORD *)v30,
               *(unsigned int *)(v30 + 8),
               *(unsigned int *)(v27 + 1176),
               v14,
               *(double *)v15.m128i_i64);
    if ( (_BYTE)result )
      break;
    v30 += 144;
    if ( v37 == v30 )
      goto LABEL_18;
  }
LABEL_4:
  if ( !v10 && v41 && !v40 )
  {
    v31 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v44, v31, v39, 0x11DBu, 0);
    sub_15884C0((__int64)v44, &v42);
    sub_15F7200(v44);
    v35 = sub_C00A40(v41, (__int64)&v42, v32, v33, v34);
    sub_168B9F0((__int64)v44, v31, v35, 0x1934u, 0);
    v43 = sub_EEC8C0(v41, (__int64)v31, *(double *)v15.m128i_i64);
    sub_1587DB0((__int64)v44, &v43);
    sub_15F7200(v44);
    return 1;
  }
  return result;
}
