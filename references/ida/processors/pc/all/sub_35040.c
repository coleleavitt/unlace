__int64 sub_35040()
{
  unsigned int v0; // eax
  unsigned int v1; // ebp
  unsigned __int64 *v2; // rax
  char v4; // [rsp+11h] [rbp-197h]
  char v5; // [rsp+48h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+188h] [rbp-20h] BYREF

  v6 = __readfsqword(0x28u);
  v0 = xrefblk_t_first_to();
  if ( (_BYTE)v0 )
  {
    v1 = v0;
    while ( v4 != 21 )
    {
      if ( (unsigned __int8)(v4 - 18) <= 1u )
      {
        v2 = (unsigned __int64 *)&v5;
        do
        {
          *(_WORD *)v2 = 0;
          v2 += 5;
          *((_WORD *)v2 - 19) = 0;
          *((_WORD *)v2 - 18) = 0;
          *((_DWORD *)v2 - 2) = 0;
          *((_WORD *)v2 - 17) = 0;
          *((_OWORD *)v2 - 2) = 0;
          *(v2 - 2) = 0;
        }
        while ( &v6 != v2 );
        decode_insn();
      }
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
