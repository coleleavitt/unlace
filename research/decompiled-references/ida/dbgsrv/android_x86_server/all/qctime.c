/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x000B1AB0

//----- (000B1AB0) --------------------------------------------------------
char __cdecl qctime(unsigned int a1, unsigned int a2, time_t a3)
{
  unsigned int v3; // edx
  char *v4; // eax
  char result; // al
  time_t timer; // [esp+4h] [ebp-38h] BYREF
  char buf[30]; // [esp+Ah] [ebp-32h] BYREF
  unsigned int v8; // [esp+28h] [ebp-14h]

  v3 = a1;
  v8 = __readgsdword(0x14u);
  timer = a3;
  if ( a3 >= 0 && (v4 = ctime_r(&timer, buf), v3 = a1, v4) )
  {
    qstrncpy(a1, (int)buf, a2);
    result = 1;
    if ( a2 >= 9 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
  }
  else
  {
    qstrncpy(v3, (int)"[wrong timestamp]\n", a2);
    return 0;
  }
  return result;
}
