/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x00000000000ABA30

//----- (00000000000ABA30) ----------------------------------------------------
pthread_mutex_t *__fastcall str2user(pthread_mutex_t *a1, char *a2, __int64 a3)
{
  pthread_mutex_t *v4; // x19
  char *v5; // x1
  void *ptr; // [xsp+0h] [xbp-40h] BYREF
  __int64 v8; // [xsp+8h] [xbp-38h]
  __int64 v9; // [xsp+10h] [xbp-30h]
  __int64 v10; // [xsp+18h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __break(1u);
    sub_39134(a1);
  }
  v4 = a1;
  if ( a3 )
  {
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    sub_AB7E0((__int64)&ptr, a2, -1, a3);
    if ( v8 )
      v5 = (char *)ptr;
    else
      v5 = &byte_F154B;
    v4 = qstrncpy(v4, v5, a3);
    if ( ptr )
    {
      v8 = 0;
      qfree(ptr);
      ptr = nullptr;
      v9 = 0;
    }
  }
  return v4;
}
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
