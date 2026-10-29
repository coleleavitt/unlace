unsigned __int64 __fastcall sub_6C6170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  _BYTE *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v28; // [rsp+8h] [rbp-F0h]
  __int64 v30; // [rsp+10h] [rbp-E8h]
  __int64 v31; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v33[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a2 & 7;
  ptr[1] = (void *)0x2000000000LL;
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v28 = a5;
  ptr[0] = v33;
  sub_B06BB0(ptr, a1, v6 | v7, a3, a5);
  v31 = 0;
  v30 = a1 + 304;
  v8 = sub_25AC3A0(a1 + 304, ptr, &v31, &off_47D0AC0);
  v9 = v28;
  if ( v8 )
  {
    v10 = v8 - 24;
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 64 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 64;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v18 = sub_6A76A0(a1 + 2192, 64, 4);
      v9 = v28;
      v13 = v18;
      v12 = v18;
    }
    sub_B06AC0(v13, a2, v10 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, v9);
  }
  else
  {
    v19 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v6;
    if ( a2 == v19 )
    {
      v24 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += 64LL;
      v12 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v12 + 64 && v24 )
      {
        *(_QWORD *)(a1 + 2192) = v12 + 64;
        v13 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v25 = sub_6A76A0(a1 + 2192, 64, 4);
        v9 = v28;
        v13 = v25;
        v12 = v25;
      }
      sub_B06AC0(v13, a2, 0, a3, a4, v9);
      sub_25AC3A0(v30, ptr, &v31, &off_47D0AC0);
      sub_25AC200(v30, v13 + 24, v31, &off_47D0AC0);
    }
    else
    {
      v20 = sub_6C6170(a1, v19, a3, 0);
      *(_QWORD *)(a1 + 2272) += 64LL;
      v21 = v28;
      v22 = v20;
      v23 = *(_QWORD *)(a1 + 2192);
      v12 = (v23 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v12 + 64 && v23 )
      {
        *(_QWORD *)(a1 + 2192) = v12 + 64;
        v13 = (v23 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v26 = sub_6A76A0(a1 + 2192, 64, 4);
        v21 = v28;
        v13 = v26;
        v12 = v26;
      }
      sub_B06AC0(v13, a2, v22, a3, a4, v21);
    }
  }
  v14 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v14 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v14 + 1, 8);
    v14 = *(unsigned int *)(a1 + 16);
  }
  v15 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v14) = v12;
  v16 = ptr[0];
  ++*(_DWORD *)(a1 + 16);
  if ( v16 != v33 )
    free(v16);
  return v15;
}

