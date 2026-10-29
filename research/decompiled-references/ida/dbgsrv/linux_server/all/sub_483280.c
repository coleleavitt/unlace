/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483280
// Address: 0x0000000000483280

//----- (0000000000483280) ----------------------------------------------------
__int64 __fastcall sub_483280(char *arg, int *a2, __pid_t a3, int a4, int a5)
{
  pthread_mutex_t *v8; // r15
  char *v9; // rdi
  int v10; // eax
  __pid_t v11; // eax
  unsigned int v12; // ebp
  char *v13; // rax
  char *v14; // rbp
  _QWORD *v15; // rax
  pthread_mutex_t *v16; // r12
  pthread_mutex_t *v17; // r12
  char v18; // al
  char v19; // r14
  char *v21; // rax
  bool v23; // [rsp+17h] [rbp-51h]
  __int64 *v24; // [rsp+18h] [rbp-50h]
  int stat_loc; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v8 = *((pthread_mutex_t **)arg + 6);
  sub_482EC0(v8);
  v9 = *(char **)arg;
  if ( arg != *(char **)arg )
  {
    while ( 1 )
    {
      if ( a3 != -1 )
      {
        while ( a3 != *((_DWORD *)v9 + 4) )
        {
          v9 = *(char **)v9;
          if ( arg == v9 )
            goto LABEL_5;
        }
      }
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 != 0xFFFF || (a4 & 8) != 0 )
        break;
      v9 = *(char **)v9;
      if ( arg == v9 )
        goto LABEL_5;
    }
    if ( arg != v9 )
    {
      if ( v9[24] )
      {
        *__errno_location() = 10;
      }
      else if ( a2 )
      {
        *a2 = v10;
      }
      v21 = *(char **)v9;
      v12 = *((_DWORD *)v9 + 4);
      **((_QWORD **)v9 + 1) = *(_QWORD *)v9;
      *((_QWORD *)v21 + 1) = *((_QWORD *)v9 + 1);
      j__free(v9);
      --*((_QWORD *)arg + 2);
      goto LABEL_35;
    }
  }
LABEL_5:
  if ( a3 == -1 )
  {
    v23 = 0;
    goto LABEL_13;
  }
  v11 = waitpid(a3, &stat_loc, a4 | 1);
  v12 = v11;
  if ( v11 > 0 )
  {
    if ( a2 )
      *a2 = stat_loc;
LABEL_35:
    sub_482F10(v8);
    return v12;
  }
  v23 = 0;
  if ( v11 == -1 )
    v23 = *__errno_location() == 10;
LABEL_13:
  v13 = (char *)sub_4814F0(48);
  *((_OWORD *)v13 + 1) = 0;
  v14 = v13;
  *((_OWORD *)v13 + 2) = 0;
  v24 = (__int64 *)(v13 + 16);
  *((_QWORD *)v13 + 4) = sub_4825A0(nullptr, 0);
  *((_WORD *)v14 + 20) = 0;
  *(_QWORD *)v14 = arg + 24;
  v15 = *((_QWORD **)arg + 4);
  *((_QWORD *)v14 + 1) = v15;
  *v15 = v14;
  *((_QWORD *)arg + 4) = v14;
  ++*((_QWORD *)arg + 5);
  *((_DWORD *)v14 + 7) = a4;
  *((_DWORD *)v14 + 4) = a3;
  v14[41] = v23;
  sub_482F40(arg);
  sub_482F10(v8);
  if ( v23 )
  {
    do
    {
      v16 = *((pthread_mutex_t **)arg + 7);
      sub_482EC0(v16);
      if ( arg[200] )
        pthread_kill(*((_QWORD *)arg + 8), 12);
      sub_482F10(v16);
    }
    while ( !(unsigned __int8)sub_482A00(*((_QWORD *)v14 + 4), 100) );
    v17 = *((pthread_mutex_t **)arg + 6);
    sub_482EC0(v17);
    if ( v14[40] )
    {
      if ( !v14[24] )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v14 + 5);
        v12 = *((_DWORD *)v14 + 4);
        goto LABEL_26;
      }
LABEL_45:
      v12 = -1;
      *__errno_location() = 10;
      goto LABEL_26;
    }
    if ( v14[41] )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(1355);
      BUG();
    }
    sub_482F10(v17);
  }
  v18 = sub_482A00(*((_QWORD *)v14 + 4), a5);
  v17 = *((pthread_mutex_t **)arg + 6);
  v19 = v18;
  sub_482EC0(v17);
  if ( v19 || (unsigned __int8)sub_482A00(*((_QWORD *)v14 + 4), 0) )
  {
    if ( !v14[24] )
    {
      if ( a2 )
        *a2 = *((_DWORD *)v14 + 5);
      v12 = *((_DWORD *)v14 + 4);
      goto LABEL_26;
    }
    goto LABEL_45;
  }
  v12 = 0;
LABEL_26:
  sub_482B40((__int64)arg, v24);
  sub_482F10(v17);
  return v12;
}
// 4C94E1: using guessed type char byte_4C94E1;
