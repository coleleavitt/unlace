__int64 sub_120800()
{
  __int64 result; // rax
  unsigned __int64 *v1; // rax
  char *v2; // rdx
  char v3; // [rsp+18h] [rbp-D0h] BYREF
  char v4; // [rsp+19h] [rbp-CFh] BYREF
  unsigned __int64 v5; // [rsp+D8h] [rbp-10h] BYREF

  v5 = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    return 0;
  v1 = (unsigned __int64 *)&v3;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 3;
    *((_WORD *)v1 - 11) = 0;
    *((_WORD *)v1 - 10) = 0;
    *((_DWORD *)v1 - 1) = 0;
    *((_WORD *)v1 - 9) = 0;
    *(v1 - 2) = 0;
    *((_DWORD *)v1 - 2) = 0;
  }
  while ( &v5 != v1 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v2 = &v4;
  result = 0;
  while ( *v2 == 1 )
  {
    result = (unsigned int)(result + 1);
    v2 += 24;
    if ( (_DWORD)result == 8 )
      return 0;
  }
  return result;
}

