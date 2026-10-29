__int64 __fastcall sub_1C8510(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        signed int a6,
        signed int a7)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 *v11; // r14
  unsigned __int8 *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edx

  if ( !sub_11CA80(a5) )
    return 0;
  v10 = j__qalloc_or_throw(80, a2, v8, v9);
  v11 = (unsigned __int8 *)(v10 + 32);
  v12 = (unsigned __int8 *)(v10 + 64);
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_330970(v10, a2);
  *(_DWORD *)(v10 + 4) |= 0x40000u;
  *(_DWORD *)v10 = 4;
  sub_125180(v10 + 32, a3);
  if ( !(unsigned __int8)sub_126F10(v10 + 32, a1, a6, v13)
    || *(_DWORD *)(v10 + 36) != a5 && !(unsigned __int8)sub_12AB50(v11, a1, a5, 1)
    || (sub_125180((__int64)v12, a4), !(unsigned __int8)sub_126F10((unsigned __int64)v12, a1, a7, v14))
    || (v15 = *(_DWORD *)(v10 + 36), *(_DWORD *)(v10 + 68) < v15)
    || !(unsigned __int8)sub_12AB50(v12, a1, v15, 128) )
  {
    if ( v10 )
    {
      sub_11CDA0((__int64)v12);
      sub_11CDA0(v10 + 48);
      sub_11CDA0((__int64)v11);
      j__qfree(v10);
    }
    return 0;
  }
  return v10;
}
