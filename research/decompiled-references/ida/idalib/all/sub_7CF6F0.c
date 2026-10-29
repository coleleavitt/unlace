__int64 __fastcall sub_7CF6F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp

  v1 = (*(__int64 (__fastcall **)(_QWORD))(qword_2CD47A0 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v1;
  if ( !v1 )
    return 0;
  v2 = (*(__int64 (__fastcall **)(__int64))(qword_2CD47A0 + 24))(qword_2CD47A8);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_2CD47A0 + 168LL))(qword_2CD47A0, v2, a1);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_2CD47A0 + 288))(*(_QWORD *)(a1 + 88), v2, v2);
  return 1;
}
