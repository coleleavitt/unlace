_BOOL8 __fastcall sub_11A180(__int64 a1, __int64 a2, char a3)
{
  int aflags; // edx
  _BOOL8 result; // rax
  unsigned __int64 *v6; // rax
  char v7; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+178h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  if ( a2 != -1 && *(char *)(*(_QWORD *)(a1 + 8) + 10LL) < 0 )
    sub_D3E80();
  aflags = get_aflags();
  result = 1;
  if ( (aflags & 0x400000) == 0 )
  {
    v6 = (unsigned __int64 *)&v7;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( &v8 != v6 );
    if ( (int)decode_insn() > 0 && (a3 || (unsigned __int8)is_call_insn()) )
    {
      get_item_end();
      return (get_flags_ex() & 0x10000) == 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
