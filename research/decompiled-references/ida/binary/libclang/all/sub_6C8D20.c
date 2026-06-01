unsigned __int64 __fastcall sub_6C8D20(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v17; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v18; // [rsp+10h] [rbp-E8h]
  __int64 v19; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v21[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a1 + 560;
  v21[0] = a2;
  ptr[1] = (void *)0x2000000002LL;
  ptr[0] = v21;
  v19 = 0;
  v3 = sub_25AC3A0(a1 + 560, ptr, &v19, off_47D0840);
  v4 = (v3 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v3 )
  {
    v6 = a2;
    v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v17 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
      sub_25AC3A0(v2, ptr, &v19, off_47D0840);
      v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v6 = v17;
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
      v18 = v6;
      v16 = v7;
      v15 = sub_6A76A0(a1 + 2192, 48, 4);
      v6 = v18;
      v7 = v16;
      v10 = v15;
      v9 = v15;
    }
    v11 = *(_BYTE *)(*(_QWORD *)v7 + 17LL);
    *(_QWORD *)v10 = v10;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) < 0x10 )
      v6 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v10 + 24) = 0;
    *(_BYTE *)(v10 + 18) &= 0xF8u;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 32) = a2;
    *(_WORD *)(v10 + 16) = ((v11 & 0x1F) << 8) | 0x27;
    v12 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 16);
    }
    v13 = v10 + 24;
    v4 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v9;
    v14 = v19;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v2, v13, v14, off_47D0840);
  }
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v4;
}

