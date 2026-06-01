__int64 __fastcall sub_1C543A0(__int64 a1, unsigned __int64 a2, char a3, double a4)
{
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // [rsp+0h] [rbp-100h]
  __int64 v15[2]; // [rsp+8h] [rbp-F8h] BYREF
  int v16; // [rsp+18h] [rbp-E8h]
  int v17[46]; // [rsp+48h] [rbp-B8h] BYREF

  if ( !a2 )
    return 1;
  if ( (*(_WORD *)a2 & 0x1FF) == 9 )
  {
    if ( a3 )
    {
      if ( !(*(_DWORD *)(a2 + 16) * ((*(_WORD *)(a2 + 2) >> 6) & 7)) )
      {
        v5 = sub_EEB7E0(a2, a2, a4);
        sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v5, 0xC23u, 0);
        v15[0] = sub_EEC8C0(a2, a1 + 8, a4);
        sub_1587DB0((__int64)v17, v15);
        sub_15F7200(v17);
      }
    }
    return a2;
  }
  if ( (unsigned __int8)sub_1E534E0(a1, a2, 0) )
    return 1;
  if ( (*(_DWORD *)a2 & 0x7C000) != 0 )
    return a2;
  BYTE4(v15[0]) &= ~1u;
  v7 = *(_QWORD *)(a1 + 248);
  LODWORD(v15[0]) = 0;
  if ( (unsigned __int8)sub_1856D80(a1, a2, (__int64)v15, v7, 1, 1u, a4) )
  {
    if ( a3 && !v16 )
    {
      v13 = sub_EEB7E0(a2, a2, a4);
      sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v13, 0xC23u, 0);
      sub_15F7200(v17);
    }
    v10 = sub_C09AC0(*(_QWORD **)(a1 + 248), a2, 2, 0, v8, v9);
    v11 = *(_QWORD *)(a1 + 248);
    v12 = v10;
    sub_A53C40((__int64)v17, (int *)v15);
    sub_BF7970(v12, (__int64)v17, v11);
    if ( v17[0] > 1u )
      sub_A4F8E0(v17);
    result = v12;
  }
  else
  {
    result = 1;
  }
  if ( LODWORD(v15[0]) > 1 )
  {
    v14 = result;
    sub_A4F8E0((int *)v15);
    return v14;
  }
  return result;
}
