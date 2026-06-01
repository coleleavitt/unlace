__int64 __fastcall sub_1953540(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int16 **v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  void *v17; // r13
  __int64 v18; // r15
  __int64 v19; // r14
  unsigned __int64 v21; // rax
  unsigned int v22; // [rsp+4h] [rbp-124h]
  unsigned int v23; // [rsp+10h] [rbp-118h]
  unsigned int v24; // [rsp+14h] [rbp-114h]
  unsigned int v25; // [rsp+18h] [rbp-110h]
  unsigned int v26; // [rsp+1Ch] [rbp-10Ch]
  _QWORD v27[2]; // [rsp+20h] [rbp-108h] BYREF
  void *v28; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-F0h]
  _BYTE v30[48]; // [rsp+40h] [rbp-E8h] BYREF
  void *v31; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+78h] [rbp-B0h]
  __int64 v33; // [rsp+80h] [rbp-A8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-70h]
  _QWORD v36[13]; // [rsp+C0h] [rbp-68h] BYREF

  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  v5 = *(unsigned __int16 **)(a2 + 56);
  if ( !v5 )
    goto LABEL_17;
  v6 = sub_1944E10(a1, v5, a3, a4);
  v7 = v6;
  if ( v6 == 1 )
    goto LABEL_5;
  if ( v6 )
    v7 = sub_1AA2500(*(_QWORD *)(*a1 + 744), 18, 51, *(unsigned int *)(a2 + 12), v6 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_17:
    v7 = 0;
LABEL_5:
  v8 = (unsigned __int16 **)(a2 + 64);
  v28 = v30;
  v29 = 0x600000000LL;
  v9 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 != v9 )
  {
    do
    {
      v10 = sub_1944E10(a1, *v8, a3, a4);
      if ( v10 <= 1 )
        break;
      v21 = sub_1AA2500(*(_QWORD *)(*a1 + 744), 18, 51, *(unsigned int *)(a2 + 12), v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( v21 > 1 )
        sub_14B7B40((__int64)&v28, v21 & 0xFFFFFFFFFFFFFFFELL);
      ++v8;
    }
    while ( (unsigned __int16 **)v9 != v8 );
  }
  v11 = 1;
  sub_19507E0(
    (unsigned int *)&v31,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(unsigned __int8 *)(a2 + 8),
                           *(unsigned int *)(a2 + 12),
                           v31,
                           v32) )
  {
    v12 = 0;
    v13 = *(_DWORD *)(a2 + 16);
    v14 = *(_DWORD *)(a2 + 48);
    if ( v7 > 1 )
      v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v23 = *(_DWORD *)(a2 + 20);
    v15 = *(_DWORD *)(a2 + 40);
    v16 = *(_DWORD *)(a2 + 12);
    v27[1] = (unsigned int)v29;
    v26 = v13;
    v17 = v31;
    v36[0] = v12;
    v18 = *(unsigned int *)(a2 + 44);
    v25 = v14;
    v19 = v32;
    v24 = v15;
    v22 = v16;
    v27[0] = v28;
    ptr = v36;
    v35 = 0x600000001LL;
    sub_1900F10((__int64)&ptr, (__int64)v27);
    v11 = sub_1AA2840(*(_QWORD *)(*a1 + 744), 18, v22, v23, v24, v25, ptr, (unsigned int)v35, 4, v18, v26, v17, v19, 0);
    if ( ptr != v36 )
      free(ptr);
  }
  if ( v31 != &v33 )
    free(v31);
  if ( v28 != v30 )
    free(v28);
  return v11;
}
