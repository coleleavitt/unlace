__int64 __fastcall sub_58F9D0(_BYTE *a1)
{
  int pipedes[2]; // [rsp+18h] [rbp-8h] BYREF

  if ( a1[56] || *(int *)a1 < 0 )
    return 0;
  if ( pipe(pipedes) )
    return 0;
  if ( fcntl(pipedes[0], 2, 1) )
    return 0;
  if ( fcntl(pipedes[1], 2, 1) )
    return 0;
  if ( fcntl(pipedes[0], 4, 2048) )
    return 0;
  *((_DWORD *)a1 + 18) = pipedes[0];
  *((_DWORD *)a1 + 19) = pipedes[1];
  if ( pthread_create((pthread_t *)a1 + 8, nullptr, start_routine, a1) )
    return 0;
  a1[56] = 1;
  return 1;
}
