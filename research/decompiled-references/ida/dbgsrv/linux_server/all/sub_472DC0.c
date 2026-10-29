/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472DC0
// Address: 0x0000000000472DC0

//----- (0000000000472DC0) ----------------------------------------------------
__int64 __fastcall sub_472DC0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  sub_46F090(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 8) = 0;
  v6 = qword_4C83E0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( !a3 || a2 < 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v6 + 216))(*(_QWORD *)(a1 + 88), 78, 1, 0);
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v6 + 216))(*(_QWORD *)(a1 + 88), 33, 1, 0);
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
