/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_info_bases
// Address: 0x00000000000EA5A2

//----- (00000000000EA5A2) ----------------------------------------------------
int __fastcall _register_frame_info_bases(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  int result; // eax

  if ( a1 && *a1 )
  {
    a2[4] = 0;
    *a2 = -1;
    a2[1] = a3;
    a2[2] = a4;
    a2[3] = a1;
    *((_WORD *)a2 + 16) = 2040;
    if ( &pthread_create )
      pthread_mutex_lock(&stru_1592C0);
    v5 = qword_1592F0;
    qword_1592F0 = (__int64)a2;
    a2[5] = v5;
    if ( &pthread_create )
      return pthread_mutex_unlock(&stru_1592C0);
    else
      return a5;
  }
  return result;
}
// 1592F0: using guessed type __int64 qword_1592F0;
