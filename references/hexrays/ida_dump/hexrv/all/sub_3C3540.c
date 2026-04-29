unsigned __int64 __fastcall sub_3C3540(__int64 a1, unsigned __int64 a2, int a3, int a4, double a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  _BYTE *v8; // r13
  _BYTE *v9; // rbx
  char *v10; // rax
  char v11; // dl
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // rbx
  int v15; // eax
  const char *v16; // rax
  char v17; // dl
  const char *v18; // rax
  char v19; // dl
  const char *v20; // rax
  char v21; // dl
  _BYTE *v22; // r15
  const char *v23; // rsi
  _BYTE *v25; // r15
  __int64 *v26; // rsi
  __int64 v27; // rdi
  const char *v28; // rax
  char v29; // dl
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  const char *v33; // rcx
  __int64 *v34; // [rsp+10h] [rbp-58h] BYREF
  __int128 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v5 = a2 + a3;
  v36 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * a4);
  if ( a2 >= v5 )
    goto LABEL_72;
  v7 = a2;
  v8 = (_BYTE *)(v5 - 1);
  v9 = (_BYTE *)a2;
  v10 = (char *)sub_25B870(*(_DWORD *)(v6 + 8));
  if ( a2 == v5 - 1 )
  {
LABEL_8:
    *(_BYTE *)(v5 - 1) = 0;
    v9 = (_BYTE *)(v5 - 1);
    v12 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
    if ( (unsigned int)v12 > 0x20 )
    {
LABEL_9:
      a2 = v5 - (_QWORD)v9;
      goto LABEL_10;
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = *v10++;
      *v9 = v11;
      if ( !v11 )
        break;
      if ( ++v9 == v8 )
        goto LABEL_8;
    }
    v12 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
  }
  switch ( v12 )
  {
    case 0LL:
    case 9LL:
      v9 += (int)qsnprintf(v9, v5 - (_QWORD)v9, ".%d", *(_DWORD *)(v6 + 40));
      if ( *(_DWORD *)(v6 + 8) != 51 )
        goto LABEL_57;
      goto LABEL_9;
    case 8LL:
LABEL_57:
      v30 = qsnprintf(v9, v5 - (_QWORD)v9, " (m=%u)", *(unsigned int *)(v6 + 32));
      goto LABEL_58;
    case 10LL:
    case 11LL:
    case 12LL:
    case 17LL:
      goto LABEL_41;
    case 13LL:
    case 14LL:
      a2 = v5 - (_QWORD)v9;
      v9 += (int)qsnprintf(v9, v5 - (_QWORD)v9, ".%d", *(_DWORD *)(v6 + 40));
LABEL_41:
      if ( (unsigned __int64)v9 >= v5 )
        goto LABEL_74;
      v25 = v9 + 1;
      *v9 = 32;
      if ( (unsigned __int64)(v9 + 1) >= v5 )
      {
        *(_BYTE *)(v5 - 1) = 0;
        v25 = (_BYTE *)(v5 - 1);
      }
      a5 = 0.0;
      v26 = (__int64 *)&v34;
      v35 = 0;
      v34 = nullptr;
      sub_2633E0(v6, (__int64)&v34, 0);
      if ( (unsigned __int64)v35 > 1 )
      {
        v26 = v34;
        tag_remove(&v34, v34, 0);
      }
      if ( (unsigned __int64)v25 >= v5 )
      {
        if ( !under_debugger )
          sub_37DDE0(0x208u, (__int64)v26, 0.0);
LABEL_78:
        BUG();
      }
      v27 = (__int64)v34;
      v28 = (const char *)v34;
      if ( !(_QWORD)v35 )
        v28 = s1;
      if ( v25 == v8 )
      {
LABEL_65:
        *(_BYTE *)(v5 - 1) = 0;
        v9 = (_BYTE *)(v5 - 1);
        a2 = 1;
      }
      else
      {
        while ( 1 )
        {
          v29 = *v28++;
          *v25 = v29;
          if ( !v29 )
            break;
          if ( ++v25 == v8 )
            goto LABEL_65;
        }
        v9 = v25;
        a2 = v5 - (_QWORD)v25;
      }
      if ( v27 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v27);
      }
      break;
    case 30LL:
      v30 = qsnprintf(v9, v5 - (_QWORD)v9, " LABEL_%d", **(unsigned int **)(v6 + 24));
LABEL_58:
      v9 += v30;
      a2 = v5 - (_QWORD)v9;
      break;
    case 31LL:
      v31 = qsnprintf(v9, v5 - (_QWORD)v9, " %a.%zu", ***(_QWORD ***)(v6 + 24), *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL));
      goto LABEL_61;
    case 32LL:
      v32 = *(_QWORD *)(v6 + 24);
      v33 = (const char *)&unk_3F3793;
      if ( *(_BYTE *)(v32 + 64) )
        v33 = "wind";
      v31 = qsnprintf(v9, v5 - (_QWORD)v9, "%s(%zu catches)", v33, *(_QWORD *)(v32 + 32));
LABEL_61:
      v9 += v31;
      goto LABEL_9;
    default:
      goto LABEL_9;
  }
LABEL_10:
  v13 = qsnprintf(v9, a2, "\n%a", a5);
  if ( *(int *)(v6 + 8) > 69 || !*(_BYTE *)(v6 + 48) )
    return v7;
  v14 = &v9[v13];
  v15 = *(_DWORD *)(v6 + 56);
  if ( (v15 & 2) != 0 )
  {
    if ( (unsigned __int64)v14 >= v5 )
      goto LABEL_72;
    v16 = " lvalue";
    if ( v14 == v8 )
    {
      *(_BYTE *)(v5 - 1) = 0;
      v15 = *(_DWORD *)(v6 + 56);
      if ( (v15 & 4) != 0 )
      {
LABEL_67:
        *(_BYTE *)(v5 - 1) = 0;
        v14 = (_BYTE *)(v5 - 1);
        v15 = *(_DWORD *)(v6 + 56);
      }
      goto LABEL_26;
    }
    do
    {
      v17 = *v16++;
      *v14 = v17;
      if ( !v17 )
      {
        v15 = *(_DWORD *)(v6 + 56);
        goto LABEL_19;
      }
      ++v14;
    }
    while ( v14 != v8 );
    *(_BYTE *)(v5 - 1) = 0;
    v15 = *(_DWORD *)(v6 + 56);
  }
LABEL_19:
  if ( (v15 & 4) == 0 )
    goto LABEL_26;
  if ( (unsigned __int64)v14 >= v5 )
  {
LABEL_72:
    if ( !under_debugger )
      sub_37DDE0(0x208u, a2, a5);
    goto LABEL_78;
  }
  v18 = " fpu";
  if ( v14 == v8 )
  {
    *(_BYTE *)(v5 - 1) = 0;
    if ( (*(_BYTE *)(v6 + 56) & 0x10) == 0 )
      goto LABEL_71;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v19 = *v18++;
    *v14 = v19;
    if ( !v19 )
      break;
    if ( ++v14 == v8 )
      goto LABEL_67;
  }
  v15 = *(_DWORD *)(v6 + 56);
LABEL_26:
  if ( (v15 & 0x10) == 0 )
    goto LABEL_32;
  if ( (unsigned __int64)v14 >= v5 )
    goto LABEL_72;
LABEL_28:
  v20 = " cstr";
  if ( v14 == v8 )
  {
    *(_BYTE *)(v5 - 1) = 0;
LABEL_71:
    v14 = (_BYTE *)(v5 - 1);
    goto LABEL_33;
  }
  while ( 1 )
  {
    v21 = *v20++;
    *v14 = v21;
    if ( !v21 )
      break;
    if ( ++v14 == v8 )
    {
      *(_BYTE *)(v5 - 1) = 0;
      break;
    }
  }
LABEL_32:
  if ( (unsigned __int64)v14 >= v5 )
  {
LABEL_74:
    if ( !under_debugger )
      sub_37DDE0(0x206u, a2, a5);
    goto LABEL_78;
  }
LABEL_33:
  v22 = v14 + 1;
  *v14 = 10;
  if ( (unsigned __int64)(v14 + 1) >= v5 )
  {
    *(_BYTE *)(v5 - 1) = 0;
    v22 = (_BYTE *)(v5 - 1);
  }
  v35 = 0;
  v34 = nullptr;
  sub_326540((__int64 *)&v34, v6 + 48, nullptr, 0);
  v23 = s1;
  if ( (_QWORD)v35 )
    v23 = (const char *)v34;
  qstrncpy(v22, v23, v5 - (_QWORD)v22);
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v7;
}
