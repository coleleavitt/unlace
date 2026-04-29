unsigned __int64 __fastcall sub_1B180(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (a4 & 0x20) == 0 )
  {
    v6 = a1[58];
    v7 = *a1;
    v9 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v7 + 136))(a1, &v9, a2 + v6) )
      sub_1B0D0();
    return v10 - __readfsqword(0x28u);
  }
  if ( (a4 & 0x40) == 0 || (unsigned int)get_32bit() == -1 || a5 == -1 )
    return v10 - __readfsqword(0x28u);
  return sub_1B0D0();
}
