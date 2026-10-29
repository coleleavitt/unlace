/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E130
// Address: 0x000000000006E130

//----- (000000000006E130) ----------------------------------------------------
const char *__fastcall sub_6E130(char *s2, int *a2)
{
  int *v2; // r15
  pthread_mutex_t *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // rdi
  int v10; // eax
  int *v11; // r15
  char **v12; // r14
  unsigned __int64 v13; // rbp
  const char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _OWORD *v19; // rax
  pthread_mutex_t *v20; // [rsp+8h] [rbp-40h]

  v2 = a2;
  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v19 = operator new(0x80u);
    *(_OWORD *)((char *)v19 + 109) = 0;
    v19[6] = 0;
    v19[5] = 0;
    v19[4] = 0;
    v19[3] = 0;
    v19[2] = 0;
    v19[1] = 0;
    *v19 = 0;
    qword_155820 = (__int64)v19;
    _cxa_guard_release(&byte_155828);
  }
  v5 = (_QWORD *)qword_155820;
  if ( s2 )
  {
    v6 = *(_QWORD *)(qword_155820 + 8);
    v7 = v6;
    do
    {
      if ( --v7 < 0 )
        goto LABEL_11;
      v8 = *(_QWORD *)(*v5 + 8 * v6 - 8);
      v9 = s1;
      if ( *(_QWORD *)(v8 + 8) )
        v9 = *(const char **)v8;
      v10 = strcmp(v9, s2);
      v6 = v7;
    }
    while ( v10 );
    if ( (_DWORD)v7 != -1 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
        goto LABEL_17;
      goto LABEL_28;
    }
LABEL_11:
    v11 = off_154A20;
    if ( !off_154A20 )
    {
LABEL_28:
      v14 = nullptr;
      goto LABEL_31;
    }
    v20 = v4;
    v12 = off_154A28;
    v7 = 0;
    v13 = 0;
    while ( strcmp(*(char **)((char *)v12 + v7), s2) )
    {
      ++v13;
      v7 += 40;
      if ( v13 >= (unsigned __int64)v11 )
      {
        v4 = v20;
        v14 = nullptr;
        goto LABEL_31;
      }
    }
    if ( (char **)((char *)v12 + v7) && *(char **)((char *)v12 + v7 + 8) )
    {
      LODWORD(v7) = (int)v7 / -40;
      v4 = v20;
      v2 = a2;
      if ( (_DWORD)v7 != 0x7FFFFFFF )
        goto LABEL_17;
      goto LABEL_28;
    }
    v14 = nullptr;
    v4 = v20;
  }
  else
  {
    LODWORD(v7) = -1;
LABEL_17:
    v15 = *v2;
    *v2 = v7;
    if ( v15 < 0 )
    {
      v14 = &byte_EB522;
      if ( (_DWORD)v15 != -1 )
      {
        v17 = -(int)v15;
        if ( (unsigned __int64)off_154A20 > v17 )
          v14 = off_154A28[5 * v17];
      }
    }
    else if ( v5[1] <= (unsigned __int64)v15 )
    {
      v14 = &byte_EB522;
    }
    else
    {
      v16 = *(_QWORD *)(*v5 + 8 * v15);
      if ( *(_QWORD *)(v16 + 8) )
        v14 = *(const char **)v16;
      else
        v14 = s1;
    }
  }
LABEL_31:
  qmutex_unlock(v4);
  return v14;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 155820: using guessed type __int64 qword_155820;
