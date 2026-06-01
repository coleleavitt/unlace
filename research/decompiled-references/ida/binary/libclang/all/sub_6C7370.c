unsigned __int64 __fastcall sub_6C7370(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-100h]
  unsigned __int64 v20; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-F0h]
  __int64 v22; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v23; // [rsp+20h] [rbp-E8h]
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h]

  v3 = a3;
  v26 = a2;
  ptr[1] = (void *)0x2000000003LL;
  ptr[0] = &v26;
  v27 = a3;
  v24 = 0;
  v19 = a1 + 800;
  v5 = sub_25AC3A0(a1 + 800, ptr, &v24, &off_47D09E0);
  v6 = (v5 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v5 )
  {
    v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v9 = 0;
      v10 = 0;
    }
    else
    {
      v22 = sub_6C7370(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7, v3);
      sub_25AC3A0(v19, ptr, &v24, &off_47D09E0);
      v10 = v22;
      v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 48 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 48;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v23 = v9;
      v21 = v10;
      v20 = v8;
      v18 = sub_6A76A0(a1 + 2192, 48, 4);
      v9 = v23;
      v10 = v21;
      v8 = v20;
      v13 = v18;
      v12 = v18;
    }
    v14 = *(_BYTE *)(*(_QWORD *)v8 + 17LL);
    if ( v9 < 0x10 )
      v10 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)v13 = v13;
    *(_BYTE *)(v13 + 18) &= 0xF8u;
    *(_QWORD *)(v13 + 8) = v10;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = a2;
    *(_WORD *)(v13 + 16) = ((v14 & 0x1F) << 8) | 0x28;
    *(_BYTE *)(v13 + 40) = a3;
    v15 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v15 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 16);
    }
    v16 = v13 + 24;
    v6 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v15) = v12;
    v17 = v24;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v19, v16, v17, &off_47D09E0);
  }
  if ( ptr[0] != &v26 )
    free(ptr[0]);
  return v6;
}

