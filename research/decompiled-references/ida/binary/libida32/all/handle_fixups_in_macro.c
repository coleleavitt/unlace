__int64 __fastcall handle_fixups_in_macro(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int16 v5; // r13
  unsigned int v6; // ebx
  unsigned int item_end; // ebp
  unsigned int next_fixup_ea; // eax
  __int64 result; // rax
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  v10[2] = 0;
  item_end = get_item_end((unsigned int)a2, a2, a3, a4);
  v10[1] = 0xFFFFFFFF00000000LL;
  while ( 1 )
  {
    next_fixup_ea = get_next_fixup_ea(v6);
    v6 = next_fixup_ea;
    if ( next_fixup_ea >= item_end )
      break;
    result = get_fixup(v10, next_fixup_ea);
    if ( (_BYTE)result && v5 == LOWORD(v10[0]) )
    {
      a1[3] = v4;
      *a1 = -1;
      return result;
    }
  }
  return 0;
}

