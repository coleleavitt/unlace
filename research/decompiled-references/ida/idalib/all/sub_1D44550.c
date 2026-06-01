__int64 __fastcall sub_1D44550(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v9; // r13d
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned int v33; // r13d
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // [rsp-10h] [rbp-C8h]
  __int64 v48; // [rsp-8h] [rbp-C0h]
  _QWORD *v49; // [rsp+0h] [rbp-B8h]
  __int64 v50; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v51; // [rsp+10h] [rbp-A8h]
  __int64 v52; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+10h] [rbp-A8h]
  int v54; // [rsp+1Ch] [rbp-9Ch]
  char v55; // [rsp+27h] [rbp-91h] BYREF
  __int64 v56; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v58; // [rsp+38h] [rbp-80h]
  _BYTE v59[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  v58 = 0x800000000LL;
  v6 = *(unsigned int *)(a2 + 4);
  v55 = 0;
  ptr = v59;
  v7 = v6;
  if ( v6 > 8 )
  {
    sub_2237220(&ptr, v59, v6, 8);
    v7 = *(unsigned int *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_1D43E00(a1, *(unsigned __int16 ***)(a2 + 24), v7, 0, (__int64)&ptr, &v55, a3, a4) )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(*a1 + 12632) || v55 )
  {
    v9 = *(_DWORD *)(a2 + 16);
    v49 = ptr;
    v50 = (unsigned int)v58;
    v54 = *(_DWORD *)(a2 + 20);
    v14 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL), "__builtin_shufflevector", 0x17u);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
    v16 = *(_QWORD *)(v15 + 72);
    if ( (v16 & 1) != 0 )
    {
      v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v11 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v18 = 0;
        goto LABEL_18;
      }
      v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v16 & 2) == 0 )
      {
LABEL_18:
        v20 = sub_B94670(v18 + 40, v14, v10, (__int64)v11, v12, v13);
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v20 & 4) != 0 )
        {
          v22 = (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
          v21 = 0;
          if ( v22 )
            v21 = *v22;
        }
        v23 = *(_QWORD **)(*a1 + 248);
        v24 = v23[2389];
        v56 = 0;
        v52 = v24;
        v25 = sub_EEE9A0(32, v23, 8u);
        sub_BF7BD0(v25, *(_QWORD *)(*a1 + 248), v21, 0, v52, 0, v9, &v56, 0);
        v26 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v21 + 48));
        v53 = sub_160A600(*a1, v25, v26, 0x3Du, 0, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64, 0)
            & 0xFFFFFFFFFFFFFFFELL;
        v28 = v47;
        v29 = *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v30 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 25;
        if ( (unsigned int)v30 > 1 )
          v29 = sub_F63050(v29, v48, v30, v47);
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        LODWORD(v29) = *(unsigned __int8 *)(v31 + 16);
        v32 = (unsigned int)(v29 - 43);
        if ( (unsigned int)v32 > 1 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
            || (v29 = sub_F63050(v31, v48, v32, v28), (v31 = v29) == 0) )
          {
            v33 = 0;
LABEL_26:
            v34 = *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 25 > 1 )
              v34 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL), v48, v32, v28);
            v35 = sub_B8C330(v21);
            v56 = *(_QWORD *)(v34 + 24);
            v36 = sub_F67970(&v56, v35);
            v37 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v53, v49, v50, v36, v33, v54, 0, 0, 0);
            v4 = sub_16D1970(*a1, (void **)(v37 & 0xFFFFFFFFFFFFFFFELL), *(double *)a3.m128_u64, v38, v39, v40, v41);
            goto LABEL_5;
          }
          LOBYTE(v29) = *(_BYTE *)(v29 + 16);
        }
        if ( (_BYTE)v29 == 43
          || (v33 = 2,
              (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_9B4870(v31, v48, v32, v28, v27)
                                                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                                                       + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 25 <= 1) )
        {
          v33 = 1;
        }
        goto LABEL_26;
      }
      v42 = v11[2295];
      v43 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v42 )
      {
        v44 = v11[294];
        v11[304] += 24LL;
        v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[295] >= v45 + 24 && v44 )
        {
          v11[294] = v45 + 24;
          v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v46 = sub_986170((__int64)(v11 + 294), 24, 24, 3, v12, v13);
          v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v46 = v42;
        v43 = v45 | 4;
        *(_DWORD *)(v46 + 8) = 0;
        *(_QWORD *)(v46 + 16) = v15;
      }
      v10 = v43 & 0xFFFFFFFFFFFFFFFELL;
      v16 = v10 | 1;
      *(_QWORD *)(v15 + 72) = v10 | 1;
    }
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17;
    if ( v10 )
    {
      v10 &= 4u;
      if ( (_DWORD)v10 )
      {
        v18 = 0;
        if ( v17 )
        {
          v19 = *(_QWORD *)v17;
          v10 = *(unsigned int *)(*(_QWORD *)v17 + 12LL);
          if ( *(_DWORD *)(v17 + 8) != (_DWORD)v10 )
          {
            *(_DWORD *)(v17 + 8) = v10;
            v51 = v17;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v15);
            v17 = v51;
          }
          v18 = *(_QWORD *)(v17 + 16);
        }
      }
    }
    goto LABEL_18;
  }
LABEL_5:
  if ( ptr != v59 )
    free(ptr);
  return v4;
}
