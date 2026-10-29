__int64 __fastcall sub_376D20(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  bool v8; // zf
  size_t v9; // rax
  __int64 tinfo_size; // rax
  __int64 v11; // rax
  const char *v12; // r9
  int v13; // r9d
  int tinfo_property; // edx
  const char *src; // [rsp+8h] [rbp-170h]
  size_t v16; // [rsp+10h] [rbp-168h]
  size_t n; // [rsp+18h] [rbp-160h]
  __int64 v18; // [rsp+28h] [rbp-150h] BYREF
  __int128 v19; // [rsp+30h] [rbp-148h] BYREF
  void *v20; // [rsp+40h] [rbp-138h] BYREF
  __int128 v21; // [rsp+48h] [rbp-130h]
  void *ptr; // [rsp+58h] [rbp-120h]
  __int128 v23; // [rsp+60h] [rbp-118h]
  _OWORD v24[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v25; // [rsp+90h] [rbp-E8h]
  int v26; // [rsp+98h] [rbp-E0h]
  __int64 v27; // [rsp+A0h] [rbp-D8h]
  char v28; // [rsp+A8h] [rbp-D0h]
  _BYTE v29[136]; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+138h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 104);
  v3 = *(_DWORD *)(a2 + 8);
  v30 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 136);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = v2 | 0x400;
  if ( !(unsigned __int8)sub_364C90(v6, v4, a1 + 192, v3 - 6, (__int64)v29) )
  {
    set_error_string();
    return set_qerrno(56, "add_struc_member");
  }
  if ( (unsigned __int8)is_off(v6, 0)
    || !(unsigned __int8)is_off(v6, 0)
    && !(unsigned __int8)is_enum(v6, 0)
    && !(unsigned __int8)is_stroff(v6, 0)
    && !(unsigned __int8)is_custfmt(v6, 0)
    || v4 != -1 )
  {
    v18 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v18, v5) )
    {
LABEL_19:
      clear_tinfo_t(&v18);
      return 0;
    }
    v8 = *(_QWORD *)(a1 + 48) == 0;
    v20 = nullptr;
    ptr = nullptr;
    v25 = 1;
    v26 = -1;
    v27 = 0;
    v28 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v24[0] = 0;
    if ( !v8 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        src = *(const char **)(a1 + 40);
        v9 = strlen(src);
        if ( v9 )
        {
          n = v9;
          v16 = v9 + 1;
          v20 = (void *)qvector_reserve(&v20, 0, v9 + 1, 1);
          *(_QWORD *)&v21 = v16;
          memmove(v20, src, n);
          *((_BYTE *)v20 + n) = 0;
        }
      }
    }
    tinfo_size = *(unsigned int *)(a1 + 72);
    if ( (_DWORD)tinfo_size == -1 )
    {
      tinfo_property = get_tinfo_property(v18, 16);
      v11 = 0;
      if ( !tinfo_property )
        goto LABEL_11;
      tinfo_size = get_tinfo_size(0, v18, 0);
    }
    v11 = 8 * tinfo_size;
LABEL_11:
    *(_QWORD *)&v19 = v11;
    v12 = haystack;
    if ( (_QWORD)v21 )
      v12 = (const char *)v20;
    if ( (unsigned __int8)sub_5F8DF0(*(_QWORD *)(qword_2CA1698 + 1480), v24, v6, v29, *(unsigned int *)(a1 + 168), v12) )
    {
      *((_QWORD *)&v19 + 1) = 8 * get_tinfo_size(0, *(_QWORD *)&v24[0], 0);
      sub_69DC80(*(_QWORD *)(qword_2CA1698 + 1480), (unsigned int)&v19, v6, v4, (unsigned int)v29, v13);
      *(_DWORD *)(a2 + 8) = set_tinfo_property4(&v18, 9, &v19, 1, -1, 0);
    }
    clear_tinfo_t(v24);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    goto LABEL_19;
  }
  *(_DWORD *)(a2 + 8) = -5;
  return 0;
}

