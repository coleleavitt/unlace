__int64 __fastcall remove_extlang(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbx

  v1 = qword_2CD4560;
  qmutex_lock(qword_2CD4560);
  if ( !(_QWORD)xmmword_2CD4548 )
    goto LABEL_11;
  v2 = 0;
  while ( *(_QWORD *)(qword_2CD4540 + 8 * v2) != a1 )
  {
    if ( ++v2 == (_QWORD)xmmword_2CD4548 )
      goto LABEL_11;
  }
  if ( v2 < (unsigned __int64)xmmword_2CD4548 )
  {
    if ( qword_2CD4558 == v2 )
      select_extlang(nullptr);
    if ( *(_DWORD *)(a1 + 12) && !byte_2CD6F0C )
    {
      if ( !under_debugger )
        interr(1442);
      BUG();
    }
    *(_QWORD *)(qword_2CD4540 + 8 * v2) = 0;
    sub_39CF70(1u, a1, v2);
    qmutex_unlock(v1);
    return 1;
  }
  else
  {
LABEL_11:
    qmutex_unlock(v1);
    return 0;
  }
}
