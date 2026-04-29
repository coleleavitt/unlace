__int64 __fastcall sub_3F6370(__int64 a1, __int64 a2)
{
  int v2; // r13d
  const char **v3; // r15
  const char *v4; // r14
  int v5; // r8d
  __int64 v6; // r15
  char **v7; // r13
  unsigned int v8; // edx
  char v9; // r12
  __int64 v11; // r14
  char *v12; // rsi
  int v13; // r8d
  __int64 v14; // rbp
  __int64 v15; // [rsp+8h] [rbp-70h]
  int v16; // [rsp+10h] [rbp-68h]
  __int64 v17; // [rsp+10h] [rbp-68h]
  int v18; // [rsp+1Ch] [rbp-5Ch]
  _QWORD v19[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  v3 = (const char **)&off_4E9E60;
  v19[3] = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a2 + 40);
  v4 = *(const char **)(v15 + 40);
  while ( strcmp(*v3, v4) )
  {
    ++v2;
    v3 += 3;
    if ( v2 == 20 )
      return 0;
  }
  v5 = *(_DWORD *)(a2 + 68);
  v6 = v2;
  v7 = &(&off_4E9E60)[3 * v2];
  v8 = 0;
  v9 = *((_BYTE *)v7 + 12);
  if ( (((v5 != 4) + 1) & v9) != 0 )
  {
    v16 = *(_DWORD *)(a2 + 68);
    v11 = *(_QWORD *)(v15 + 72);
    sub_12B320(
      *(_QWORD *)(v11 + 24),
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v5);
    v18 = v16;
    sub_12B320(
      *(_QWORD *)(v11 + 24) + 80LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v16);
    v12 = *(char **)(v11 + 24);
    v13 = v16;
    v17 = (__int64)v7[2];
    if ( v17 )
    {
      v14 = 25;
      if ( v13 == 4 )
        v14 = 9;
      v19[0] = v14;
      copy_tinfo_t(v12 + 24, v19);
      clear_tinfo_t(v19);
      v19[0] = v14;
      copy_tinfo_t(*(_QWORD *)(v11 + 24) + 104LL, v19);
      clear_tinfo_t(v19);
      v19[0] = v14;
      copy_tinfo_t(*(_QWORD *)(v15 + 72) + 72LL, v19);
      clear_tinfo_t(v19);
      sub_11D4A0(v15 + 32, v17);
      *(_DWORD *)(v15 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      **(_DWORD **)(a1 + 32) = 67;
    }
    else
    {
      v19[0] = 0xFFFFFFFF00000000LL;
      v19[1] = 0;
      sub_11CA10((char *)v19, v12);
      sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 48LL), (char *)(*(_QWORD *)(v11 + 24) + 80LL));
      sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v19);
      if ( (v9 & 4) != 0 )
        sub_1207E0(
          (char *)(*(_QWORD *)(a1 + 32) + 32LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
          7,
          *(_QWORD *)(v15 + 24),
          v18);
      **(_DWORD **)(a1 + 32) = (&off_4E9E60)[3 * v6 + 1];
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 33LL) |= 4u;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 49LL) |= 4u;
      sub_11CDA0((__int64)v19);
    }
    if ( (v9 & 8) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) |= 0x10u;
    sub_15BC70(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 0, 0, 0, 0, 0);
    return 1;
  }
  return v8;
}
