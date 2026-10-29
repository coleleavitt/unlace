unsigned __int64 __fastcall sub_6C7100(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  int v4; // eax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  int v15; // edx
  char v16; // cl
  char v17; // cl
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v25; // [rsp+8h] [rbp-F0h]
  __int64 v26; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v27; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+18h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+44h] [rbp-B4h]

  v4 = *a3;
  v32 = a2;
  v31 = v4;
  ptr[0] = &v31;
  ptr[1] = (void *)0x2000000003LL;
  v24 = a1 + 368;
  v29 = 0;
  v5 = sub_25AC3A0(a1 + 368, ptr, &v29, &off_47D0A20);
  v6 = (v5 - 32) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v5 )
  {
    v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
      || (v22 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL], (v22 & 8) != 0)
      && (((*(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL))
          | (unsigned __int64)(((unsigned __int8)a2 | (unsigned __int8)v22) & 7)) >> 6)
        & 6) != 0 )
    {
      v9 = sub_6C7090((_QWORD *)a1, a2);
      v26 = sub_6C7100(a1, v9, a3);
      sub_25AC3A0(v24, ptr, &v29, &off_47D0A20);
      v10 = v26;
      v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v11 = v26 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v11 = 0;
      v10 = 0;
    }
    v12 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v13 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v13 + 48 && v12 )
    {
      *(_QWORD *)(a1 + 2192) = v13 + 48;
      v14 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v28 = v8;
      v27 = v11;
      v25 = v10;
      v23 = sub_6A76A0(a1 + 2192, 48, 4);
      v8 = v28;
      v11 = v27;
      v10 = v25;
      v14 = v23;
      v13 = v23;
    }
    v15 = *a3;
    v16 = *(_BYTE *)(*(_QWORD *)v8 + 17LL);
    *(_BYTE *)(v14 + 16) = 25;
    *(_QWORD *)v14 = v14;
    v17 = v16 & 0x18;
    *(_QWORD *)(v14 + 24) = a2;
    if ( v11 < 0x10 )
      v10 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_BYTE *)(v14 + 17);
    *(_QWORD *)(v14 + 32) = 0;
    *(_QWORD *)(v14 + 8) = v10;
    *(_BYTE *)(v14 + 17) = v17 | v18 & 0xE0;
    *(_DWORD *)(v14 + 16) = (v15 << 19) | *(_DWORD *)(v14 + 16) & 0x1FFF;
    v19 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v19 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v19 + 1, 8);
      v19 = *(unsigned int *)(a1 + 16);
    }
    v20 = v14 + 32;
    v6 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v19) = v13;
    v21 = v29;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v24, v20, v21, &off_47D0A20);
  }
  if ( ptr[0] != &v31 )
    free(ptr[0]);
  return v6;
}

