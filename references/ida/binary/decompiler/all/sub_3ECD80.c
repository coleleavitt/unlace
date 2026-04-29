_BOOL8 __fastcall sub_3ECD80(_DWORD *a1, __int16 a2)
{
  _BOOL8 result; // rax
  unsigned __int64 *v3; // rax
  char v4; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-20h] BYREF

  v5 = __readfsqword(0x28u);
  result = 0;
  if ( *a1 == 62 )
  {
    v3 = (unsigned __int64 *)&v4;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v5 != v3 );
    decode_insn();
    return a2 == 0;
  }
  return result;
}
