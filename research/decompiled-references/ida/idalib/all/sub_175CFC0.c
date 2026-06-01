__int64 __fastcall sub_175CFC0(__int64 *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rax
  int v7; // edx
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdi
  int v20; // eax
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
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rdx
  __int64 v47; // [rsp-10h] [rbp-C8h]
  __int64 v48; // [rsp-8h] [rbp-C0h]
  __int64 v49; // [rsp+0h] [rbp-B8h]
  __int64 v50; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+0h] [rbp-B8h]
  unsigned int v52; // [rsp+0h] [rbp-B8h]
  __int64 v53; // [rsp+0h] [rbp-B8h]
  _QWORD *v54; // [rsp+8h] [rbp-B0h]
  __int64 v55; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+18h] [rbp-A0h]
  char v57; // [rsp+27h] [rbp-91h] BYREF
  __int64 v58; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v60; // [rsp+38h] [rbp-80h]
  _BYTE v61[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  v60 = 0x800000000LL;
  v6 = *(unsigned int *)(a2 + 4);
  v57 = 0;
  ptr = v61;
  v7 = v6;
  if ( v6 > 8 )
  {
    sub_2237220(&ptr, v61, v6, 8);
    v7 = *(_DWORD *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_175C6E0(a1, *(unsigned __int16 ***)(a2 + 24), v7, 0, (__int64)&ptr, &v57) )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(*a1 + 12632) || v57 )
  {
    v9 = *(_DWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 20);
    v54 = ptr;
    v55 = (unsigned int)v60;
    v14 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL), "__builtin_shufflevector", 0x17u);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
    v16 = *(_QWORD *)(v15 + 72);
    if ( (v16 & 1) != 0 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v42 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v18 = 0;
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(v15 + 72) & 2LL;
      v18 = v42;
      if ( !(_DWORD)v16 )
      {
LABEL_18:
        v21 = sub_B94670(v18 + 40, v14, v16, v11, v12, v13);
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
        v58 = 0;
        v50 = v25;
        v26 = sub_EEE9A0(32, v24, 8u);
        v27 = v50;
        v51 = v26;
        sub_BF7BD0(v26, *(_QWORD *)(*a1 + 248), v22, 0, v27, 0, v9, &v58, 0);
        v28 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v22 + 48));
        v56 = sub_160A600(*a1, v51, v28, 0x3Du, 0, 0, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
        v29 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v30 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 25;
        if ( (unsigned int)v30 > 1 )
          v29 = sub_F63050(v29, v48, v30, v47);
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        v32 = *(unsigned __int8 *)(v31 + 16);
        v33 = (unsigned int)(v32 - 43);
        if ( (unsigned int)v33 > 1 )
        {
          v33 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
          if ( (unsigned int)v33 > 1 || (v31 = sub_F63050(v31, v48, v33, v32)) == 0 )
          {
            v52 = 0;
LABEL_26:
            v34 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 25 > 1 )
              v34 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL), v48, v33, v32);
            v35 = sub_B8C330(v22);
            v58 = *(_QWORD *)(v34 + 24);
            v36 = sub_F67970(&v58, v35);
            v37 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v56, v54, v55, v36, v52, v10, 0, 0, 0);
            v4 = sub_16D1970(*a1, (void **)(v37 & 0xFFFFFFFFFFFFFFFELL), a3, v38, v39, v40, v41);
            goto LABEL_5;
          }
          v32 = *(unsigned __int8 *)(v31 + 16);
        }
        if ( (_BYTE)v32 == 43 )
          goto LABEL_25;
        while ( 1 )
        {
          v33 = *(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v45 = (*(_BYTE *)(v31 + 18) & 0x10) == 0;
          v31 = *(_QWORD *)v33;
          if ( v45 )
            break;
          v46 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43;
          if ( (unsigned int)v46 > 1 )
            v31 = sub_F63050(v31, v48, v46, v32);
        }
        v52 = 2;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_25:
          v52 = 1;
        goto LABEL_26;
      }
      v11 = *(_QWORD *)(v42 + 18360);
      v43 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      v53 = v11;
      if ( v11 )
      {
        v44 = sub_1744E40((__int64 *)(v42 + 2352), 24, 3u);
        v11 = v53;
        *(_DWORD *)(v44 + 8) = 0;
        *(_QWORD *)v44 = v53;
        *(_QWORD *)(v44 + 16) = v15;
        v43 = v44 | 4;
      }
      v17 = v43 & 0xFFFFFFFFFFFFFFFELL;
      v16 = v17 | 1;
      *(_QWORD *)(v15 + 72) = v17 | 1;
    }
    v16 &= 0xFFFFFFFFFFFFFFF8LL;
    v18 = v16;
    if ( v17 )
    {
      if ( (v17 & 4) != 0 )
      {
        v18 = 0;
        if ( v16 )
        {
          v19 = *(_QWORD *)v16;
          v20 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
          if ( *(_DWORD *)(v16 + 8) != v20 )
          {
            *(_DWORD *)(v16 + 8) = v20;
            v49 = v16;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v15);
            v16 = v49;
          }
          v18 = *(_QWORD *)(v16 + 16);
        }
      }
    }
    goto LABEL_18;
  }
LABEL_5:
  if ( ptr != v61 )
    free(ptr);
  return v4;
}
