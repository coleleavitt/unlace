__int64 __fastcall sub_7A5330(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _BOOL4 v5; // r13d
  unsigned int v6; // r12d
  _QWORD *v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rax

  if ( ((unsigned int)sub_780B80((__int64)a1) == 2 || (unsigned int)sub_780B80((__int64)a1) == 4)
    && !sub_780F20((__int64)a1) )
  {
    if ( (unsigned int)sub_77F620((__int64)a1) == 1 )
      return 1;
    v5 = sub_77F690((__int64)a1);
    v6 = v5 + 1;
    v7 = (_QWORD *)sub_798D40((__int64)a1);
    if ( v5 + 1 < (unsigned int)sub_77F620((__int64)a1)
      && *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a1[15] + 8LL * v6) + 48LL) & 0xFFFFFFFFFFFFFFF0LL]
                   & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[sub_6CABB0(v7) & 0xFFFFFFFFFFFFFFF0LL]
                                                        & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v6 = v5 + 2;
    }
    if ( v6 < (unsigned int)sub_77F620((__int64)a1) )
      v6 += (unsigned __int8)sub_B08980(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[15] + 8LL * v6) + 48LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL));
    if ( (unsigned int)sub_77F620((__int64)a1) == v6 )
    {
      v8 = v7[270];
      if ( (*(_BYTE *)(v8 + 1) & 0x40) == 0 && (*(_BYTE *)(v8 + 97) & 0x20) == 0 && !sub_77F690((__int64)a1) )
      {
        v9 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (a1[2] & 4) != 0 )
          v9 = (_QWORD *)*v9;
        v10 = sub_7A0650((unsigned __int64)v9, a1[5]);
        if ( v10 )
        {
          v3 = 1;
          while ( 1 )
          {
            v11 = v10;
            v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
            v13 = v12;
            v14 = (v11 >> 2) & 1;
            if ( v14 )
            {
              if ( !v12 )
                BUG();
              v17 = *(_QWORD *)v12;
              if ( (*(_BYTE *)(*(_QWORD *)v12 + 28LL) & 0x7Fu) - 32 > 5 || (unsigned int)sub_77F620(*(_QWORD *)v12) != 1 )
                goto LABEL_30;
              v18 = *(unsigned int *)(a2 + 8);
              v12 = v17;
              v16 = v18 + 1;
              if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v18 + 1) )
              {
                v3 = 0;
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v18) = v17;
                ++*(_DWORD *)(a2 + 8);
                goto LABEL_30;
              }
            }
            else
            {
              if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 32 > 5 || (unsigned int)sub_77F620(v12) != 1 )
                return v3;
              v15 = *(unsigned int *)(a2 + 8);
              v16 = v15 + 1;
              if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v15 + 1) )
              {
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v15) = v12;
                ++*(_DWORD *)(a2 + 8);
                return 0;
              }
            }
            sub_25D6060(a2, a2 + 16, v16, 8);
            *(_QWORD *)(*(_QWORD *)a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v12;
            if ( !v14 )
              return 0;
            v3 = 0;
LABEL_30:
            v10 = *(_QWORD *)(v13 + 8);
            if ( !v10 )
              return v3;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

