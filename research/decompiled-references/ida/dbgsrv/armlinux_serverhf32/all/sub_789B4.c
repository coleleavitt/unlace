/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_789B4
// Address: 0x000789B4

//----- (000789B4) --------------------------------------------------------
int __fastcall sub_789B4(int a1)
{
  __int64 v2; // kr00_8
  void (__fastcall *v3)(pthread_mutex_t *); // r4
  pthread_mutex_t *v4; // r0
  void *v5; // r4
  int result; // r0

  while ( 1 )
  {
    v5 = (void *)dword_D5BEC;
    if ( !dword_D5BEC )
      break;
    v2 = *(_QWORD *)dword_D5BEC;
    if ( !*(_DWORD *)(dword_D5BEC + 4) )
    {
      if ( (_DWORD)v2 )
        sub_77E08((void *)v2);
      sub_77E08(v5);
      break;
    }
    v3 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4 * (HIDWORD(v2) + 0x3FFFFFFF));
    v4 = sub_78948((int)v3);
    v3(v4);
  }
  result = *(unsigned __int8 *)(a1 + 16);
  dword_D5BEC = 0;
  if ( result )
    exit(*(_DWORD *)(a1 + 12));
  return result;
}
// D5BEC: using guessed type int dword_D5BEC;
