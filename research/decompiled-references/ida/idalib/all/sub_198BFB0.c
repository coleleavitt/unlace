__int64 __fastcall sub_198BFB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // r14
  unsigned __int64 v14; // r10
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rsi
  unsigned __int8 v26; // al
  __int64 v27; // r15
  unsigned int v28; // r9d
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v34; // [rsp+10h] [rbp-58h]
  unsigned __int64 v35; // [rsp+10h] [rbp-58h]
  unsigned int v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+18h] [rbp-50h]
  int v39; // [rsp+18h] [rbp-50h]
  void *v40; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+28h] [rbp-40h]

  v8 = a4 + 16;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = *(unsigned __int16 **)(a4 + 8);
  v14 = v12;
  if ( v13
    || (v16 = 0, (*(_BYTE *)(a3 + 19) & 2) != 0)
    && (v16 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL), (v13 = (unsigned __int16 *)v16) != nullptr) )
  {
    v15 = *a1;
    v16 = 0;
    v34 = v12;
    sub_18C79E0(*a1, 4, 4);
    v17 = sub_190CCA0(a1, v13, *(double *)a5.m128_u64, a6);
    v22 = v34;
    v23 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( v23 )
    {
      v32 = sub_1914520(*a1, v23, v18, v19, v20, v21, a5, a6);
      v22 = v34;
      v16 = v32 & 0xFFFFFFFFFFFFFFFELL;
    }
    v35 = v22;
    sub_190D5E0(v15, a5);
    v14 = v35;
  }
  v24 = a3;
  if ( v14 == *(_QWORD *)(a3 + 32) )
  {
    if ( (*(_BYTE *)(a3 + 19) & 2) == 0 )
      goto LABEL_19;
    v25 = *(_QWORD *)(a3 + 40);
    if ( (unsigned __int16 *)v16 == v13 || !*(_QWORD *)(v25 + 16) )
      goto LABEL_19;
  }
  else
  {
    v25 = *(_QWORD *)(a3 + 40);
  }
  v26 = *(_BYTE *)(a3 + 19);
  v27 = *(_QWORD *)a4;
  v28 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
  if ( (v26 & 2) != 0 )
  {
    v41 = *(_DWORD *)(v25 + 8);
    if ( (unsigned int)v41 > 0x40 )
    {
      v39 = v14;
      v37 = v28;
      sub_2205510(&v40);
      v28 = v37;
      LODWORD(v14) = v39;
    }
    else
    {
      v40 = *(void **)v25;
    }
  }
  else
  {
    v41 = 8 * ((v26 >> 2) & 0x1F);
    if ( v41 > 64 )
    {
      v38 = v14;
      v36 = v28;
      sub_2205470(&v40, v25, 0);
      LODWORD(v14) = v38;
      v28 = v36;
    }
    else
    {
      v40 = (void *)v25;
    }
  }
  v24 = sub_18BB830(a1, v14, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v40, v16, v28, v27);
  if ( (unsigned int)v41 > 0x40 )
  {
    if ( v40 )
      operator delete[](v40);
  }
  if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
LABEL_19:
  sub_1EA6140(a2, v24, 16, 8);
  *(_DWORD *)v30 = *(_DWORD *)a4;
  v31 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v30 + 8) = v16;
  *(_DWORD *)(v30 + 4) = v31;
  return v24;
}
