void __fastcall sub_1C40A50(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // eax
  unsigned int v9; // ebp
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  void *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  void *v23; // rax
  _QWORD *v24; // rax
  void *v25; // [rsp+0h] [rbp-158h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-150h]
  unsigned __int8 v27; // [rsp+Ch] [rbp-14Ch]
  void *v28; // [rsp+10h] [rbp-148h] BYREF
  signed __int64 v29; // [rsp+18h] [rbp-140h]
  _BYTE v30[16]; // [rsp+20h] [rbp-138h] BYREF
  void *v31; // [rsp+30h] [rbp-128h] BYREF
  signed __int64 v32; // [rsp+38h] [rbp-120h]
  _BYTE v33[16]; // [rsp+40h] [rbp-118h] BYREF
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __m128i si128; // [rsp+58h] [rbp-100h]
  _BYTE v36[40]; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-C8h] BYREF
  void *v38; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v39[11]; // [rsp+B0h] [rbp-A8h] BYREF
  char v40; // [rsp+108h] [rbp-50h]
  unsigned int v41; // [rsp+110h] [rbp-48h]
  char v42; // [rsp+114h] [rbp-44h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    return;
  v5 = *(_DWORD *)(a3 + 8);
  if ( a4 >= v5 )
    return;
  v26 = *(_DWORD *)(a3 + 8);
  if ( v5 > 0x40 )
    sub_2205510(&v25);
  else
    v25 = *(void **)a3;
  v27 = *(_BYTE *)(a3 + 12);
  sub_1C33520((__int64)&v25, a4, a5);
  sub_1C33520((__int64)&v25, *(_DWORD *)(a3 + 8), *(_BYTE *)(a3 + 12) ^ 1);
  v9 = v26;
  if ( v26 > 0x40 )
  {
    if ( (unsigned __int8)sub_2205D70(&v25, a3) )
      goto LABEL_7;
LABEL_13:
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a2, 0x19FDu, 0);
    ptr = v36;
    v10 = *(_BYTE *)(a3 + 12) ^ 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90(a3, (unsigned int)&ptr, 10, v10, 0, 1, 0);
    v28 = v30;
    sub_1C32AD0(&v28, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v36 )
      free(ptr);
    if ( v40 )
    {
      sub_AEC220(v39, v28, v29);
    }
    else if ( v42 )
    {
      v22 = sub_168B9E0(v37);
      v23 = v38;
      if ( v38 )
        v23 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v38 + 32LL))(v38);
      ptr = v23;
      v24 = sub_1587BC0(v22, (__int64 *)&ptr, v18, v19, v20, v21);
      sub_AEC220((unsigned __int8 **)(*v24 + 32LL * v41 + 8), v28, v29);
    }
    ptr = v36;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v25, (unsigned int)&ptr, 10, v27 ^ 1, 0, 1, 0);
    v31 = v33;
    sub_1C32AD0(&v31, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v36 )
      free(ptr);
    if ( v40 )
    {
      sub_AEC220(v39, v31, v32);
    }
    else if ( v42 )
    {
      v15 = sub_168B9E0(v37);
      v16 = v38;
      if ( v38 )
        v16 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v38 + 32LL))(v38);
      ptr = v16;
      v17 = sub_1587BC0(v15, (__int64 *)&ptr, v11, v12, v13, v14);
      sub_AEC220((unsigned __int8 **)(*v17 + 32LL * v41 + 8), v31, v32);
    }
    if ( v31 != v33 )
      operator delete(v31);
    if ( v28 != v30 )
      operator delete(v28);
    sub_15F7200(v37);
    v9 = v26;
    goto LABEL_7;
  }
  if ( v25 != *(void **)a3 )
    goto LABEL_13;
LABEL_7:
  if ( v9 > 0x40 )
  {
    if ( v25 )
      operator delete[](v25);
  }
}
