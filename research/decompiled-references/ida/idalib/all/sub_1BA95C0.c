unsigned __int64 __fastcall sub_1BA95C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // r15d
  unsigned __int64 v16; // rax
  bool v17; // cc
  int v18; // r14d
  unsigned __int64 v20; // rax
  void *v21; // [rsp+0h] [rbp-118h]
  __int64 v22; // [rsp+8h] [rbp-110h]
  unsigned int v23; // [rsp+10h] [rbp-108h]
  int v24; // [rsp+14h] [rbp-104h]
  unsigned int v25; // [rsp+18h] [rbp-100h]
  unsigned int v26; // [rsp+1Ch] [rbp-FCh]
  void *v27; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-F0h]
  _BYTE v29[48]; // [rsp+30h] [rbp-E8h] BYREF
  void *v30; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-B0h]
  __int64 v32; // [rsp+70h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v35; // [rsp+B0h] [rbp-68h] BYREF
  char v36[96]; // [rsp+B8h] [rbp-60h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  v8 = *(_QWORD *)(a2 + 56);
  if ( !v8 )
    goto LABEL_17;
  v9 = sub_1B73BE0(a1, v8, v5, a3, a4, v6, v7);
  v10 = v9;
  if ( v9 == 1 )
    goto LABEL_5;
  if ( v9 )
    v10 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v9 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_17:
    v10 = 0;
LABEL_5:
  v11 = (unsigned __int64 *)(a2 + 64);
  v27 = v29;
  v28 = 0x600000000LL;
  v12 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 != v12 )
  {
    do
    {
      v13 = sub_1B73BE0(a1, *v11, v5, a3, a4, v6, v7);
      if ( v13 <= 1 )
        break;
      v20 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v13 & 0xFFFFFFFFFFFFFFFELL);
      if ( v20 > 1 )
        sub_14B7B40((__int64)&v27, v20 & 0xFFFFFFFFFFFFFFFELL);
      ++v11;
    }
    while ( (unsigned __int64 *)v12 != v11 );
  }
  v14 = 1;
  sub_1BA6730(
    (__int64)&v30,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(_BYTE *)(a2 + 8),
                           *(_DWORD *)(a2 + 12),
                           (char *)v30,
                           v31,
                           a3) )
  {
    v15 = *(_DWORD *)(a2 + 44);
    v23 = *(_DWORD *)(a2 + 48);
    v16 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v10 <= 1;
    v18 = *(_DWORD *)(a2 + 40);
    if ( v17 )
      v16 = 0;
    v22 = v31;
    v26 = *(_DWORD *)(a2 + 16);
    v24 = *(_DWORD *)(a2 + 20);
    v25 = *(_DWORD *)(a2 + 12);
    v21 = v30;
    v34 = 0x600000001LL;
    ptr = &v35;
    v35 = v16;
    sub_1AF7920((__int64 *)&ptr, v36, (char *)v27, (char *)v27 + 8 * (unsigned int)v28);
    v14 = sub_1AA2840(
            *(_QWORD **)(*a1 + 744),
            18,
            v25,
            v24,
            v18,
            v23,
            (__int64 *)ptr,
            (unsigned int)v34,
            4,
            v15,
            v26,
            v21,
            v22,
            0);
    if ( ptr != &v35 )
      free(ptr);
  }
  if ( v30 != &v32 )
    free(v30);
  if ( v27 != v29 )
    free(v27);
  return v14;
}
