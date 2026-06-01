unsigned __int64 __fastcall sub_3C4F00(__int64 *a1, unsigned int a2, int a3, char a4)
{
  unsigned __int64 result; // rax

  result = a3 & 0x600;
  if ( result == 1024 )
    return sub_3C4DC0(a1, a2, (unsigned __int16)a3, a4);
  return result;
}

