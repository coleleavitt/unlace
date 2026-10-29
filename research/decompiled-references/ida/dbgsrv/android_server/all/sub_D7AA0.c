/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7AA0
// Address: 0x00000000000D7AA0

//----- (00000000000D7AA0) ----------------------------------------------------
unsigned __int16 *__fastcall sub_D7AA0(__int64 a1)
{
  int *v2; // x10
  unsigned __int16 *v3; // x19
  int *v4; // x12
  unsigned __int64 v5; // x9
  int *v6; // x19
  unsigned __int64 v7; // x10
  __int64 v8; // x10
  bool v9; // zf
  unsigned __int16 *v10; // x8
  __int64 v11; // x9

  pthread_mutex_lock((pthread_mutex_t *)qword_169110);
  v2 = (int *)qword_169138;
  if ( !qword_169138 )
  {
    v2 = dword_169140;
    qword_169138 = (__int64)dword_169140;
    dword_169140[0] = 8388736;
  }
  v3 = nullptr;
  if ( v2 && v2 != (int *)byte_169340 )
  {
    v4 = nullptr;
    v5 = ((unsigned __int64)(a1 + 3) >> 2) + 1;
    while ( 1 )
    {
      v6 = v2;
      v7 = *((unsigned __int16 *)v2 + 1);
      if ( v5 < v7 )
      {
        *((_WORD *)v6 + 1) = v7 - v5;
        v10 = (unsigned __int16 *)&v6[(unsigned __int16)(v7 - v5)];
        *v10 = 0;
        v10[1] = v5;
        v3 = v10 + 2;
        goto LABEL_16;
      }
      if ( v5 == v7 )
        break;
      v4 = v6;
      v8 = *(unsigned __int16 *)v6;
      v9 = v8 == 128;
      v2 = &dword_169140[v8];
      if ( v9 )
      {
        v3 = nullptr;
        goto LABEL_16;
      }
    }
    v11 = *(unsigned __int16 *)v6;
    if ( v4 )
      *(_WORD *)v4 = v11;
    else
      qword_169138 = (__int64)&dword_169140[v11];
    *(_WORD *)v6 = 0;
    v3 = (unsigned __int16 *)(v6 + 1);
  }
LABEL_16:
  pthread_mutex_unlock((pthread_mutex_t *)qword_169110);
  return v3;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 169110: using guessed type __int64 qword_169110[5];
// 169138: using guessed type __int64 qword_169138;
// 169140: using guessed type int dword_169140[];
