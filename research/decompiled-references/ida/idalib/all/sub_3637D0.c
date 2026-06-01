__int64 __fastcall sub_3637D0(__int64 a1, unsigned __int64 a2, __int64 a3, const char *a4, const char *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rcx
  size_t v13; // rdx
  size_t v14; // r8
  __int64 v15; // r14
  size_t v16; // r9
  _BYTE *v17; // rsi
  int v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // r13
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // r14
  char *v33; // rsi
  size_t v34; // rdx
  unsigned __int64 *v35; // r13
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  char *v42; // rax
  char v43; // al
  void *v44; // rdi
  size_t v46; // [rsp+38h] [rbp-100h]
  __int64 v50; // [rsp+58h] [rbp-E0h]
  size_t v52; // [rsp+68h] [rbp-D0h]
  unsigned __int64 *v53; // [rsp+70h] [rbp-C8h]
  const char *v54; // [rsp+78h] [rbp-C0h]
  __int64 v55; // [rsp+80h] [rbp-B8h]
  size_t n; // [rsp+88h] [rbp-B0h]
  size_t nb; // [rsp+88h] [rbp-B0h]
  size_t na; // [rsp+88h] [rbp-B0h]
  __int64 v61; // [rsp+A0h] [rbp-98h]
  void *v62; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-88h]
  void *ptr; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-68h]
  char v66[24]; // [rsp+E8h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+100h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 96LL);
  v50 = *(_QWORD *)(a1 + 88);
  v53 = *(unsigned __int64 **)a3;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v8 = *(unsigned __int64 **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    goto LABEL_73;
  }
  v61 = 0;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(unsigned __int64 **)a3;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v6 + 64) + 304 * v61;
    if ( *(_QWORD *)(v22 + 8) != -1 )
      break;
LABEL_30:
    if ( (unsigned __int64)++v61 >= *(_QWORD *)(v6 + 16) )
      goto LABEL_73;
  }
  v23 = *(_QWORD *)(v6 + 8) + 144 * v61;
  v24 = *(_QWORD *)v23;
  if ( v53 != &v8[2 * v7] && *v53 < v24 )
  {
    sub_3635D0(a1, *(_QWORD *)(v6 + 360), *v53, v53[1]);
    v53 += 2;
    v24 = *(_QWORD *)v23;
  }
  v25 = *(_QWORD *)(v6 + 360);
  v26 = *(_BYTE *)(v6 + 436);
  v55 = (v24 >> 3) + v25;
  if ( !v26 || (v27 = a2, *(_QWORD *)(v6 + 16) != v61 + 1) )
  {
    v26 = 0;
    v27 = (*(_QWORD *)(v23 + 8) + v24) >> 3;
  }
  *(_QWORD *)(a1 + 712) = v25 + v27;
  *(_QWORD *)(v6 + 376) = v23;
  qmemcpy((void *)(v6 + 88), (const void *)(v22 + 16), 0x110u);
  if ( (*(_QWORD *)v22 & 0xF00000LL) == 0x500000 && (*(_BYTE *)(v6 + 113) & 0x10) != 0 )
    *(_QWORD *)(v6 + 96) = v55;
  v54 = a5;
  if ( (*(_BYTE *)(v23 + 133) & 8) == 0 && *(_QWORD *)(v23 + 48) > 1u )
    v54 = (const char *)sub_537210(v23);
  v28 = *(_QWORD *)(v50 + 80);
  v29 = *(_QWORD *)(v50 + 72);
  if ( v28 <= 1 )
  {
    v30 = *(_QWORD *)(v29 + 8 * v28 - 8);
    v31 = *(_DWORD *)(v23 + 112);
    v11 = 0;
    v63 = 0;
    *(_DWORD *)(v30 + 432) = v31;
    v62 = nullptr;
    if ( !a4 )
      goto LABEL_9;
LABEL_4:
    n = strlen(a4);
    v62 = (void *)qvector_reserve(&v62, 0, n + 1, 1);
    *(_QWORD *)&v63 = n + 1;
    memmove(v62, a4, n);
    *((_BYTE *)v62 + n) = 0;
    if ( (v11 & 4) == 0 )
      goto LABEL_46;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v29 + 8 * v28 - 16);
  v10 = *(_QWORD *)(v29 + 8 * v28 - 8);
  v62 = nullptr;
  v63 = 0;
  v11 = *(_DWORD *)(v9 + 432);
  *(_DWORD *)(v10 + 432) = *(_DWORD *)(v23 + 112);
  if ( a4 )
    goto LABEL_4;
  if ( (v11 & 4) == 0 )
    goto LABEL_9;
LABEL_5:
  v12 = 10;
  if ( (v11 & 0xC0) == 0 )
    v12 = (unsigned int)byte_23AC0A4[(v11 >> 4) & 0xF];
  if ( btoa64(v66, 20, a6, v12) )
  {
    if ( (unsigned __int64)v63 <= 1 )
      goto LABEL_9;
    sub_35A790((char **)&v62);
  }
LABEL_46:
  v32 = v63;
  if ( (unsigned __int64)v63 > 1 )
  {
    v33 = (char *)v62;
    v34 = v63 + 1;
    if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
    {
      nb = v63 + 1;
      v62 = (void *)qvector_reserve(&v62, v62, v34, 1);
      v34 = nb;
      v33 = (char *)v62;
    }
    *(_QWORD *)&v63 = v34;
    v33[v32 - 1] = 46;
    *((_BYTE *)v62 + v32) = 0;
  }
LABEL_9:
  v13 = *(_QWORD *)(v23 + 24);
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v13 != 1 )
    {
      v15 = v63;
      v16 = v13 - 1;
      if ( (_QWORD)v63 )
      {
        v15 = v63 - 1;
        v16 = v14 + v63 - 1;
        v13 += v63 - 1;
      }
      v17 = v62;
      if ( *((_QWORD *)&v63 + 1) < v13 )
      {
        v46 = v16;
        v52 = v14;
        na = v13;
        v62 = (void *)qvector_reserve(&v62, v62, v13, 1);
        v16 = v46;
        v17 = v62;
        v14 = v52;
        v13 = na;
      }
      *(_QWORD *)&v63 = v13;
      v17[v16] = 0;
      memcpy((char *)v62 + v15, *(const void **)(v23 + 16), v14);
    }
  }
  v18 = *(_DWORD *)(a1 + 144);
  if ( (*(_BYTE *)(v23 + 64) & 0xF) != 0xE )
  {
    if ( (v18 & 0x200000) != 0 )
    {
      *(_DWORD *)(a1 + 144) = v18 & 0xFFDFFFFF;
      *(_QWORD *)(a1 + 704) = -1;
      sub_382A40(a1, v55, 0);
    }
    if ( !v26 )
    {
      v20 = *(_QWORD *)(v23 + 8) >> 3;
      goto LABEL_22;
    }
    v19 = (unsigned __int64)(*(_QWORD *)v23 + 7LL) >> 3;
    if ( a2 >= v19 )
    {
      v20 = a2 - v19;
LABEL_22:
      if ( v20 )
      {
        v21 = haystack;
        if ( (_QWORD)v63 )
          LODWORD(v21) = (_DWORD)v62;
        if ( (unsigned __int8)sub_364730(a1, v55, 2, (int)v21, (int)v54) )
          goto LABEL_78;
        if ( *(_BYTE *)(v6 + 59) )
        {
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree(v62);
          }
          v8 = *(unsigned __int64 **)a3;
          v7 = *(_QWORD *)(a3 + 8);
LABEL_73:
          if ( v53 == &v8[2 * v7] )
            return 0;
          sub_3635D0(a1, *(_QWORD *)(v6 + 360), *v53, v53[1]);
          if ( v53 + 2 == (unsigned __int64 *)(*(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8)) )
            return 0;
          if ( !under_debugger )
            interr(3026);
LABEL_84:
          BUG();
        }
      }
    }
LABEL_27:
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    v8 = *(unsigned __int64 **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    goto LABEL_30;
  }
  *(_QWORD *)(a1 + 704) = -1;
  *(_DWORD *)(a1 + 144) = v18 | 0x200000;
  v35 = *(unsigned __int64 **)(v6 + 384);
  v36 = *(_QWORD *)v23;
  v37 = &v35[2 * *(_QWORD *)(v6 + 392)];
  if ( v35 == v37 )
    goto LABEL_65;
  while ( v36 < *v35 || v36 >= v35[1] )
  {
    v35 += 2;
    if ( v37 == v35 )
      goto LABEL_65;
  }
  if ( !v35 )
  {
LABEL_65:
    if ( !under_debugger )
      interr(3025);
    goto LABEL_84;
  }
  sub_382A40(a1, *(_QWORD *)(v6 + 360) + (*v35 >> 3), (unsigned int)v36 - (unsigned int)*v35);
  v38 = v35[1];
  v65 = 0;
  v39 = *(_QWORD *)(v6 + 360) + (v38 >> 3);
  ptr = nullptr;
  *(_QWORD *)(a1 + 200) = v39;
  sub_35A790((char **)&ptr);
  v40 = (unsigned __int64)(*(_QWORD *)(v23 + 8) + 7LL) >> 3;
  v41 = (int)v40;
  if ( (int)v40 > 2 )
  {
    v41 = 4;
    if ( (_DWORD)v40 != 3 )
      v41 = 8LL * ((int)v40 > 8) + 8;
  }
  v42 = (char *)haystack;
  if ( (_QWORD)v63 )
    v42 = (char *)v62;
  v43 = sub_361EB0(
          a1,
          v55,
          v41,
          *(_QWORD *)v22,
          (__int64)ptr,
          v41,
          *(_QWORD *)(v22 + 8),
          *(_QWORD *)(v22 + 288),
          *(_DWORD *)(v22 + 296),
          0,
          v42,
          v54,
          (unsigned __int64 *)v23);
  v44 = ptr;
  if ( !v43 )
  {
    *(_QWORD *)(a1 + 704) = -1;
    if ( v44 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v44);
    }
    goto LABEL_27;
  }
  if ( ptr )
  {
    *(_QWORD *)&v65 = 0;
    qfree(ptr);
  }
LABEL_78:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  return 1;
}
