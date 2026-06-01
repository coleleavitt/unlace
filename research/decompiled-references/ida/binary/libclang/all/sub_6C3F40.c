unsigned __int64 __fastcall sub_6C3F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-F0h]
  __int64 v17; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v18; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v19; // [rsp+18h] [rbp-E0h]
  __int64 v20; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v22[23]; // [rsp+40h] [rbp-B8h] BYREF

  v22[0] = a2;
  ptr[1] = (void *)0x2000000002LL;
  v16 = a1 + 40;
  ptr[0] = v22;
  v20 = 0;
  v2 = sub_25AC3A0(a1 + 40, ptr, &v20, off_47D0C40);
  v3 = (v2 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v2 )
  {
    v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v6 = 0;
      v7 = 0;
    }
    else
    {
      v17 = sub_6C3F40(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7);
      sub_25AC3A0(v16, ptr, &v20, off_47D0C40);
      v7 = v17;
      v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v6 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v8 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v9 + 48 && v8 )
    {
      *(_QWORD *)(a1 + 2192) = v9 + 48;
      v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v19 = v7;
      v18 = v5;
      v15 = sub_6A76A0(a1 + 2192, 48, 4);
      v7 = v19;
      v5 = v18;
      v10 = v15;
      v9 = v15;
    }
    v11 = *(_BYTE *)(*(_QWORD *)v5 + 17LL);
    if ( v6 < 0x10 )
      v7 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)v10 = v10;
    *(_BYTE *)(v10 + 18) &= 0xF8u;
    *(_QWORD *)(v10 + 8) = v7;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = a2;
    *(_WORD *)(v10 + 16) = ((v11 & 0x1F) << 8) | 0xE;
    v12 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 16);
    }
    v13 = v10 + 24;
    v3 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v9;
    v14 = v20;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v16, v13, v14, off_47D0C40);
  }
  if ( ptr[0] != v22 )
    free(ptr[0]);
  return v3;
}

