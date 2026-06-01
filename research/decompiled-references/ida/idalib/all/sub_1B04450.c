__int64 __fastcall sub_1B04450(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
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
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  int v34; // r8d
  unsigned int v35; // r12d
  unsigned int v36; // ebp
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  __int64 *v40; // [rsp+10h] [rbp-98h]
  __m128 v42; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v44; // [rsp+48h] [rbp-60h]
  _BYTE v45[88]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *a1;
  ptr = v45;
  v44 = 0x400000000LL;
  v9 = sub_15F2610(v8, 0, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = v9;
  if ( (v12 & 1) != 0 )
  {
    v14 = (unsigned int *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    v15 = (__int64)&v14[2 * *v14 + 2];
    v16 = (__int64 *)(v14 + 2);
    v40 = (__int64 *)v15;
  }
  else
  {
    if ( !v12 )
      goto LABEL_27;
    v16 = (__int64 *)(a2 + 8);
    v40 = (__int64 *)(a2 + 16);
  }
  if ( v16 != v40 )
  {
    while ( 1 )
    {
      v31 = *((unsigned int *)a1 + 6);
      v24 = *v16;
      v32 = a1[1];
      if ( (_DWORD)v31 )
      {
        v17 = (v31 - 1) & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
        v18 = (__int64 *)(v32 + 16LL * v17);
        v19 = *v18;
        if ( v24 == *v18 )
          goto LABEL_6;
        v33 = 1;
        if ( v19 != -4096 )
          break;
      }
LABEL_21:
      sub_AEAAD0(
        &v42,
        (_QWORD *)(v32 + 16LL * (unsigned int)v31),
        (_QWORD *)(v32 + 16LL * (unsigned int)v31),
        (__int64)(a1 + 1),
        1);
      v20 = v42.m128_u64[0];
LABEL_7:
      v21 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
      sub_AEAAD0(&v42, v21, v21, (__int64)(a1 + 1), 1);
      if ( v20 != v42.m128_u64[0] )
        v24 = *(_QWORD *)(v20 + 8);
      if ( !v24 )
      {
        v38 = 1;
        goto LABEL_29;
      }
      if ( v13 )
      {
        v25 = *(_BYTE *)(v24 + 28) & 0x7F;
        if ( (unsigned int)(v25 - 58) <= 9 )
        {
          v26 = *(_QWORD *)(*a1 + 248);
          v27 = *(_QWORD *)(v24 + 48);
          if ( v27 )
          {
            v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v28 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v24, v26, v22, v11, v23);
            v26 = *(_QWORD *)(*a1 + 248);
          }
          *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v28, v26, v26, v22, v11) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 17LL)
                                  & 1;
          v25 = *(_BYTE *)(v24 + 28) & 0x7F;
        }
        if ( (unsigned int)(v25 - 40) <= 6 )
          *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      }
      v10 = HIDWORD(v44);
      v29 = (unsigned int)v44 + 1LL;
      if ( v29 > HIDWORD(v44) )
        sub_2237220(&ptr, v45, v29, 8);
      *((_QWORD *)ptr + (unsigned int)v44) = v24;
      ++v16;
      v30 = (unsigned int)(v44 + 1);
      LODWORD(v44) = v44 + 1;
      if ( v40 == v16 )
        goto LABEL_28;
    }
    while ( 1 )
    {
      v34 = v33 + 1;
      v17 = (v31 - 1) & (v33 + v17);
      v18 = (__int64 *)(v32 + 16LL * v17);
      if ( v24 == *v18 )
        break;
      if ( *v18 == -4096 )
        goto LABEL_21;
      v33 = v34;
    }
LABEL_6:
    sub_AEAAD0(&v42, v18, (_QWORD *)(16 * v31 + v32), (__int64)(a1 + 1), 1);
    v20 = v42.m128_u64[0];
    goto LABEL_7;
  }
LABEL_27:
  v30 = (unsigned int)v44;
LABEL_28:
  v35 = *(_DWORD *)(a2 + 20);
  v36 = *(_DWORD *)(a2 + 16);
  v37 = sub_17B2ED0(*a1, (__int64 *)ptr, v30, v10, v11, a7);
  v38 = sub_1C36280(*a1, v37, v36, v35);
LABEL_29:
  if ( ptr != v45 )
    free(ptr);
  return v38;
}
