__int64 __fastcall sub_18EFEA0(
        __int64 *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v16[168]; // [rsp+10h] [rbp-A8h] BYREF

  v8 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 42 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 42 || (v8 = sub_F63050(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL), a2, v11, a6)) == 0 )
    {
      v12 = *(_DWORD *)(a2 + 4);
      v13 = 5368;
      v14 = (__int64 *)(*a1 + 8);
LABEL_9:
      sub_168B9F0((__int64)v16, v14, v12, v13, 0);
      v15 = sub_EEC8C0(a2, (__int64)v14, a3);
      sub_1587DB0((__int64)v16, &v15);
      sub_15F7200(v16);
      return 1;
    }
  }
  if ( ((**(_WORD **)(a2 + 16) + 423) & 0x1FFu) <= 4 )
  {
    v12 = *(_DWORD *)(a2 + 4);
    v13 = 5369;
    v14 = (__int64 *)(*a1 + 8);
    goto LABEL_9;
  }
  v9 = a1[1];
  *(_QWORD *)(a2 + 8) = v9;
  a1[1] = *(_QWORD *)(v8 + 32);
  result = sub_18EEFD0(a1, *(_QWORD *)(a2 + 16), v9, a6, a7, a3, a4);
  if ( result != 1 )
  {
    *(_QWORD *)(a2 + 16) = result & 0xFFFFFFFFFFFFFFFELL;
    return a2;
  }
  return result;
}
