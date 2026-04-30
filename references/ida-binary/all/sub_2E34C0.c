__int64 __fastcall sub_2E34C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rax

  v6 = 0;
  if ( !*(_BYTE *)(a1 + 64) )
    v6 = *(_QWORD *)(a1 + 56);
  v7 = sub_1EB590(v6, a2, a3, a4, a5);
  v8 = sub_2EDA50(a1, 1);
  return (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 104LL))(v8, (unsigned int)(v7 - 2) > 1);
}
