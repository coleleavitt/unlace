/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140090A80
// Address: 0x0000000140090A80

//----- (0000000140090A80) ----------------------------------------------------
void sub_140090A80()
{
  __int64 (**v0)(void); // rdi
  int v1; // ebx

  v0 = (__int64 (**)(void))qword_1400C9FD8;
  if ( qword_1400C9FD8 != (void *)-1LL )
  {
    (*((void (__fastcall **)(_QWORD))qword_1400C9FD8 + 1))(*(_QWORD *)qword_1400C9FD8);
    v1 = *(_DWORD *)v0[3]();
    free(v0);
    *errno() = v1;
    qword_1400C9FD8 = (void *)-1LL;
  }
  if ( qword_1400C9FC0 )
  {
    qword_1400C9FC8 = 0;
    j_free(qword_1400C9FC0);
    qword_1400C9FC0 = nullptr;
    qword_1400C9FD0 = 0;
  }
  if ( qword_1400C9FA8 )
  {
    qword_1400C9FB0 = 0;
    j_free(qword_1400C9FA8);
    qword_1400C9FA8 = nullptr;
    qword_1400C9FB8 = 0;
  }
}
// 1400C9FB0: using guessed type __int64 qword_1400C9FB0;
// 1400C9FB8: using guessed type __int64 qword_1400C9FB8;
// 1400C9FC8: using guessed type __int64 qword_1400C9FC8;
// 1400C9FD0: using guessed type __int64 qword_1400C9FD0;

// nfuncs=2683 queued=1946 decompiled=1946 lumina nreq=0 worse=0 better=0
// ALL OK, 1946 function(s) have been successfully decompiled
