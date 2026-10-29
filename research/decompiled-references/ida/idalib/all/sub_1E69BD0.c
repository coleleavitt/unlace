__int64 __fastcall sub_1E69BD0(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = *a3 & 0x3F;
  if ( a2 )
    __asm { jmp     rax }
  return result;
}
