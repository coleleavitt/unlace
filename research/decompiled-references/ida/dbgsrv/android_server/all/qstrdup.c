/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x00000000000BE360

//----- (00000000000BE360) ----------------------------------------------------
pthread_mutex_t *__fastcall qstrdup(char *a1)
{
  size_t v2; // x21
  pthread_mutex_t *v3; // x0
  pthread_mutex_t *v4; // x20
  __int64 v5; // x0

  if ( !a1 )
    return nullptr;
  v2 = strlen(a1) + 1;
  v3 = (pthread_mutex_t *)malloc(v2);
  v4 = v3;
  if ( v3 )
  {
    qstrncpy(v3, a1, v2);
  }
  else
  {
    v5 = set_qerrno(1u);
    *(_DWORD *)__errno(v5) = 12;
    set_qerrno(1u);
  }
  return v4;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
