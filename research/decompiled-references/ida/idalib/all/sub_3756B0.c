__int64 __fastcall sub_3756B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  char v5; // al
  __int64 v6; // rax
  const char *numbered_type_name; // rax
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // r12
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // r13
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+10h] [rbp-A0h] BYREF
  char *s; // [rsp+18h] [rbp-98h] BYREF
  _BYTE v22[8]; // [rsp+20h] [rbp-90h] BYREF
  _BYTE v23[8]; // [rsp+28h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-80h] BYREF
  __int16 v25; // [rsp+40h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-60h] BYREF
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int128 v28; // [rsp+60h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 8);
  v29 = __readfsqword(0x28u);
  if ( v2 <= 1 )
  {
    v20 = 0;
    s = nullptr;
    *(_QWORD *)(a2 + 8) = 0;
    v4 = *(_QWORD *)(a1 + 8);
LABEL_6:
    v25 = 257;
    v24[1] = (unsigned int)v4;
    v24[0] = get_idati();
    v5 = create_tinfo(&v20, 61, 189, v24);
    goto LABEL_7;
  }
  if ( v2 != 2 || *(_BYTE *)(a1 + 32) != 2 )
  {
    set_error_string(0, "get_local_tinfo");
    return set_qerrno(56);
  }
  v20 = 0;
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 8) = 0;
  v4 = *(_QWORD *)(a1 + 8);
  s = nullptr;
  if ( !v6 )
    goto LABEL_6;
  if ( (unsigned __int8)get_numbered_type(
                          0,
                          v4,
                          (unsigned int)v22,
                          (unsigned int)v23,
                          (unsigned int)&s,
                          (unsigned int)v24,
                          0) )
  {
    v5 = deserialize_tinfo(&v20, 0, v22, v23, v24, 0);
LABEL_7:
    if ( v5 )
    {
      sub_36E470(a2, &v20);
      numbered_type_name = (const char *)get_numbered_type_name(0, (unsigned int)v4);
      v8 = numbered_type_name;
      if ( numbered_type_name )
      {
        v26 = 7;
        ptr = nullptr;
        v28 = 0;
        v9 = strlen(numbered_type_name);
        v10 = v9 + 1;
        v11 = v9;
        ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
        *(_QWORD *)&v28 = v10;
        memmove(ptr, v8, v11);
        *((_BYTE *)ptr + v11) = 0;
        set_idcv_attr(a2, "name", &v26, 0, v12, v13);
        free_idcv(&v26);
      }
      v14 = s;
      if ( s )
      {
        if ( *s )
        {
          v26 = 7;
          ptr = nullptr;
          v28 = 0;
          v15 = strlen(s);
          v16 = v15 + 1;
          v17 = v15;
          ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
          *(_QWORD *)&v28 = v16;
          memmove(ptr, v14, v17);
          *((_BYTE *)ptr + v17) = 0;
          set_idcv_attr(a2, "cmt", &v26, 0, v18, v19);
          free_idcv(&v26);
        }
      }
    }
  }
  clear_tinfo_t(&v20);
  return 0;
}
