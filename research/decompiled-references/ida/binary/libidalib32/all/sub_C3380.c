__int64 sub_C3380()
{
  unsigned __int64 *v1; // rax
  char v2; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v3; // [rsp+E8h] [rbp-20h] BYREF

  v3 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x600) == 0x200 )
  {
    sub_9E220();
    if ( (unsigned int)prev_head() != -1 )
    {
      v1 = (unsigned __int64 *)&v2;
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
      while ( &v3 != v1 );
      decode_insn();
    }
  }
  return 0xFFFFFFFFLL;
}

