/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_info_bases
// Address: 0x000DBE04

//----- (000DBE04) --------------------------------------------------------
int __cdecl _register_frame_info_bases(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int result; // eax

  result = (int)a1;
  if ( a1 && *a1 )
  {
    a2[4] = 0;
    a2[1] = a3;
    *a2 = -1;
    a2[3] = a1;
    a2[2] = a4;
    *((_WORD *)a2 + 8) = 2040;
    if ( &pthread_create )
      pthread_mutex_lock((pthread_mutex_t *)&dword_13E700);
    result = dword_13E708;
    dword_13E708 = (int)a2;
    a2[5] = result;
    if ( &pthread_create )
      return pthread_mutex_unlock((pthread_mutex_t *)&dword_13E700);
  }
  return result;
}
// 13E700: using guessed type int dword_13E700;
// 13E708: using guessed type int dword_13E708;
