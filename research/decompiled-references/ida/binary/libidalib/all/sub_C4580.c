__int64 sub_C4580()
{
  unsigned __int64 *v1; // rax
  char v2; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v3; // [rsp+178h] [rbp-20h] BYREF

  v3 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x600) == 0x200 )
  {
    sub_9E360();
    if ( prev_head() != -1 )
    {
      v1 = (unsigned __int64 *)&v2;
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
      while ( &v3 != v1 );
      decode_insn();
    }
  }
  return -1;
}

