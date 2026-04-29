__int64 __fastcall sub_20D980(_DWORD *a1, __int64 a2, int a3)
{
  const char *v4; // rbp
  char v5; // al
  _BYTE *v6; // rdx
  __int64 result; // rax
  size_t v8; // r13
  const char *v9; // rsi
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  _BYTE *v14; // rbx
  size_t v15; // r14
  char *v16; // rax
  const char *v17; // rsi
  unsigned int v18; // eax
  size_t v19; // r15
  int v20; // r14d
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned __int8 src; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+8h] [rbp-60h] BYREF
  char *v26; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  HIDWORD(v25) = a3;
  v28 = __readfsqword(0x28u);
  v4 = *(const char **)a2;
  if ( **(_BYTE **)a2 == 97 )
  {
    v5 = v4[1];
    if ( v5 )
    {
      v6 = v4 + 1;
      while ( (unsigned __int8)(v5 - 48) <= 9u )
      {
        v5 = *++v6;
        if ( !v5 )
          return 1;
      }
    }
  }
  if ( !strncmp(v4, "varg_", 5u) )
    return 1;
  v8 = *(_QWORD *)(a2 + 8);
  if ( !v8 )
  {
    if ( !HIDWORD(v25) )
      return 0;
    v26 = nullptr;
    v27 = 0;
    goto LABEL_12;
  }
  v10 = "this";
  if ( !strcmp(v4, "this") )
    return 1;
  v15 = v8 - 1;
  if ( (int)v8 - 1 <= 2 )
  {
    if ( !HIDWORD(v25) )
      return 0;
    if ( v8 == 1 )
      goto LABEL_30;
LABEL_34:
    v18 = v4[v8 - 2];
    if ( v18 > 0x7F || v18 - 48 > 9 )
    {
LABEL_30:
      v26 = nullptr;
      v27 = 0;
      v16 = (char *)qalloc_or_throw(v8, (__int64)v10, v11, v12);
      v17 = *(const char **)a2;
      *((_QWORD *)&v27 + 1) = v8;
      v26 = v16;
      memcpy(v16, v17, v8);
      *(_QWORD *)&v27 = v8;
LABEL_39:
      v9 = v26;
      goto LABEL_13;
    }
    v19 = (int)v8 - 2;
    if ( v15 >= v19 )
    {
      v26 = nullptr;
      v27 = 0;
      if ( (_DWORD)v8 == 2 )
        goto LABEL_12;
      v8 = v19 + 1;
      v15 = v19;
    }
    else
    {
      v26 = nullptr;
      v27 = 0;
    }
    v26 = (char *)qvector_reserve((__int64)&v26, 0, v8, 1);
    *(_QWORD *)&v27 = v8;
    memmove(v26, v4, v15);
    v26[v15] = 0;
    if ( (_QWORD)v27 )
      goto LABEL_39;
LABEL_12:
    v9 = s1;
LABEL_13:
    if ( (unsigned int)sub_122A60(a1, (__int64)v9, (_DWORD *)&v25 + 1) != -1 )
    {
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree((__int64)v26);
      }
      return 1;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree((__int64)v26);
      return 0;
    }
    return 0;
  }
  if ( *v4 != 112 || v4[1] != 95 )
  {
    if ( (_DWORD)v8 == 4 || *v4 != 97 || v4[1] != 114 || v4[2] != 103 || (v10 = "argc", !strncmp(v4, "argc", 4u)) )
    {
      if ( !HIDWORD(v25) )
        return 0;
      goto LABEL_34;
    }
    v13 = v4[3];
    v14 = v4 + 3;
    if ( v4[3] )
    {
      while ( v13 <= 0x7F && isxdigit(v13) )
      {
        v13 = (char)*++v14;
        if ( !(_BYTE)v13 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  v20 = HIDWORD(v25);
  v26 = nullptr;
  v27 = 0;
  v26 = (char *)qvector_reserve((__int64)&v26, 0, v8 - 2, 1);
  *(_QWORD *)&v27 = v8 - 2;
  memmove(v26, v4 + 2, v8 - 3);
  v26[v8 - 3] = 0;
  result = sub_20D980(
             (_DWORD)a1,
             (unsigned int)&v26,
             v20,
             v21,
             v22,
             v23,
             (int)v4 + 2,
             v25,
             (__int64)v26,
             v27,
             *((__int64 *)&v27 + 1));
  if ( v26 )
  {
    src = result;
    *(_QWORD *)&v27 = 0;
    qfree((__int64)v26);
    return src;
  }
  return result;
}
