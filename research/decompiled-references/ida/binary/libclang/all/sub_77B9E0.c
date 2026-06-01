__int64 __fastcall sub_77B9E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r12
  _QWORD *v4; // r13
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax

  v3 = 0;
  v4 = *(_QWORD **)(a1 + 80);
  v5 = (__int64)v4;
  if ( v4 )
  {
LABEL_2:
    while ( 2 )
    {
      if ( (unsigned int)sub_77B6A0(v5, a2, a3) == 2 )
        return v5;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v5 + 72);
        if ( (v7 & 1) != 0 )
        {
          if ( v3 )
            return 0;
          v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v7 & 1) != 0 )
          {
            v3 = 1;
          }
          else
          {
LABEL_20:
            v3 = 1;
            a3 = v7 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v8 <= 3 )
              goto LABEL_30;
            v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v8 & 2) == 0 )
            {
              if ( v4 == v9 )
                return 0;
              v5 = (__int64)v9;
              v3 = 1;
              goto LABEL_2;
            }
            v3 = 1;
LABEL_25:
            v12 = v9[2275];
            if ( v12 )
            {
              v13 = v9[274];
              v9[284] += 24LL;
              v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v9[275] >= v14 + 24 && v13 )
                v9[274] = v14 + 24;
              else
                v14 = sub_779030((__int64)(v9 + 274), 24, 3);
              *(_QWORD *)v14 = v12;
              *(_DWORD *)(v14 + 8) = 0;
              *(_QWORD *)(v14 + 16) = v5;
              v11 = v14 & 0xFFFFFFFFFFFFFFF8LL;
              *(_QWORD *)(v5 + 72) = v14 | 5;
              a3 = v14 & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_16;
            }
            v8 = v5 & 0xFFFFFFFFFFFFFFFALL;
            v7 = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
            *(_QWORD *)(v5 + 72) = v7;
          }
LABEL_14:
          if ( !v8 )
            return 0;
          goto LABEL_15;
        }
        if ( (v7 & 2) != 0 )
          break;
        v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v7 & 1) != 0 )
          goto LABEL_14;
        if ( v8 <= 3 )
          return 0;
        v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v8 & 2) != 0 )
          goto LABEL_25;
        if ( v4 == v9 )
          return 0;
        v5 = (__int64)v9;
        if ( (unsigned int)sub_77B6A0((__int64)v9, a2, v6) == 2 )
          return v5;
      }
      if ( v3 )
        return 0;
      v3 = 1;
      v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v7 & 1) == 0 )
        goto LABEL_20;
LABEL_15:
      v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      a3 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 )
        goto LABEL_30;
LABEL_16:
      if ( !v11 )
        return 0;
      v15 = *(_QWORD *)v11;
      v16 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
      if ( *(_DWORD *)(v11 + 8) != v16 )
      {
        *(_DWORD *)(v11 + 8) = v16;
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v15 + 144LL))(v15, v5, a3);
      }
      a3 = *(_QWORD *)(v11 + 16);
LABEL_30:
      if ( v4 != (_QWORD *)a3 && a3 )
      {
        v5 = a3;
        continue;
      }
      break;
    }
  }
  return 0;
}

