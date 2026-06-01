__int64 __fastcall set_registry_name(char *s2)
{
  unsigned int v1; // ebp
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r13
  char *v6; // r12

  if ( !s2 || !*s2 )
    return 0;
  v1 = 0;
  if ( !strchr(s2, 47) && !strchr(s2, 92) )
  {
    v3 = qword_2CAD040;
    qmutex_lock(qword_2CAD040);
    v4 = qword_2CAD020;
    v5 = qword_2CAD020 + 8 * xmmword_2CAD028;
    if ( v5 == qword_2CAD020 )
    {
LABEL_12:
      v6 = (char *)operator new(0x1668u);
      sub_82D470(v6, s2, 0);
    }
    else
    {
      while ( 1 )
      {
        v6 = *(char **)v4;
        if ( !strcmp((const char *)(*(_QWORD *)v4 + 8LL), s2) )
          break;
        v4 += 8;
        if ( v5 == v4 )
          goto LABEL_12;
      }
    }
    qword_2CAD038 = (__int64)v6;
    v1 = 1;
    qmutex_unlock(v3);
  }
  return v1;
}

