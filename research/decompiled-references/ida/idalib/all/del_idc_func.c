__int64 __fastcall del_idc_func(char *s2)
{
  void *v1; // r14
  __int64 v2; // r12
  char *v3; // r15
  __int64 v4; // r13
  char *v5; // rbx
  unsigned int v6; // ebp
  __int64 v8; // [rsp+8h] [rbp-40h]

  if ( s2 )
  {
    v1 = qword_2CD4690;
    qmutex_lock(qword_2CD4690);
    v8 = sub_78C130();
    v2 = unk_2C7C620;
    if ( !unk_2C7C620 )
      goto LABEL_11;
    v3 = off_2C7C628;
    v4 = 0;
    v5 = off_2C7C628;
    while ( strcmp(*(const char **)v5, s2) )
    {
      ++v4;
      v5 += 40;
      if ( v2 == v4 )
        goto LABEL_11;
    }
    if ( v5 )
    {
      v6 = 0;
      if ( 0xCCCCCCCCCCCCCCCDLL * ((v5 - v3) >> 3) >= *(_QWORD *)(v8 + 48) )
      {
        *((_QWORD *)v5 + 1) = 0;
        v6 = 1;
      }
    }
    else
    {
LABEL_11:
      v6 = 0;
    }
    qmutex_unlock(v1);
  }
  else
  {
    return 0;
  }
  return v6;
}
