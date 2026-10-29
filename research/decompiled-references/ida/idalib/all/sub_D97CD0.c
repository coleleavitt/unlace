__int64 __fastcall sub_D97CD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rsi
  int v20; // edx
  unsigned int v21; // r13d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  int v28; // eax
  void *v29; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-60h]
  void *v31; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+18h] [rbp-50h]
  void *v33; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-40h]
  char v35; // [rsp+2Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a2 + 16) == 2
    && sub_9EC890(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3,
         a4,
         a5)
    && (LOBYTE(v12) = sub_9EC890(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL),
                        a2,
                        v9,
                        v10,
                        v11),
        v5 = v12,
        (_BYTE)v12) )
  {
    v15 = a1[23];
    v16 = 13;
    v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    v18 = *(_QWORD *)(a2 + v17 + 32);
    if ( (*(_BYTE *)(v18 + 1) & 6) == 0 )
    {
      v28 = sub_D8A760(v15, v18, v17, v13, v14);
      v15 = a1[23];
      v16 = v28;
      v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    }
    v19 = *(_QWORD *)(a2 + v17 + 40);
    v20 = 13;
    if ( (*(_BYTE *)(v19 + 1) & 6) == 0 )
      v20 = sub_D8A760(v15, v19, 13, v13, v14);
    sub_D8B1A0((__int64)&v29, a1[22], v20);
    sub_D8B1A0((__int64)&v31, a1[22], v16);
    v21 = v32;
    v22 = sub_2206480(&v29, 8, 0);
    v23 = sub_2206480(&v29, 8, 8);
    if ( v23 > v21 )
      v23 = v21;
    if ( v23 && v22 < v21 )
    {
      v26 = (unsigned __int64)v31;
      if ( v32 > 0x40 )
        v26 = *(_QWORD *)v31;
      v27 = *(_QWORD *)(a2 + 8);
      v35 = 1;
      v34 = 64;
      v33 = (void *)((v26 >> v22) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v23)));
      sub_D8FFE0(a1, (__int64)&v33, v27, (unsigned int)(64 - v23), v25);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
    }
    else
    {
      sub_D92AA0(a1, 0, *(_QWORD *)(a2 + 8), v24, v25);
    }
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
  }
  else
  {
    return 0;
  }
  return v5;
}
