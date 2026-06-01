__int64 __fastcall sub_1D51670(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r13
  int v22; // eax
  unsigned int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r10
  _BYTE *v30; // rdi
  __int64 v31; // r15
  int v32; // r14d
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  _DWORD *v38; // rdx
  _BYTE *v39; // rdi
  _DWORD *v40; // rdx
  _DWORD *v42; // [rsp+8h] [rbp-100h]
  int v43; // [rsp+18h] [rbp-F0h]
  void **v44; // [rsp+20h] [rbp-E8h]
  _QWORD *v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+34h] [rbp-D4h]
  __int64 v47; // [rsp+38h] [rbp-D0h]
  __int64 v48; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  void *v51[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v52[32]; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-70h]
  _BYTE v55[104]; // [rsp+A0h] [rbp-68h] BYREF

  v7 = *a1;
  v48 = a3;
  v49 = a4;
  sub_18C74E0(v7, 4, 0, 4);
  v11 = sub_1D434A0(a1, *(unsigned __int16 **)(v48 + 40), a5, a6, v8, v9, v10);
  if ( v11 == 1 )
  {
    v17 = 0;
    sub_190D5E0(v7, a5);
    return v17;
  }
  v12 = v11;
  sub_190D5E0(v7, a5);
  v13 = v48;
  v50 = *(_QWORD *)(v48 + 32);
  ptr = v55;
  v54 = 0x500000000LL;
  v14 = *(_DWORD *)(v48 + 48) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(v48 + 48) & 0x7FFFFFFF) != 0 )
  {
    v15 = (__int64 *)(v48 + 64);
    v44 = (void **)(v48 + 64 + 8 * v14);
  }
  else
  {
    if ( *(char *)(v48 + 51) < 0 )
    {
LABEL_20:
      v31 = *a1;
      v32 = *(_DWORD *)(*a1 + 12632);
      v33 = v49 + 1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v42 = v33;
      v34 = sub_F6C520(*(_QWORD *)(v13 + 32));
      v37 = sub_1D4F8E0(
              a1,
              a2,
              *(_QWORD *)(v48 + 32),
              (const __m128i *)(v34 * (((unsigned __int64)v42 - (v42 != nullptr)) / v34 + (v42 != nullptr))),
              v35,
              v36,
              a5,
              a6);
      v17 = sub_1E6E600(*a1, v37, v12 & 0xFFFFFFFE, 0, *v49, 1, (__int64)ptr, (unsigned int)v54);
      if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v17, 4, 4);
        *v40 = *v49;
      }
      *(_DWORD *)(v31 + 12632) = v32;
      goto LABEL_8;
    }
    v15 = &v50;
    v44 = v51;
  }
  v43 = v12;
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v16 = (__int64)sub_1D51630(a1, *v15, a5, a6);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v17 = 0;
        goto LABEL_8;
      }
      sub_A6A4A0((__int64)&ptr, v16);
      goto LABEL_26;
    }
    v19 = *a1;
    v20 = *v15;
    v47 = *v15;
    v51[0] = v52;
    v51[1] = (void *)0x200000000LL;
    sub_1E4C960(v19, v20);
    v21 = *a1;
    v22 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(v21 + 12632) = 0;
    v46 = v22;
    v45 = *(_QWORD **)(v21 + 248);
    v23 = sub_F6CCB0(&v48, a5);
    v24 = sub_A81910(v45, v47, v23);
    v27 = sub_1D4F8E0(a1, a2, *v24, (const __m128i *)(v24 + 1), v25, v26, a5, a6);
    if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v29 = v21;
      goto LABEL_16;
    }
    if ( !v14 )
      break;
    sub_A6A4A0((__int64)&ptr, v27);
    v39 = v51[0];
    *(_DWORD *)(v21 + 12632) = v46;
    if ( v39 != v52 )
      free(v39);
LABEL_26:
    if ( v44 == (void **)++v15 )
    {
      v12 = v43;
      v13 = v48;
      goto LABEL_20;
    }
  }
  v28 = sub_1E6E600(*a1, v27, v43 & 0xFFFFFFFE, 0, *v49, 0, 0, 0);
  v17 = v28;
  v29 = v21;
  if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_16:
    v17 = 0;
    goto LABEL_17;
  }
  sub_1EA6140(a2, v28, 4, 4);
  v29 = v21;
  *v38 = *v49;
LABEL_17:
  v30 = v51[0];
  *(_DWORD *)(v29 + 12632) = v46;
  if ( v30 != v52 )
    free(v30);
LABEL_8:
  if ( ptr != v55 )
    free(ptr);
  return v17;
}
