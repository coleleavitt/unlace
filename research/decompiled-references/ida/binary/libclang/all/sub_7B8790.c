unsigned __int64 __fastcall sub_7B8790(__int64 a1)
{
  char v1; // r13
  unsigned __int64 v3; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi

  v1 = 0;
  v3 = a1;
  sub_7B86F0(a1);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(a1 + 104);
        v5 = *(_QWORD *)(v3 + 88);
        *(_QWORD *)(v3 + 104) = result;
        if ( (v5 & 1) == 0 )
          break;
        if ( v1 )
          return result;
        result = v5 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v5 & 1) != 0 )
        {
          v1 = 1;
          goto LABEL_13;
        }
LABEL_6:
        if ( result <= 3 )
        {
          v1 = 1;
          v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_30;
        }
        v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (result & 2) != 0 )
        {
          v1 = 1;
          goto LABEL_23;
        }
        if ( (_QWORD *)a1 == v6 )
          return result;
        v3 = (unsigned __int64)v6;
        v1 = 1;
      }
      if ( (v5 & 2) != 0 )
      {
        if ( v1 )
          return result;
        v1 = 1;
        result = v5 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v5 & 1) != 0 )
          goto LABEL_14;
        goto LABEL_6;
      }
      result = v5 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v5 & 1) != 0 )
        goto LABEL_13;
      if ( result <= 3 )
        return result;
      v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (result & 2) != 0 )
        break;
      if ( (_QWORD *)a1 == v6 )
        return result;
      v3 = (unsigned __int64)v6;
    }
LABEL_23:
    v9 = v6[2275];
    if ( !v9 )
    {
      result = v3 & 0xFFFFFFFFFFFFFFFALL;
      v5 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v3 + 88) = v5;
LABEL_13:
      if ( !result )
        return result;
LABEL_14:
      v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (result & 4) != 0 )
        goto LABEL_15;
      goto LABEL_28;
    }
    v10 = v6[274];
    v6[284] += 24LL;
    v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6[275] >= v11 + 24 && v10 )
      v6[274] = v11 + 24;
    else
      v11 = sub_7B4EB0((__int64)(v6 + 274), 24, 3);
    *(_QWORD *)v11 = v9;
    v12 = v11 | 5;
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = v3;
    v7 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    result = v11 & 0xFFFFFFFFFFFFFFFALL | 4;
    *(_QWORD *)(v3 + 88) = v12;
    v8 = v7;
    if ( (result & 4) != 0 )
    {
LABEL_15:
      if ( !v7 )
        return result;
      v13 = *(_QWORD *)v7;
      result = *(unsigned int *)(*(_QWORD *)v7 + 12LL);
      if ( *(_DWORD *)(v7 + 8) != (_DWORD)result )
      {
        *(_DWORD *)(v7 + 8) = result;
        result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v13 + 144LL))(
                   v13,
                   v3,
                   v8);
      }
      v8 = *(_QWORD *)(v7 + 16);
    }
LABEL_28:
    if ( a1 == v8 )
      return result;
    v3 = v8;
LABEL_30:
    ;
  }
  while ( v3 );
  return result;
}

