__int64 __fastcall sub_1988610(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r10
  _BYTE *v27; // rdi
  __int64 v28; // r15
  int v29; // r14d
  _DWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  _DWORD *v35; // rdx
  _BYTE *v36; // rdi
  _DWORD *v37; // rdx
  _DWORD *v39; // [rsp+8h] [rbp-100h]
  int v40; // [rsp+18h] [rbp-F0h]
  void **v41; // [rsp+20h] [rbp-E8h]
  _QWORD *v42; // [rsp+28h] [rbp-E0h]
  int v43; // [rsp+34h] [rbp-D4h]
  __int64 v44; // [rsp+38h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  void *v48[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v49[32]; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v51; // [rsp+98h] [rbp-70h]
  _BYTE v52[104]; // [rsp+A0h] [rbp-68h] BYREF

  v7 = *a1;
  v45 = a3;
  v46 = a4;
  sub_18C79E0(v7, 4, 4);
  v8 = sub_190CCA0(a1, *(unsigned __int16 **)(v45 + 40), *(double *)a5.m128_u64, a6);
  if ( v8 == 1 )
  {
    v14 = 0;
    sub_190D5E0(v7, a5);
    return v14;
  }
  v9 = v8;
  sub_190D5E0(v7, a5);
  v10 = v45;
  v47 = *(_QWORD *)(v45 + 32);
  ptr = v52;
  v51 = 0x500000000LL;
  v11 = *(_DWORD *)(v45 + 48) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(v45 + 48) & 0x7FFFFFFF) != 0 )
  {
    v12 = (__int64 *)(v45 + 64);
    v41 = (void **)(v45 + 64 + 8 * v11);
  }
  else
  {
    if ( *(char *)(v45 + 51) < 0 )
    {
LABEL_20:
      v28 = *a1;
      v29 = *(_DWORD *)(*a1 + 12632);
      v30 = v46 + 1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v39 = v30;
      v31 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v34 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v45 + 32),
              (__m128i *)(v31 * (((unsigned __int64)v39 - (v39 != nullptr)) / v31 + (v39 != nullptr))),
              v32,
              v33,
              a5,
              a6);
      v14 = sub_1E6E600(*a1, v34, v9 & 0xFFFFFFFE, 0, *v46, 1, (__int64)ptr, (unsigned int)v51);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v14, 4, 4);
        *v37 = *v46;
      }
      *(_DWORD *)(v28 + 12632) = v29;
      goto LABEL_8;
    }
    v12 = &v47;
    v41 = v48;
  }
  v40 = v9;
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v13 = (__int64)sub_19885D0(a1, *v12, a5, a6);
      if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v14 = 0;
        goto LABEL_8;
      }
      sub_A6A4A0((__int64)&ptr, v13);
      goto LABEL_26;
    }
    v16 = *a1;
    v17 = *v12;
    v44 = *v12;
    v48[0] = v49;
    v48[1] = (void *)0x200000000LL;
    sub_1E4C960(v16, v17);
    v18 = *a1;
    v19 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(v18 + 12632) = 0;
    v43 = v19;
    v42 = *(_QWORD **)(v18 + 248);
    v20 = sub_F6CCB0(&v45, a5);
    v21 = sub_A81910(v42, v44, v20);
    v24 = sub_1986980(a1, a2, *v21, (__m128i *)(v21 + 1), v22, v23, a5, a6);
    if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v26 = v18;
      goto LABEL_16;
    }
    if ( !v11 )
      break;
    sub_A6A4A0((__int64)&ptr, v24);
    v36 = v48[0];
    *(_DWORD *)(v18 + 12632) = v43;
    if ( v36 != v49 )
      free(v36);
LABEL_26:
    if ( v41 == (void **)++v12 )
    {
      v9 = v40;
      v10 = v45;
      goto LABEL_20;
    }
  }
  v25 = sub_1E6E600(*a1, v24, v40 & 0xFFFFFFFE, 0, *v46, 0, 0, 0);
  v14 = v25;
  v26 = v18;
  if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  sub_1EA6140(a2, v25, 4, 4);
  v26 = v18;
  *v35 = *v46;
LABEL_17:
  v27 = v48[0];
  *(_DWORD *)(v26 + 12632) = v43;
  if ( v27 != v49 )
    free(v27);
LABEL_8:
  if ( ptr != v52 )
    free(ptr);
  return v14;
}
