/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A33C
// Address: 0x000000000008A33C

//----- (000000000008A33C) ----------------------------------------------------
void __fastcall sub_8A33C(__int128 *a1, _QWORD *a2, _QWORD *a3)
{
  char *align; // x9
  __int64 v7; // x21
  int v8; // w0
  __int64 v9; // x9
  unsigned __int64 v10; // x9
  const void *v11; // x20
  size_t v12; // x0
  void *v13; // x1
  unsigned __int64 v14; // x22
  size_t v15; // x21
  __int128 v16; // q0
  __int64 v17; // x9
  pthread_mutex_t dest; // [xsp+0h] [xbp-50h] BYREF

  dest.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&dest, 0, 24);
  dest.__align = (__int64)qvector_reserve(&dest, nullptr, 9u, 1u);
  *(&dest.__align + 1) = 9;
  align = &byte_166A39;
  *(_QWORD *)dest.__align = *a2;
  *(_BYTE *)(dest.__align + 8) = 0;
  v7 = *(&dest.__align + 1);
  if ( *(&dest.__align + 1) )
    align = (char *)dest.__align;
  if ( *align == 47 )
  {
    v8 = atoi((const char *)(dest.__align + 1));
    if ( v8 >= 1 )
    {
      v9 = a3[1];
      v10 = v9 ? v9 - 1 : 0LL;
      if ( v10 > v8 )
      {
        v11 = (const void *)(*a3 + v8);
        if ( v11 && (v12 = strlen((const char *)v11)) != 0 )
        {
          v13 = (void *)dest.__align;
          v14 = v12 + 1;
          v15 = v12;
          if ( *(&dest.__align + 2) < v12 + 1 )
          {
            v13 = qvector_reserve(&dest, (void *)dest.__align, v14, 1u);
            dest.__align = (__int64)v13;
          }
          *(&dest.__align + 1) = v14;
          memmove(v13, v11, v15);
          *(_BYTE *)(dest.__align + v15) = 0;
          v7 = *(&dest.__align + 1);
        }
        else
        {
          v7 = 0;
          *(&dest.__align + 1) = 0;
        }
      }
    }
  }
  v16 = *a1;
  v17 = *((_QWORD *)a1 + 2);
  *(_QWORD *)a1 = dest.__align;
  *((_QWORD *)a1 + 1) = v7;
  *((_QWORD *)a1 + 2) = *(&dest.__align + 2);
  *(_OWORD *)&dest.__lock = v16;
  *(&dest.__align + 2) = v17;
  if ( (_QWORD)v16 )
  {
    *(&dest.__align + 1) = 0;
    qfree((void *)v16);
  }
}
// 166A39: using guessed type char byte_166A39;
