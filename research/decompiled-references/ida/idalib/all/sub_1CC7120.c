__int64 __fastcall sub_1CC7120(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        __m128 a7)
{
  __int64 v8; // r13
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v13; // r15
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  __int64 *v16; // rbp
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // [rsp+0h] [rbp-E0h]
  __int64 v24; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int64 v25; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v26[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( !a5 )
    return 0;
  v8 = a4 + 24LL * (unsigned int)(a5 - 1) + 24;
  v10 = a4;
  v22 = a6;
  while ( 1 )
  {
    v11 = *(_DWORD *)v10 & 0x7FFFFFFF;
    if ( v11 == 9 )
    {
      if ( (unsigned __int8)sub_1CC7120(a1, a2, a3, *(_QWORD *)(v10 + 8), *(unsigned int *)(v10 + 4), v22) )
        return 1;
      goto LABEL_5;
    }
    if ( v11 == 8 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      v14 = *(_WORD *)v13 & 0x1FF;
      if ( v14 == 22 )
      {
        v13 = *(_QWORD *)(v13 + 24);
        v14 = *(_WORD *)v13 & 0x1FF;
      }
      for ( ; v14 == 79; v14 = *(_WORD *)v13 & 0x1FF )
        v13 = *(_QWORD *)(v13 + 16);
      if ( v14 != 71 || (*(_BYTE *)(*(_QWORD *)(v13 + 16) + 28LL) & 0x7F) != 0x2F )
      {
        v15 = sub_1CB0730(*(_DWORD *)(a3 + 68) & 0xFFFFF, (_DWORD *)v13, *(double *)a7.m128_u64);
        v25 = v15;
        if ( (_DWORD)v15 && HIDWORD(v25) )
        {
          v16 = (__int64 *)(a1 + 8);
          v17 = v15;
          v18 = 3669;
          if ( a6 )
          {
            sub_168B9F0((__int64)v26, v16, a2, 0xE55u, 0);
            sub_15F7200(v26);
            v17 = v25;
            v18 = 5912;
          }
          sub_168B9F0((__int64)v26, v16, v17, v18, 0);
          sub_15884C0((__int64)v26, (__int64 *)&v25);
          sub_15F7200(v26);
          return 1;
        }
        v19 = (__int64 *)(*(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
          v19 = (__int64 *)v19[4];
        v20 = *v19;
        v25 = sub_1CB0B00(*(_DWORD *)(a3 + 68) & 0xFFFFF, *v19, (__int64)(v19 + 1), a7);
        if ( (_DWORD)v25 )
        {
          if ( HIDWORD(v25) )
            break;
        }
      }
    }
LABEL_5:
    v10 += 24;
    if ( v8 == v10 )
      return 0;
  }
  v21 = a2;
  if ( !a6 )
    v21 = sub_EEB7E0(v13, v20, *(double *)a7.m128_u64);
  sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v21, 0xE57u, 0);
  v24 = *(_QWORD *)(a3 + 48);
  sub_162B6D0((__int64)v26, &v24);
  sub_15F7200(v26);
  sub_1CC6E20(a1, a3);
  return 1;
}
