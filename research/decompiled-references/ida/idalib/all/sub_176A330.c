__int64 __fastcall sub_176A330(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r14
  __int64 *v12; // r13
  void **v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r15
  int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // rdi
  __int64 v27; // r15
  int v28; // r13d
  _DWORD *v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // r9
  int v32; // eax
  _DWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  _BYTE *v36; // rdi
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  _DWORD *v39; // rdx
  void **v41; // [rsp+20h] [rbp-E8h]
  _QWORD *v42; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v43; // [rsp+28h] [rbp-E0h]
  void **v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+34h] [rbp-D4h]
  __int64 v46; // [rsp+38h] [rbp-D0h]
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  void *v50[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v51[32]; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-70h]
  _BYTE v54[104]; // [rsp+A0h] [rbp-68h] BYREF

  v6 = *a1;
  v47 = a3;
  v48 = a4;
  sub_18C74E0(v6, 4, 0, 4);
  v7 = sub_175B800(a1, *(unsigned __int16 **)(v47 + 40));
  if ( v7 == 1 )
  {
    v14 = 0;
    sub_190D5E0(v6);
    return v14;
  }
  v8 = v7;
  sub_190D5E0(v6);
  v9 = v47;
  v49 = *(_QWORD *)(v47 + 32);
  ptr = v54;
  v53 = 0x500000000LL;
  if ( (*(_DWORD *)(v47 + 48) & 0x7FFFFFFF) != 0 )
  {
    v10 = (__int64 *)(v47 + 64);
    v41 = (void **)(v47 + 64 + 8LL * (*(_DWORD *)(v47 + 48) & 0x7FFFFFFF));
  }
  else
  {
    if ( *(char *)(v47 + 51) < 0 )
    {
LABEL_20:
      v27 = *a1;
      v28 = *(_DWORD *)(*a1 + 12632);
      v29 = v48 + 1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v30 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v32 = sub_17687F0(
              a1,
              a2,
              *(_QWORD *)(v47 + 32),
              (const __m128i *)(v30 * (((unsigned __int64)v29 - (v29 != nullptr)) / v30 + (v29 != nullptr))),
              *(_QWORD *)(v47 + 32),
              v31);
      v14 = sub_1E6E600(*a1, v32, v8 & 0xFFFFFFFE, 0, *v48, 1, (__int64)ptr, (unsigned int)v53);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v14, 4, 4);
        *v39 = *v48;
      }
      *(_DWORD *)(v27 + 12632) = v28;
      goto LABEL_8;
    }
    v10 = &v49;
    v41 = v50;
  }
  v11 = *(_DWORD *)(v47 + 48) & 0x7FFFFFFF;
  v12 = v10;
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v13 = sub_176A2F0(a1, *v12, a5);
      if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v14 = 0;
        goto LABEL_8;
      }
      v37 = (unsigned int)v53;
      v38 = (unsigned int)v53 + 1LL;
      if ( v38 > HIDWORD(v53) )
      {
        v44 = v13;
        sub_2237220(&ptr, v54, v38, 8);
        v37 = (unsigned int)v53;
        v13 = v44;
      }
      *((_QWORD *)ptr + v37) = v13;
      LODWORD(v53) = v53 + 1;
      goto LABEL_28;
    }
    v16 = *a1;
    v17 = *v12;
    v46 = *v12;
    v50[0] = v51;
    v50[1] = (void *)0x200000000LL;
    sub_1E4C960(v16, v17);
    v18 = *a1;
    v19 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(v18 + 12632) = 0;
    v45 = v19;
    v42 = *(_QWORD **)(v18 + 248);
    v20 = sub_F6CCB0(&v47, a5);
    v21 = sub_A81910(v42, v46, v20);
    v24 = sub_17687F0(a1, a2, *v21, (const __m128i *)(v21 + 1), v22, v23);
    if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_16;
    if ( !v11 )
      break;
    v34 = (unsigned int)v53;
    v35 = (unsigned int)v53 + 1LL;
    if ( v35 > HIDWORD(v53) )
    {
      v43 = v24;
      sub_2237220(&ptr, v54, v35, 8);
      v34 = (unsigned int)v53;
      v24 = v43;
    }
    *((_QWORD *)ptr + v34) = v24;
    LODWORD(v53) = v53 + 1;
    v36 = v50[0];
    *(_DWORD *)(v18 + 12632) = v45;
    if ( v36 != v51 )
      free(v36);
LABEL_28:
    if ( v41 == (void **)++v12 )
    {
      v9 = v47;
      goto LABEL_20;
    }
  }
  v25 = sub_1E6E600(*a1, v24, v8 & 0xFFFFFFFE, 0, *v48, 0, 0, 0);
  v14 = v25;
  if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  sub_1EA6140(a2, v25, 4, 4);
  *v33 = *v48;
LABEL_17:
  v26 = v50[0];
  *(_DWORD *)(v18 + 12632) = v45;
  if ( v26 != v51 )
    free(v26);
LABEL_8:
  if ( ptr != v54 )
    free(ptr);
  return v14;
}
