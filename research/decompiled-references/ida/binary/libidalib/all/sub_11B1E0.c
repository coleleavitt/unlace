__int64 __fastcall sub_11B1E0(_BYTE *a1)
{
  _BYTE *v1; // rbx
  const char *path; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r12
  unsigned int v10; // ebp
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rdx
  void *v15; // rdi
  void *v16; // rdi
  void *dest; // [rsp+0h] [rbp-1098h]
  void *v18; // [rsp+20h] [rbp-1078h]
  __int64 v19; // [rsp+40h] [rbp-1058h] BYREF
  __int128 v20; // [rsp+48h] [rbp-1050h]
  _BYTE v21[4104]; // [rsp+60h] [rbp-1038h] BYREF
  unsigned __int64 v22; // [rsp+1068h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  dest = nullptr;
  v18 = nullptr;
  if ( a1 )
  {
    v1 = a1;
    path = (const char *)get_path();
    v3 = path;
    if ( path )
    {
      v4 = strlen(path);
      v5 = v4;
      if ( v4 )
      {
        v15 = nullptr;
        if ( v4 != -1 )
        {
          dest = (void *)qvector_reserve();
          v15 = dest;
        }
        memmove(v15, v3, v5);
        *((_BYTE *)dest + v5) = 0;
      }
    }
    v6 = (const char *)get_path();
    v7 = v6;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      if ( v8 )
      {
        v16 = nullptr;
        if ( v8 != -1 )
        {
          v18 = (void *)qvector_reserve();
          v16 = v18;
        }
        memmove(v16, v7, v9);
        *((_BYTE *)v18 + v9) = 0;
      }
    }
  }
  else
  {
    if ( (unsigned __int8)is_database_flag() )
      v14 = "*.i64";
    else
      LODWORD(v14) = get_path();
    v20 = 0;
    v19 = 0;
    if ( !(unsigned __int8)sub_17A9B0((unsigned int)&v19, 1, (_DWORD)v14, 985, v12, v13, 0)
      || (v1 = v21, set_file_ext(), (unsigned __int8)qfileexist()) && (int)sub_F9610(0xFFFFFFFF, 994, v21) <= 0 )
    {
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      goto LABEL_21;
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
  }
  set_database_flag();
  v10 = sub_11B590(v1, 1);
  if ( !(_BYTE)v10 )
    goto LABEL_7;
  set_path();
  set_path();
  sub_CCA40(nullptr);
  sub_144CD0(v1, 0);
  if ( v1 != v21 )
  {
    set_path();
    set_path();
    sub_CCA40(nullptr);
  }
  sub_8F740((__int64)"Database has been saved in file %s\n", v1);
LABEL_21:
  v10 = 1;
LABEL_7:
  if ( v18 )
    qfree();
  if ( dest )
    qfree();
  return v10;
}

