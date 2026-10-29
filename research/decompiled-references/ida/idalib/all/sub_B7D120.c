unsigned __int64 __fastcall sub_B7D120(__int64 a1, __int64 *a2)
{
  char v2; // r14
  __int64 v3; // r13
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx

  v2 = 0;
  v3 = a1;
  while ( 1 )
  {
    v7 = sub_B73640(v3);
    if ( v7 )
      break;
    v8 = *(_QWORD *)(v3 + 72);
    if ( (v8 & 1) != 0 )
    {
      if ( v2 )
        return v7;
      v11 = v8 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_11;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( v2 )
        return v7;
      v15 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = 1;
      if ( v15 )
      {
        v16 = v15[2295];
        if ( v16 )
        {
          v17 = v15[294];
          v15[304] += 24LL;
          v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v15[295] >= v18 + 24 && v17 )
          {
            v15[294] = v18 + 24;
            v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v19 = sub_986170((__int64)(v15 + 294), 24, 24, 3, v5, v6);
            v18 = v19 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v19 = v16;
          v20 = v18 | 4;
          *(_DWORD *)(v19 + 8) = 0;
          *(_QWORD *)(v19 + 16) = v3;
        }
        else
        {
          v20 = v3 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v11 = v20 & 0xFFFFFFFFFFFFFFFELL;
        v8 = v11 | 1;
        *(_QWORD *)(v3 + 72) = v11 | 1;
LABEL_11:
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v2 = 1;
        v12 = v9;
        if ( v11 && (v11 & 4) != 0 && v9 )
        {
          v13 = *(_QWORD *)v9;
          v14 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
          if ( *(_DWORD *)(v12 + 8) != v14 )
          {
            *(_DWORD *)(v12 + 8) = v14;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 152LL))(v13, v3);
          }
          v9 = *(_QWORD *)(v12 + 16);
          v2 = 1;
        }
        goto LABEL_6;
      }
    }
    else
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v9 )
        goto LABEL_6;
    }
    v9 = 0;
LABEL_6:
    if ( a1 != v9 )
    {
      v3 = v9;
      if ( v9 )
        continue;
    }
    return v7;
  }
  *a2 = v3;
  return v7;
}
