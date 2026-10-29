__int64 __fastcall sub_17B3720(__int64 a1, unsigned int a2, char a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v16[200]; // [rsp+20h] [rbp-C8h] BYREF

  v14 = a4;
  v7 = *(_QWORD *)(a6 + 72);
  if ( a3 != BYTE4(v7) >> 7 )
  {
    v10 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a2, 0xE92u, 0);
    LOBYTE(v11) = (unsigned __int8)*(_DWORD *)(a6 + 76) >> 7;
    goto LABEL_10;
  }
  if ( !(_BYTE)a5 || (v7 & 0x20000000000LL) == 0 )
  {
    if ( (_BYTE)a5 == ((v7 & 0x20000000000LL) != 0) )
      return 0;
    v10 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a2, 0xE91u, 0);
    v11 = (*(_QWORD *)(a6 + 72) >> 41) & 1LL;
LABEL_10:
    LOBYTE(v15) = v11;
    sub_1588420((__int64)v16, (unsigned __int8 *)&v15);
    sub_15F7200(v16);
    sub_168B9F0((__int64)v16, v10, *(_DWORD *)(a6 + 24), 0x70u, 0);
    sub_15F7200(v16);
    return 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(sub_6F3660(a6) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  v12 = sub_6F3660(a6);
  if ( sub_179A7E0(v14, v12) )
    return 0;
  sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a2, 0xE93u, 0);
  v13 = sub_1605D30((__int64)v16, &v14);
  v15 = sub_6F3660(a6);
  sub_162B6D0(v13, (__int64 *)&v15);
  sub_15F7200(v16);
  sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), *(_DWORD *)(a6 + 24), 0x70u, 0);
  v15 = sub_B78390(a6);
  sub_1587DB0((__int64)v16, (__int64 *)&v15);
  sub_15F7200(v16);
  return a5;
}
