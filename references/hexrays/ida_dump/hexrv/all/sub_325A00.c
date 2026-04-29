_QWORD *__fastcall sub_325A00(_QWORD *a1, __int64 a2)
{
  unsigned int type_ordinal; // r12d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 idati; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int16 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  *a1 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_37DDE0(52645);
    BUG();
  }
  type_ordinal = get_type_ordinal(0);
  v8 = 1;
  v7 = type_ordinal;
  idati = get_idati(0, a2, v3, v4);
  if ( !type_ordinal )
  {
    v7 = a2;
    LOBYTE(v8) = 0;
  }
  create_tinfo(a1, 61, 61, &idati);
  return a1;
}
