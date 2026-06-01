/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D350
// Address: 0x0008D350

//----- (0008D350) --------------------------------------------------------
int __cdecl sub_8D350(struct pollfd *fds, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  struct pollfd *v5; // edi
  char *v6; // esi
  unsigned int v7; // ecx
  int i; // edi
  void *v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // ecx
  int *v12; // eax
  bool v13; // zf
  int v14; // ebx
  _DWORD *v15; // esi
  int v16; // ecx
  void *v17; // eax
  int v18; // esi
  char v19; // al
  char v20; // al
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  unsigned int fd; // [esp+10h] [ebp-2Ch]
  unsigned int v27; // [esp+14h] [ebp-28h]
  _DWORD *j; // [esp+14h] [ebp-28h]
  int v29; // [esp+18h] [ebp-24h]
  nfds_t nfds; // [esp+20h] [ebp-1Ch] BYREF
  int timeout[6]; // [esp+24h] [ebp-18h] BYREF

  v5 = fds;
  timeout[1] = __readgsdword(0x14u);
  if ( !*(_DWORD *)&fds[9].events )
  {
    v6 = *(char **)&fds[29].events;
    if ( v6 )
    {
      fd = fds[30].fd;
      if ( fd )
      {
        v7 = 1;
        for ( i = 4; ; i += 36 )
        {
          v9 = *(void **)&v6[i];
          if ( v9 )
          {
            v27 = v7;
            *(_DWORD *)&v6[i + 4] = 0;
            qfree(v9);
            *(_DWORD *)&v6[i] = 0;
            *(_DWORD *)&v6[i + 8] = 0;
            v7 = v27;
          }
          if ( v7 >= fd )
            break;
          v6 = *(char **)((char *)&fds->fd + (_DWORD)(&off_13ADC4 - 322358));
          ++v7;
        }
        v5 = fds;
        v6 = *(char **)&fds[29].events;
      }
      v5[30].fd = 0;
      qfree(v6);
      *(_DWORD *)&v5[29].events = 0;
      *(_DWORD *)&v5[30].events = 0;
    }
  }
  v10 = a3;
  v11 = &a3[9 * a4];
  if ( 36 * a4 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( !*((_BYTE *)v10 + 24) )
      {
        v12 = v10 + 5;
        v13 = v10[4] == 4;
        if ( v10[4] == 4 )
          v12 = (int *)((char *)&fds->fd + (_DWORD)(&off_13ADB0 - 322358));
        timeout[0] = *v12;
        nfds = *v10;
        if ( v13 )
          (*(void (__cdecl **)(struct pollfd *, nfds_t, int))((char *)&off_13ADE8 + fds->fd - 1289432))(
            fds,
            (nfds_t)&nfds,
            (int)timeout);
        v14 = 36 * *(int *)((char *)&fds->fd + (_DWORD)(&off_13ADC8 - 322358));
        v15 = *(_DWORD **)((char *)&fds->fd + (_DWORD)(&off_13ADC4 - 322358));
        if ( v14 )
        {
          v15 = *(_DWORD **)((char *)&fds->fd + (_DWORD)(&off_13ADC4 - 322358));
          while ( *v10 != *v15 || v10[4] != v15[4] )
          {
            v15 += 9;
            v14 -= 36;
            if ( !v14 )
              goto LABEL_30;
          }
          v14 = 36 * *(int *)((char *)&fds->fd + (_DWORD)(&off_13ADC8 - 322358));
        }
        v16 = v14 + *(int *)((char *)&fds->fd + (_DWORD)(&off_13ADC4 - 322358));
        if ( v15 != (_DWORD *)v16 && v15[8] == v10[8] )
        {
          v17 = (void *)v15[1];
          if ( v17 )
          {
            v15[2] = 0;
            qfree(v17);
            v15[1] = 0;
            v15[3] = 0;
            v16 = *(_DWORD *)&fds[29].events + 36 * *(int *)((char *)&fds->fd + (_DWORD)(&off_13ADC8 - 322358));
          }
          memmove(v15, v15 + 9, v16 + -36 - (_DWORD)v15);
          --*(int *)((char *)&fds->fd + (_DWORD)(&off_13ADC8 - 322358));
        }
LABEL_30:
        v18 = (*(int (__cdecl **)(struct pollfd *, _DWORD *, _DWORD, nfds_t, int))(fds->fd + 156))(
                fds,
                v10 + 1,
                v10[4],
                nfds,
                timeout[0]);
        sub_8A3F0((int)fds, (char *)&qword_13ACD8 - 322687, v10[4], nfds, timeout[0], v18);
        if ( v18 == -2 )
        {
          v19 = 7;
LABEL_37:
          *((_BYTE *)v10 + 24) = v19;
          v11 = &a3[9 * a4];
          goto LABEL_38;
        }
        if ( v18 == 2 )
        {
          v20 = 10;
        }
        else
        {
          v19 = 8;
          if ( v18 != 1 )
            goto LABEL_37;
          v20 = 0;
        }
        v11 = &a3[9 * a4];
        *((_BYTE *)v10 + 24) = v20;
        ++v29;
      }
LABEL_38:
      v10 += 9;
      if ( v10 == v11 )
      {
        v10 = v11;
        goto LABEL_41;
      }
    }
  }
  v29 = 0;
LABEL_41:
  for ( j = &v11[9 * a5]; j != v10; v10 += 9 )
  {
    *((_BYTE *)v10 + 24) = 0;
    v21 = v10[4];
    v22 = 5;
    if ( v21 == 4 )
      v22 = 2;
    v23 = (*(int (__cdecl **)(struct pollfd *, int, _DWORD, _DWORD, _DWORD))(fds->fd + 160))(
            fds,
            v21,
            *v10,
            v10[1],
            v10[v22]);
    sub_8A3F0((int)fds, "dbg_del_bpt(type=%d, ea=%a) => %d\n", v10[4], *v10, v23);
    if ( v23 <= 0 )
    {
      *((_BYTE *)v10 + 24) = 8;
    }
    else
    {
      ++v29;
      v24 = v10[4];
      if ( v24 == 8 || v24 == 4 )
        sub_8D710((int)fds + (_DWORD)(&off_13ADC4 - 322358), v10);
    }
  }
  if ( a2 )
    *a2 = v29;
  return 1;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13ADB0: using guessed type _UNKNOWN *off_13ADB0;
// 13ADC4: using guessed type _UNKNOWN *off_13ADC4;
// 13ADC8: using guessed type _UNKNOWN *off_13ADC8;
// 13ADE8: using guessed type _UNKNOWN *off_13ADE8;
