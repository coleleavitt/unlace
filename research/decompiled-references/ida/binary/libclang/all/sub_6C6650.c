unsigned __int64 __fastcall sub_6C6650(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  _BYTE *v14; // rdi
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v23; // [rsp+10h] [rbp-E8h]
  __int64 v24; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v26[184]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = a2 & 7;
  ptr[1] = (void *)0x2000000000LL;
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  ptr[0] = v26;
  sub_B06D70(ptr, a1, v5 | v6, a3);
  v24 = 0;
  v23 = a1 + 240;
  v7 = sub_25AC3A0(a1 + 240, ptr, &v24, &off_47D0AA0);
  if ( v7 )
  {
    v8 = v7 - 24;
    v9 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v10 + 64 && v9 )
    {
      *(_QWORD *)(a1 + 2192) = v10 + 64;
      v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v11 = sub_6A76A0(a1 + 2192, 64, 4);
      v10 = v11;
    }
    sub_B06C90(v11, a2, v8 & 0xFFFFFFFFFFFFFFF0LL, a3, a4);
  }
  else
  {
    v16 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v5;
    if ( a2 == v16 )
    {
      v20 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += 64LL;
      v10 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v10 + 64 && v20 )
      {
        *(_QWORD *)(a1 + 2192) = v10 + 64;
        v11 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v11 = sub_6A76A0(a1 + 2192, 64, 4);
        v10 = v11;
      }
      sub_B06C90(v11, a2, 0, a3, a4);
      sub_25AC3A0(v23, ptr, &v24, &off_47D0AA0);
      sub_25AC200(v23, v11 + 24, v24, &off_47D0AA0);
    }
    else
    {
      v17 = sub_6C6650(a1, v16, a3, 0);
      *(_QWORD *)(a1 + 2272) += 64LL;
      v18 = v17;
      v19 = *(_QWORD *)(a1 + 2192);
      v10 = (v19 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v10 + 64 && v19 )
      {
        *(_QWORD *)(a1 + 2192) = v10 + 64;
        v11 = (v19 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v11 = sub_6A76A0(a1 + 2192, 64, 4);
        v10 = v11;
      }
      sub_B06C90(v11, a2, v18, a3, a4);
    }
  }
  v12 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v12 + 1, 8);
    v12 = *(unsigned int *)(a1 + 16);
  }
  v13 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v10;
  v14 = ptr[0];
  ++*(_DWORD *)(a1 + 16);
  if ( v14 != v26 )
    free(v14);
  return v13;
}

