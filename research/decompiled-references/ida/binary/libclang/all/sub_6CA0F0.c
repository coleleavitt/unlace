unsigned __int64 __fastcall sub_6CA0F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-E8h]
  __int64 v23; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-B0h]

  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v15 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
    v16 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v10 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v10 + 48 && v16 )
    {
      *(_QWORD *)(a1 + 2192) = v10 + 48;
      v11 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v23 = v15;
      v21 = sub_6A76A0(a1 + 2192, 48, 4);
      v15 = v23;
      v11 = v21;
      v10 = v21;
    }
    sub_B14930(v11, a2, a3, a4, v15);
    goto LABEL_13;
  }
  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v28 = a4;
  v6 = a2 & 7;
  ptr[0] = &v27;
  v27 = v6 | v5;
  v25 = 0;
  ptr[1] = (void *)0x2000000003LL;
  v7 = sub_25AC3A0(a1 + 712, ptr, &v25, off_47D0700);
  v8 = v7 - 48;
  if ( !v7 )
  {
    v18 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v19 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v19 + 64 && v18 )
      *(_QWORD *)(a1 + 2192) = v19 + 64;
    else
      v19 = sub_6A76A0(a1 + 2192, 64, 4);
    v24 = v19;
    sub_B14980(v19, a1, v6 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL], a4);
    sub_25AC200(a1 + 712, v24 + 48, v25, off_47D0700);
    v8 = v24;
  }
  v9 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v10 + 48 && v9 )
  {
    *(_QWORD *)(a1 + 2192) = v10 + 48;
    v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v22 = v8;
    v20 = sub_6A76A0(a1 + 2192, 48, 4);
    v8 = v22;
    v11 = v20;
    v10 = v20;
  }
  sub_B14930(v11, a2, 0, a4, v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( ptr[0] == &v27 )
  {
LABEL_13:
    v12 = *(unsigned int *)(a1 + 16);
    v13 = v12 + 1;
    if ( *(unsigned int *)(a1 + 20) >= (unsigned __int64)(v12 + 1) )
      goto LABEL_14;
    goto LABEL_8;
  }
  free(ptr[0]);
  v12 = *(unsigned int *)(a1 + 16);
  v13 = v12 + 1;
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
  {
LABEL_8:
    sub_25D6060(a1 + 8, a1 + 24, v13, 8);
    v12 = *(unsigned int *)(a1 + 16);
  }
LABEL_14:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v10;
  ++*(_DWORD *)(a1 + 16);
  return v11 & 0xFFFFFFFFFFFFFFF0LL;
}

