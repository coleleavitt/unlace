unsigned __int64 __fastcall sub_6C3D60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r14d
  int v9; // r12d
  __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rbp
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v23; // [rsp+8h] [rbp-F0h]
  int v24; // [rsp+10h] [rbp-E8h]
  int v25; // [rsp+18h] [rbp-E0h]
  __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v28[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = a4;
  v9 = a2;
  v22 = a5;
  v24 = a3;
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v28;
  sub_B073B0(ptr, a2, a3, a4);
  v26 = 0;
  v10 = sub_25AC3A0(a1 + 888, ptr, &v26, &off_47D0C60);
  v11 = v22;
  v12 = (v10 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v10 )
  {
    v14 = *(_QWORD *)(a1 + 2192);
    v15 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
    v16 = 8 * a8 + 64;
    v17 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(a1 + 2272) += v16;
    if ( *(_QWORD *)(a1 + 2200) >= v16 + v17 && v14 )
    {
      *(_QWORD *)(a1 + 2192) = v16 + v17;
      v18 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v25 = v15;
      v17 = sub_6A76A0(a1 + 2192, v16, 4);
      LODWORD(v15) = v25;
      v11 = v22;
      v18 = v17;
    }
    v23 = v17;
    sub_B0C9E0(v18, v9, v15, v24, v8, v11, a7, a8);
    v19 = *(unsigned int *)(a1 + 16);
    v20 = v23;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v19 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v19 + 1, 8);
      v19 = *(unsigned int *)(a1 + 16);
      v20 = v23;
    }
    v21 = v18 + 24;
    v12 = v18 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v19) = v20;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 888, v21, v26, &off_47D0C60);
  }
  if ( ptr[0] != v28 )
    free(ptr[0]);
  return v12;
}

