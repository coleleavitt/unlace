unsigned __int64 __fastcall sub_3070(__int64 a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  char v9; // r12
  unsigned __int64 v10; // rsi
  int v11; // r11d
  int v12; // r13d
  __int64 v13; // r12
  unsigned __int8 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r12
  __int64 v36; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+8h] [rbp-90h]
  unsigned __int8 v38; // [rsp+1Fh] [rbp-79h] BYREF
  unsigned __int64 v39; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  unsigned __int64 v42; // [rsp+38h] [rbp-60h]
  char s[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    v4 = v3 + 1;
    *(_DWORD *)(a1 + 56) = v4;
    if ( v4 > 0x400 )
      goto LABEL_5;
  }
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v5 >= v6 || (v8 = *(_QWORD *)a1, (v9 = *(_BYTE *)(*(_QWORD *)a1 + v5)) == 0) )
  {
LABEL_4:
    v4 = *(_DWORD *)(a1 + 56);
LABEL_5:
    *(_DWORD *)(a1 + 40) = 1;
    goto LABEL_6;
  }
  v10 = v5 + 1;
  *(_QWORD *)(a1 + 32) = v5 + 1;
  switch ( v9 )
  {
    case 'B':
      v33 = sub_1430(a1);
      if ( *(_DWORD *)(a1 + 44) )
        goto LABEL_60;
      v34 = *(_DWORD *)(a1 + 40);
      v35 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v33;
      if ( !v34 )
        sub_3070(a1, a2);
      *(_QWORD *)(a1 + 32) = v35;
      v4 = *(_DWORD *)(a1 + 56);
      break;
    case 'C':
      v27 = 0;
      if ( v6 > v10 && *(_BYTE *)(v8 + v5 + 1) == 115 )
      {
        *(_QWORD *)(a1 + 32) = v5 + 2;
        v27 = sub_1430(a1) + 1;
      }
      sub_1530(&v39, (__int64 *)a1);
      sub_1A50(a1, a1, v28, v29, v30, v31, (char *)v39, v40, v41, v42);
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_60;
      if ( !*(_QWORD *)(a1 + 40) )
        (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("[", 1, *(_QWORD *)(a1 + 16));
      __snprintf_chk(s, 17, 1, 17, "%lx", v27);
      if ( *(_QWORD *)(a1 + 40) )
        goto LABEL_60;
      v32 = strlen(s);
      (*(void (__fastcall **)(char *, size_t, _QWORD))(a1 + 24))(s, v32, *(_QWORD *)(a1 + 16));
      if ( *(_QWORD *)(a1 + 40) )
        goto LABEL_60;
      (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("]", 1, *(_QWORD *)(a1 + 16));
      v4 = *(_DWORD *)(a1 + 56);
      break;
    case 'I':
      if ( !*(_DWORD *)(a1 + 40) )
        sub_3070(a1, a2);
      if ( !a2 )
        goto LABEL_49;
      if ( *(_QWORD *)(a1 + 40) )
        goto LABEL_95;
      (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("::", 2, *(_QWORD *)(a1 + 16));
LABEL_49:
      if ( *(_QWORD *)(a1 + 40) )
      {
LABEL_95:
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_60;
      }
      else
      {
        (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("<", 1, *(_QWORD *)(a1 + 16));
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_21;
      }
      v25 = 0;
      do
      {
        v26 = *(_QWORD *)(a1 + 32);
        if ( v26 < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + v26) == 69 )
        {
          *(_QWORD *)(a1 + 32) = v26 + 1;
          goto LABEL_21;
        }
        if ( v25 && !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
        ++v25;
        sub_3000(a1);
      }
      while ( !*(_DWORD *)(a1 + 40) );
      goto LABEL_21;
    case 'M':
    case 'X':
      if ( v6 > v10 && *(_BYTE *)(v8 + v5 + 1) == 115 )
      {
        *(_QWORD *)(a1 + 32) = v5 + 2;
        sub_1430(a1);
      }
      v11 = *(_DWORD *)(a1 + 40);
      v12 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 44) = 1;
      if ( !v11 )
        sub_3070(a1, a2);
      *(_DWORD *)(a1 + 44) = v12;
      goto LABEL_15;
    case 'N':
      if ( v6 > v10 && (v14 = *(_BYTE *)(v8 + v5 + 1)) != 0 )
      {
        v13 = v14;
        *(_QWORD *)(a1 + 32) = v5 + 2;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 1;
        v13 = 0;
        v14 = 0;
      }
      v38 = v14;
      if ( (byte_4220[2 * v13] & 0x88) == 0 )
        goto LABEL_4;
      if ( !*(_DWORD *)(a1 + 40) )
      {
        sub_3070(a1, a2);
        v13 = v38;
        v6 = *(_QWORD *)(a1 + 8);
        v14 = v38;
      }
      v15 = *(_QWORD *)(a1 + 32);
      v16 = 0;
      if ( v6 > v15 && *(_BYTE *)(*(_QWORD *)a1 + v15) == 115 )
      {
        *(_QWORD *)(a1 + 32) = v15 + 1;
        v16 = sub_1430(a1) + 1;
      }
      v17 = a1;
      sub_1530(&v39, (__int64 *)a1);
      v21 = v39;
      v22 = v41;
      if ( (char)byte_4220[2 * v13] < 0 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        if ( v23 )
        {
          if ( v14 != 83 )
            goto LABEL_86;
        }
        else
        {
          v36 = v41;
          v17 = 3;
          (*(void (__fastcall **)(void *, __int64, _QWORD))(a1 + 24))(&unk_4190, 3, *(_QWORD *)(a1 + 16));
          v18 = v38;
          v23 = *(_QWORD *)(a1 + 40);
          v22 = v36;
          if ( v38 == 67 )
          {
            if ( !v23 )
            {
              v17 = 7;
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("closure", 7, *(_QWORD *)(a1 + 16));
              v22 = v36;
              goto LABEL_35;
            }
            goto LABEL_86;
          }
          if ( v38 != 83 )
          {
            if ( !v23 )
            {
              v17 = 1;
              (*(void (__fastcall **)(unsigned __int8 *, __int64, _QWORD))(a1 + 24))(&v38, 1, *(_QWORD *)(a1 + 16));
              v22 = v36;
LABEL_35:
              if ( !(v22 | v21) )
                goto LABEL_39;
              if ( !*(_QWORD *)(a1 + 40) )
              {
                v17 = 1;
                (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))(":", 1, *(_QWORD *)(a1 + 16));
              }
              goto LABEL_38;
            }
            goto LABEL_86;
          }
        }
        if ( !v23 )
        {
          v37 = v22;
          v17 = 4;
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("shim", 4, *(_QWORD *)(a1 + 16));
          v22 = v37;
          goto LABEL_35;
        }
LABEL_86:
        if ( !(v22 | v21) )
        {
LABEL_39:
          if ( !*(_QWORD *)(a1 + 40) )
            (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("#", 1, *(_QWORD *)(a1 + 16));
          __snprintf_chk(s, 21, 1, 21, "%lu", v16);
          if ( !*(_QWORD *)(a1 + 40) )
          {
            v24 = strlen(s);
            (*(void (__fastcall **)(char *, size_t, _QWORD))(a1 + 24))(s, v24, *(_QWORD *)(a1 + 16));
            if ( !*(_QWORD *)(a1 + 40) )
            {
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("}", 1, *(_QWORD *)(a1 + 16));
              v4 = *(_DWORD *)(a1 + 56);
              break;
            }
          }
          goto LABEL_60;
        }
LABEL_38:
        sub_1A50(a1, v17, v18, v22, v19, v20, (char *)v39, v40, v41, v42);
        goto LABEL_39;
      }
      if ( !(v41 | v39) )
        goto LABEL_60;
      if ( !*(_QWORD *)(a1 + 40) )
      {
        v17 = 2;
        (*(void (__fastcall **)(const char *, __int64, _QWORD, __int64))(a1 + 24))("::", 2, *(_QWORD *)(a1 + 16), v41);
      }
      sub_1A50(a1, v17, v18, v22, v19, v20, (char *)v39, v40, v41, v42);
      v4 = *(_DWORD *)(a1 + 56);
      break;
    case 'Y':
LABEL_15:
      if ( !*(_QWORD *)(a1 + 40) )
        (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("<", 1, *(_QWORD *)(a1 + 16));
      sub_2670(a1);
      if ( v9 == 77 )
        goto LABEL_21;
      if ( *(_QWORD *)(a1 + 40) )
      {
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_60;
      }
      else
      {
        (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(" as ", 4, *(_QWORD *)(a1 + 16));
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_21;
      }
      sub_3070(a1, 0);
LABEL_21:
      if ( !*(_QWORD *)(a1 + 40) )
      {
        (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(">", 1, *(_QWORD *)(a1 + 16));
        v4 = *(_DWORD *)(a1 + 56);
        break;
      }
LABEL_60:
      v4 = *(_DWORD *)(a1 + 56);
      break;
    default:
      goto LABEL_4;
  }
LABEL_6:
  if ( v4 != -1 )
    *(_DWORD *)(a1 + 56) = v4 - 1;
  return v44 - __readfsqword(0x28u);
}
