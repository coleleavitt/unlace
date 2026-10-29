/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idc_method
// Address: 0x000000000006DE60

//----- (000000000006DE60) ----------------------------------------------------
__int64 __fastcall set_idc_method(__int64 **a1, const char *a2)
{
  char *v2; // rax
  char *v3; // r12
  pthread_mutex_t *v4; // r15
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // rdi
  int v10; // eax
  int *v11; // r14
  char **v12; // rbp
  unsigned __int64 v13; // r15
  _OWORD *v15; // rax
  pthread_mutex_t *v16; // [rsp+8h] [rbp-70h]
  void *ptr[3]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v19[8]; // [rsp+38h] [rbp-40h] BYREF

  v19[1] = (_QWORD *)__readfsqword(0x28u);
  v2 = strchr(a2, 46);
  if ( !v2 )
  {
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  v3 = v2;
  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( (_BYTE)byte_155828 || !_cxa_guard_acquire(&byte_155828) )
  {
    if ( !a2 )
      goto LABEL_23;
  }
  else
  {
    v15 = operator new(0x80u);
    *(_OWORD *)((char *)v15 + 109) = 0;
    v15[6] = 0;
    v15[5] = 0;
    v15[4] = 0;
    v15[3] = 0;
    v15[2] = 0;
    v15[1] = 0;
    *v15 = 0;
    qword_155820 = (__int64)v15;
    _cxa_guard_release(&byte_155828);
    if ( !a2 )
      goto LABEL_23;
  }
  v5 = (_QWORD *)qword_155820;
  v6 = *(_QWORD *)(qword_155820 + 8);
  v7 = v6;
  do
  {
    if ( --v7 < 0 )
      goto LABEL_15;
    v8 = *(_QWORD *)(*v5 + 8 * v6 - 8);
    v9 = s1;
    if ( *(_QWORD *)(v8 + 8) )
      v9 = *(const char **)v8;
    v10 = strcmp(v9, a2);
    v6 = v7;
  }
  while ( v10 );
  if ( (_DWORD)v7 != -1 )
  {
    if ( (_DWORD)v7 == 0x7FFFFFFF )
      goto LABEL_23;
    goto LABEL_11;
  }
LABEL_15:
  v11 = off_154A20;
  if ( off_154A20 )
  {
    v16 = v4;
    v12 = off_154A28;
    v7 = 0;
    v13 = 0;
    while ( strcmp(*(char **)((char *)v12 + v7), a2) )
    {
      ++v13;
      v7 += 40;
      if ( v13 >= (unsigned __int64)v11 )
        goto LABEL_24;
    }
    if ( !(char **)((char *)v12 + v7) )
    {
LABEL_24:
      LODWORD(v7) = 0;
      v4 = v16;
      goto LABEL_25;
    }
    v4 = v16;
    if ( *(char **)((char *)v12 + v7 + 8) )
    {
      LODWORD(v7) = (int)v7 / -40;
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
LABEL_11:
        sub_37F60((__int64)ptr, v3 + 1);
        v19[0] = ptr;
        *((_DWORD *)sub_70430(a1, (__int64)ptr, (__int64)&byte_102CB3, v19) + 14) = v7;
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          ptr[2] = nullptr;
        }
        LOBYTE(v7) = 1;
        goto LABEL_25;
      }
    }
  }
LABEL_23:
  LODWORD(v7) = 0;
LABEL_25:
  qmutex_unlock(v4);
  return (unsigned int)v7;
}
// 102CB3: using guessed type char byte_102CB3;
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 155820: using guessed type __int64 qword_155820;
