__int64 __fastcall sub_150360(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  char v3; // al
  unsigned int v4; // eax

  LOBYTE(v1) = *((_BYTE *)a1 + 32) == 2 || *((_BYTE *)a1 + 32) == 13;
  if ( (_BYTE)v1 && (v2 = v1, v3 = *((_BYTE *)a1 + 48), v3 != 13) && v3 != 2 && (v4 = sub_328F80(*a1)) != 0 )
  {
    *a1 = v4;
    sub_117E50((char *)a1 + 32, (char *)a1 + 48);
  }
  else
  {
    return 0;
  }
  return v2;
}
