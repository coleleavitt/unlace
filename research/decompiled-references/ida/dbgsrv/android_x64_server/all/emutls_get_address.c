/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_get_address
// Address: 0x00000000000EAA57

//----- (00000000000EAA57) ----------------------------------------------------
_QWORD *__fastcall _emutls_get_address(unsigned __int64 *a1)
{
  _QWORD *result; // rax
  unsigned __int64 v2; // rbx
  char *v3; // rax
  char *v4; // rbp
  char *v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  char *v8; // rax
  char *v9; // rbx

  if ( !&pthread_create )
  {
    if ( !a1[2] )
      a1[2] = (unsigned __int64)sub_EA9C9(a1);
    return (_QWORD *)a1[2];
  }
  v2 = a1[2];
  if ( !v2 )
  {
    pthread_once(&dword_159300, sub_EA94E);
    pthread_mutex_lock(&stru_159320);
    v2 = a1[2];
    if ( !v2 )
    {
      v2 = qword_159308 + 1;
      qword_159308 = v2;
      a1[2] = v2;
    }
    pthread_mutex_unlock(&stru_159320);
  }
  v3 = (char *)pthread_getspecific(dword_159314);
  v4 = v3;
  if ( v3 )
  {
    v6 = *((_QWORD *)v3 + 1);
    if ( v2 <= v6 )
      goto LABEL_19;
    v7 = 2 * v6;
    if ( v2 > 2 * v6 )
      v7 = v2 + 32;
    v8 = (char *)realloc(v3, 8 * v7 + 16);
    v4 = v8;
    if ( !v8 )
LABEL_11:
      abort();
    *((_QWORD *)v8 + 1) = v7;
    memset(&v8[8 * v6 + 16], 0, 8 * (v7 - v6));
  }
  else
  {
    v5 = (char *)calloc(v2 + 34, 8u);
    v4 = v5;
    if ( !v5 )
      goto LABEL_11;
    *(_QWORD *)v5 = 1;
    *((_QWORD *)v5 + 1) = v2 + 32;
  }
  pthread_setspecific(dword_159314, v4);
LABEL_19:
  v9 = &v4[8 * v2];
  result = *((_QWORD **)v9 + 1);
  if ( !result )
  {
    result = sub_EA9C9(a1);
    *((_QWORD *)v9 + 1) = result;
  }
  return result;
}
// 159308: using guessed type __int64 qword_159308;
