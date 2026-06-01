/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78B1C
// Address: 0x00078B1C

//----- (00078B1C) --------------------------------------------------------
int __fastcall sub_78B1C(int a1)
{
  __int64 v2; // kr00_8
  void (__fastcall *v3)(pthread_mutex_t *); // r4
  pthread_mutex_t *v4; // r0
  void *v5; // r4
  int result; // r0

  while ( 1 )
  {
    v5 = (void *)dword_D6C0C;
    if ( !dword_D6C0C )
      break;
    v2 = *(_QWORD *)dword_D6C0C;
    if ( !*(_DWORD *)(dword_D6C0C + 4) )
    {
      if ( (_DWORD)v2 )
        sub_77F70((void *)v2);
      sub_77F70(v5);
      break;
    }
    v3 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4 * (HIDWORD(v2) + 0x3FFFFFFF));
    v4 = sub_78AB0((int)v3);
    v3(v4);
  }
  result = *(unsigned __int8 *)(a1 + 16);
  dword_D6C0C = 0;
  if ( result )
    exit(*(_DWORD *)(a1 + 12));
  return result;
}
// D6C0C: using guessed type int dword_D6C0C;
