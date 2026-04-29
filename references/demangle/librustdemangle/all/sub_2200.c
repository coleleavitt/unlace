unsigned __int64 __fastcall sub_2200(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v7; // rsi
  char v8; // bp
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // rbp
  size_t v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rbp
  size_t v20; // rax
  char v21; // [rsp+7h] [rbp-51h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  char s[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 != -1 )
  {
    v3 = v2 + 1;
    *(_DWORD *)(a1 + 56) = v3;
    if ( v3 > 0x400 )
      goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 >= v5 )
  {
LABEL_4:
    v3 = *(_DWORD *)(a1 + 56);
LABEL_5:
    *(_DWORD *)(a1 + 40) = 1;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)a1;
  v8 = *(_BYTE *)(*(_QWORD *)a1 + v4);
  if ( v8 != 66 )
  {
    if ( !v8 )
      goto LABEL_4;
    *(_QWORD *)(a1 + 32) = v4 + 1;
    if ( v8 > 121 )
      goto LABEL_4;
    if ( v8 > 103 )
    {
      v9 = 1LL << (v8 - 104);
      if ( (v9 & 0x210A5) != 0 )
      {
LABEL_22:
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_19;
        sub_1970(a1);
        v11 = *(_DWORD *)(a1 + 40);
        goto LABEL_24;
      }
      if ( (v9 & 0x10852) == 0 )
      {
        if ( v8 != 112 )
          goto LABEL_4;
        if ( !*(_QWORD *)(a1 + 40) )
        {
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("_", 1, *(_QWORD *)(a1 + 16));
          v3 = *(_DWORD *)(a1 + 56);
          goto LABEL_6;
        }
        goto LABEL_19;
      }
LABEL_21:
      if ( v5 > v4 + 1 && *(_BYTE *)(v7 + v4 + 1) == 110 )
      {
        v17 = *(_QWORD *)(a1 + 40) == 0;
        *(_QWORD *)(a1 + 32) = v4 + 2;
        if ( v17 )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("-", 1, *(_QWORD *)(a1 + 16));
      }
      goto LABEL_22;
    }
    switch ( v8 )
    {
      case 'b':
        if ( sub_1370(a1, &v22) == 1 )
        {
          if ( !v22 )
          {
            if ( !*(_QWORD *)(a1 + 40) )
            {
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("false", 5, *(_QWORD *)(a1 + 16));
              v11 = *(_DWORD *)(a1 + 40);
              goto LABEL_24;
            }
            goto LABEL_41;
          }
          if ( v22 == 1 )
          {
            if ( !*(_QWORD *)(a1 + 40) )
            {
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("true", 4, *(_QWORD *)(a1 + 16));
              v11 = *(_DWORD *)(a1 + 40);
              goto LABEL_24;
            }
            goto LABEL_41;
          }
        }
        break;
      case 'c':
        if ( (unsigned __int64)(sub_1370(a1, &v22) - 1) <= 7 )
        {
          v14 = *(_QWORD *)(a1 + 40);
          if ( v14 )
          {
            v15 = v22;
            if ( v22 == 9 || v22 == 13 )
              goto LABEL_41;
          }
          else
          {
            (*(void (__fastcall **)(void *, __int64, _QWORD))(a1 + 24))(&unk_40C0, 1, *(_QWORD *)(a1 + 16));
            v15 = v22;
            v14 = *(_QWORD *)(a1 + 40);
            if ( v22 == 9 )
            {
              if ( v14 )
                goto LABEL_41;
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("\\t", 2, *(_QWORD *)(a1 + 16));
              v16 = *(_QWORD *)(a1 + 40);
              goto LABEL_39;
            }
            if ( v22 == 13 )
            {
              if ( v14 )
                goto LABEL_41;
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("\\r", 2, *(_QWORD *)(a1 + 16));
              v16 = *(_QWORD *)(a1 + 40);
              goto LABEL_39;
            }
          }
          if ( v15 != 10 )
          {
            if ( (unsigned __int64)(v15 - 33) > 0x5C )
            {
              if ( !v14 )
                (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("\\u{", 3, *(_QWORD *)(a1 + 16));
              __snprintf_chk(s, 17, 1, 17, "%lx", v15);
              if ( *(_QWORD *)(a1 + 40) )
                goto LABEL_41;
              v20 = strlen(s);
              (*(void (__fastcall **)(char *, size_t, _QWORD))(a1 + 24))(s, v20, *(_QWORD *)(a1 + 16));
              if ( *(_QWORD *)(a1 + 40) )
                goto LABEL_41;
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("}", 1, *(_QWORD *)(a1 + 16));
              v16 = *(_QWORD *)(a1 + 40);
              goto LABEL_39;
            }
            v21 = v15;
            if ( !v14 )
            {
              (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))(&v21, 1, *(_QWORD *)(a1 + 16));
              v16 = *(_QWORD *)(a1 + 40);
              goto LABEL_39;
            }
LABEL_41:
            v11 = *(_DWORD *)(a1 + 40);
LABEL_24:
            if ( !v11 )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                if ( !*(_QWORD *)(a1 + 40) )
                {
                  (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(": ", 2, *(_QWORD *)(a1 + 16));
                  v12 = sub_11E0(v8);
                  v13 = strlen(v12);
                  if ( !*(_QWORD *)(a1 + 40) )
                  {
                    (*(void (__fastcall **)(const char *, size_t, _QWORD))(a1 + 24))(v12, v13, *(_QWORD *)(a1 + 16));
                    v3 = *(_DWORD *)(a1 + 56);
                    goto LABEL_6;
                  }
                }
              }
            }
LABEL_19:
            v3 = *(_DWORD *)(a1 + 56);
            goto LABEL_6;
          }
          if ( v14 )
            goto LABEL_41;
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("\\n", 2, *(_QWORD *)(a1 + 16));
          v16 = *(_QWORD *)(a1 + 40);
LABEL_39:
          if ( !v16 )
            (*(void (__fastcall **)(void *, __int64, _QWORD))(a1 + 24))(&unk_40C0, 1, *(_QWORD *)(a1 + 16));
          goto LABEL_41;
        }
        break;
      case 'a':
        goto LABEL_21;
      default:
        goto LABEL_4;
    }
    *(_DWORD *)(a1 + 40) = 1;
    goto LABEL_19;
  }
  *(_QWORD *)(a1 + 32) = v4 + 1;
  v10 = sub_1430(a1);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_19;
  v18 = *(_DWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v10;
  if ( !v18 )
    sub_2200(a1);
  *(_QWORD *)(a1 + 32) = v19;
  v3 = *(_DWORD *)(a1 + 56);
LABEL_6:
  if ( v3 != -1 )
    *(_DWORD *)(a1 + 56) = v3 - 1;
  return v24 - __readfsqword(0x28u);
}
