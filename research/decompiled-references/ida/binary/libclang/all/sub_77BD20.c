unsigned __int64 __fastcall sub_77BD20(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r15
  char v4; // bp
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx

  v2 = (unsigned __int64)a1;
  v4 = 0;
LABEL_2:
  while ( 1 )
  {
    v5 = sub_77BC00(v2);
    if ( v5 )
      break;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v2 + 72);
      if ( (v6 & 1) == 0 )
        break;
      if ( v4 )
        return v5;
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v6 & 1) != 0 )
      {
        v4 = 1;
LABEL_16:
        if ( !v7 )
          return v5;
LABEL_17:
        v10 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v7 & 4) != 0 )
        {
          if ( !v10 )
            return v5;
          v12 = *(_QWORD *)v10;
          v13 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
          if ( *(_DWORD *)(v10 + 8) != v13 )
          {
            *(_DWORD *)(v10 + 8) = v13;
            (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v12 + 144LL))(v12, v2, v11);
          }
          v11 = *(_QWORD *)(v10 + 16);
        }
        if ( a1 == (_QWORD *)v11 )
          return v5;
        v2 = v11;
LABEL_24:
        if ( v2 )
          goto LABEL_2;
        return v5;
      }
LABEL_7:
      if ( v7 <= 3 )
      {
        v4 = 1;
        v2 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_24;
      }
      v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v7 & 2) != 0 )
      {
        v4 = 1;
LABEL_32:
        v14 = v8[2275];
        if ( !v14 )
        {
          v7 = v2 & 0xFFFFFFFFFFFFFFFALL;
          v6 = v2 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(v2 + 72) = v6;
          goto LABEL_16;
        }
        v15 = v8[274];
        v8[284] += 24LL;
        v7 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8[275] >= v7 + 24 && v15 )
          v8[274] = v7 + 24;
        else
          v7 = sub_779030((__int64)(v8 + 274), 24, 3);
        *(_QWORD *)v7 = v14;
        *(_DWORD *)(v7 + 8) = 0;
        v6 = v7 | 5;
        *(_QWORD *)(v7 + 16) = v2;
        *(_QWORD *)(v2 + 72) = v7 | 5;
        LOBYTE(v7) = v7 & 0xFA | 4;
        goto LABEL_17;
      }
      if ( a1 == v8 )
        return v5;
      v2 = (unsigned __int64)v8;
      v4 = 1;
      v5 = sub_77BC00((__int64)v8);
      if ( v5 )
        goto LABEL_11;
    }
    if ( (v6 & 2) != 0 )
    {
      if ( v4 )
        return v5;
      v4 = 1;
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v6 & 1) != 0 )
        goto LABEL_17;
      goto LABEL_7;
    }
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v6 & 1) != 0 )
      goto LABEL_16;
    if ( v7 <= 3 )
      return v5;
    v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
      goto LABEL_32;
    if ( a1 == v8 )
      return v5;
    v2 = (unsigned __int64)v8;
  }
LABEL_11:
  *a2 = v2;
  return v5;
}

