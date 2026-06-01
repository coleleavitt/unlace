__int64 __fastcall sub_1C8510(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        signed int a6,
        signed int a7)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  int v11; // edx

  if ( !sub_11CA80(a5) )
    return 0;
  v8 = j__qalloc_or_throw();
  v9 = v8 + 32;
  v10 = v8 + 64;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_330970(v8, a2);
  *(_DWORD *)(v8 + 4) |= 0x40000u;
  *(_DWORD *)v8 = 4;
  sub_125180(v8 + 32, a3);
  if ( !(unsigned __int8)sub_126F10(v8 + 32, a1, a6)
    || *(_DWORD *)(v8 + 36) != a5 && !(unsigned __int8)sub_12AB50(v9, a1, a5, 1)
    || (sub_125180(v10, a4), !(unsigned __int8)sub_126F10(v10, a1, a7))
    || (v11 = *(_DWORD *)(v8 + 36), *(_DWORD *)(v8 + 68) < v11)
    || !(unsigned __int8)sub_12AB50(v10, a1, v11, 128) )
  {
    if ( v8 )
    {
      sub_11CDA0(v10);
      sub_11CDA0(v8 + 48);
      sub_11CDA0(v9);
      j__qfree();
    }
    return 0;
  }
  return v8;
}
