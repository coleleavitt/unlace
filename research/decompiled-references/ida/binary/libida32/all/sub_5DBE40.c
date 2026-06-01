__int64 __fastcall sub_5DBE40(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  char *v10; // r12
  __int64 (__fastcall *v11)(const char *, __int64, const char *, _QWORD, _QWORD); // rax
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // edx
  unsigned int v15; // ebx
  int v16; // edx
  int named_type; // eax
  char v18; // r15
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  char v23; // al
  char v26; // [rsp+2Fh] [rbp-89h] BYREF
  char *v27; // [rsp+30h] [rbp-88h] BYREF
  char *v28; // [rsp+38h] [rbp-80h] BYREF
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  char *v30; // [rsp+48h] [rbp-70h] BYREF
  char *v31; // [rsp+50h] [rbp-68h] BYREF
  void *ptr; // [rsp+58h] [rbp-60h] BYREF
  __int128 v33; // [rsp+60h] [rbp-58h]
  _BYTE v34[4]; // [rsp+7Ch] [rbp-3Ch] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v10 = (char *)sub_5CAFE0(*(_QWORD *)(a1 + 96), (__int64)v34, *(_QWORD *)(a1 + 240), a4, a2, 0, nullptr);
  v11 = *(__int64 (__fastcall **)(const char *, __int64, const char *, _QWORD, _QWORD))(a1 + 248);
  if ( v11 )
  {
    result = v11(a2, a3, a5, 0, *(_QWORD *)(a1 + 272));
    if ( (_DWORD)result == 3 )
      return 0;
    if ( (_DWORD)result )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 240);
  v14 = (*(int *)(a1 + 728) >> 8) & 4;
  v15 = v14 | 3;
  v16 = v14 | 1;
  if ( (*(_DWORD *)(a1 + 728) & 0x100000) == 0 )
    v15 = v16;
  named_type = get_named_type(v13, (int)a2, v15, (int)&v27, (int)&v28, (int)&s2, (__int64)&v30, 0, 0);
  if ( !named_type )
  {
    v19 = *(_DWORD *)(a1 + 728);
    goto LABEL_16;
  }
  if ( v10 == v34 )
    return 0;
  if ( named_type == 2 )
  {
    v18 = *v10;
    goto LABEL_10;
  }
  v23 = sub_54FE40(*(_QWORD *)(a1 + 240), v27, v10);
  v18 = *v10;
  if ( v23 )
  {
    if ( a5 )
    {
      if ( s2 && !strcmp(a5, s2) )
        goto LABEL_27;
    }
    else if ( !s2 )
    {
LABEL_27:
      if ( (v18 & 0xF) != 0xD
        || (v18 & 0x3F) == 0x3D
        || (!((unsigned __int64)v28 | (unsigned __int64)a6) || a6 && v28 && !strcmp(a6, v28))
        && (!((unsigned __int64)v30 | (unsigned __int64)a7) || a7 && v30 && !strcmp(a7, v30)) )
      {
        return 0;
      }
    }
    v15 |= 4u;
  }
LABEL_10:
  if ( *v27 == v18 )
  {
    v26 = 0;
    v31 = v27 + 1;
    if ( (*v27 & 0xF) != 0xD || (*v27 & 0x3F) == 0x3D || (unsigned int)sub_693160(&v31, &v26) || v26 )
    {
      ptr = v10 + 1;
      if ( (*v10 & 0xF) == 0xD && (*v10 & 0x3F) != 0x3D && !(unsigned int)sub_693160(&ptr, &v26) && !v26 )
        return 0;
      v19 = *(_DWORD *)(a1 + 728);
      if ( (v19 & 0x400) == 0 )
        goto LABEL_13;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 728);
    }
    goto LABEL_41;
  }
  v19 = *(_DWORD *)(a1 + 728);
  if ( (*v27 & 0x3F) == 0x3D && v27[1] == 1 )
  {
LABEL_41:
    v15 |= 4u;
    goto LABEL_16;
  }
  if ( (v19 & 0x400) == 0 )
    goto LABEL_13;
LABEL_16:
  if ( (v19 & 0x20) != 0 )
    return 0;
  v20 = *(_QWORD *)(a1 + 96);
  v33 = 0;
  v21 = *(_QWORD *)(a1 + 240);
  ptr = nullptr;
  v22 = sub_63C350(*(_QWORD *)(v20 + 1480), v21, a2, v15, v10, a6, a5, a7, 0, 0, &ptr, 1, 0);
  if ( v22 )
  {
    if ( v22 == 9 )
    {
      set_error_string();
      if ( ptr )
      {
        *(_QWORD *)&v33 = 0;
        qfree(ptr);
      }
      return 1238;
    }
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
LABEL_13:
    set_error_string();
    return 68;
  }
  sub_5DBA80((_QWORD *)a1, 1, a2);
  if ( !ptr )
    return 0;
  *(_QWORD *)&v33 = 0;
  qfree(ptr);
  return 0;
}

