__int64 __fastcall sub_195F190(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbp
  int v9; // r14d
  int v10; // r15d
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 *v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // [rsp-10h] [rbp-C8h]
  __int64 v49; // [rsp-8h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+0h] [rbp-B8h]
  __int64 v51; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+0h] [rbp-B8h]
  unsigned int v53; // [rsp+0h] [rbp-B8h]
  __int64 v54; // [rsp+0h] [rbp-B8h]
  _QWORD *v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+18h] [rbp-A0h]
  char v58; // [rsp+27h] [rbp-91h] BYREF
  __int64 v59; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v61; // [rsp+38h] [rbp-80h]
  _BYTE v62[120]; // [rsp+40h] [rbp-78h] BYREF

  v61 = 0x800000000LL;
  v5 = *(unsigned int *)(a2 + 4);
  v58 = 0;
  ptr = v62;
  v6 = v5;
  if ( v5 > 8 )
  {
    sub_2237220(&ptr, v62, v5, 8);
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_195E940(a1, *(unsigned __int16 ***)(a2 + 24), v6, 0, (__int64)&ptr, &v58, a3, a4) )
  {
    v7 = 1;
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_DWORD *)(a2 + 20);
  v55 = ptr;
  v56 = (unsigned int)v61;
  v15 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL), "__builtin_shufflevector", 0x17u);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
  v17 = *(_QWORD *)(v16 + 72);
  if ( (v17 & 1) != 0 )
  {
    v11 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_10:
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v18;
    if ( v11 )
    {
      v11 &= 4u;
      if ( (_DWORD)v11 )
      {
        v19 = 0;
        if ( v18 )
        {
          v20 = *(_QWORD *)v18;
          v11 = *(unsigned int *)(*(_QWORD *)v18 + 12LL);
          if ( *(_DWORD *)(v18 + 8) != (_DWORD)v11 )
          {
            *(_DWORD *)(v18 + 8) = v11;
            v50 = v18;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v16);
            v18 = v50;
          }
          v19 = *(_QWORD *)(v18 + 16);
        }
      }
    }
    goto LABEL_16;
  }
  v12 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v19 = 0;
    goto LABEL_16;
  }
  v19 = v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v17 & 2) != 0 )
  {
    v13 = v12[2295];
    v42 = v16 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v13 )
    {
      v43 = v12[294];
      v12[304] += 24LL;
      v44 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12[295] >= v44 + 24 && v43 )
      {
        v12[294] = v44 + 24;
        v45 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v54 = v13;
        v45 = sub_986170((__int64)(v12 + 294), 24, 24, 3, v13, v14);
        v13 = v54;
        v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v45 = v13;
      v42 = v44 | 4;
      *(_DWORD *)(v45 + 8) = 0;
      *(_QWORD *)(v45 + 16) = v16;
    }
    v11 = v42 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v11 | 1;
    *(_QWORD *)(v16 + 72) = v11 | 1;
    goto LABEL_10;
  }
LABEL_16:
  v21 = sub_B94670(v19 + 40, v15, v11, (__int64)v12, v13, v14);
  v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v21 & 4) != 0 )
  {
    v23 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    v22 = 0;
    if ( v23 )
      v22 = *v23;
  }
  v24 = *(_QWORD **)(*a1 + 248);
  v25 = v24[2389];
  v59 = 0;
  v51 = v25;
  v26 = sub_EEE9A0(32, v24, 8u);
  v27 = v51;
  v52 = v26;
  sub_BF7BD0(v26, *(_QWORD *)(*a1 + 248), v22, 0, v27, 0, v9, &v59, 0);
  v28 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v22 + 48));
  v57 = sub_160A600(*a1, v52, v28, 0x3Du, 0, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64, 0)
      & 0xFFFFFFFFFFFFFFFELL;
  v29 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v30 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 25;
  if ( (unsigned int)v30 > 1 )
    v29 = sub_F63050(v29, v49, v30, v48);
  v31 = *(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  v32 = *(unsigned __int8 *)(v31 + 16);
  v33 = (unsigned int)(v32 - 43);
  if ( (unsigned int)v33 <= 1 )
    goto LABEL_22;
  v33 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v33 <= 1 )
  {
    v31 = sub_F63050(v31, v49, v33, v32);
    if ( v31 )
    {
      v32 = *(unsigned __int8 *)(v31 + 16);
LABEL_22:
      if ( (_BYTE)v32 == 43 )
        goto LABEL_23;
      while ( 1 )
      {
        v33 = *(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v46 = (*(_BYTE *)(v31 + 18) & 0x10) == 0;
        v31 = *(_QWORD *)v33;
        if ( v46 )
          break;
        v47 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43;
        if ( (unsigned int)v47 > 1 )
          v31 = sub_F63050(v31, v49, v47, v32);
      }
      v53 = 2;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_23:
        v53 = 1;
      goto LABEL_24;
    }
  }
  v53 = 0;
LABEL_24:
  v34 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 25 > 1 )
    v34 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL), v49, v33, v32);
  v35 = sub_B8C330(v22);
  v59 = *(_QWORD *)(v34 + 24);
  v36 = sub_F67970(&v59, v35);
  v37 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v57, v55, v56, v36, v53, v10, 0, 0, 0);
  v7 = sub_16D1970(*a1, (void **)(v37 & 0xFFFFFFFFFFFFFFFELL), *(double *)a3.m128_u64, v38, v39, v40, v41);
LABEL_5:
  if ( ptr != v62 )
    free(ptr);
  return v7;
}
