__int64 __fastcall sub_3EB7A0(__int64 a1, __int64 a2, __m128i a3)
{
  int v3; // r13d
  const char **v4; // r15
  const char *v5; // r14
  int v6; // r8d
  __int64 v7; // r15
  char **v8; // r13
  unsigned int v9; // edx
  char v10; // r12
  __int64 v12; // r14
  char *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // [rsp+8h] [rbp-70h]
  int v16; // [rsp+10h] [rbp-68h]
  _QWORD v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  v4 = (const char **)&off_4E8EE0;
  v17[3] = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a2 + 40);
  v5 = *(const char **)(v15 + 40);
  while ( strcmp(*v4, v5) )
  {
    ++v3;
    v4 += 3;
    if ( v3 == 20 )
      return 0;
  }
  v6 = *(_DWORD *)(a2 + 68);
  v7 = v3;
  v8 = &(&off_4E8EE0)[3 * v3];
  v9 = 0;
  v10 = *((_BYTE *)v8 + 12);
  if ( (((v6 != 4) + 1) & v10) != 0 )
  {
    v16 = *(_DWORD *)(a2 + 68);
    v12 = *(_QWORD *)(v15 + 72);
    sub_128E00(
      *(_QWORD *)(v12 + 24),
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v6);
    sub_128E00(
      *(_QWORD *)(v12 + 24) + 80LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v16);
    v13 = *(char **)(v12 + 24);
    if ( v8[2] )
    {
      v14 = 25;
      if ( v16 == 4 )
        v14 = 9;
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      clear_tinfo_t();
      v17[0] = v14;
      copy_tinfo_t();
      clear_tinfo_t();
      sub_11B060(v15 + 32);
      *(_DWORD *)(v15 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      **(_DWORD **)(a1 + 32) = 67;
    }
    else
    {
      v17[0] = 0xFFFFFFFF00000000LL;
      v17[1] = 0;
      sub_11A5D0((char *)v17, v13);
      sub_11A5D0((char *)(*(_QWORD *)(a1 + 32) + 48LL), (char *)(*(_QWORD *)(v12 + 24) + 80LL));
      sub_11A5D0((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v17);
      if ( (v10 & 4) != 0 )
        sub_11E3A0(
          (char *)(*(_QWORD *)(a1 + 32) + 32LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
          7,
          *(_QWORD *)(v15 + 24),
          v16);
      **(_DWORD **)(a1 + 32) = (&off_4E8EE0)[3 * v7 + 1];
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 33LL) |= 4u;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 49LL) |= 4u;
      sub_11A960((__int64)v17);
    }
    if ( (v10 & 8) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) |= 0x10u;
    sub_1595B0(*(unsigned int **)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 0, 0, 0, 0, a3, 0);
    return 1;
  }
  return v9;
}
