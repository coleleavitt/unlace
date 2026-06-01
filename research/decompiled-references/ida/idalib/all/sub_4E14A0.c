unsigned __int64 __fastcall sub_4E14A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[30]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v11[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = pack_dq(v10, v11, a2);
    v8 = pack_dq(v7, v11, a3);
    v9 = pack_dq(v8, v11, a4);
    add_undo_record((unsigned int)a1, v10, v9 - (_QWORD)v10);
  }
  return v12 - __readfsqword(0x28u);
}
