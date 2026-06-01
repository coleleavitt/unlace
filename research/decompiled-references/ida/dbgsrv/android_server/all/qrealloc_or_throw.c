/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc_or_throw
// Address: 0x00000000000BE428

//----- (00000000000BE428) ----------------------------------------------------
void *__fastcall qrealloc_or_throw(void *a1, size_t a2)
{
  void *result; // x0
  pthread_mutex_t *v3; // x0
  void *v4; // x1
  unsigned __int64 v5; // x2
  unsigned __int64 v6; // x3

  if ( a2 >= 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( a2 == 3735928559 )
  {
    *(_DWORD *)__errno(a1) = 12;
LABEL_7:
    set_qerrno(1u);
LABEL_8:
    a1 = sub_BE418();
    goto LABEL_9;
  }
  if ( !a2 )
  {
LABEL_9:
    free(a1);
    v3 = (pthread_mutex_t *)sub_BE418();
    return qvector_reserve(v3, v4, v5, v6);
  }
  result = realloc(a1, a2);
  if ( !result )
    goto LABEL_7;
  return result;
}
// BE479: variable 'v4' is possibly undefined
// BE479: variable 'v5' is possibly undefined
// BE479: variable 'v6' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
