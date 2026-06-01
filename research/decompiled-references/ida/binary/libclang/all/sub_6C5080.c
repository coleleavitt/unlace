unsigned __int64 __fastcall sub_6C5080(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-F0h]
  __int64 v23; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v24; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v25; // [rsp+18h] [rbp-E0h]
  __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-B8h] BYREF
  int v29; // [rsp+48h] [rbp-B0h]

  v3 = a2;
  v28 = a2;
  ptr[1] = (void *)0x2000000003LL;
  v29 = 0;
  ptr[0] = &v28;
  v26 = 0;
  v22 = a1 + 120;
  v4 = sub_25AC3A0(a1 + 120, ptr, &v26, &off_47D0B80);
  v9 = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v4 )
    goto LABEL_2;
  v11 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v12 + 16) - 42) <= 1u )
    goto LABEL_11;
  v5 = *(_QWORD *)(v12 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
    goto LABEL_9;
  v12 = sub_B0D320(v12);
  if ( v12 )
  {
LABEL_11:
    while ( (*(_BYTE *)(v12 + 18) & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 > 1 )
        v12 = sub_B0D320(v12);
    }
    a2 = *(_QWORD *)(v12 + 32);
    v13 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)v11;
  v5 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
LABEL_9:
  v13 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = 0;
  v8 = 0;
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != v5 )
  {
LABEL_15:
    v23 = sub_6C5080(a1, *(_QWORD *)(v13 + 8) | a2 & 7, v5, v6, v7, v8);
    sub_25AC3A0(v22, ptr, &v26, &off_47D0B80);
    v8 = v23;
    v6 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v14 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v15 + 48 && v14 )
  {
    *(_QWORD *)(a1 + 2192) = v15 + 48;
    v16 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v25 = v6;
    v24 = v8;
    v21 = sub_6A76A0(a1 + 2192, 48, 4);
    v6 = v25;
    v8 = v24;
    v16 = v21;
    v15 = v21;
  }
  v17 = *(_BYTE *)(*(_QWORD *)v11 + 17LL);
  if ( v6 < 0x10 )
    v8 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)v16 = v16;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 8) = v8;
  *(_QWORD *)(v16 + 32) = v3;
  *(_WORD *)(v16 + 16) = ((v17 & 0x1F) << 8) | 0x2B;
  v18 = *(_BYTE *)(v16 + 18);
  *(_BYTE *)(v16 + 18) = v18 & 0xF0;
  *(_BYTE *)(v16 + 18) = (16
                        * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 42 <= 1))
                       | v18 & 0xE0;
  v19 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v19 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v19 + 1, 8);
    v19 = *(unsigned int *)(a1 + 16);
  }
  v9 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v19) = v15;
  v20 = v26;
  ++*(_DWORD *)(a1 + 16);
  sub_25AC200(v22, v16 + 24, v20, &off_47D0B80);
LABEL_2:
  if ( ptr[0] != &v28 )
    free(ptr[0]);
  return v9;
}

