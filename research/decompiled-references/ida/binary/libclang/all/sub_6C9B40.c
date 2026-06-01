unsigned __int64 __fastcall sub_6C9B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-E0h]
  __int64 v18; // [rsp+8h] [rbp-E0h]
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  if ( *(char *)(a2 + 1) >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v7 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v7 + 48 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v7 + 48;
      v8 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v8 = sub_6A76A0(a1 + 2192, 48, 4);
      v7 = v8;
    }
    sub_B14400(v8, a2, a3, *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7);
    goto LABEL_13;
  }
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000000LL;
  sub_B145C0(ptr, a1, a2);
  v19 = 0;
  v4 = sub_25AC3A0(a1 + 432, ptr, &v19, &off_47D0740);
  v5 = v4 - 40;
  if ( !v4 )
  {
    v13 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v15 = v14 + 48;
    if ( v13 && *(_QWORD *)(a1 + 2200) >= v15 )
      *(_QWORD *)(a1 + 2192) = v15;
    else
      v14 = sub_6A76A0(a1 + 2192, 48, 4);
    v17 = v14;
    sub_B14500(v14, a2, *(_QWORD *)(a1 + 18912));
    sub_25AC200(a1 + 432, v17 + 40, v19, &off_47D0740);
    v5 = v17;
  }
  v6 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v7 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v7 + 48 && v6 )
  {
    *(_QWORD *)(a1 + 2192) = v7 + 48;
    v8 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v18 = v5;
    v16 = sub_6A76A0(a1 + 2192, 48, 4);
    v5 = v18;
    v8 = v16;
    v7 = v16;
  }
  sub_B14400(v8, a2, a3, v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( ptr[0] == v21 )
  {
LABEL_13:
    v9 = *(unsigned int *)(a1 + 16);
    v10 = v9 + 1;
    if ( *(unsigned int *)(a1 + 20) >= (unsigned __int64)(v9 + 1) )
      goto LABEL_14;
    goto LABEL_8;
  }
  free(ptr[0]);
  v9 = *(unsigned int *)(a1 + 16);
  v10 = v9 + 1;
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v9 + 1) )
  {
LABEL_8:
    sub_25D6060(a1 + 8, a1 + 24, v10, 8);
    v9 = *(unsigned int *)(a1 + 16);
  }
LABEL_14:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9) = v7;
  ++*(_DWORD *)(a1 + 16);
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}

