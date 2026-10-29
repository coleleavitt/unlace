unsigned __int64 __fastcall sub_1E6E600(
        __m128 *a1,
        __int64 a2,
        __int64 *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // r14d
  __int64 *v11; // rbp
  _QWORD *v13; // r13
  __int64 v14; // r9
  unsigned __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // [rsp+0h] [rbp-F8h]
  __int64 v47; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+18h] [rbp-E0h] BYREF
  void *v49; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v50; // [rsp+28h] [rbp-D0h]
  char v51; // [rsp+2Ch] [rbp-CCh]
  _QWORD v52[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v54; // [rsp+50h] [rbp-A8h] BYREF
  char v55; // [rsp+A8h] [rbp-50h]
  unsigned int v56; // [rsp+B0h] [rbp-48h]
  char v57; // [rsp+B4h] [rbp-44h]

  v10 = 0;
  v11 = a3;
  v13 = (_QWORD *)a1[15].m128_u64[1];
  v47 = a2;
  v14 = a9;
  if ( !a8 || ((*(_DWORD *)a3 >> 14) & 0xC) != 0 )
    return sub_A78DB0((__int64)v13, v47, (int)v11, a8, v14, a10, v10);
  v17 = sub_A63CE0(v13);
  v21 = sub_AAC1F0((__int64)v13, v17, v18, v19, v20);
  v22 = a9;
  v50 = v21;
  if ( v21 > 0x40 )
  {
    sub_2205470(&v49, 0, 0);
    v22 = a9;
  }
  else
  {
    v49 = nullptr;
  }
  v23 = (_QWORD *)a1[15].m128_u64[1];
  v46 = v22;
  v51 = 1;
  v24 = sub_A63CE0(v23);
  v25 = (__int64)v11;
  v26 = sub_1C0AEA0(a1, v11, v24, (__int64)&v49, 4u, a4, a5);
  v14 = v46;
  v27 = v26;
  result = 0;
  if ( v27 > 1 )
  {
    v11 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFELL);
    if ( v51 )
    {
      v28 = (__int64)v49;
      if ( v50 <= 0x40 )
        goto LABEL_15;
    }
    else if ( v50 <= 0x40 )
    {
      if ( !v50 )
      {
        if ( a10 > 0 )
        {
          v10 = 1;
LABEL_20:
          v13 = (_QWORD *)a1[15].m128_u64[1];
          return sub_A78DB0((__int64)v13, v47, (int)v11, a8, v14, a10, v10);
        }
        v28 = 0;
LABEL_24:
        v29 = sub_EEB7E0((unsigned __int64)v11, v25, *(double *)a4.m128_u64);
        sub_168B9F0((__int64)v52, &a1->m128_i64[1], v29, 0x12ADu, 0);
        if ( v55 )
        {
          sub_1E5E160(&v54, v28);
        }
        else if ( v57 )
        {
          v34 = sub_168B9E0(v52);
          v37 = v53;
          if ( v53 )
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
          v48 = v37;
          v38 = sub_1587BC0(v34, &v48, v32, v33, v35, v36);
          sub_1E5E160((unsigned __int8 **)(*v38 + 32LL * v56 + 8), v28);
        }
        v30 = sub_1605D30((__int64)v52, &v47);
        v31 = v30;
        if ( *(_BYTE *)(v30 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v30 + 32), a10, 3u);
        }
        else if ( *(_BYTE *)(v30 + 132) )
        {
          v43 = sub_168B9E0((_QWORD *)v30);
          v44 = *(_QWORD *)(v31 + 16);
          if ( v44 )
            v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 32LL))(*(_QWORD *)(v31 + 16));
          v48 = v44;
          v45 = sub_1587BC0(v43, &v48, v39, v40, v41, v42);
          sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v31 + 128) + 8), a10, 3u);
        }
        sub_15F7200(v52);
        result = 0;
        goto LABEL_8;
      }
      v28 = (__int64)((_QWORD)v49 << (64 - (unsigned __int8)v50)) >> (64 - (unsigned __int8)v50);
LABEL_15:
      if ( v28 >= 0 && a10 > v28 )
      {
        v10 = v28 + 1;
        if ( v50 > 0x40 && v49 )
        {
          operator delete[](v49);
          v14 = v46;
        }
        goto LABEL_20;
      }
      goto LABEL_24;
    }
    v28 = *(_QWORD *)v49;
    goto LABEL_15;
  }
LABEL_8:
  if ( v50 > 0x40 )
  {
    if ( v49 )
    {
      operator delete[](v49);
      return 0;
    }
  }
  return result;
}
