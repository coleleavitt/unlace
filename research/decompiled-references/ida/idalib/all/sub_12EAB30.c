void __fastcall sub_12EAB30(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _QWORD *v4; // rbx
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_12EA540(v6, a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL), a3, a4, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL));
  v4 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v6[0];
  v6[0] = (__int64)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)v4)-- == 1 )
    {
      sub_FCAA60(v4);
      operator delete(v4, 0x3B90u);
    }
  }
}
