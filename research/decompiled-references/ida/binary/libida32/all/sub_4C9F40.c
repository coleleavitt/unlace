unsigned __int64 __fastcall sub_4C9F40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[15]; // [rsp+9h] [rbp-4Fh] BYREF
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a3;
  v11[0] = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = pack_dd(v10, v11, (unsigned int)a2);
    v8 = pack_dd(v7, v11, v4);
    v9 = pack_dd(v8, v11, a4);
    add_undo_record((unsigned int)a1, v10, v9 - (_QWORD)v10);
  }
  return v11[0] - __readfsqword(0x28u);
}

