__int64 __fastcall sub_8B6BD0(unsigned __int16 a1)
{
  __int64 result; // rax

  LOWORD(result) = *(_WORD *)((char *)&unk_23C4480 + 5 * a1);
  if ( (_WORD)result == 0xFFFF )
    LOWORD(result) = a1;
  return (unsigned __int16)result;
}
