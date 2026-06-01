__int64 __fastcall sub_371CE0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // r12d
  char v5; // al
  int v6; // eax
  const char *numbered_type_name; // rax
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r13
  char *v12; // r12
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r13
  __int64 v16; // [rsp+10h] [rbp-A0h] BYREF
  char *s; // [rsp+18h] [rbp-98h] BYREF
  _BYTE v18[8]; // [rsp+20h] [rbp-90h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-80h] BYREF
  __int16 v21; // [rsp+40h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-60h] BYREF
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int128 v24; // [rsp+60h] [rbp-50h]
  unsigned __int64 v25; // [rsp+78h] [rbp-38h]

  v2 = *(_DWORD *)(a2 + 8);
  v25 = __readfsqword(0x28u);
  if ( v2 <= 1 )
  {
    v16 = 0;
    s = nullptr;
    *(_DWORD *)(a2 + 8) = 0;
    v4 = *(_DWORD *)(a1 + 8);
LABEL_6:
    v21 = 257;
    v20[1] = v4;
    v20[0] = get_idati();
    v5 = create_tinfo(&v16, 61, 189, v20);
    goto LABEL_7;
  }
  if ( v2 != 2 || *(_BYTE *)(a1 + 32) != 2 )
  {
    set_error_string();
    return set_qerrno(56, "get_local_tinfo");
  }
  v16 = 0;
  v6 = *(_DWORD *)(a1 + 40);
  s = nullptr;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v6 )
    goto LABEL_6;
  if ( (unsigned __int8)get_numbered_type(0, v4, (int)v18, (int)v19, (int)&s, (int)v20, 0) )
  {
    v5 = deserialize_tinfo(&v16, 0, v18, v19, v20, 0);
LABEL_7:
    if ( v5 )
    {
      sub_36ACE0(a2, &v16);
      numbered_type_name = (const char *)get_numbered_type_name(0, v4);
      v8 = numbered_type_name;
      if ( numbered_type_name )
      {
        v22 = 7;
        ptr = nullptr;
        v24 = 0;
        v9 = strlen(numbered_type_name);
        v10 = v9 + 1;
        v11 = v9;
        ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
        *(_QWORD *)&v24 = v10;
        memmove(ptr, v8, v11);
        *((_BYTE *)ptr + v11) = 0;
        set_idcv_attr();
        free_idcv(&v22);
      }
      v12 = s;
      if ( s )
      {
        if ( *s )
        {
          v22 = 7;
          ptr = nullptr;
          v24 = 0;
          v13 = strlen(s);
          v14 = v13 + 1;
          v15 = v13;
          ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
          *(_QWORD *)&v24 = v14;
          memmove(ptr, v12, v15);
          *((_BYTE *)ptr + v15) = 0;
          set_idcv_attr();
          free_idcv(&v22);
        }
      }
    }
  }
  clear_tinfo_t(&v16);
  return 0;
}

