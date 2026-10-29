/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA8B0
// Address: 0x000AA8B0

//----- (000AA8B0) --------------------------------------------------------
unsigned int sub_AA8B0()
{
  int v1; // [esp+8h] [ebp-20h] BYREF
  int v2; // [esp+Ch] [ebp-1Ch]
  int v3; // [esp+10h] [ebp-18h]
  pthread_mutex_t *v4[4]; // [esp+18h] [ebp-10h] BYREF

  v4[1] = (pthread_mutex_t *)__readgsdword(0x14u);
  sub_B3B30(v4);
  if ( !dword_13D328 )
  {
    v1 = 0;
    v2 = 0;
    v3 = 0;
    if ( (unsigned __int8)qgetenv("IDAUSR", (int)&v1) )
      sub_AB060((int)&dword_13D324, (char *)v1);
    if ( !dword_13D328 )
    {
      if ( (unsigned __int8)sub_AA660((int)&v1) )
        sub_2AC80((int)&dword_13D324, (int)&v1);
      if ( !dword_13D328 )
        sub_1DE10(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
    }
    if ( v1 )
    {
      v2 = 0;
      qfree((void *)v1);
      v1 = 0;
      v3 = 0;
    }
  }
  qmutex_unlock(v4[0]);
  return __readgsdword(0x14u);
}
// 13D324: using guessed type int dword_13D324;
// 13D328: using guessed type int dword_13D328;
