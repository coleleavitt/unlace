__int64 __fastcall sub_1B77EE(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  char v5[256]; // [rsp+20h] [rbp-100h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, char *, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 72LL))(
         *(_QWORD *)(a1 + 32),
         v5,
         a3,
         a4) != 1 )
    return 0;
  else
    return sub_1B73B6(a1, a2, v5);
}

