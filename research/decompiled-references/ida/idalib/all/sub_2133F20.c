__int64 __fastcall sub_2133F20(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+18h] [rbp-10h] BYREF

  v3 = 0;
  if ( (unsigned __int8)sub_2133D40(a1, &v3, a2) || (unsigned __int8)sub_21544B0(a1) )
    return 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 968LL))(*(_QWORD *)(a1 + 24), v3);
  return 0;
}
