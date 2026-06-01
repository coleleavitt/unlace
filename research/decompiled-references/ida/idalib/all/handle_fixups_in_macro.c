__int64 __fastcall handle_fixups_in_macro(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int16 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 item_end; // rbp
  unsigned __int64 next_fixup_ea; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v14 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 0;
  item_end = get_item_end(a2, a2, a3, a4);
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  while ( 1 )
  {
    next_fixup_ea = get_next_fixup_ea(v6);
    v6 = next_fixup_ea;
    if ( next_fixup_ea >= item_end )
      break;
    result = get_fixup(&v10, next_fixup_ea);
    if ( (_BYTE)result && v5 == (_WORD)v10 )
    {
      *(_DWORD *)(a1 + 24) = v4;
      *(_QWORD *)a1 = -1;
      return result;
    }
  }
  return 0;
}
