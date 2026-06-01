__int64 __fastcall sub_893220(unsigned int a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)((char *)&unk_23A0320 + 5 * (int)a1);
  if ( (_WORD)result == 0xFFFF )
    return a1;
  return result;
}

