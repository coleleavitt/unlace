/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8814C
// Address: 0x000000000008814C

//----- (000000000008814C) ----------------------------------------------------
__time_t __fastcall sub_8814C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  pthread_mutex_t *v6; // x20
  pthread_mutex_t *v8; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x8
  char *align; // x0
  char *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x8
  char *v15; // x0
  __time_t result; // x0

  *(_QWORD *)a1 = off_15DC08;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  *(_QWORD *)(a1 + 4152) = a1 + 4152;
  *(_QWORD *)(a1 + 4160) = a1 + 4152;
  *(_OWORD *)(a1 + 4168) = xmmword_104D70;
  v6 = (pthread_mutex_t *)(a1 + 4184);
  *(_QWORD *)(a1 + 4224) = 0;
  *(_QWORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4208) = 0;
  *(_QWORD *)(a1 + 4200) = 0;
  *(_OWORD *)(a1 + 4184) = 0u;
  v8 = (pthread_mutex_t *)(a1 + 4208);
  if ( a4[1] )
  {
    v9 = 0;
    do
    {
      if ( *(_QWORD *)(*a4 + 80 * v9 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && !*(_QWORD *)(*a4 + 80 * v9 + 32) )
        {
          v10 = *(_QWORD *)(a1 + 4192);
          if ( *(_QWORD *)(a1 + 4200) >= (unsigned __int64)(v10 + 1) )
          {
            align = (char *)v6->__align;
          }
          else
          {
            align = (char *)qvector_reserve(v6, (void *)v6->__align, v10 + 1, 4u);
            v6->__align = (__int64)align;
            v10 = *(_QWORD *)(a1 + 4192);
          }
          v12 = &align[4 * v10];
          v13 = (_QWORD *)(a1 + 4192);
        }
        else
        {
          v14 = *(_QWORD *)(a1 + 4216);
          if ( *(_QWORD *)(a1 + 4224) >= (unsigned __int64)(v14 + 1) )
          {
            v15 = (char *)v8->__align;
          }
          else
          {
            v15 = (char *)qvector_reserve(v8, (void *)v8->__align, v14 + 1, 4u);
            v8->__align = (__int64)v15;
            v14 = *(_QWORD *)(a1 + 4216);
          }
          v12 = &v15[4 * v14];
          v13 = (_QWORD *)(a1 + 4216);
        }
        *(_DWORD *)v12 = v9;
        ++*v13;
      }
      a4 = *(_QWORD **)(a1 + 24);
      v9 = (int)v9 + 1;
    }
    while ( a4[1] > v9 );
  }
  memset((void *)(a1 + 48), 0, 0x1000u);
  result = qtime64();
  *(_DWORD *)(a1 + 4232) = HIDWORD(result);
  return result;
}
// 104D70: using guessed type __int128 xmmword_104D70;
// 15DC08: using guessed type __int64 (__fastcall *off_15DC08[2])();
