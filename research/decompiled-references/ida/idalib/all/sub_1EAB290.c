__int64 __fastcall sub_1EAB290(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax

  if ( (a4 & 2) == 0 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
  return (unsigned int)sub_1FD88A0(v5, a2, a3) ^ 1;
}
