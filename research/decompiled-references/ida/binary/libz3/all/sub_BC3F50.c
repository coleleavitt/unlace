void __fastcall sub_BC3F50(__int64 a1, int *a2, unsigned int a3, double a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v8; // rax
  int v9; // edx
  bool v10; // zf
  unsigned int *v11; // r13
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // ebp
  __int64 v15; // r12
  int v16; // eax
  unsigned int v17; // ebp
  double *v18; // rax
  double *v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  char v27; // al
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  unsigned int v33; // ebp
  unsigned int v34; // ecx
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+0h] [rbp-F0h]
  __int64 v39; // [rsp+0h] [rbp-F0h]
  __int64 v40; // [rsp+8h] [rbp-E8h]
  __int64 v41; // [rsp+10h] [rbp-E0h]
  __int64 v42; // [rsp+20h] [rbp-D0h]
  double *v43; // [rsp+38h] [rbp-B8h]
  unsigned int *v44; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v46[4]; // [rsp+58h] [rbp-98h] BYREF
  __int64 *v47; // [rsp+78h] [rbp-78h] BYREF
  char v48; // [rsp+80h] [rbp-70h]
  int v49; // [rsp+84h] [rbp-6Ch]
  __int64 v50; // [rsp+88h] [rbp-68h]
  int v51; // [rsp+90h] [rbp-60h]
  __int64 v52; // [rsp+98h] [rbp-58h]
  int v53; // [rsp+A0h] [rbp-50h]
  __int64 v54; // [rsp+A8h] [rbp-48h]
  unsigned int v55; // [rsp+B0h] [rbp-40h]

  if ( a3 == dword_1C7ED94 )
    return;
  v42 = a3;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + a3) == 1 )
    return;
  v8 = sub_186B270(0x10u);
  v9 = *a2;
  v10 = a3 == dword_1C7ED90;
  *(_QWORD *)v8 = 0x100000002LL;
  v11 = (unsigned int *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v10 )
  {
    v44 = (unsigned int *)(v8 + 8);
    sub_BC3460(a1, 0, &v44, a4);
LABEL_26:
    sub_186B220(v11 - 2);
    return;
  }
  sub_9936C0(*(_QWORD *)(a1 + 16), a3 >> 1);
  v44 = v11;
  v45 = 0;
  sub_BB8720(a1, 0, &v45, &v44);
  v11 = v44;
  v41 = v45;
  v40 = *(_QWORD *)(a1 + 16);
  if ( v45 )
    v12 = *(_DWORD *)(v45 - 4);
  else
    v12 = 0;
  if ( v44 )
    v13 = *(v44 - 1);
  else
    v13 = 0;
  v14 = *(_DWORD *)(a1 + 8);
  sub_B72D60((__int64)&v47, v40, v13, v44, v12, v45);
  v53 = v14;
  v54 = 0;
  v55 = a3;
  v47 = (__int64 *)&off_1C57938;
  sub_B733F0((__int64)&v47, v40);
  v15 = sub_180C100(v40 + 8400, 64);
  *(_BYTE *)(v15 + 8) = v48 & 3 | *(_BYTE *)(v15 + 8) & 0xFC;
  *(_DWORD *)(v15 + 12) = v49;
  *(_QWORD *)(v15 + 16) = v50;
  *(_DWORD *)(v15 + 24) = v51;
  *(_QWORD *)(v15 + 32) = v52;
  *(_QWORD *)v15 = qword_1C6E7C8;
  v16 = v53;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 40) = v16;
  if ( !v54 )
  {
    *(_QWORD *)v15 = &off_1C57938;
    *(_DWORD *)(v15 + 56) = v55;
    goto LABEL_14;
  }
  v17 = *(_DWORD *)(v54 - 4);
  v38 = *(_DWORD *)(v54 - 8);
  v18 = (double *)sub_186B270(16LL * v38 + 8);
  v19 = v18 + 1;
  v43 = v18 + 1;
  *(_QWORD *)&a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v17)).m128i_u64[0];
  *v18 = a4;
  *(_QWORD *)(v15 + 48) = v18 + 1;
  v20 = v54;
  if ( !v54 || (v39 = v54 + 16LL * *(unsigned int *)(v54 - 4), v54 == v39) )
  {
    *(_QWORD *)v15 = &off_1C57938;
    *(_DWORD *)(v15 + 56) = v55;
  }
  else
  {
    do
    {
      sub_15D0E50(v19, v20);
      v20 += 16;
      v19 += 2;
    }
    while ( v39 != v20 );
    v43 = *(double **)(v15 + 48);
    *(_QWORD *)v15 = &off_1C57938;
    *(_DWORD *)(v15 + 56) = v55;
    if ( !v43 )
      goto LABEL_14;
  }
  if ( *((_DWORD *)v43 - 1) )
  {
    v28 = *(_QWORD **)(v40 + 8600);
    if ( v28 )
    {
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v33 = (3 * v29 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v29 + 8 >= v34 || v29 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v46, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v28 - 1, v34);
        v36 = v35[1];
        v28 = v35 + 2;
        *(_QWORD *)(v40 + 8600) = v35 + 2;
        *v35 = v33;
        LODWORD(v35) = v36;
        v32 = &v28[v36];
        v31 = (_DWORD)v35 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = &v28[v30];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      *v37 = 2;
      v28 = v37 + 1;
      *(_QWORD *)(v40 + 8600) = v37 + 1;
      v32 = v37 + 1;
      v31 = 1;
    }
    *v32 = v15;
    *((_DWORD *)v28 - 1) = v31;
  }
LABEL_14:
  v21 = v54;
  v47 = qword_1C6E7C8;
  if ( v54 )
  {
    v22 = *(unsigned int *)(v54 - 4);
    if ( (_DWORD)v22 )
    {
      v23 = v54 + 16 * v22;
      do
      {
        v24 = v21;
        v21 += 16;
        sub_15D0DF0(v24);
      }
      while ( v23 != v21 );
      v21 = v54;
    }
    sub_186B220((void *)(v21 - 8));
  }
  v25 = *(_QWORD *)(a1 + 16);
  v26 = v15 | 3;
  *(_BYTE *)(a1 + 4170) = 1;
  v47 = (__int64 *)v26;
  v27 = *(_BYTE *)(*(_QWORD *)(v25 + 8848) + v42);
  if ( v27 == -1 )
  {
    sub_8E8670(v25, (__int64 *)&v47, a3 ^ 1);
  }
  else if ( !v27 )
  {
    sub_8F28B0(v25, a3, v26, 0);
  }
  sub_BC3570(a1, a3, &v45, &v44, a4);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  if ( v11 )
    goto LABEL_26;
}

