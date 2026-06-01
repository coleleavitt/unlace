const char *__fastcall sub_20BF710(__int64 a1, __int64 a2)
{
  pthread_rwlock_t *v2; // rax
  __int64 v3; // rax

  v2 = (pthread_rwlock_t *)sub_20BFB80(a1, a2);
  v3 = sub_20BFCA0(v2);
  if ( v3 )
    return *(const char **)v3;
  else
    return "Unnamed pass: implement Pass::getPassName()";
}
