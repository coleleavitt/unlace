__int64 __fastcall sub_1747810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  unsigned int *v11; // rbp
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // r15
  char v15; // al
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 *v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // r15
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // esi
  _BYTE *v33; // rsi
  __int64 v34; // rbp
  unsigned int v36; // ebp
  unsigned int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  char v41; // [rsp+17h] [rbp-91h]
  __int64 *v42; // [rsp+18h] [rbp-90h]
  __m128 v44; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+48h] [rbp-60h]
  _BYTE v47[88]; // [rsp+50h] [rbp-58h] BYREF

  v7 = *a1;
  ptr = v47;
  v46 = 0x400000000LL;
  v8 = sub_15F2610(v7, 0, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v8;
  if ( (v9 & 1) != 0 )
  {
    v11 = (unsigned int *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    v12 = (__int64)&v11[2 * *v11 + 2];
    v13 = (__int64 *)(v11 + 2);
    v42 = (__int64 *)v12;
  }
  else
  {
    if ( !v9 )
      goto LABEL_41;
    v13 = (__int64 *)(a2 + 8);
    v42 = (__int64 *)(a2 + 16);
  }
  if ( v13 != v42 )
  {
    v41 = 0;
    while ( 1 )
    {
      v21 = *((unsigned int *)a1 + 6);
      v22 = *v13;
      v23 = a1[1];
      if ( (_DWORD)v21 )
      {
        v24 = (v21 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        v25 = (__int64 *)(v23 + 16LL * v24);
        v26 = *v25;
        if ( v22 == *v25 )
          goto LABEL_20;
        v32 = 1;
        if ( v26 != -4096 )
          break;
      }
LABEL_25:
      sub_AEAAD0(
        &v44,
        (_QWORD *)(v23 + 16LL * (unsigned int)v21),
        (_QWORD *)(v23 + 16LL * (unsigned int)v21),
        (__int64)(a1 + 1),
        1);
      v27 = v44.m128_u64[0];
LABEL_21:
      v28 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
      sub_AEAAD0(&v44, v28, v28, (__int64)(a1 + 1), 1);
      if ( v27 == v44.m128_u64[0] )
      {
        if ( !v22 )
        {
LABEL_34:
          v34 = 1;
          v33 = ptr;
          goto LABEL_30;
        }
        v14 = v22;
      }
      else
      {
        v14 = *(_QWORD *)(v27 + 8);
        if ( !v14 )
          goto LABEL_34;
        v15 = v41;
        if ( v22 != v14 )
          v15 = 1;
        v41 = v15;
      }
      if ( v10 )
      {
        v16 = *(_BYTE *)(v14 + 28) & 0x7F;
        if ( (unsigned int)(v16 - 58) <= 9 )
        {
          v17 = *(_QWORD *)(*a1 + 248);
          v18 = *(_QWORD *)(v14 + 48);
          if ( v18 )
          {
            v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v19 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v14, v17, v29, v30, v31);
            v17 = *(_QWORD *)(*a1 + 248);
          }
          *(_BYTE *)(v10 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v19, v17, v17, v29, v30) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 17LL)
                                  & 1;
          v16 = *(_BYTE *)(v14 + 28) & 0x7F;
        }
        if ( (unsigned int)(v16 - 40) <= 6 )
          *(_BYTE *)(v10 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      }
      v20 = (unsigned int)v46 + 1LL;
      if ( v20 > HIDWORD(v46) )
      {
        ++v13;
        sub_2237220(&ptr, v47, v20, 8);
        *((_QWORD *)ptr + (unsigned int)v46) = v14;
        LODWORD(v46) = v46 + 1;
        if ( v42 == v13 )
          goto LABEL_28;
      }
      else
      {
        ++v13;
        *((_QWORD *)ptr + (unsigned int)v46) = v14;
        LODWORD(v46) = v46 + 1;
        if ( v42 == v13 )
          goto LABEL_28;
      }
    }
    while ( 1 )
    {
      v40 = v32 + 1;
      v24 = (v21 - 1) & (v32 + v24);
      v25 = (__int64 *)(v23 + 16LL * v24);
      if ( v22 == *v25 )
        break;
      if ( *v25 == -4096 )
        goto LABEL_25;
      v32 = v40;
    }
LABEL_20:
    sub_AEAAD0(&v44, v25, (_QWORD *)(16 * v21 + v23), (__int64)(a1 + 1), 1);
    v27 = v44.m128_u64[0];
    goto LABEL_21;
  }
LABEL_41:
  v41 = 0;
LABEL_28:
  v33 = ptr;
  if ( *(_DWORD *)(*a1 + 12632) || (v34 = a2, v41) )
  {
    v36 = *(_DWORD *)(a2 + 16);
    v37 = *(_DWORD *)(a2 + 20);
    v38 = sub_17B2ED0(*a1, ptr);
    v39 = sub_1C36280(*a1, v38, v36, v37);
    v33 = ptr;
    v34 = v39;
  }
LABEL_30:
  if ( v33 != v47 )
    free(v33);
  return v34;
}
