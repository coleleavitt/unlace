_BOOL8 __fastcall sub_5C6440(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-188h] BYREF
  __int64 v12; // [rsp+10h] [rbp-178h]
  __int64 v13; // [rsp+18h] [rbp-170h]
  __int64 v14; // [rsp+20h] [rbp-168h]
  char v15; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v16; // [rsp+168h] [rbp-20h] BYREF

  v16 = __readfsqword(0x28u);
  if ( a4 >= a1 )
  {
    if ( a2 >= a4 )
      return 0;
    v4 = a4 - a2;
    if ( a4 - a2 <= 0x3FF )
      return 0;
  }
  else
  {
    v4 = a1 - a4;
    if ( a1 - a4 <= 0x3FF )
      return 0;
  }
  v12 = -1;
  v6 = (unsigned __int64 *)&v15;
  v13 = 0;
  v14 = 0;
  v11 = -1;
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
  while ( &v16 != v6 );
  return a1 != a3
      && a1 < a4
      && (unsigned int)decode_insn(&v11, a4, a3, a4, 0, 0, 0.0)
      && sub_3792E0(0x24u, &v11, 0, v7, v8, v9) == 100
      && !(unsigned __int8)is_ret_insn(&v11, 1, v10)
      || v4 > 0x7FFF;
}
