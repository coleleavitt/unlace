__int64 __fastcall sub_B5CE30(_BYTE *a1)
{
  _WORD *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  char v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  char v13; // bl
  int v14; // ebx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _WORD *v23; // rdx
  _WORD *v24; // rax
  _WORD **v25; // rax

  v3 = sub_B685F0(a1);
  v6 = *(_QWORD *)(v3 + 2320);
  v7 = *(_BYTE *)(v6 + 45) & 1;
  if ( !v7 )
  {
    if ( (a1[29] & 1) == 0 )
    {
LABEL_3:
      v8 = (__int64)a1;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v9 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(v9 + 8) & 0x7F) == 0
          && (*(_BYTE *)(v8 + 29) & 2) == 0
          && ((*(_BYTE *)(v8 + 82) & 2) == 0 || *(_BYTE *)(v8 + 81) >> 5 == 1) )
        {
          return 1;
        }
        v10 = *(_QWORD *)(v8 + 104);
        if ( (v10 & 1) != 0 )
        {
          if ( v7 )
            return 0;
          v17 = v10 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_31;
        }
        if ( (v10 & 2) != 0 )
        {
          if ( v7 )
            return 0;
          v21 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          v7 = 1;
          if ( v21 )
          {
            v17 = sub_6C1EC0(v21, v8, v9, (__int64)v2, v4, v5) & 0xFFFFFFFFFFFFFFFELL;
            v10 = v17 | 1;
            *(_QWORD *)(v8 + 104) = v17 | 1;
LABEL_31:
            v7 = 1;
            v18 = v10 & 0xFFFFFFFFFFFFFFF8LL;
            v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v17 && (v17 & 4) != 0 && v18 )
            {
              v19 = *(_QWORD *)v18;
              v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
              if ( *(_DWORD *)(v18 + 8) != v20 )
              {
                *(_DWORD *)(v18 + 8) = v20;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v8);
              }
              v11 = *(_QWORD *)(v18 + 16);
              v7 = 1;
            }
            goto LABEL_13;
          }
        }
        else
        {
          v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v11 )
            goto LABEL_13;
        }
        v11 = 0;
LABEL_13:
        if ( a1 != (_BYTE *)v11 )
        {
          v8 = v11;
          if ( v11 )
            continue;
        }
        return 0;
      }
    }
    v22 = sub_B68690(a1);
    v23 = *(_WORD **)v22;
    v2 = (_WORD *)(*(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8));
    if ( *(_QWORD *)v22 >= (unsigned __int64)v2 )
    {
      if ( v23 == v2 )
        goto LABEL_3;
      v25 = (_WORD **)(v2 + 4);
      if ( *(_WORD *)(*(_QWORD *)v2 + 36LL) != 221 )
      {
        do
        {
          v2 = v25;
          if ( v23 == (_WORD *)v25 )
            goto LABEL_3;
          v2 = *v25++;
        }
        while ( v2[18] != 221 );
      }
    }
    else
    {
      v24 = *(_WORD **)v22;
      while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 221 )
      {
        v24 += 4;
        if ( v2 == v24 )
          goto LABEL_3;
      }
      if ( v2 == v24 )
        goto LABEL_3;
    }
    v6 = *(_QWORD *)(v3 + 2320);
  }
  v13 = *(_BYTE *)(v6 + 1);
  result = 0;
  v14 = v13 & 8;
  if ( !v14 )
  {
    result = 1;
    if ( (a1[82] & 2) != 0 )
    {
      v15 = (unsigned __int8)a1[81];
      LOBYTE(v15) = (unsigned __int8)v15 >> 5;
      if ( (_BYTE)v15 == 1 )
      {
        v16 = a1;
        while ( 1 )
        {
          if ( (*((_BYTE *)v16 + 82) & 2) != 0 )
          {
            v15 = *((unsigned __int8 *)v16 + 81);
            LOBYTE(v15) = (unsigned __int8)v15 >> 5;
            if ( (_BYTE)v15 != 1 )
              break;
          }
          if ( (v16[13] & 3) != 0 )
          {
            if ( (_BYTE)v14 )
              return 0;
            LOBYTE(v14) = 1;
          }
          v16 = sub_6E4ED0(v16 + 13, (__int64)v16, v15, (__int64)v2, v4, v5);
          if ( a1 == (_BYTE *)v16 )
            return 0;
          if ( !v16 )
            return 0;
        }
        return 1;
      }
    }
  }
  return result;
}

