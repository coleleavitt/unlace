__int64 __fastcall sub_76BE00(__int64 a1)
{
  void *v1; // r12
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 i; // rax

  v1 = qword_2CAA770;
  v2 = 0;
  qmutex_lock(qword_2CAA770);
  v3 = *(_QWORD *)(a1 + 56);
  for ( i = 1; (i & v3) != 0; i *= 2 )
  {
    if ( ++v2 == 64 )
    {
      if ( !under_debugger )
        interr(1443);
      BUG();
    }
  }
  *(_QWORD *)(a1 + 56) = i | v3;
  qmutex_unlock(v1);
  return v2;
}

