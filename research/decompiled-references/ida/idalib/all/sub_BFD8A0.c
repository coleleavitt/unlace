_WORD *__fastcall sub_BFD8A0(_WORD *a1, __int64 a2, double a3)
{
  _WORD *v3; // rbp
  unsigned __int16 i; // ax
  _WORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-40h]

  v3 = a1;
  i = *a1 & 0x1FF;
  if ( i != 20 )
    goto LABEL_11;
LABEL_2:
  v5 = *((_WORD **)v3 + 3);
  for ( i = *v5 & 0x1FF; ; i = *v5 & 0x1FF )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( i > 0x4Eu )
            {
              if ( i > 0x58u )
                goto LABEL_9;
              v6 = *((_QWORD *)v5 + 2);
              v7 = *(_QWORD *)(v6 + 8);
              v8 = *(_QWORD *)(*((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFFFF0LL);
              v9 = *(_QWORD *)(*(_QWORD *)&byte_8[*((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              v10 = *(_QWORD *)(*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              {
                if ( !(unsigned __int8)sub_F60F80(v8, a2, a3) )
                {
LABEL_7:
                  if ( v9 == v10 )
                    v5 = (_WORD *)v6;
                  goto LABEL_9;
                }
                v7 = *(_QWORD *)(v6 + 8);
              }
              v12 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
                || (unsigned __int8)sub_F60F80(*v12, a2, a3) )
              {
                v13 = sub_A97D20(a2, *(_QWORD *)(*((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFFFF0LL));
                if ( v13 == sub_A97D20(a2, *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
                {
                  v5 = (_WORD *)v6;
                  goto LABEL_9;
                }
              }
              goto LABEL_7;
            }
            if ( i == 8 )
              v5 = *((_WORD **)v5 + 2);
LABEL_9:
            if ( v5 == v3 )
              return v3;
            v3 = v5;
            i = *v5 & 0x1FF;
            if ( i == 20 )
              goto LABEL_2;
LABEL_11:
            if ( i != 4 )
              break;
            if ( *((_BYTE *)v3 + 2) >> 3 != 12 )
              return v3;
            v5 = *((_WORD **)v3 + 2);
            i = *v5 & 0x1FF;
          }
          if ( i != 57 )
            break;
          if ( (*((_DWORD *)v3 + 4) & 0x3FFF8000) == 0x3FFF8000 )
            return v3;
          v5 = *(_WORD **)&v3[4 * ((*((_BYTE *)v3 + 19) & 0x40) != 0) + 16 + 4 * ((*((_DWORD *)v3 + 4) >> 15) & 0x7FFF)];
          i = *v5 & 0x1FF;
        }
        if ( i != 77 )
          break;
        if ( ((**((_DWORD **)v3 + 2) >> 14) & 0xC) != 0 )
          return v3;
        if ( (v3[1] & 8) != 0 )
          goto LABEL_2;
        v5 = *((_WORD **)v3 + 4);
        i = *v5 & 0x1FF;
      }
      if ( i == 18 )
        break;
      v5 = v3;
    }
    if ( (*(_QWORD *)v3 & 0x1000000) != 0 && (BYTE2(*(_QWORD *)v3) & 0x80u) != 0 )
    {
      v5 = *((_WORD **)v3 + 2);
      if ( v5 )
        continue;
    }
    break;
  }
  return v3;
}
