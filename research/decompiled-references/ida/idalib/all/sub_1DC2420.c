__int64 __fastcall sub_1DC2420(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  char v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // r15
  _BYTE *v28; // rsi
  __int64 v29; // rbx
  int v31; // ebx
  int v32; // ebp
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38; // [rsp+28h] [rbp-60h]
  _BYTE v39[88]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *a1;
  ptr = v39;
  v38 = 0x400000000LL;
  v9 = sub_15F2610(v8, 0, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = v9;
  if ( (v12 & 1) != 0 )
  {
    v14 = (unsigned int *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    v15 = (__int64)&v14[2 * *v14 + 2];
    v16 = (__int64 *)(v14 + 2);
    v35 = (__int64 *)v15;
  }
  else
  {
    if ( !v12 )
    {
      v17 = 0;
LABEL_23:
      v28 = ptr;
      if ( *(_DWORD *)(*a1 + 12632) || (v29 = a2, v17) )
      {
        v31 = *(_DWORD *)(a2 + 16);
        v32 = *(_DWORD *)(a2 + 20);
        v33 = sub_17B2ED0(*a1, (__int64 *)ptr, (unsigned int)v38, v10, v11, a7);
        v34 = sub_1C36280(*a1, v33, v31, v32);
        v28 = ptr;
        v29 = v34;
      }
      goto LABEL_18;
    }
    v16 = (__int64 *)(a2 + 8);
    v35 = (__int64 *)(a2 + 16);
  }
  v17 = 0;
  if ( v16 == v35 )
    goto LABEL_23;
  while ( 1 )
  {
    v25 = *v16;
    v27 = sub_1E02D80(*a1, *v16, *(_QWORD *)(*a1 + 544), a1[4]);
    if ( !v27 )
      break;
    sub_1DC20B0(*(_QWORD *)(*a1 + 11280), v25, v27, v26);
    if ( v25 != v27 )
      v17 = 1;
    if ( v13 )
    {
      v20 = *(_BYTE *)(v27 + 28) & 0x7F;
      if ( (unsigned int)(v20 - 58) <= 9 )
      {
        v21 = *(_QWORD *)(*a1 + 248);
        v22 = *(_QWORD *)(v27 + 48);
        if ( v22 )
        {
          v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v23 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v27, v21, v18, v11, v19);
          v21 = *(_QWORD *)(*a1 + 248);
        }
        *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v23, v21, v21, v18, v11) & 0xFFFFFFFFFFFFFFF0LL)
                                           + 17LL)
                                & 1;
        v20 = *(_BYTE *)(v27 + 28) & 0x7F;
      }
      if ( (unsigned int)(v20 - 40) <= 6 )
        *(_BYTE *)(v13 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    }
    v10 = HIDWORD(v38);
    v24 = (unsigned int)v38 + 1LL;
    if ( v24 > HIDWORD(v38) )
    {
      ++v16;
      sub_2237220(&ptr, v39, v24, 8);
      *((_QWORD *)ptr + (unsigned int)v38) = v27;
      LODWORD(v38) = v38 + 1;
      if ( v35 == v16 )
        goto LABEL_23;
    }
    else
    {
      ++v16;
      *((_QWORD *)ptr + (unsigned int)v38) = v27;
      LODWORD(v38) = v38 + 1;
      if ( v35 == v16 )
        goto LABEL_23;
    }
  }
  v28 = ptr;
  v29 = 1;
LABEL_18:
  if ( v28 != v39 )
    free(v28);
  return v29;
}
