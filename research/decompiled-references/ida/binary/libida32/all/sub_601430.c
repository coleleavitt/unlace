__int64 __fastcall sub_601430(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // r12
  const char *v9; // rsi

  v1 = *a1;
  qmutex_lock(*a1);
  if ( !*((_BYTE *)a1 + 80) )
  {
    v6 = a1[2];
    v7 = a1[1];
    *((_BYTE *)a1 + 80) = 1;
    for ( i = v7 + 24 * v6; i != v7; v7 += 24 )
    {
      v9 = haystack;
      if ( *(_QWORD *)(v7 + 8) )
        v9 = *(const char **)v7;
      sub_6012C0(a1, (int)v9, v2, v3, v4, v5);
    }
  }
  return qmutex_unlock(v1);
}

