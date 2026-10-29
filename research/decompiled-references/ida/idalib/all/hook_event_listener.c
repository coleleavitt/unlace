__int64 __fastcall hook_event_listener(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi

  v7 = operator new(0x20u);
  *(_QWORD *)v7 = 0;
  v8 = v7;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 16) = a3;
  *(_DWORD *)(v7 + 24) = a4;
  *(_BYTE *)(v7 + 28) = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_3FB5F0() )
    v9 = *(_QWORD *)(qword_2CCB598 + 1712);
  return sub_4B4C90(v9, a1, v8, 0);
}
