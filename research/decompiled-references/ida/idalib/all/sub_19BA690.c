__int64 __fastcall sub_19BA690(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 result; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // dl
  char v29; // dl
  char v30; // dl
  __int64 v31; // rdx
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  int v46[2]; // [rsp+0h] [rbp-118h]
  __int64 v47; // [rsp+8h] [rbp-110h]
  __int64 v48; // [rsp+18h] [rbp-100h]
  __int16 v49; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v52; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD *v53; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-C0h]
  __int64 v57; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v58[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v59; // [rsp+C8h] [rbp-50h]
  unsigned int v60; // [rsp+D0h] [rbp-48h]
  char v61; // [rsp+D4h] [rbp-44h]

  v50 = a3;
  v49 = a5;
  v51 = 0;
  if ( (unsigned __int8)sub_19AA3D0(a1, &v51, &v50, (__int64)&v49, a4, a6, a7, a8) )
    return 1;
  v47 = 0;
  if ( !*(_QWORD *)(a6 + 8) )
  {
    v31 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v47 = v51;
    }
    else if ( (*(_BYTE *)(v31 + 17) & 4) != 0 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
    }
  }
  v15 = 0;
  v52 = nullptr;
  v16 = 0;
  v17 = *(_QWORD *)(a12 + 8);
  if ( !*(_DWORD *)a12 )
  {
    v18 = sub_18013B0(
            a1,
            v17,
            *(_DWORD *)(a12 + 24),
            a2,
            a6,
            1,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0,
            v47,
            1,
            0,
            1u,
            0,
            nullptr);
    if ( v18 )
    {
LABEL_7:
      v22 = sub_1E5F010(v18, &v52);
      goto LABEL_8;
    }
    if ( *(_QWORD *)(a6 + 8) )
    {
      if ( !sub_16A2930(a1, a6, 0, v19, v20, v21) )
        goto LABEL_44;
      if ( *(_QWORD *)(a6 + 8) )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
LABEL_28:
      sub_168B9F0((__int64)&v55, (__int64 *)(a1 + 8), *(_DWORD *)(a12 + 24), 0x1301u, 0);
      if ( v59 )
      {
        sub_AE9DF0(v58, *(_QWORD *)(a12 + 8), 5u);
      }
      else if ( v61 )
      {
        v33 = sub_168B9E0(&v55);
        v37 = v57;
        if ( v57 )
        {
          v48 = v33;
          v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
          v33 = v48;
        }
        v54 = v37;
        v38 = sub_1587BC0(v33, &v54, v33, v34, v35, v36);
        sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v60 + 8), *(_QWORD *)(a12 + 8), 5u);
      }
      sub_1605D30((__int64)&v55, &v51);
      sub_15F7200(&v55);
      sub_1DBADC0(a1);
      if ( v29 )
        return 1;
      goto LABEL_22;
    }
LABEL_44:
    v15 = *(_QWORD *)(a12 + 8) | 4LL;
    v24 = *(unsigned int *)(a12 + 24);
LABEL_12:
    v16 = v24;
    goto LABEL_13;
  }
  v18 = sub_1CE0AE0(
          a1,
          a2,
          *(_DWORD *)(v17 + 4),
          *(_DWORD *)(v17 + 36),
          v17 + 56,
          *(unsigned int *)(v17 + 44),
          *(_DWORD *)(v17 + 40),
          1,
          0,
          0);
  if ( !v28 && v18 )
    goto LABEL_7;
LABEL_22:
  v22 = v51;
LABEL_8:
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v23 = v52;
    if ( !v52 )
    {
      v23 = sub_A81910(*(_QWORD **)(a1 + 248), v22, *(_DWORD *)(a12 + 24));
      v52 = v23;
    }
    sub_C93FF0((__int64)&v55, (__int64)v23);
    v15 = v55;
    v24 = v56;
    goto LABEL_12;
  }
LABEL_13:
  v53 = nullptr;
  v25 = *(_QWORD **)(a9 + 8);
  if ( *(_DWORD *)a9 == 7 )
    goto LABEL_32;
  if ( !v25 )
    return sub_19AA5D0(a1, v50, a4, v49, a6, (__int64)v25, a7, a8, a10, a11, v15, v16);
  if ( *(_DWORD *)a9 )
  {
LABEL_32:
    v26 = sub_1CE0AE0(
            a1,
            a2,
            *((_DWORD *)v25 + 1),
            *((_DWORD *)v25 + 9),
            (__int64)(v25 + 7),
            *((unsigned int *)v25 + 11),
            *((_DWORD *)v25 + 10),
            1,
            0,
            0);
    if ( !v30 && v26 )
    {
LABEL_17:
      v27 = sub_1E5F010(v26, &v53);
      v25 = v53;
      if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !v53 )
      {
        v25 = sub_A81910(*(_QWORD **)(a1 + 248), v27, *(_DWORD *)(a9 + 24));
        v53 = v25;
      }
      return sub_19AA5D0(a1, v50, a4, v49, a6, (__int64)v25, a7, a8, a10, a11, v15, v16);
    }
    goto LABEL_34;
  }
  v26 = sub_18013B0(
          a1,
          (__int64)v25,
          *(_DWORD *)(a9 + 24),
          a2,
          a6,
          1,
          *(double *)a7.m128_u64,
          *(double *)a8.m128_u64,
          0,
          v47,
          1,
          0,
          1u,
          0,
          nullptr);
  if ( v26 )
    goto LABEL_17;
  sub_168B9F0((__int64)&v55, (__int64 *)(a1 + 8), *(_DWORD *)(a9 + 24), 0x1301u, 0);
  if ( v59 )
  {
    sub_AE9DF0(v58, *(_QWORD *)(a9 + 8), 5u);
  }
  else if ( v61 )
  {
    v40 = sub_168B9E0(&v55);
    v43 = v57;
    if ( v57 )
    {
      *(_QWORD *)v46 = v40;
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
      v40 = *(_QWORD *)v46;
    }
    v54 = v43;
    v44 = sub_1587BC0(v40, &v54, v39, v40, v41, v42);
    sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v60 + 8), *(_QWORD *)(a9 + 8), 5u);
  }
  sub_1605D30((__int64)&v55, &v51);
  sub_15F7200(&v55);
  sub_1DBADC0(a1);
  result = 1;
  if ( !v32 )
  {
LABEL_34:
    v25 = v53;
    return sub_19AA5D0(a1, v50, a4, v49, a6, (__int64)v25, a7, a8, a10, a11, v15, v16);
  }
  return result;
}
