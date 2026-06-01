__int64 __fastcall sub_788150(__int64 a1)
{
  __int64 v1; // r13
  char v2; // bp
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _DWORD **v12; // rdi
  _DWORD **v13; // r14
  unsigned __int64 v15; // rdi
  _DWORD *v16; // rdi
  int v17; // eax

  v1 = a1;
  v2 = 0;
  v3 = sub_798D40(a1);
  v5 = *(_QWORD **)(a1 + 80);
  v6 = v3;
  v7 = (__int64)v5;
  if ( v5 )
  {
LABEL_2:
    while ( 2 )
    {
      if ( (unsigned int)sub_77B6A0(v7, v6, v4) == 2 )
      {
        return v7;
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 72);
          if ( (v9 & 1) != 0 )
          {
            if ( v2 )
              return v1;
            v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v9 & 1) != 0 )
            {
              v2 = 1;
            }
            else
            {
LABEL_20:
              v2 = 1;
              v4 = v9 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v10 <= 3 )
                goto LABEL_29;
              v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v10 & 2) == 0 )
              {
                if ( v5 == v11 )
                  return v1;
                v7 = (__int64)v11;
                v2 = 1;
                goto LABEL_2;
              }
              v2 = 1;
LABEL_25:
              v15 = sub_6D4E90(v11, v7);
              v10 = v15 & 0xFFFFFFFFFFFFFFFELL;
              v9 = v15 | 1;
              *(_QWORD *)(v7 + 72) = v9;
            }
LABEL_14:
            if ( !v10 )
              return v1;
            goto LABEL_15;
          }
          if ( (v9 & 2) != 0 )
            break;
          v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v9 & 1) != 0 )
            goto LABEL_14;
          if ( v10 <= 3 )
            return v1;
          v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v10 & 2) != 0 )
            goto LABEL_25;
          if ( v5 == v11 )
            return v1;
          v7 = (__int64)v11;
          if ( (unsigned int)sub_77B6A0((__int64)v11, v6, v8) == 2 )
            return v7;
        }
        if ( v2 )
          return v1;
        v2 = 1;
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) == 0 )
          goto LABEL_20;
LABEL_15:
        v12 = (_DWORD **)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        v13 = v12;
        v4 = (unsigned __int64)v12;
        if ( (v10 & 4) != 0 )
        {
          if ( !v12 )
            return v1;
          v16 = *v12;
          v17 = v16[3];
          if ( *((_DWORD *)v13 + 2) != v17 )
          {
            *((_DWORD *)v13 + 2) = v17;
            (*(void (__fastcall **)(_DWORD *, __int64, unsigned __int64))(*(_QWORD *)v16 + 144LL))(v16, v7, v4);
          }
          v4 = (unsigned __int64)v13[2];
        }
LABEL_29:
        if ( v5 != (_QWORD *)v4 && v4 )
        {
          v7 = v4;
          continue;
        }
      }
      break;
    }
  }
  return v1;
}

