__int64 __fastcall hook_to_notification_point(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi

  v5 = operator new(0x20u);
  *(_QWORD *)v5 = 0;
  v6 = v5;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 16) = a3;
  *(_DWORD *)(v5 + 24) = 1;
  *(_BYTE *)(v5 + 28) = 1;
  v7 = 0;
  if ( (unsigned __int8)sub_3FB5F0() )
    v7 = *(_QWORD *)(qword_2CCB598 + 1712);
  return sub_4B4C90(v7, a1, v6, 0);
}
