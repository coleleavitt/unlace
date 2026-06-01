__int64 __fastcall sub_1B108C0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        _DWORD *a9,
        __int64 *a10)
{
  unsigned int v10; // r10d
  _DWORD *v11; // r14
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *v31; // r14
  size_t v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v38; // [rsp+Ch] [rbp-11Ch]
  int v39; // [rsp+14h] [rbp-114h] BYREF
  __int64 v40; // [rsp+18h] [rbp-110h] BYREF
  __int64 v41; // [rsp+20h] [rbp-108h] BYREF
  char v42; // [rsp+2Ch] [rbp-FCh]
  char v43; // [rsp+30h] [rbp-F8h]
  __m128i v44; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v47; // [rsp+70h] [rbp-B8h]
  char *v48; // [rsp+78h] [rbp-B0h]
  __int64 v49; // [rsp+80h] [rbp-A8h]
  char v50; // [rsp+88h] [rbp-A0h] BYREF

  v10 = 1;
  v11 = (_DWORD *)*a1;
  if ( ((*(_DWORD *)*a1 >> 14) & 0xE) != 0 )
    return v10;
  v14 = a5;
  v38 = a4;
  v15 = a3;
  v16 = sub_C00A40(*a1, a2, a3, a4, a5);
  v17 = sub_1AF55B0(*(__int64 **)(a2 + 760), v16, (__int64)v11);
  v10 = 0;
  if ( v17 == 1 )
    return v10;
  v20 = v17 & 0xFFFFFFFFFFFFFFFELL;
  *a1 = v20;
  sub_C3EB00((__int64)&v41, v20, *(_QWORD *)(a2 + 248), nullptr, v18, v19);
  if ( v43 && !v42 )
  {
    if ( v38 )
    {
      if ( !(unsigned __int8)sub_1AF0130(&v41) )
      {
        sub_168B9F0((__int64)v46, (__int64 *)(a2 + 8), v16, 0x11CAu, 0);
        sub_1AF81E0(&v44, v15);
        v29 = sub_1682AF0((__int64)v46, (__int64)&v44);
        v22 = 1;
        v23 = v29;
        goto LABEL_9;
      }
    }
    else if ( sub_1AE7A00(&v41) )
    {
      sub_168B9F0((__int64)v46, (__int64 *)(a2 + 8), v16, 0x11CAu, 0);
      sub_1AF81E0(&v44, v15);
      v21 = sub_1682AF0((__int64)v46, (__int64)&v44);
      v22 = 0;
      v23 = v21;
LABEL_9:
      v39 = v22;
      v24 = sub_1587D10(v23, &v39);
      v40 = sub_EEC8C0(*a1, (__int64)&v39, *(double *)a7.m128_u64);
      sub_1587DB0(v24, &v40);
      if ( (__int64 *)v44.m128i_i64[0] != &v45 )
        operator delete((void *)v44.m128i_i64[0]);
      sub_15F7200(v46);
      sub_98E4B0((__int64)&v41);
      return 0;
    }
  }
  sub_98E4B0((__int64)&v41);
  v10 = 1;
  if ( (_BYTE)v14 )
  {
    v25 = sub_1AE8290(a6, v15, *(unsigned int *)(*(_QWORD *)(a2 + 232) + 64LL), 0x67u);
    *a9 = v25;
    if ( v25 != 103 && !(unsigned __int8)sub_B8E180(*(_QWORD *)(a2 + 544)) )
    {
      v30 = sub_1AF29B0(a2, *a1, a7, a8, v26, v27, v28);
      v46[0] = 0;
      *a1 = v30;
      v31 = (_QWORD *)v30;
      v46[1] = 0;
      v47 = 0;
      v48 = &v50;
      v49 = 0;
      v32 = j__strlen(".capture_expr.");
      *a1 = sub_1B00390((_QWORD *)a2, v31, (__int64)v46, ".capture_expr.", v32, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
      *a10 = sub_1AEDEF0(*(_QWORD **)(a2 + 248), (__int64)v46, v33, v34, v35, v36);
      sub_1AF4310((__int64)v46);
    }
    return v14;
  }
  return v10;
}
