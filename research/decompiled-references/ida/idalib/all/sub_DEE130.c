__int64 __fastcall sub_DEE130(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  char v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rax
  __m128i v20; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-B8h]
  __int64 v22; // [rsp+18h] [rbp-B0h]
  __m128i v23; // [rsp+20h] [rbp-A8h] BYREF
  void *v24; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-90h]
  char v26; // [rsp+3Ch] [rbp-8Ch]
  void *v27; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-80h]
  char v29; // [rsp+4Ch] [rbp-7Ch]
  void *src; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-70h]
  _QWORD v32[3]; // [rsp+60h] [rbp-68h] BYREF
  int v33; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+80h] [rbp-48h]
  unsigned int v35; // [rsp+88h] [rbp-40h]

  v3 = a1[22];
  v20 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = a1[22];
  v23 = _mm_load_si128(&v20);
  v5 = sub_E21760(v4, 48);
  v6 = (unsigned int)(*(_DWORD *)v5 + *(_DWORD *)(a2 + 8));
  sub_E23220(v32, *(_QWORD *)(v5 + 32), v6, (unsigned int)v6);
  v11 = sub_D44EB0(a1, v23.m128i_u32[2], v7, v8, v9, v10);
  v13 = v12;
  v14 = v11;
  sub_D4B780((__int64)&v24, (__int64)&v23, 0);
  sub_B78170(*(_QWORD *)a2);
  v15 = v26;
  sub_2206A40(&src, &v24);
  v29 = v15;
  v28 = v31;
  v27 = src;
  sub_2206DE0(&src, &v27, v23.m128i_u32[2]);
  if ( v31 > 0x40 )
  {
    memcpy((void *)v14, src, 8 * (((unsigned __int64)v31 + 63) >> 6));
    if ( v31 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    v14 = 0;
    if ( v31 )
      v14 = (__int64)((_QWORD)src << (64 - (unsigned __int8)v31)) >> (64 - (unsigned __int8)v31);
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  v16 = v32[0];
  v17 = v34;
  if ( !v33 && *(_BYTE *)(sub_CFDF60((__int64)v32) + 60) && v35 == v16 )
    v18 = v17 + v35 + 72;
  else
    v18 = v17 + v16 + 40;
  v22 = v13;
  v21 = v14;
  *(_QWORD *)v18 = v14;
  *(_DWORD *)(v18 + 8) = v22;
  sub_E23CF0(v32);
  sub_E24D00(v32);
  sub_E232A0(v32);
  return 1;
}
