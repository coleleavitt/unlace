__int64 __fastcall sub_3B070(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // r12d
  unsigned int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 472);
  v10 = __readfsqword(0x28u);
  v4 = qlseek(v3, 0, 1);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = v4 - v5;
  if ( qlseek(*(_QWORD *)(a1 + 472), a2 + v5, 0) == -1 || (int)sub_396B0(a1, (__int64)&v9, 4, 1) < 0 )
    v7 = 0;
  else
    v7 = v9;
  qlseek(*(_QWORD *)(a1 + 472), v6 + *(_QWORD *)(a1 + 480), 0);
  return v7;
}

