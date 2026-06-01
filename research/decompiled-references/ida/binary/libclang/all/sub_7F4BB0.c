__int64 __fastcall sub_7F4BB0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rsi
  unsigned int v5; // r12d
  __int64 *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a2 + 96) )
  {
    v3 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v3 = (__int64 *)*v3;
    if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v3, (__int64)(v3 + 1)) )
      return 0;
  }
  v4 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v4 = sub_79AC10(a2);
  v5 = sub_7E1600(a1, v4);
  if ( !(_BYTE)v5 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v7 = nullptr;
    v8 = sub_79A2B0(a2);
    v9 = *v8 + 8LL * *((unsigned int *)v8 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v7 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v9 != v7 )
    {
      while ( 1 )
      {
        v10 = *a1;
        v11[0] = *v7;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v11[0], v11[0], v11, a1, v10) )
          break;
        if ( (__int64 *)v9 == ++v7 )
          return v5;
      }
      return 0;
    }
  }
  return v5;
}

