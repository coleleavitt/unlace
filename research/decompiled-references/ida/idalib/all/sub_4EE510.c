__int64 __fastcall sub_4EE510(_QWORD *a1, const char *a2, unsigned __int8 a3, char a4, __m128 a5, __m128 a6)
{
  __int64 **v7; // rbp
  __int64 **v8; // rax
  __int64 **v9; // rbx

  if ( a1 )
    return sub_4EDF80(a1, a2, a3, a4, a5, a6);
  if ( qword_2CCBF88 && (qmutex_lock(qword_2CCBF88), qword_2CCBF88) )
  {
    qmutex_lock(qword_2CCBF88);
    if ( qword_2CCBF78 )
      v7 = *(__int64 ***)qword_2CCBF78;
    else
      v7 = (__int64 **)qword_2CCBF80;
    if ( qword_2CCBF88 )
      qmutex_unlock(qword_2CCBF88);
  }
  else if ( qword_2CCBF78 )
  {
    v7 = *(__int64 ***)qword_2CCBF78;
  }
  else
  {
    v7 = (__int64 **)qword_2CCBF80;
  }
  v8 = sub_4E5510(v7, a2);
  v9 = v8;
  if ( v8 )
    v9 = (__int64 **)v8[6];
  if ( qword_2CCBF88 )
    qmutex_unlock(qword_2CCBF88);
  return (__int64)v9;
}
