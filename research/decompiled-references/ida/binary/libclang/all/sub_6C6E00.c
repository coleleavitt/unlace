unsigned __int64 __fastcall sub_6C6E00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v22; // [rsp+18h] [rbp-E0h]
  __int64 v23; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v25[184]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  ptr[1] = (void *)0x2000000000LL;
  v6 = v5;
  v23 = 0;
  ptr[0] = v25;
  sub_B06EF0(ptr, a1, v5, a3);
  v7 = sub_25AC3A0(a1 + 264, ptr, &v23, &off_47D0A40);
  v8 = v7 - 24;
  if ( !v7 )
  {
    v16 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v17 + 64 && v16 )
    {
      *(_QWORD *)(a1 + 2192) = v17 + 64;
      v8 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v17 = sub_6A76A0(a1 + 2192, 64, 4);
      v8 = v17;
    }
    v22 = v17;
    sub_B06E10(v8, v6, 0, a3, a4);
    sub_25AC200(a1 + 264, v8 + 24, v23, &off_47D0A40);
    v18 = *(unsigned int *)(a1 + 16);
    v19 = v22;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v18 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v18 + 1, 8);
      v18 = *(unsigned int *)(a1 + 16);
      v19 = v22;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v18) = v19;
    ++*(_DWORD *)(a1 + 16);
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v6 != a2 || a3 != *(_QWORD *)(v8 + 32) )
  {
    v10 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v11 + 64 && v10 )
    {
      *(_QWORD *)(a1 + 2192) = v11 + 64;
      v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v15 = sub_6A76A0(a1 + 2192, 64, 4);
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v12 = v15;
      v11 = v15;
    }
    sub_B06E10(v12, a2, v9, a3, a4);
    v13 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v13 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 16);
    }
    v9 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v11;
    ++*(_DWORD *)(a1 + 16);
  }
  if ( ptr[0] != v25 )
  {
    v21 = v9;
    free(ptr[0]);
    return v21;
  }
  return v9;
}

