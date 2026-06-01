void *__fastcall sub_745920(__int64 a1, __int64 *a2, int a3, unsigned __int16 *a4, unsigned int a5)
{
  __int64 v6; // rbp
  int v7; // eax
  __int16 v8; // r13
  _WORD *v9; // r15
  __int64 v10; // r12
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int16 v15; // r13
  unsigned int v16; // eax
  _DWORD *v17; // rbp
  int v19; // ebp
  _QWORD *v20; // rax
  unsigned __int16 v22; // [rsp+1Ah] [rbp-3Eh]
  unsigned int v23; // [rsp+1Ch] [rbp-3Ch]

  if ( a2 )
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 8) + 1;
    if ( *((_DWORD *)a2 + 8) == -1 )
      v7 = -1;
    *((_DWORD *)a2 + 8) = v7;
    v8 = *(_WORD *)(v6 + 4);
    v9 = (_WORD *)(v6 + 6 + 6LL * a3);
    v10 = v6 + 6 + 6LL * v8;
    v22 = *(_WORD *)(v10 + 4);
    memmove(v9, (const void *)(v6 + 6LL * a3), 6LL * (v8 + 1 - a3));
    *(_WORD *)(v6 + 4) = v8 + 1;
    v11 = *a4;
    v12 = *(unsigned __int16 *)((char *)a4 + (unsigned __int16)v11 + 2);
    if ( (unsigned __int16)v11 <= 0x204u && v12 <= 0x404 )
    {
      v13 = v11 + v12 + 4;
      v14 = *((_WORD *)a2 + 4) - 6 - v13;
      *((_WORD *)a2 + 4) = v14;
      if ( v14 < 0 )
      {
        if ( a2[2] )
        {
          if ( a2[3] )
          {
            if ( !under_debugger )
              interr(1259);
            BUG();
          }
          v19 = 1;
        }
        else
        {
          v19 = 0;
        }
        v23 = v13;
        v20 = (_QWORD *)sub_73F210(*(_QWORD *)(a1 + 16));
        a2[v19 + 2] = (__int64)v20;
        if ( !v20 )
        {
          dword_2CCC638 = 16;
          sub_743100(16, 0);
        }
        if ( v23 >= 8 )
        {
          *v20 = *(_QWORD *)a4;
          *(_QWORD *)((char *)v20 + v23 - 8) = *(_QWORD *)((char *)a4 + v23 - 8);
          qmemcpy(
            (void *)((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)((char *)a4 - ((char *)v20 - ((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * ((v23 + (_DWORD)v20 - (((_DWORD)v20 + 8) & 0xFFFFFFF8)) >> 3));
        }
        else if ( (v23 & 4) != 0 )
        {
          *(_DWORD *)v20 = *(_DWORD *)a4;
          *(_DWORD *)((char *)v20 + v23 - 4) = *(_DWORD *)((char *)a4 + v23 - 4);
        }
        else if ( v23 )
        {
          *(_BYTE *)v20 = *(_BYTE *)a4;
          if ( (v23 & 2) != 0 )
            *(_WORD *)((char *)v20 + v23 - 2) = *(unsigned __int16 *)((char *)a4 + v23 - 2);
        }
        v9[2] = v19;
        if ( *(_DWORD *)a1 >= (unsigned int)v22 )
        {
          *(_WORD *)(v10 + 10) = v22;
LABEL_12:
          *(_DWORD *)v9 = a5;
          return (void *)a5;
        }
      }
      else
      {
        v15 = v22 - v13;
        v16 = (unsigned __int16)(v22 - v13);
        if ( *(_DWORD *)a1 >= v16 )
        {
          v9[2] = v15;
          if ( *(_DWORD *)a1 >= v16 )
          {
            *(_WORD *)(v10 + 10) = v15;
            if ( v16 < *(_DWORD *)(v6 - 8) )
            {
              v17 = (_DWORD *)(v15 + v6);
              if ( (unsigned int)v13 < 8 )
              {
                if ( (v13 & 4) != 0 )
                {
                  *v17 = *(_DWORD *)a4;
                  *(_DWORD *)((char *)v17 + v13 - 4) = *(_DWORD *)((char *)a4 + v13 - 4);
                }
                else if ( (_DWORD)v13 )
                {
                  *(_BYTE *)v17 = *(_BYTE *)a4;
                  if ( (v13 & 2) != 0 )
                    *(_WORD *)((char *)v17 + v13 - 2) = *(unsigned __int16 *)((char *)a4 + v13 - 2);
                }
              }
              else
              {
                *(_QWORD *)v17 = *(_QWORD *)a4;
                *(_QWORD *)((char *)v17 + (unsigned int)v13 - 8) = *(_QWORD *)((char *)a4 + (unsigned int)v13 - 8);
                qmemcpy(
                  (void *)((unsigned __int64)(v17 + 2) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)((char *)a4 - ((char *)v17 - ((unsigned __int64)(v17 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v17 - (((_DWORD)v17 + 8) & 0xFFFFFFF8) + (unsigned int)v13) >> 3));
              }
              goto LABEL_12;
            }
          }
        }
      }
    }
    sub_743130();
  }
  sub_73D680((void *)(a1 + 4244), a4);
  *(_DWORD *)(a1 + 5792) = a5;
  unk_2CCC5C8 = 1;
  return &unk_2CCC5C8;
}
