/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idc_func
// Address: 0x000000000006E890

//----- (000000000006E890) ----------------------------------------------------
__int64 __fastcall del_idc_func(char *s2)
{
  pthread_mutex_t *v1; // r14
  int *v2; // rbp
  char **v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  _OWORD *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h]

  if ( s2 )
  {
    v1 = (pthread_mutex_t *)qword_1557E8;
    qmutex_lock((pthread_mutex_t *)qword_1557E8);
    if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
    {
      v7 = operator new(0x80u);
      *(_OWORD *)((char *)v7 + 109) = 0;
      v7[6] = 0;
      v7[5] = 0;
      v7[4] = 0;
      v7[3] = 0;
      v7[2] = 0;
      v7[1] = 0;
      *v7 = 0;
      qword_155820 = (__int64)v7;
      _cxa_guard_release(&byte_155828);
    }
    v2 = off_154A20;
    if ( !off_154A20 )
      goto LABEL_11;
    v8 = qword_155820;
    v3 = off_154A28;
    v4 = 0;
    v5 = 0;
    while ( strcmp(*(char **)((char *)v3 + v4), s2) )
    {
      ++v5;
      v4 += 40;
      if ( v5 >= (unsigned __int64)v2 )
        goto LABEL_11;
    }
    if ( (char **)((char *)v3 + v4) && 0xCCCCCCCCCCCCCCCDLL * (v4 >> 3) >= *(_QWORD *)(v8 + 48) )
    {
      *(char **)((char *)v3 + v4 + 8) = nullptr;
      LOBYTE(v4) = 1;
    }
    else
    {
LABEL_11:
      LODWORD(v4) = 0;
    }
    qmutex_unlock(v1);
  }
  else
  {
    LODWORD(v4) = 0;
  }
  return (unsigned int)v4;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 155820: using guessed type __int64 qword_155820;
