__int64 __fastcall sub_1BB2C70(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r15
  int v22; // eax
  unsigned int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  _BYTE *v29; // rdi
  __int64 v30; // r15
  int v31; // r14d
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rdi
  _DWORD *v41; // rdx
  _DWORD *v43; // [rsp+8h] [rbp-100h]
  void **v44; // [rsp+20h] [rbp-E8h]
  _QWORD *v45; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+34h] [rbp-D4h]
  __int64 v48; // [rsp+38h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v50; // [rsp+48h] [rbp-C0h]
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  void *v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v53[32]; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h]
  _BYTE v56[104]; // [rsp+A0h] [rbp-68h] BYREF

  v7 = *a1;
  v49 = a3;
  v50 = a4;
  sub_18C74E0(v7, 4, 0, 4);
  v11 = sub_1B73BE0(a1, *(_QWORD *)(v49 + 40), v8, a5, a6, v9, v10);
  if ( v11 == 1 )
  {
    v17 = 0;
    sub_190D5E0(v7, a5);
    return v17;
  }
  v12 = v11;
  sub_190D5E0(v7, a5);
  v13 = v49;
  v51 = *(_QWORD *)(v49 + 32);
  ptr = v56;
  v55 = 0x500000000LL;
  v14 = *(_DWORD *)(v49 + 48) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(v49 + 48) & 0x7FFFFFFF) != 0 )
  {
    v15 = (__int64 *)(v49 + 64);
    v44 = (void **)(v49 + 64 + 8 * v14);
    goto LABEL_4;
  }
  if ( *(char *)(v49 + 51) < 0 )
  {
LABEL_19:
    v30 = *a1;
    v31 = *(_DWORD *)(*a1 + 12632);
    v32 = v50 + 1;
    *(_DWORD *)(*a1 + 12632) = 0;
    v43 = v32;
    v33 = sub_F6C520(*(_QWORD *)(v13 + 32));
    v36 = sub_1BB10D0(
            a1,
            a2,
            *(_QWORD *)(v49 + 32),
            (__m128i *)(v33 * (((unsigned __int64)v43 - (v43 != nullptr)) / v33 + (v43 != nullptr))),
            v34,
            v35,
            a5,
            a6);
    v17 = sub_1E6E600(*a1, v36, v12 & 0xFFFFFFFE, 0, *v50, 1, (__int64)ptr, (unsigned int)v55);
    if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      sub_1EA6140(a2, v17, 4, 4);
      *v41 = *v50;
    }
    *(_DWORD *)(v30 + 12632) = v31;
    goto LABEL_7;
  }
  v15 = &v51;
  v44 = v52;
  while ( 1 )
  {
LABEL_4:
    if ( (*(_BYTE *)(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v16 = (__int64)sub_1BB2C30(a1, *v15, a5, a6);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v17 = 0;
        goto LABEL_7;
      }
      sub_A6A4A0((__int64)&ptr, v16);
      goto LABEL_27;
    }
    v19 = *v15;
    v48 = *v15;
    v20 = *a1;
    v52[0] = v53;
    v52[1] = (void *)0x200000000LL;
    sub_1E4C960(v20, v19);
    v21 = *a1;
    v22 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(v21 + 12632) = 0;
    v47 = v22;
    v45 = *(_QWORD **)(v21 + 248);
    v23 = sub_F6CCB0(&v49, a5);
    v24 = sub_A81910(v45, v48, v23);
    v27 = sub_1BB10D0(a1, a2, *v24, (__m128i *)(v24 + 1), v25, v26, a5, a6);
    if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_15;
    if ( !v14 )
      break;
    v38 = (unsigned int)v55;
    v39 = (unsigned int)v55 + 1LL;
    if ( v39 > HIDWORD(v55) )
    {
      v46 = v27;
      sub_2237220(&ptr, v56, v39, 8);
      v38 = (unsigned int)v55;
      v27 = v46;
    }
    *((_QWORD *)ptr + v38) = v27;
    LODWORD(v55) = v55 + 1;
    v40 = v52[0];
    *(_DWORD *)(v21 + 12632) = v47;
    if ( v40 != v53 )
      free(v40);
LABEL_27:
    if ( v44 == (void **)++v15 )
    {
      v13 = v49;
      goto LABEL_19;
    }
  }
  v28 = sub_1E6E600(*a1, v27, v12 & 0xFFFFFFFE, 0, *v50, 0, 0, 0);
  v17 = v28;
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_16;
  }
  sub_1EA6140(a2, v28, 4, 4);
  *v37 = *v50;
LABEL_16:
  v29 = v52[0];
  *(_DWORD *)(v21 + 12632) = v47;
  if ( v29 != v53 )
    free(v29);
LABEL_7:
  if ( ptr != v56 )
    free(ptr);
  return v17;
}
