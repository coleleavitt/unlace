/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1A00
// Address: 0x080D1A00

//----- (080D1A00) --------------------------------------------------------
int __cdecl sub_80D1A00(char *arg, int *a2, __pid_t pid, int a4, int a5)
{
  char *v5; // edx
  int v6; // eax
  __pid_t v7; // eax
  int v8; // edi
  char *v9; // edx
  _DWORD *v10; // eax
  char *v11; // edx
  pthread_mutex_t *v12; // edi
  char v13; // di
  char *v14; // edx
  char *v16; // eax
  char v17; // al
  int *v18; // eax
  int v19; // [esp-14h] [ebp-54h]
  int v20; // [esp-10h] [ebp-50h]
  int v21; // [esp-Ch] [ebp-4Ch]
  int *v22; // [esp+0h] [ebp-40h]
  char *v23; // [esp+4h] [ebp-3Ch]
  bool v24; // [esp+8h] [ebp-38h]
  char *v25; // [esp+8h] [ebp-38h]
  char *v26; // [esp+Ch] [ebp-34h]
  pthread_mutex_t *mutex; // [esp+10h] [ebp-30h]
  pthread_mutex_t *mutexa; // [esp+10h] [ebp-30h]
  int stat_loc; // [esp+20h] [ebp-20h] BYREF
  unsigned int v30; // [esp+24h] [ebp-1Ch]

  v30 = __readgsdword(0x14u);
  mutex = *((pthread_mutex_t **)arg + 6);
  sub_80D15A0(mutex);
  v5 = *(char **)arg;
  if ( arg == *(char **)arg )
    goto LABEL_5;
  while ( 1 )
  {
    if ( pid != -1 )
    {
      while ( pid != *((_DWORD *)v5 + 2) )
      {
        v5 = *(char **)v5;
        if ( arg == v5 )
          goto LABEL_5;
      }
    }
    v6 = *((_DWORD *)v5 + 3);
    if ( v6 != 0xFFFF || (a4 & 8) != 0 )
      break;
    v5 = *(char **)v5;
    if ( arg == v5 )
      goto LABEL_5;
  }
  if ( arg == v5 )
  {
LABEL_5:
    if ( pid == -1 )
    {
      v24 = 0;
      goto LABEL_10;
    }
    v7 = waitpid(pid, &stat_loc, a4 | 1);
    v8 = v7;
    if ( v7 <= 0 )
    {
      v24 = 0;
      if ( v7 == -1 )
        v24 = *__errno_location() == 10;
LABEL_10:
      v9 = (char *)sub_80CF8B0(0x20u);
      *(_OWORD *)(v9 + 8) = 0;
      v22 = (int *)(v9 + 8);
      v23 = v9;
      *((_OWORD *)v9 + 1) = 0;
      *((_DWORD *)v9 + 6) = sub_80D0C00(nullptr, 0);
      *((_WORD *)v23 + 14) = 0;
      *(_DWORD *)v23 = arg + 12;
      v10 = *((_DWORD **)arg + 4);
      *((_DWORD *)v23 + 1) = v10;
      *v10 = v23;
      ++*((_DWORD *)arg + 5);
      *((_DWORD *)arg + 4) = v23;
      *((_DWORD *)v23 + 2) = pid;
      *((_DWORD *)v23 + 5) = a4;
      v23[29] = v24;
      sub_80D1630(arg);
      sub_80D1600(mutex);
      v11 = v23;
      if ( v24 )
      {
        do
        {
          v12 = *((pthread_mutex_t **)arg + 7);
          sub_80D15A0(v12);
          if ( arg[164] )
            pthread_kill(*((_DWORD *)arg + 8), 12);
          sub_80D1600(v12);
        }
        while ( !(unsigned __int8)sub_80D10D0(*((_DWORD *)v23 + 6), 100) );
        mutexa = *((pthread_mutex_t **)arg + 6);
        sub_80D15A0(mutexa);
        if ( v23[28] )
        {
          if ( !v23[16] )
          {
            if ( a2 )
              *a2 = *((_DWORD *)v23 + 3);
            v8 = *((_DWORD *)v23 + 2);
            goto LABEL_26;
          }
          goto LABEL_46;
        }
        if ( v23[29] )
        {
          if ( !byte_811F8A1 )
          {
            if ( v30 == __readgsdword(0x14u) )
              sub_80CFF40(1355, v19, v20, v21);
            sub_80D7AB0();
          }
          JUMPOUT(0x8052458);
        }
        sub_80D1600(mutexa);
        v11 = v23;
      }
      v25 = v11;
      v13 = sub_80D10D0(*((_DWORD *)v11 + 6), a5);
      mutexa = *((pthread_mutex_t **)arg + 6);
      sub_80D15A0(mutexa);
      v14 = v25;
      if ( !v13 )
      {
        v17 = sub_80D10D0(*((_DWORD *)v25 + 6), 0);
        v8 = 0;
        v14 = v25;
        if ( !v17 )
          goto LABEL_26;
      }
      if ( !v14[16] )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v14 + 3);
        v8 = *((_DWORD *)v14 + 2);
        goto LABEL_26;
      }
LABEL_46:
      v8 = -1;
      *__errno_location() = 10;
LABEL_26:
      sub_80D1200((int)arg, v22);
      sub_80D1600(mutexa);
      goto LABEL_27;
    }
    if ( a2 )
      *a2 = stat_loc;
  }
  else
  {
    if ( v5[16] )
    {
      v26 = v5;
      v18 = __errno_location();
      v5 = v26;
      *v18 = 10;
    }
    else if ( a2 )
    {
      *a2 = v6;
    }
    v16 = *(char **)v5;
    v8 = *((_DWORD *)v5 + 2);
    **((_DWORD **)v5 + 1) = *(_DWORD *)v5;
    *((_DWORD *)v16 + 1) = *((_DWORD *)v5 + 1);
    sub_80CF780(v5);
    --*((_DWORD *)arg + 2);
  }
  sub_80D1600(mutex);
LABEL_27:
  if ( v30 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
// 80D1DBA: control flows out of bounds to 8052458
// 80D1DD7: variable 'v19' is possibly undefined
// 80D1DD7: variable 'v20' is possibly undefined
// 80D1DD7: variable 'v21' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
