/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_934C0
// Address: 0x000934C0

//----- (000934C0) --------------------------------------------------------
pthread_mutex_t *__cdecl sub_934C0(_DWORD *a1, char a2)
{
  int v2; // edx
  _DWORD *v3; // edi
  pthread_mutex_t *result; // eax

  *a1 = &off_138A7C;
  a1[2] = 0;
  a1[1] = 0;
  a1[4] = 0;
  a1[3] = 0;
  a1[6] = 0;
  a1[5] = 0;
  a1[8] = 0;
  a1[7] = 0;
  a1[11] = 0;
  a1[10] = 0;
  a1[9] = 0;
  a1[12] = qtime64();
  a1[13] = v2;
  a1[14] = &unk_1FFFF;
  if ( a2 )
  {
    v3 = operator new(0x14u);
    v3[2] = 0;
    v3[3] = 0;
    v3[1] = v3 + 2;
    *v3 = &off_138B10;
    result = qmutex_create();
    v3[4] = result;
    if ( !result )
    {
      if ( !(_BYTE)under_debugger )
        interr(1540);
      BUG();
    }
  }
  else
  {
    v3 = operator new(0x10u);
    *v3 = &off_138B2C;
    result = (pthread_mutex_t *)(v3 + 2);
    v3[2] = 0;
    v3[3] = 0;
    v3[1] = v3 + 2;
  }
  a1[11] = v3;
  return result;
}
// 9353B: variable 'v2' is possibly undefined
// 138A7C: using guessed type int (__cdecl *off_138A7C)(int);
// 138B10: using guessed type int (__cdecl *off_138B10)(int);
// 138B2C: using guessed type int (__cdecl *off_138B2C)(int);
// 13E34C: using guessed type int under_debugger;
