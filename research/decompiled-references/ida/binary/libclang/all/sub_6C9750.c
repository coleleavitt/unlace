unsigned __int64 __fastcall sub_6C9750(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r9d
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  bool v14; // dl
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // [rsp+7h] [rbp-E1h]
  unsigned __int8 v26; // [rsp+7h] [rbp-E1h]
  __int64 v27; // [rsp+8h] [rbp-E0h]
  __int64 v28; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v30[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = a3;
  if ( (*(_BYTE *)(a2 + 2) & 1) == 0 )
  {
    v19 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a2 + 8) & 7LL;
    v20 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v12 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 48 && v20 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 48;
      v16 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v27 = v19;
      v26 = a3;
      v22 = sub_6A76A0(a1 + 2192, 48, 4);
      v19 = v27;
      v5 = v26;
      v16 = v22;
      v12 = v22;
    }
    sub_B0FD50(v16, a1, a2, v5, v19);
LABEL_13:
    v17 = *(unsigned int *)(a1 + 16);
    v18 = v17 + 1;
    if ( *(unsigned int *)(a1 + 20) >= (unsigned __int64)(v17 + 1) )
      goto LABEL_14;
    goto LABEL_8;
  }
  v25 = a3;
  ptr[0] = v30;
  ptr[1] = (void *)0x2000000000LL;
  sub_B0CE80(ptr, a1, a2, (_BYTE)a3 == 1, a5, a3);
  v28 = 0;
  v8 = sub_25AC3A0(a1 + 408, ptr, &v28, &off_47D0760);
  v9 = *(_QWORD *)(a1 + 2192);
  v10 = v25;
  v11 = *(_QWORD *)(a1 + 2272) + 48LL;
  v12 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v13 = v12 + 48;
  v14 = v9 != 0 && *(_QWORD *)(a1 + 2200) >= v12 + 48;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 2272) = v11;
    v15 = v8 - 40;
    if ( v14 )
    {
      *(_QWORD *)(a1 + 2192) = v13;
      v16 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v23 = sub_6A76A0(a1 + 2192, 48, 4);
      v10 = v25;
      v16 = v23;
      v12 = v23;
    }
    sub_B0FD50(v16, a1, a2, v10, v15 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    *(_QWORD *)(a1 + 2272) = v11;
    if ( v14 )
    {
      *(_QWORD *)(a1 + 2192) = v13;
      v16 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v24 = sub_6A76A0(a1 + 2192, 48, 4);
      v10 = v25;
      v16 = v24;
      v12 = v24;
    }
    sub_B0FD50(v16, a1, a2, v10, 0);
    *(_QWORD *)(v16 + 40) = 0;
    sub_25AC200(a1 + 408, v16 + 40, v28, &off_47D0760);
  }
  if ( ptr[0] == v30 )
    goto LABEL_13;
  free(ptr[0]);
  v17 = *(unsigned int *)(a1 + 16);
  v18 = v17 + 1;
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v17 + 1) )
  {
LABEL_8:
    sub_25D6060(a1 + 8, a1 + 24, v18, 8);
    v17 = *(unsigned int *)(a1 + 16);
  }
LABEL_14:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v17) = v12;
  ++*(_DWORD *)(a1 + 16);
  return v16 & 0xFFFFFFFFFFFFFFF0LL;
}

