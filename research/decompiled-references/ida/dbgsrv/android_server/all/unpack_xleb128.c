/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x00000000000BB9F4

//----- (00000000000BB9F4) ----------------------------------------------------
__int64 __fastcall unpack_xleb128(pthread_mutex_t *a1, __int64 a2, int a3, _BYTE **a4, unsigned __int64 a5)
{
  _BYTE *v5; // x8
  __int64 v6; // x9
  int v7; // w10
  int v8; // w16
  int v9; // w14
  __int64 v10; // x15
  int v11; // w16
  bool v12; // cc
  __int64 result; // x0
  __int64 v14; // x10
  __int64 v15; // x9
  unsigned __int64 v16; // x22
  int v17; // w19
  pthread_mutex_t *v18; // x20
  __int64 v19; // x21
  _BYTE *v20; // x0
  _BYTE *v21; // x0
  __int64 v22; // x1

  v5 = *a4;
  v6 = 0;
  v7 = 7;
  v8 = a2;
  while ( 1 )
  {
    if ( (unsigned __int64)v5 >= a5 )
      return 0;
    v9 = v8 - 7;
    v10 = *v5 & 0x7F;
    if ( v8 < 7 )
    {
      v11 = 255 << v8;
      if ( (((*v5 & 0x80) == 0) & (unsigned __int8)a3) != 0 )
        v11 &= 0x3Fu;
      if ( (v11 & (unsigned int)v10) != 0 )
        return 0;
    }
    v6 |= v10 << ((unsigned __int8)v7 - 7);
    if ( (*v5 & 0x80) == 0 )
      break;
    v12 = v7 < (int)a2;
    v7 += 7;
    v8 = v9;
    ++v5;
    if ( !v12 )
      return 0;
  }
  if ( !a1 )
    goto LABEL_21;
  v14 = -1LL << v7;
  if ( (*v5 & 0x40) == 0 || (a3 & 1) == 0 )
    v14 = 0;
  v15 = v14 | v6;
  switch ( (_DWORD)a2 )
  {
    case 0x40:
      a1->__align = v15;
      goto LABEL_21;
    case 0x20:
      a1->__lock = v15;
      goto LABEL_21;
    case 0x10:
      LOWORD(a1->__lock) = v15;
LABEL_21:
      *a4 = v5 + 1;
      return 1;
  }
  if ( !under_debugger )
    a1 = interr(1187);
  __break(1u);
  v16 = (unsigned __int64)(&a1[103].__align + 1);
  v17 = a3;
  v18 = a1;
  v19 = a2;
  qustrncpy((unsigned __int64)(&a1[103].__align + 1), a2, 4096);
  v20 = (_BYTE *)__strrchr_chk(v16, 47, 4096);
  if ( v20 )
  {
    *v20 = 0;
    v21 = v20 + 1;
  }
  else
  {
    qustrncpy(v16, (__int64)".", 4096);
    v21 = nullptr;
  }
  if ( v21 )
    v22 = (__int64)v21;
  else
    v22 = v19;
  v18[102].__list.__next = nullptr;
  v18[103].__lock = 0;
  result = qustrncpy((unsigned __int64)&v18[205].__list, v22, 4096);
  v18[308].__lock = v17;
  return result;
}
// BBB20: variable 'a3' is possibly undefined
// BBB30: variable 'a2' is possibly undefined
// 36DF0: using guessed type __int64 __fastcall __strrchr_chk(_QWORD, _QWORD, _QWORD);
// 168DF0: using guessed type char under_debugger;
