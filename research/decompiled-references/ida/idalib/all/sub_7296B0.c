__int64 __fastcall sub_7296B0(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  char *v3; // r12
  char *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  char *s2; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v1 = a1[1];
  v10 = __readfsqword(0x28u);
  qmutex_lock(v1);
  if ( a1[4] )
  {
    s2 = nullptr;
    v9 = 0;
    sub_7290E0((__int64)a1, (__int64 *)&s2);
    v2 = a1[4];
    v3 = s2;
    if ( v2 )
    {
      v4 = (char *)haystack;
      v5 = a1[3];
      if ( (_QWORD)v9 )
        v4 = s2;
      v6 = 0;
      while ( strcmp(*(const char **)(*(_QWORD *)(v5 + 8 * v6) + 16LL), v4) )
      {
        if ( ++v6 == v2 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v6 = 0;
    }
    if ( v3 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v3);
    }
  }
  else
  {
    v6 = -1;
  }
  qmutex_unlock(v1);
  return v6;
}
