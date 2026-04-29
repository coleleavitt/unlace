bool __fastcall sub_79480(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rax
  bool result; // al
  int v10; // edx
  char v11; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-20h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 26);
  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 16) + v5;
  if ( v6 >= a3 )
    return 0;
  v7 = a3 - v6;
  if ( a3 - v6 > 0xF )
    return 0;
  if ( *(_WORD *)(a2 + 24) != 16 || (v10 = sub_78DA0(a1, 0, *(_QWORD *)(a2 + 16), 0, 0, a4, a5), result = 1, !v10) )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    {
      v8 = (unsigned __int64 *)&v11;
      do
      {
        *(_WORD *)v8 = 0;
        v8 += 5;
        *((_WORD *)v8 - 19) = 0;
        *((_WORD *)v8 - 18) = 0;
        *((_DWORD *)v8 - 2) = 0;
        *((_WORD *)v8 - 17) = 0;
        *((_OWORD *)v8 - 2) = 0;
        *(v8 - 2) = 0;
      }
      while ( &v12 != v8 );
      return v7 < (int)decode_insn();
    }
    return 0;
  }
  return result;
}
