__int64 __fastcall sub_74A5B0(__int64 a1, unsigned int *a2, __int64 a3, char *a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 v6; // r8
  char *v7; // rcx
  unsigned int v8; // edx

  v5 = sub_747A20(a1, (__int64)a2, a3, a4, a5);
  v7 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 95 )
  {
    v8 = HIWORD(v5);
  }
  else
  {
    LOBYTE(v8) = -64;
    do
    {
      v5 = sub_74A4A0(
             (unsigned int *)(((unsigned __int8)v8 << 16) | v5 & 0xFF00FFFF),
             a2,
             (unsigned __int8)v8 << 16,
             (__int64)v7,
             v6);
      v7 = qword_2CAA5C0;
      v8 = HIWORD(v5);
    }
    while ( *qword_2CAA5C0 != 95 );
  }
  qword_2CAA5C0 = v7 + 1;
  return ((unsigned __int8)v8 << 16) | v5 & 0xFF00FFFF;
}

