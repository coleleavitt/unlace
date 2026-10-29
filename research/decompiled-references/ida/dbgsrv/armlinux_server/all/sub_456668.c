/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456668
// Address: 0x0000000000456668

//----- (0000000000456668) ----------------------------------------------------
__int64 __fastcall sub_456668(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // x0
  char *v6; // x1
  unsigned __int64 v7; // x0
  __int64 *v8; // x0
  __int64 v9; // x21
  __int64 *v10; // x1
  __int64 *v11; // x0
  unsigned int *v12; // x1
  int v13; // w2
  __int64 *v14; // [xsp+40h] [xbp-10h] BYREF

  result = sub_4565D0(a1, a2, a3);
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result == 2 )
      return 0;
    if ( (_DWORD)result != -1 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        v6 = *(char **)a3;
      else
        v6 = (char *)&qword_4B2D48;
      sub_452A08(&v14, v6);
      v7 = sub_49E0C0(v14, *(v14 - 3), 3339675911LL);
      v8 = sub_453430((_QWORD *)(a1 + 88), v7 % *(_QWORD *)(a1 + 96), (const void **)&v14, v7);
      if ( v8 )
      {
        v9 = *v8;
        v10 = v14;
        v11 = v14 - 3;
        if ( v9 )
        {
          if ( v11 == std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_9:
            result = 0;
            *(_WORD *)(a3 + 24) = *(_WORD *)(v9 + 16);
            return result;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v10 = v14;
        v11 = v14 - 3;
      }
      if ( v11 == std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_15;
      v9 = 0;
LABEL_17:
      if ( &_pthread_key_create )
      {
        v12 = (unsigned int *)(v10 - 1);
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = *((_DWORD *)v10 - 2);
        *((_DWORD *)v10 - 2) = v13 - 1;
      }
      if ( v13 <= 0 )
      {
        j__free_0(v11);
        if ( v9 )
          goto LABEL_9;
      }
      else if ( v9 )
      {
        goto LABEL_9;
      }
LABEL_15:
      *(_WORD *)(a3 + 24) = 2;
      return 0;
    }
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
