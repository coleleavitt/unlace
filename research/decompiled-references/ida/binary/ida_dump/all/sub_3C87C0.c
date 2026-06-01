_BYTE *__fastcall sub_3C87C0(__int64 a1, _BYTE *a2, int a3, int a4, double a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  _BYTE *v7; // r13
  _BYTE *v8; // rbx
  char *v9; // rax
  char v10; // dl
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rbx
  int v14; // eax
  const char *v15; // rax
  char v16; // dl
  const char *v17; // rax
  char v18; // dl
  const char *v19; // rax
  char v20; // dl
  _BYTE *v22; // r15
  __int64 v23; // rdi
  const char *v24; // rax
  char v25; // dl
  const char *v26; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v5 = (unsigned __int64)&a2[a3];
  v28 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * a4);
  if ( (unsigned __int64)a2 >= v5 )
    goto LABEL_62;
  v7 = (_BYTE *)(v5 - 1);
  v8 = a2;
  v9 = (char *)sub_260470(*(_DWORD *)(v6 + 8));
  if ( a2 == (_BYTE *)(v5 - 1) )
  {
LABEL_8:
    *(_BYTE *)(v5 - 1) = 0;
    v8 = (_BYTE *)(v5 - 1);
    v11 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
    if ( (unsigned int)v11 > 0x20 )
      goto LABEL_9;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9++;
      *v8 = v10;
      if ( !v10 )
        break;
      if ( ++v8 == v7 )
        goto LABEL_8;
    }
    v11 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
  }
  switch ( v11 )
  {
    case 0LL:
    case 9LL:
      v8 += (int)qsnprintf();
      if ( *(_DWORD *)(v6 + 8) != 51 )
        goto LABEL_54;
      break;
    case 8LL:
    case 30LL:
    case 31LL:
    case 32LL:
LABEL_54:
      v8 += (int)qsnprintf();
      break;
    case 10LL:
    case 11LL:
    case 12LL:
    case 17LL:
      goto LABEL_38;
    case 13LL:
    case 14LL:
      v8 += (int)qsnprintf();
LABEL_38:
      if ( (unsigned __int64)v8 >= v5 )
        goto LABEL_64;
      v22 = v8 + 1;
      *v8 = 32;
      if ( (unsigned __int64)(v8 + 1) >= v5 )
      {
        *(_BYTE *)(v5 - 1) = 0;
        v22 = (_BYTE *)(v5 - 1);
      }
      a5 = 0.0;
      v27 = 0;
      v26 = nullptr;
      sub_267FE0(v6, (__int64)&v26, 0);
      if ( (unsigned __int64)v27 > 1 )
        tag_remove();
      if ( (unsigned __int64)v22 >= v5 )
      {
        if ( !under_debugger )
          sub_383060(0x208u, 0.0);
LABEL_68:
        BUG();
      }
      v23 = (__int64)v26;
      v24 = v26;
      if ( !(_QWORD)v27 )
        v24 = s1;
      if ( v22 == v7 )
      {
LABEL_55:
        *(_BYTE *)(v5 - 1) = 0;
        v8 = (_BYTE *)(v5 - 1);
      }
      else
      {
        while ( 1 )
        {
          v25 = *v24++;
          *v22 = v25;
          if ( !v25 )
            break;
          if ( ++v22 == v7 )
            goto LABEL_55;
        }
        v8 = v22;
      }
      if ( v23 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      break;
    default:
      break;
  }
LABEL_9:
  v12 = qsnprintf();
  if ( *(int *)(v6 + 8) > 69 || !*(_BYTE *)(v6 + 48) )
    return a2;
  v13 = &v8[v12];
  v14 = *(_DWORD *)(v6 + 56);
  if ( (v14 & 2) != 0 )
  {
    if ( (unsigned __int64)v13 >= v5 )
      goto LABEL_62;
    v15 = " lvalue";
    if ( v13 == v7 )
    {
      *(_BYTE *)(v5 - 1) = 0;
      v14 = *(_DWORD *)(v6 + 56);
      if ( (v14 & 4) != 0 )
      {
LABEL_57:
        *(_BYTE *)(v5 - 1) = 0;
        v13 = (_BYTE *)(v5 - 1);
        v14 = *(_DWORD *)(v6 + 56);
      }
      goto LABEL_25;
    }
    do
    {
      v16 = *v15++;
      *v13 = v16;
      if ( !v16 )
      {
        v14 = *(_DWORD *)(v6 + 56);
        goto LABEL_18;
      }
      ++v13;
    }
    while ( v13 != v7 );
    *(_BYTE *)(v5 - 1) = 0;
    v14 = *(_DWORD *)(v6 + 56);
  }
LABEL_18:
  if ( (v14 & 4) == 0 )
    goto LABEL_25;
  if ( (unsigned __int64)v13 >= v5 )
  {
LABEL_62:
    if ( !under_debugger )
      sub_383060(0x208u, a5);
    goto LABEL_68;
  }
  v17 = " fpu";
  if ( v13 == v7 )
  {
    *(_BYTE *)(v5 - 1) = 0;
    if ( (*(_BYTE *)(v6 + 56) & 0x10) == 0 )
      goto LABEL_61;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v18 = *v17++;
    *v13 = v18;
    if ( !v18 )
      break;
    if ( ++v13 == v7 )
      goto LABEL_57;
  }
  v14 = *(_DWORD *)(v6 + 56);
LABEL_25:
  if ( (v14 & 0x10) == 0 )
    goto LABEL_31;
  if ( (unsigned __int64)v13 >= v5 )
    goto LABEL_62;
LABEL_27:
  v19 = " cstr";
  if ( v13 == v7 )
  {
    *(_BYTE *)(v5 - 1) = 0;
LABEL_61:
    v13 = (_BYTE *)(v5 - 1);
    goto LABEL_32;
  }
  while ( 1 )
  {
    v20 = *v19++;
    *v13 = v20;
    if ( !v20 )
      break;
    if ( ++v13 == v7 )
    {
      *(_BYTE *)(v5 - 1) = 0;
      break;
    }
  }
LABEL_31:
  if ( (unsigned __int64)v13 >= v5 )
  {
LABEL_64:
    if ( !under_debugger )
      sub_383060(0x206u, a5);
    goto LABEL_68;
  }
LABEL_32:
  *v13 = 10;
  if ( (unsigned __int64)(v13 + 1) >= v5 )
    *(_BYTE *)(v5 - 1) = 0;
  v27 = 0;
  v26 = nullptr;
  sub_32B7F0((__int64 *)&v26, v6 + 48, nullptr);
  qstrncpy();
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return a2;
}
