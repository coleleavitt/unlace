unsigned __int64 __fastcall sub_4C9EB0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  _BYTE *v5; // rax
  _BYTE v6[6]; // [rsp+2h] [rbp-36h] BYREF
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v7[0] = __readfsqword(0x28u);
  v3 = a3;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v5 = (_BYTE *)pack_dd(v6, v7, (unsigned int)a2);
    if ( v5 < (_BYTE *)v7 )
      *v5++ = v3;
    add_undo_record((unsigned int)a1, v6, v5 - v6);
  }
  return v7[0] - __readfsqword(0x28u);
}

