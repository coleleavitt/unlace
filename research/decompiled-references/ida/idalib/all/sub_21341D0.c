__int64 __fastcall sub_21341D0(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+18h] [rbp-20h] BYREF

  v3[0] = 0;
  if ( (unsigned __int8)sub_21335C0(a1, v3) || (unsigned __int8)sub_21544B0(a1) )
    return 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 952LL))(*(_QWORD *)(a1 + 24), v3[0], a2);
  return 0;
}
