__int64 __fastcall sub_5F7CE0(
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
  const char *v23; // rsi
  char v24; // al
  char v27; // [rsp+2Fh] [rbp-89h] BYREF
  char *v28; // [rsp+30h] [rbp-88h] BYREF
  char *v29; // [rsp+38h] [rbp-80h] BYREF
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  char *v31; // [rsp+48h] [rbp-70h] BYREF
  char *v32; // [rsp+50h] [rbp-68h] BYREF
  void *ptr; // [rsp+58h] [rbp-60h] BYREF
  __int128 v34; // [rsp+60h] [rbp-58h]
  _BYTE v35[4]; // [rsp+7Ch] [rbp-3Ch] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v10 = (char *)sub_5E6DC0(*(_QWORD *)(a1 + 104), (__int64)v35, *(_QWORD *)(a1 + 248), a4, a2, 0, nullptr);
  v11 = *(__int64 (__fastcall **)(const char *, __int64, const char *, _QWORD, _QWORD))(a1 + 256);
  if ( v11 )
  {
    result = v11(a2, a3, a5, 0, *(_QWORD *)(a1 + 280));
    if ( (_DWORD)result == 3 )
      return 0;
    if ( (_DWORD)result )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 248);
  v14 = (*(int *)(a1 + 744) >> 8) & 4;
  v15 = v14 | 3;
  v16 = v14 | 1;
  if ( (*(_DWORD *)(a1 + 744) & 0x100000) == 0 )
    v15 = v16;
  named_type = get_named_type(
                 v13,
                 (_DWORD)a2,
                 v15,
                 (unsigned int)&v28,
                 (unsigned int)&v29,
                 (unsigned int)&s2,
                 (__int64)&v31,
                 0,
                 0);
  if ( !named_type )
  {
    v19 = *(_DWORD *)(a1 + 744);
    goto LABEL_16;
  }
  if ( v10 == v35 )
    return 0;
  if ( named_type == 2 )
  {
    v18 = *v10;
    goto LABEL_10;
  }
  v24 = sub_5695E0(*(_QWORD *)(a1 + 248), v28, v10);
  v18 = *v10;
  if ( v24 )
  {
    if ( a5 )
    {
      if ( s2 && !strcmp(a5, s2) )
        goto LABEL_29;
    }
    else if ( !s2 )
    {
LABEL_29:
      if ( (v18 & 0xF) != 0xD
        || (v18 & 0x3F) == 0x3D
        || (!((unsigned __int64)v29 | (unsigned __int64)a6) || a6 && v29 && !strcmp(a6, v29))
        && (!((unsigned __int64)v31 | (unsigned __int64)a7) || a7 && v31 && !strcmp(a7, v31)) )
      {
        return 0;
      }
    }
    v15 |= 4u;
  }
LABEL_10:
  if ( *v28 == v18 )
  {
    v27 = 0;
    v32 = v28 + 1;
    if ( (*v28 & 0xF) != 0xD || (*v28 & 0x3F) == 0x3D || (unsigned int)sub_6B38E0(&v32, &v27) || v27 )
    {
      ptr = v10 + 1;
      if ( (*v10 & 0xF) == 0xD && (*v10 & 0x3F) != 0x3D && !(unsigned int)sub_6B38E0(&ptr, &v27) && !v27 )
        return 0;
      v19 = *(_DWORD *)(a1 + 744);
      if ( (v19 & 0x400) == 0 )
        goto LABEL_13;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 744);
    }
    goto LABEL_43;
  }
  v19 = *(_DWORD *)(a1 + 744);
  if ( (*v28 & 0x3F) == 0x3D && v28[1] == 1 )
  {
LABEL_43:
    v15 |= 4u;
    goto LABEL_16;
  }
  if ( (v19 & 0x400) == 0 )
    goto LABEL_13;
LABEL_16:
  if ( (v19 & 0x20) != 0 )
    return 0;
  v20 = *(_QWORD *)(a1 + 104);
  v34 = 0;
  v21 = *(_QWORD *)(a1 + 248);
  ptr = nullptr;
  v22 = sub_659B40(*(_QWORD *)(v20 + 1672), v21, a2, v15, v10, a6, a5, a7, 0, 0, &ptr, 1, 0);
  if ( v22 )
  {
    if ( v22 == 9 )
    {
      v23 = haystack;
      if ( (_QWORD)v34 )
        v23 = (const char *)ptr;
      set_error_string(0, v23);
      if ( ptr )
      {
        *(_QWORD *)&v34 = 0;
        qfree(ptr);
      }
      return 1238;
    }
    if ( ptr )
    {
      *(_QWORD *)&v34 = 0;
      qfree(ptr);
    }
LABEL_13:
    set_error_string(0, a2);
    return 68;
  }
  sub_5F7920((_QWORD *)a1, 1, a2);
  if ( !ptr )
    return 0;
  *(_QWORD *)&v34 = 0;
  qfree(ptr);
  return 0;
}
