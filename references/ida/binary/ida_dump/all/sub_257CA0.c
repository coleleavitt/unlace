__int64 __fastcall sub_257CA0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  const char *v6; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)is_enum() )
  {
    v6 = s1;
    if ( *(_QWORD *)(a1 + 16) )
      v6 = *(const char **)(a1 + 8);
    sub_32ACB0(v10, v6);
    copy_tinfo_t();
    clear_tinfo_t();
    return 2 * (unsigned int)((get_tinfo_property() & 0x3F) == 45);
  }
  else if ( (unsigned __int8)is_char() )
  {
    v8 = 50;
    if ( (char)a4 != a4 )
      v8 = 21;
    v10[0] = v8;
    copy_tinfo_t();
    clear_tinfo_t();
    return 1;
  }
  else if ( !(unsigned __int8)is_stroff()
         && ((unsigned __int8)is_numop() && (unsigned int)get_radix() == 10
          || a3 < *(unsigned __int8 *)(a2 + 130)
          || (v9 = 8 * a3 - 1, (unsigned __int64)v9 <= 0x3F) && a4 < 1LL << v9) )
  {
    return 0;
  }
  else
  {
    sub_32C430(v10, *(_QWORD *)(a2 + 112), (unsigned int)a3, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    return (unsigned int)(unsigned __int8)is_stroff() + 1;
  }
}
