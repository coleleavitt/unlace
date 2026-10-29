__int64 __fastcall sub_7A0100(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r15
  const char *v25; // rdx
  __int64 v26; // rax
  void *v30; // [rsp+18h] [rbp-40h]

  v30 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v11 = a1[3];
  v12 = v11 + 24 * a1[4];
  if ( v12 != v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = a1[3];
    if ( !a5 )
      goto LABEL_7;
    v19 = haystack;
    if ( v13 )
LABEL_13:
      v19 = *(const char **)v11;
    while ( strcasecmp(v19, a5) )
    {
      v14 += 24;
      if ( v12 == v14 )
        goto LABEL_18;
      v11 = v14;
      v19 = haystack;
      if ( *(_QWORD *)(v14 + 8) )
        goto LABEL_13;
    }
    while ( 1 )
    {
      v14 += 24;
      v11 = v14;
      if ( v12 == v14 )
        break;
      v13 = *(_QWORD *)(v14 + 8);
LABEL_7:
      v15 = haystack;
      if ( v13 )
        v15 = *(const char **)v11;
      v16 = qmakepath(a2, a3, (_DWORD)v15, a4, 0, v10);
      v17 = v16;
      if ( a6 )
      {
        if ( (unsigned __int8)sub_79E8B0(v16, a3) )
          goto LABEL_11;
      }
      else if ( (unsigned __int8)qfileexist(v16, a3) )
      {
        goto LABEL_11;
      }
    }
  }
LABEL_18:
  v20 = a1[1];
  if ( !v20 )
  {
    get_ida_subdirs(a1, "idc", 0);
    v20 = a1[1];
  }
  v21 = *a1;
  v22 = *a1 + 24 * v20;
  v23 = *a1;
  if ( v22 == *a1 )
  {
LABEL_29:
    v17 = getsysfile(a2, a3, a4, 0);
  }
  else
  {
    while ( 1 )
    {
      v25 = haystack;
      if ( *(_QWORD *)(v23 + 8) )
        v25 = *(const char **)v23;
      v26 = qmakepath(a2, a3, (_DWORD)v25, a4, 0, v21);
      v17 = v26;
      if ( a6 ? sub_79E8B0(v26, a3) : (unsigned __int8)qfileexist(v26, a3) )
        break;
      v23 += 24;
      if ( v22 == v23 )
        goto LABEL_29;
    }
  }
LABEL_11:
  qmutex_unlock(v30);
  return v17;
}
