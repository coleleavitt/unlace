void __fastcall sub_12EA0B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rbx
  _DWORD *v4; // r12

  v2 = *(_QWORD *)(a1 + 32);
  v3 = (_DWORD *)operator new(0x300u);
  sub_1020DB0((__int64)v3, v2, a2, 0);
  v4 = *(_DWORD **)(a1 + 72);
  ++*v3;
  *(_QWORD *)(a1 + 72) = v3;
  if ( v4 )
  {
    if ( (*v4)-- == 1 )
    {
      sub_101EB00((__int64)v4);
      operator delete(v4, 0x300u);
    }
  }
}
