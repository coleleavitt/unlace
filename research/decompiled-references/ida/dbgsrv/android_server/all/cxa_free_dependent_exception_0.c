/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_free_dependent_exception_0
// Address: 0x00000000000D7BF4

//----- (00000000000D7BF4) ----------------------------------------------------
void __fastcall _cxa_free_dependent_exception_0(int *a1)
{
  int *v2; // x20
  __int64 v3; // x12
  int *v4; // x10
  int *v5; // x11
  int *v6; // x14
  __int64 v7; // x15
  __int64 v8; // x10
  int *v9; // x15
  bool v10; // zf

  if ( a1 >= (int *)byte_169340 || a1 < dword_169140 )
  {
    free(a1);
  }
  else
  {
    v2 = a1 - 1;
    pthread_mutex_lock((pthread_mutex_t *)qword_169110);
    if ( !qword_169138 || (char *)qword_169138 == byte_169340 )
    {
LABEL_12:
      *(_WORD *)v2 = ((unsigned int)qword_169138 - (unsigned int)dword_169140) >> 2;
      qword_169138 = (__int64)v2;
    }
    else
    {
      v3 = *((unsigned __int16 *)a1 - 1);
      v4 = nullptr;
      v5 = &v2[v3];
      v6 = (int *)qword_169138;
      while ( 1 )
      {
        v7 = *((unsigned __int16 *)v6 + 1);
        if ( &v6[v7] == v2 )
        {
          *((_WORD *)v6 + 1) = v3 + v7;
          goto LABEL_17;
        }
        if ( v5 == v6 )
          break;
        v8 = *(unsigned __int16 *)v6;
        v9 = &dword_169140[v8];
        v10 = v8 == 128;
        v4 = v6;
        v6 = v9;
        if ( v10 )
          goto LABEL_12;
      }
      *((_WORD *)a1 - 1) = v3 + v7;
      if ( v4 )
      {
        *(_WORD *)v4 = ((unsigned int)v2 - (unsigned int)dword_169140) >> 2;
      }
      else
      {
        qword_169138 = (__int64)v2;
        *(_WORD *)v2 = *(_WORD *)v5;
      }
    }
LABEL_17:
    pthread_mutex_unlock((pthread_mutex_t *)qword_169110);
  }
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 169110: using guessed type __int64 qword_169110[5];
// 169138: using guessed type __int64 qword_169138;
// 169140: using guessed type int dword_169140[];
