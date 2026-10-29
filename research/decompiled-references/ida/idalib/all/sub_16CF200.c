__int64 __fastcall sub_16CF200(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _DWORD *v5; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  void *v11; // rax
  int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r14d
  unsigned int v18; // eax
  int v19; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v20; // [rsp+8h] [rbp-E0h] BYREF
  void *v21; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-D0h]
  void *v23; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-C0h]
  char v25; // [rsp+2Ch] [rbp-BCh]

  v3 = 0;
  v4 = ((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL;
  v5 = *(_DWORD **)(a2 + 8 * v4 + 40);
  if ( ((*v5 >> 14) & 0xC) != 0 )
    return v3;
  v7 = sub_BFBAE0(*(_QWORD *)(a2 + 8 * v4 + 40));
  if ( (*(_WORD *)v7 & 0x1FF) == 5 && ((*(_BYTE *)(v7 + 2) >> 3) & 0xFu) - 3 <= 1 )
  {
    v16 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v23, (__int64 *)(a1 + 8), v16, 0x195Fu, 0);
    v21 = (void *)sub_EEC8C0((unsigned __int64)v5, a1 + 8, a3);
    sub_1587DB0((__int64)&v23, (__int64 *)&v21);
    sub_15F7200(&v23);
  }
  sub_C3DC60((__int64)&v21, (unsigned __int64)v5, *(_QWORD *)(a1 + 248), 0, v8, v9);
  if ( v22 > 0x40 )
  {
    if ( (unsigned int)sub_22069E0(&v21) != 1 )
    {
LABEL_9:
      v10 = sub_BF6D70(a2);
      sub_168B9F0((__int64)&v23, (__int64 *)(a1 + 8), v10, 0xBA4u, 0);
      v20 = sub_EEC8C0((unsigned __int64)v5, a1 + 8, a3);
      v3 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v23, &v20) + 120);
      sub_15F7200(&v23);
LABEL_10:
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
      return v3;
    }
  }
  else if ( !v21 || ((unsigned __int64)v21 & ((unsigned __int64)v21 - 1)) != 0 )
  {
    goto LABEL_9;
  }
  v11 = (void *)sub_A97D20(
                  *(_QWORD *)(a1 + 248),
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL));
  v25 = 0;
  v24 = 64;
  v23 = v11;
  v12 = sub_98E2D0((__int64 *)&v21, (__int64 *)&v23);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  if ( v12 < 0 )
  {
    v13 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v23, (__int64 *)(a1 + 8), v13, 0xBA6u, 0);
    v19 = sub_A97D20(
            *(_QWORD *)(a1 + 248),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL));
    v14 = sub_16CF160((__int64)&v23, (unsigned int *)&v19);
LABEL_19:
    v15 = v14;
    v20 = sub_EEC8C0((unsigned __int64)v5, (__int64)&v19, a3);
    v3 = *(unsigned __int8 *)(sub_1587DB0(v15, &v20) + 120);
    sub_15F7200(&v23);
    goto LABEL_10;
  }
  v24 = 64;
  v23 = (void *)0x7FFFFFFF;
  v25 = 0;
  v17 = sub_98E2D0((__int64 *)&v21, (__int64 *)&v23);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  if ( v17 > 0 )
  {
    v18 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v23, (__int64 *)(a1 + 8), v18, 0xBA5u, 0);
    v19 = 0x7FFFFFFF;
    v14 = sub_1587D10((__int64)&v23, &v19);
    goto LABEL_19;
  }
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return 0;
}
