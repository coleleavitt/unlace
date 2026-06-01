unsigned __int64 __fastcall sub_6C4DA0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  char v19; // al
  char v20; // al
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v27; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+10h] [rbp-E8h]
  __int64 v29; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v30; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v31; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v32; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-B8h] BYREF
  int v36; // [rsp+48h] [rbp-B0h]

  v36 = a3;
  v35 = a2;
  ptr[1] = (void *)0x2000000003LL;
  ptr[0] = &v35;
  v33 = 0;
  v25 = a1 + 104;
  v5 = sub_25AC3A0(a1 + 104, ptr, &v33, &off_47D0BA0);
  v7 = (v5 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v5 )
    goto LABEL_2;
  v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v10 + 16) - 42) <= 1u )
    goto LABEL_13;
  v11 = *(_QWORD *)(v10 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
  {
    if ( a3 )
    {
LABEL_10:
      v6 = 0;
      v13 = 0;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == v11 )
        goto LABEL_15;
    }
  }
  else
  {
    v27 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v12 = sub_B0D320(v10);
    v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = v12;
    if ( a3 == 1 )
    {
      if ( !v12 )
      {
        v10 = *(_QWORD *)v27;
        v11 = *(_QWORD *)(*(_QWORD *)v27 + 8LL);
        goto LABEL_10;
      }
LABEL_13:
      v28 = v9;
      v15 = sub_6B2590(v10);
      v9 = v28;
      v14 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_14;
    }
    if ( v12 )
      goto LABEL_13;
  }
  v14 = v9;
  LOBYTE(v15) = a2;
LABEL_14:
  v31 = v9;
  v29 = sub_6C4DA0(a1, *(_QWORD *)(v14 + 8) | v15 & 7, 1, v6);
  sub_25AC3A0(v25, ptr, &v33, &off_47D0BA0);
  v13 = v29;
  v9 = v31;
  v6 = v29 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_15:
  v16 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v17 + 48 && v16 )
  {
    *(_QWORD *)(a1 + 2192) = v17 + 48;
    v18 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v32 = v6;
    v30 = v9;
    v26 = v13;
    v24 = sub_6A76A0(a1 + 2192, 48, 4);
    v6 = v32;
    v9 = v30;
    v13 = v26;
    v18 = v24;
    v17 = v24;
  }
  v19 = *(_BYTE *)(*(_QWORD *)v9 + 17LL);
  if ( v6 < 0x10 )
    v13 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)v18 = v18;
  *(_QWORD *)(v18 + 24) = 0;
  *(_QWORD *)(v18 + 8) = v13;
  *(_QWORD *)(v18 + 32) = a2;
  *(_WORD *)(v18 + 16) = ((v19 & 0x1F) << 8) | 0x2A;
  v20 = (8 * a3) & 0xF | *(_BYTE *)(v18 + 18) & 0xF0;
  *(_BYTE *)(v18 + 18) = v20;
  *(_BYTE *)(v18 + 18) = (16
                        * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 42 <= 1))
                       | v20 & 0xEF;
  v21 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v21 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v21 + 1, 8);
    v21 = *(unsigned int *)(a1 + 16);
  }
  v22 = v18 + 24;
  v7 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v21) = v17;
  v23 = v33;
  ++*(_DWORD *)(a1 + 16);
  sub_25AC200(v25, v22, v23, &off_47D0BA0);
LABEL_2:
  if ( ptr[0] != &v35 )
    free(ptr[0]);
  return v7;
}

