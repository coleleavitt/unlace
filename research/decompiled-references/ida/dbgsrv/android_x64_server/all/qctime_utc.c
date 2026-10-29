/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime_utc
// Address: 0x00000000000C3DC0

//----- (00000000000C3DC0) ----------------------------------------------------
__int64 __fastcall qctime_utc(char *s, unsigned __int64 a2, int a3)
{
  size_t v3; // rax
  size_t v4; // rcx
  char *v5; // r15
  size_t v6; // rbp
  char *v7; // rbx
  int v8; // edi
  int v9; // eax
  struct tm tp; // [rsp+8h] [rbp-80h] BYREF
  time_t timer[9]; // [rsp+40h] [rbp-48h] BYREF

  timer[4] = __readfsqword(0x28u);
  timer[0] = a3;
  if ( a3 >= 0 && gmtime_r(timer, &tp) && asctime_r(&tp, (char *)timer) )
  {
    qstrncpy(s, (__int64)timer, a2);
    if ( a2 >= 9 && s[8] == 32 )
      s[8] = 48;
    v3 = strlen(s);
    v4 = -6LL - v3;
    v5 = &s[v3];
    do
    {
      v6 = v4;
      v7 = v5;
      if ( v4 == -6 )
        break;
      v8 = (unsigned __int8)*(v5 - 1);
      if ( (v8 & 0x80u) != 0 )
        break;
      v9 = isspace(v8);
      v4 = v6 + 1;
      --v5;
    }
    while ( v9 );
    LOBYTE(v5) = 1;
    if ( -(__int64)v6 <= a2 )
      qstrncpy(v7, (__int64)" UTC\n", 6);
  }
  else
  {
    qstrncpy(s, (__int64)"[wrong timestamp]\n", a2);
    LODWORD(v5) = 0;
  }
  return (unsigned int)v5;
}
