__int64 __fastcall sub_A57620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  char v8; // cl
  unsigned __int64 v9; // rax
  char v10; // dl
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax

  result = 1;
  v7 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B )
  {
    v8 = *(_BYTE *)(v7 + 97) & 0x40;
    if ( !v8 )
    {
      v9 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
        v9 = *(_QWORD *)v9;
      v10 = *(_BYTE *)(v9 + 8);
      result = 1;
      if ( ((v10 + 70) & 0x7Fu) <= 3 )
      {
        v12 = a1;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
            v13 = *(_QWORD *)(v13 + 8);
          if ( (*(_BYTE *)(v13 + 8) & 0x7F) == 0 || (*(_BYTE *)(v13 + 8) & 0x7F) == 0x18 )
          {
            if ( (*(_BYTE *)(v12 + 28) & 0x7F) != 0x2B )
            {
              v14 = *(_BYTE *)(v12 + 97);
              if ( (v14 & 0x40) != 0 )
                goto LABEL_17;
              if ( v14 < 0 )
                return 3;
            }
            if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B && *(char *)(v7 + 97) < 0 )
              return 3;
          }
LABEL_17:
          v15 = *(_QWORD *)(v12 + 72);
          if ( (v15 & 1) != 0 )
          {
            if ( v8 )
              return 2;
            v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_25;
          }
          if ( (v15 & 2) != 0 )
          {
            if ( v8 )
              return 2;
            v8 = 1;
            if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v17 = sub_6C1EC0((_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL), v12, v15, 1, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
              v15 = v17 | 1;
              *(_QWORD *)(v12 + 72) = v17 | 1;
LABEL_25:
              v8 = 1;
              v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
              v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v17 && (v17 & 4) != 0 && v18 )
              {
                v19 = *(_QWORD *)v18;
                v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
                if ( *(_DWORD *)(v18 + 8) != v20 )
                {
                  *(_DWORD *)(v18 + 8) = v20;
                  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v19 + 152LL))(
                    v19,
                    v12,
                    v16,
                    1);
                }
                v16 = *(_QWORD *)(v18 + 16);
                v8 = 1;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v16 )
              goto LABEL_20;
          }
          v16 = 0;
LABEL_20:
          if ( a1 != v16 )
          {
            v12 = v16;
            if ( v16 )
              continue;
          }
          return 2;
        }
      }
    }
  }
  return result;
}

