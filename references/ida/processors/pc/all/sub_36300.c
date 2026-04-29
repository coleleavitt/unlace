unsigned __int8 sub_36300()
{
  unsigned __int64 *v1; // rax
  __int128 v2; // [rsp+0h] [rbp-188h] BYREF
  __int64 v3; // [rsp+10h] [rbp-178h]
  __int64 v4; // [rsp+18h] [rbp-170h]
  __int64 v5; // [rsp+20h] [rbp-168h]
  char v6; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+168h] [rbp-20h] BYREF

  v7 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x10000) == 0 )
    return 0;
  v3 = -1;
  v1 = (unsigned __int64 *)&v6;
  v4 = 0;
  v5 = 0;
  v2 = -1;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 5;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *(v1 - 2) = 0;
  }
  while ( &v7 != v1 );
  if ( decode_prev_insn() == -1 )
    return 0;
  else
    return sub_355E0((__int64)&v2);
}
