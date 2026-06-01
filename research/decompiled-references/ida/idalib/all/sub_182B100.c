__int64 __fastcall sub_182B100(__int64 a1, __int64 a2, unsigned int *a3, double a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = 1;
  if ( (*(_BYTE *)(a2 + 58) & 1) == 0 )
  {
    if ( (unsigned __int8)sub_15EB880(a2, a1, 1u)
      && (v7 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFFCLL,
          v4 = sub_16211A0(a1, a2, v7, &v10, 0xFFFFFFFFLL, 0),
          (_BYTE)v4) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 336LL) )
      {
        v8 = v10;
        *a3 = v10;
        if ( v8 > *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 336LL) )
        {
          sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xC91u, 0);
          v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 336LL);
          v9 = sub_16CF160((__int64)v13, &v11);
          v12 = sub_EEC8C0(v7, (__int64)&v11, a4);
          sub_1587DB0(v9, &v12);
          sub_15F7200(v13);
          *(_BYTE *)(a2 + 58) |= 1u;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xC92u, 0);
        v12 = sub_EEC8C0(v7, a1 + 8, a4);
        sub_1587DB0((__int64)v13, &v12);
        sub_15F7200(v13);
        *(_BYTE *)(a2 + 58) |= 1u;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 58) |= 1u;
      return 1;
    }
  }
  return v4;
}
