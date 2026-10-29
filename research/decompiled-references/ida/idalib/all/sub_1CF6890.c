__int64 __fastcall sub_1CF6890(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r14
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // rdi
  __int64 v31; // r15
  int v32; // r13d
  _DWORD *v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // r9
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  _DWORD *v43; // rdx
  void **v45; // [rsp+20h] [rbp-E8h]
  _QWORD *v46; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+34h] [rbp-D4h]
  __int64 v50; // [rsp+38h] [rbp-D0h]
  __int64 v51; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+58h] [rbp-B0h] BYREF
  void *v54[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v55[32]; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  _BYTE v58[104]; // [rsp+A0h] [rbp-68h] BYREF

  v7 = *a1;
  v51 = a3;
  v52 = a4;
  sub_18C74E0(v7, 4, 0, 4);
  v11 = sub_1CE88F0(a1, *(unsigned __int16 **)(v51 + 40), a5, a6, v8, v9, v10);
  if ( v11 == 1 )
  {
    v18 = 0;
    sub_190D5E0(v7, a5);
    return v18;
  }
  v12 = v11;
  sub_190D5E0(v7, a5);
  v13 = v51;
  v53 = *(_QWORD *)(v51 + 32);
  ptr = v58;
  v57 = 0x500000000LL;
  if ( (*(_DWORD *)(v51 + 48) & 0x7FFFFFFF) != 0 )
  {
    v14 = (__int64 *)(v51 + 64);
    v45 = (void **)(v51 + 64 + 8LL * (*(_DWORD *)(v51 + 48) & 0x7FFFFFFF));
  }
  else
  {
    if ( *(char *)(v51 + 51) < 0 )
    {
LABEL_20:
      v31 = *a1;
      v32 = *(_DWORD *)(*a1 + 12632);
      v33 = v52 + 1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v34 = sub_F6C520(*(_QWORD *)(v13 + 32));
      v36 = sub_1CF4B60(
              a1,
              a2,
              *(_QWORD *)(v51 + 32),
              (__m128i *)(v34 * (((unsigned __int64)v33 - (v33 != nullptr)) / v34 + (v33 != nullptr))),
              *(_QWORD *)(v51 + 32),
              v35,
              a5,
              a6);
      v18 = sub_1E6E600(*a1, v36, v12 & 0xFFFFFFFE, 0, *v52, 1, (__int64)ptr, (unsigned int)v57);
      if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v18, 4, 4);
        *v43 = *v52;
      }
      *(_DWORD *)(v31 + 12632) = v32;
      goto LABEL_8;
    }
    v14 = &v53;
    v45 = v54;
  }
  v15 = *(_DWORD *)(v51 + 48) & 0x7FFFFFFF;
  v16 = v14;
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v17 = sub_1CF6840((unsigned int *)a1, *v16, a5, a6);
      if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v18 = 0;
        goto LABEL_8;
      }
      v41 = (unsigned int)v57;
      v42 = (unsigned int)v57 + 1LL;
      if ( v42 > HIDWORD(v57) )
      {
        v48 = v17;
        sub_2237220(&ptr, v58, v42, 8);
        v41 = (unsigned int)v57;
        v17 = v48;
      }
      *((_QWORD *)ptr + v41) = v17;
      LODWORD(v57) = v57 + 1;
      goto LABEL_28;
    }
    v20 = *a1;
    v21 = *v16;
    v50 = *v16;
    v54[0] = v55;
    v54[1] = (void *)0x200000000LL;
    sub_1E4C960(v20, v21);
    v22 = *a1;
    v23 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(v22 + 12632) = 0;
    v49 = v23;
    v46 = *(_QWORD **)(v22 + 248);
    v24 = sub_F6CCB0(&v51, a5);
    v25 = sub_A81910(v46, v50, v24);
    v28 = sub_1CF4B60(a1, a2, *v25, (__m128i *)(v25 + 1), v26, v27, a5, a6);
    if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_16;
    if ( !v15 )
      break;
    v38 = (unsigned int)v57;
    v39 = (unsigned int)v57 + 1LL;
    if ( v39 > HIDWORD(v57) )
    {
      v47 = v28;
      sub_2237220(&ptr, v58, v39, 8);
      v38 = (unsigned int)v57;
      v28 = v47;
    }
    *((_QWORD *)ptr + v38) = v28;
    LODWORD(v57) = v57 + 1;
    v40 = v54[0];
    *(_DWORD *)(v22 + 12632) = v49;
    if ( v40 != v55 )
      free(v40);
LABEL_28:
    if ( v45 == (void **)++v16 )
    {
      v13 = v51;
      goto LABEL_20;
    }
  }
  v29 = sub_1E6E600(*a1, v28, v12 & 0xFFFFFFFE, 0, *v52, 0, 0, 0);
  v18 = v29;
  if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_16:
    v18 = 0;
    goto LABEL_17;
  }
  sub_1EA6140(a2, v29, 4, 4);
  *v37 = *v52;
LABEL_17:
  v30 = v54[0];
  *(_DWORD *)(v22 + 12632) = v49;
  if ( v30 != v55 )
    free(v30);
LABEL_8:
  if ( ptr != v58 )
    free(ptr);
  return v18;
}
