__int64 __fastcall sub_18CC4C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned int *v12; // rbp
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // r15
  char v16; // al
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 *v29; // rsi
  __int64 v30; // r8
  unsigned __int64 v31; // r15
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  int v35; // esi
  _BYTE *v36; // rdi
  __int64 v37; // rbx
  int v39; // r8d
  unsigned int v40; // r12d
  unsigned int v41; // ebp
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+17h] [rbp-91h]
  __int64 *v45; // [rsp+18h] [rbp-90h]
  __m128 v47; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+48h] [rbp-60h]
  _BYTE v50[88]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *a1;
  ptr = v50;
  v49 = 0x400000000LL;
  v9 = sub_15F2610(v8, 0, a3, a4, a5, a6);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v9;
  if ( (v10 & 1) != 0 )
  {
    v12 = (unsigned int *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    v13 = (__int64)&v12[2 * *v12 + 2];
    v14 = (__int64 *)(v12 + 2);
    v45 = (__int64 *)v13;
  }
  else
  {
    if ( !v10 )
      goto LABEL_41;
    v14 = (__int64 *)(a2 + 8);
    v45 = (__int64 *)(a2 + 16);
  }
  if ( v14 != v45 )
  {
    v44 = 0;
    while ( 1 )
    {
      v25 = *((unsigned int *)a1 + 6);
      v26 = *v14;
      v27 = a1[1];
      if ( !(_DWORD)v25 )
        break;
      v28 = (v25 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
      v29 = (__int64 *)(v27 + 16LL * v28);
      v30 = *v29;
      if ( v26 != *v29 )
      {
        v35 = 1;
        if ( v30 == -4096 )
          break;
        while ( 1 )
        {
          v39 = v35 + 1;
          v28 = (v25 - 1) & (v35 + v28);
          v29 = (__int64 *)(v27 + 16LL * v28);
          if ( v26 == *v29 )
            break;
          if ( *v29 == -4096 )
            goto LABEL_26;
          v35 = v39;
        }
      }
      sub_AEAAD0(&v47, v29, (_QWORD *)(16 * v25 + v27), (__int64)(a1 + 1), 1);
      v31 = v47.m128_u64[0];
LABEL_22:
      v32 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
      sub_AEAAD0(&v47, v32, v32, (__int64)(a1 + 1), 1);
      if ( v31 == v47.m128_u64[0] )
      {
        if ( !v26 )
        {
LABEL_28:
          v36 = ptr;
          v37 = 1;
          goto LABEL_29;
        }
        v15 = v26;
      }
      else
      {
        v15 = *(_QWORD *)(v31 + 8);
        if ( !v15 )
          goto LABEL_28;
        v16 = v44;
        if ( v26 != v15 )
          v16 = 1;
        v44 = v16;
      }
      if ( v11 )
      {
        v17 = *(_BYTE *)(v15 + 28) & 0x7F;
        if ( (unsigned int)(v17 - 58) <= 9 )
        {
          v18 = *(_QWORD *)(*a1 + 248);
          v19 = *(_QWORD *)(v15 + 48);
          if ( v19 )
          {
            v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v20 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v15, v18, v33, v21, v34);
            v18 = *(_QWORD *)(*a1 + 248);
          }
          *(_BYTE *)(v11 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v20, v18, v18, v33, v21) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 17LL)
                                  & 1;
          v17 = *(_BYTE *)(v15 + 28) & 0x7F;
        }
        if ( (unsigned int)(v17 - 40) <= 6 )
          *(_BYTE *)(v11 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      }
      v22 = HIDWORD(v49);
      v23 = (unsigned int)v49 + 1LL;
      if ( v23 > HIDWORD(v49) )
        sub_2237220(&ptr, v50, v23, 8);
      *((_QWORD *)ptr + (unsigned int)v49) = v15;
      ++v14;
      v24 = (unsigned int)(v49 + 1);
      LODWORD(v49) = v49 + 1;
      if ( v45 == v14 )
      {
        v36 = ptr;
        if ( !v44 )
          goto LABEL_33;
        v40 = *(_DWORD *)(a2 + 20);
        v41 = *(_DWORD *)(a2 + 16);
        v42 = sub_17B2ED0(*a1, (__int64 *)ptr, v24, v22, v21, a7);
        v43 = sub_1C36280(*a1, v42, v41, v40);
        v36 = ptr;
        v37 = v43;
        goto LABEL_29;
      }
    }
LABEL_26:
    sub_AEAAD0(
      &v47,
      (_QWORD *)(v27 + 16LL * (unsigned int)v25),
      (_QWORD *)(v27 + 16LL * (unsigned int)v25),
      (__int64)(a1 + 1),
      1);
    v31 = v47.m128_u64[0];
    goto LABEL_22;
  }
LABEL_41:
  v36 = ptr;
LABEL_33:
  v37 = a2;
LABEL_29:
  if ( v36 != v50 )
    free(v36);
  return v37;
}
