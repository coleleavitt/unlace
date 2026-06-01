__int64 __fastcall sub_1B04790(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned int *v14; // rbp
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // r15
  char v18; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 *v28; // rsi
  __int64 v29; // r8
  unsigned __int64 v30; // r15
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // esi
  _BYTE *v35; // rsi
  __int64 v36; // rbp
  unsigned int v38; // ebp
  unsigned int v39; // r12d
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r8d
  char v43; // [rsp+17h] [rbp-91h]
  __int64 *v44; // [rsp+18h] [rbp-90h]
  __m128 v46; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v48; // [rsp+48h] [rbp-60h]
  _BYTE v49[88]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *a1;
  ptr = v49;
  v48 = 0x400000000LL;
  v9 = sub_15F2610(v8, 0, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = v9;
  if ( (v12 & 1) != 0 )
  {
    v14 = (unsigned int *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    v15 = (__int64)&v14[2 * *v14 + 2];
    v16 = (__int64 *)(v14 + 2);
    v44 = (__int64 *)v15;
  }
  else
  {
    if ( !v12 )
      goto LABEL_41;
    v16 = (__int64 *)(a2 + 8);
    v44 = (__int64 *)(a2 + 16);
  }
  if ( v16 != v44 )
  {
    v43 = 0;
    while ( 1 )
    {
      v24 = *((unsigned int *)a1 + 6);
      v25 = *v16;
      v26 = a1[1];
      if ( (_DWORD)v24 )
      {
        v27 = (v24 - 1) & (((unsigned int)v25 >> 9) ^ ((unsigned int)v25 >> 4));
        v28 = (__int64 *)(v26 + 16LL * v27);
        v29 = *v28;
        if ( v25 == *v28 )
          goto LABEL_20;
        v34 = 1;
        if ( v29 != -4096 )
          break;
      }
LABEL_25:
      sub_AEAAD0(
        &v46,
        (_QWORD *)(v26 + 16LL * (unsigned int)v24),
        (_QWORD *)(v26 + 16LL * (unsigned int)v24),
        (__int64)(a1 + 1),
        1);
      v30 = v46.m128_u64[0];
LABEL_21:
      v31 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
      sub_AEAAD0(&v46, v31, v31, (__int64)(a1 + 1), 1);
      if ( v30 == v46.m128_u64[0] )
      {
        if ( !v25 )
        {
LABEL_34:
          v36 = 1;
          v35 = ptr;
          goto LABEL_30;
        }
        v17 = v25;
      }
      else
      {
        v17 = *(_QWORD *)(v30 + 8);
        if ( !v17 )
          goto LABEL_34;
        v18 = v43;
        if ( v25 != v17 )
          v18 = 1;
        v43 = v18;
      }
      if ( v13 )
      {
        v19 = *(_BYTE *)(v17 + 28) & 0x7F;
        if ( (unsigned int)(v19 - 58) <= 9 )
        {
          v20 = *(_QWORD *)(*a1 + 248);
          v21 = *(_QWORD *)(v17 + 48);
          if ( v21 )
          {
            v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v22 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v17, v20, v32, v11, v33);
            v20 = *(_QWORD *)(*a1 + 248);
          }
          *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v22, v20, v20, v32, v11) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 17LL)
                                  & 1;
          v19 = *(_BYTE *)(v17 + 28) & 0x7F;
        }
        if ( (unsigned int)(v19 - 40) <= 6 )
          *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      }
      v10 = HIDWORD(v48);
      v23 = (unsigned int)v48 + 1LL;
      if ( v23 > HIDWORD(v48) )
      {
        ++v16;
        sub_2237220(&ptr, v49, v23, 8);
        *((_QWORD *)ptr + (unsigned int)v48) = v17;
        LODWORD(v48) = v48 + 1;
        if ( v44 == v16 )
          goto LABEL_28;
      }
      else
      {
        ++v16;
        *((_QWORD *)ptr + (unsigned int)v48) = v17;
        LODWORD(v48) = v48 + 1;
        if ( v44 == v16 )
          goto LABEL_28;
      }
    }
    while ( 1 )
    {
      v42 = v34 + 1;
      v27 = (v24 - 1) & (v34 + v27);
      v28 = (__int64 *)(v26 + 16LL * v27);
      if ( v25 == *v28 )
        break;
      if ( *v28 == -4096 )
        goto LABEL_25;
      v34 = v42;
    }
LABEL_20:
    sub_AEAAD0(&v46, v28, (_QWORD *)(16 * v24 + v26), (__int64)(a1 + 1), 1);
    v30 = v46.m128_u64[0];
    goto LABEL_21;
  }
LABEL_41:
  v43 = 0;
LABEL_28:
  v35 = ptr;
  if ( *(_DWORD *)(*a1 + 12632) || (v36 = a2, v43) )
  {
    v38 = *(_DWORD *)(a2 + 16);
    v39 = *(_DWORD *)(a2 + 20);
    v40 = sub_17B2ED0(*a1, (__int64 *)ptr, (unsigned int)v48, v10, v11, a7);
    v41 = sub_1C36280(*a1, v40, v38, v39);
    v35 = ptr;
    v36 = v41;
  }
LABEL_30:
  if ( v35 != v49 )
    free(v35);
  return v36;
}
