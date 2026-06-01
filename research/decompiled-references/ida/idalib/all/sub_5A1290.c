unsigned __int64 __fastcall sub_5A1290(unsigned int *a1, __int64 a2, __int64 *a3, int a4, __int16 a5, unsigned int *a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v9; // rsi
  __int64 v12; // rdi
  char tinfo_property; // al
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 max_strlit_length; // rcx
  __int64 custom_argloc; // rax
  __int64 v20; // rsi
  __int64 tinfo_pdata; // rax
  char *v22; // r15
  unsigned __int64 v23; // rbx
  int flags; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int tinfo_size; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 item_end; // rax
  unsigned __int64 v31; // rax
  char v32; // [rsp+9h] [rbp-5Fh]
  unsigned int v33; // [rsp+Ch] [rbp-5Ch]
  unsigned int v34; // [rsp+Ch] [rbp-5Ch]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v6 = 0;
  v7 = a4;
  v9 = 2;
  v12 = *a3;
  v32 = HIBYTE(a5);
  v37 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v12, 2);
  v15 = 1;
  if ( (tinfo_property & 0x1F) != 0x12 )
  {
    s1 = nullptr;
    v20 = *a3;
    v36 = 0;
    if ( (v20 & 0x100) == 0 )
      return 0;
    tinfo_pdata = get_tinfo_pdata(&s1, v20, 2);
    v22 = s1;
    if ( !tinfo_pdata || !(_QWORD)v36 || strcmp(s1, "wchar_t") && strcmp(v22, "WCHAR") )
    {
      if ( v22 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v22);
      }
      return 0;
    }
    v9 = *a3;
    tinfo_size = get_tinfo_size(0, *a3, 0);
    v15 = tinfo_size;
    if ( tinfo_size == 2 )
    {
      if ( s1 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(s1);
        v15 = 2;
      }
      v6 = 1;
    }
    else
    {
      if ( s1 )
      {
        v34 = tinfo_size;
        *(_QWORD *)&v36 = 0;
        qfree(s1);
        v15 = v34;
      }
      v6 = 2;
    }
  }
  v16 = *a1;
  if ( (_DWORD)v16 == 6 )
  {
    v23 = *((_QWORD *)a1 + 1);
    v33 = v15;
    if ( !(unsigned __int8)is_loaded(v23) )
      return 0;
    flags = get_flags_ex(v23, 4);
    v25 = v33;
    v26 = flags & 0x600;
    if ( v26 == 1024 )
    {
      if ( (flags & 0xF0000000) != 0x50000000 )
        goto LABEL_19;
      if ( !a6 )
      {
        v31 = get_item_end(v23, 4, v33, 1024) - v23;
        max_strlit_length = v31;
        if ( (_DWORD)v7 == -1 || v7 == v31 / v33 )
          return max_strlit_length;
        return 0;
      }
      *a6 = get_str_type(v23);
      item_end = get_item_end(v23, 4, v28, v29);
      v25 = v33;
      max_strlit_length = item_end - v23;
      if ( (_DWORD)v7 == -1 )
        goto LABEL_8;
    }
    else
    {
      if ( (_DWORD)v7 == -1 || v26 != 512 )
      {
LABEL_19:
        if ( (v32 & 1) != 0 )
        {
          max_strlit_length = get_max_strlit_length(v23, v6, 0);
          goto LABEL_8;
        }
        return 0;
      }
      max_strlit_length = (int)v7;
      v7 = (int)v7;
    }
    if ( max_strlit_length / v25 == v7 )
      goto LABEL_8;
    return 0;
  }
  if ( (int)v16 <= 6 )
    return 0;
  custom_argloc = retrieve_custom_argloc(v16, v9, v15);
  if ( !custom_argloc )
    return 0;
  max_strlit_length = (*(__int64 (__fastcall **)(unsigned int *, __int64))(custom_argloc + 96))(a1, a2);
LABEL_8:
  if ( max_strlit_length && a6 )
    *a6 = v6;
  return max_strlit_length;
}
