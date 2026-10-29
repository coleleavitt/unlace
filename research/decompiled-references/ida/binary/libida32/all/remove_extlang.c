__int64 __fastcall remove_extlang(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbx

  v1 = qword_2CAA640;
  qmutex_lock(qword_2CAA640);
  if ( !(_QWORD)xmmword_2CAA628 )
    goto LABEL_11;
  v2 = 0;
  while ( *(_QWORD *)(qword_2CAA620 + 8 * v2) != a1 )
  {
    if ( ++v2 == (_QWORD)xmmword_2CAA628 )
      goto LABEL_11;
  }
  if ( v2 < (unsigned __int64)xmmword_2CAA628 )
  {
    if ( qword_2CAA638 == v2 )
      select_extlang(0);
    if ( *(_DWORD *)(a1 + 12) && !byte_2CACFEC )
    {
      if ( !under_debugger )
        interr(1442);
      BUG();
    }
    *(_QWORD *)(qword_2CAA620 + 8 * v2) = 0;
    sub_398230(1u, a1, v2);
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

