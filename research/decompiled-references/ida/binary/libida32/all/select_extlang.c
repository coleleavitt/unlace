__int64 __fastcall select_extlang(void *a1)
{
  void *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdx
  unsigned int v4; // ebx

  v1 = a1;
  v2 = qword_2CAA640;
  qmutex_lock(qword_2CAA640);
  if ( !a1 )
    v1 = &unk_2C57D20;
  if ( !(_QWORD)xmmword_2CAA628 )
    goto LABEL_12;
  v3 = 0;
  while ( *(void **)(qword_2CAA620 + 8 * v3) != v1 )
  {
    if ( (_QWORD)xmmword_2CAA628 == ++v3 )
      goto LABEL_12;
  }
  if ( (_QWORD)xmmword_2CAA628 == v3 )
  {
LABEL_12:
    v4 = 0;
  }
  else
  {
    if ( qword_2CAA638 != v3 )
    {
      qword_2CAA638 = v3;
      sub_398230(2u, (__int64)v1, v3);
    }
    v4 = 1;
  }
  qmutex_unlock(v2);
  return v4;
}

