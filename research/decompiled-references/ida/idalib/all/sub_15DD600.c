__int64 __fastcall sub_15DD600(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _BYTE v4[184]; // [rsp+0h] [rbp-B8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(
         *(_QWORD *)(a1 + 72),
         *(_QWORD *)(a2 + 232));
  if ( !(_BYTE)v2 )
  {
    sub_168B9F0(v4, a2 + 8, *(unsigned int *)(a1 + 24), 127, 0);
    sub_15DD120((__int64)v4, a1);
    sub_15F7200(v4);
  }
  return v2;
}
