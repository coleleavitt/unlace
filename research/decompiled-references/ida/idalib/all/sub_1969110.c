__int64 __fastcall sub_1969110(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  int v15; // r10d
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // r9d
  __int64 v30; // rbx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  int v34; // [rsp+8h] [rbp-60h]
  int v35; // [rsp+8h] [rbp-60h]
  unsigned int v36; // [rsp+8h] [rbp-60h]
  unsigned int v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+18h] [rbp-50h]
  void *v42; // [rsp+20h] [rbp-48h] BYREF
  int v43; // [rsp+28h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_193F4E0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = *(_QWORD *)(a4 + 8);
  v15 = v13;
  if ( v14 || (*(_BYTE *)(a3 + 19) & 2) != 0 && (v14 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL)) != 0 )
  {
    v16 = *a1;
    v34 = v13;
    sub_18C79E0(*a1, 4, 4);
    v17 = v14;
    v14 = 0;
    v18 = sub_1933BC0(a1, v17, *(double *)a5.m128_u64, a6);
    v23 = v34;
    v24 = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( v24 )
    {
      v33 = sub_1914520(*a1, v24, v19, v20, v21, v22, a5, a6);
      v23 = v34;
      v14 = v33 & 0xFFFFFFFFFFFFFFFELL;
    }
    v35 = v23;
    sub_190D5E0(v16, a5);
    v15 = v35;
  }
  v25 = *(_BYTE *)(a3 + 19);
  v26 = *(_QWORD *)a4;
  v27 = *(_QWORD *)(a3 + 40);
  v28 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
  if ( (v25 & 2) != 0 )
  {
    v43 = *(_DWORD *)(v27 + 8);
    if ( (unsigned int)v43 > 0x40 )
    {
      v40 = v15;
      v38 = v26;
      v36 = v28;
      sub_2205510(&v42);
      v28 = v36;
      v26 = v38;
      v15 = v40;
    }
    else
    {
      v42 = *(void **)v27;
    }
  }
  else
  {
    v43 = 8 * ((v25 >> 2) & 0x1F);
    if ( v43 > 64 )
    {
      v41 = v15;
      v39 = v26;
      v37 = v28;
      sub_2205470(&v42, v27, 0);
      v15 = v41;
      v26 = v39;
      v28 = v37;
    }
    else
    {
      v42 = (void *)v27;
    }
  }
  v30 = sub_18BB830(a1, v15, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v42, v14, v28, v26);
  if ( (unsigned int)v43 > 0x40 )
  {
    if ( v42 )
      operator delete[](v42);
  }
  if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v30, 16, 8);
  *(_DWORD *)v31 = *(_DWORD *)a4;
  v32 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v31 + 8) = v14;
  *(_DWORD *)(v31 + 4) = v32;
  return v30;
}
