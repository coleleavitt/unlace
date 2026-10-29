__int64 __fastcall sub_B39420(__int64 a1, int a2, int a3)
{
  char *v3; // rdi
  __int64 result; // rax

  v3 = (char *)(a1 + 64);
  while ( a3 != *v3 )
  {
    v3 = *((char **)v3 + 1);
    if ( !v3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 117);
    }
  }
  result = (a2 << 8) | (unsigned int)(unsigned __int8)*v3;
  *(_DWORD *)v3 = result;
  return result;
}

