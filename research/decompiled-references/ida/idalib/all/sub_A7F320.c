__int64 __fastcall sub_A7F320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13

  if ( a3
    && a2
    && (a2 == a3
     || (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2),
         v7 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3))) )
  {
    return 1;
  }
  else
  {
    return sub_A7F1A0(a1, a2, a3, a4, a5, a6);
  }
}
