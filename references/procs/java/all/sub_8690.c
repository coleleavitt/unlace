unsigned __int64 __fastcall sub_8690(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  char *v5; // r14
  int v6; // ecx
  __int16 v7; // [rsp+0h] [rbp-58h] BYREF
  char v8; // [rsp+2h] [rbp-56h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  LOBYTE(v3) = a3;
  if ( (get_flags_ex(a1, 4) & 0x800) == 0 && (unsigned int)sub_EB30(a2, 0, (unsigned int)(char)v3) != 1 )
  {
    v3 = (char)v3;
    v5 = &v8;
    v7 = 30768;
    do
    {
      v6 = *(unsigned __int16 *)(a2 + 2 * v3--);
      v5 += (int)qsnprintf(v5, 5, "%04X", v6);
    }
    while ( (_BYTE)v3 != 0xFF );
    remember_problem(12, a1, 0);
    append_cmt(a1, &v7, 0);
  }
  return v9 - __readfsqword(0x28u);
}
