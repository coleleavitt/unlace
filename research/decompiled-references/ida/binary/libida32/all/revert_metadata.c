__int64 __fastcall revert_metadata(__int64 a1)
{
  unsigned int *func; // rax
  unsigned int *v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // r12d
  char *v6; // [rsp+8h] [rbp-90h] BYREF
  void *v7; // [rsp+10h] [rbp-88h] BYREF
  __int128 v8; // [rsp+18h] [rbp-80h]
  void *v9; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+38h] [rbp-60h]
  __int64 v11; // [rsp+48h] [rbp-50h]
  void *ptr; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+58h] [rbp-40h]
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  func = (unsigned int *)get_func(a1);
  if ( !func )
    return 0;
  v7 = nullptr;
  v2 = func;
  v8 = 0;
  v3 = (unsigned int)ea2node(*func);
  if ( !netnode_qgetblob(v3, &v7, 1, &stru_109000, 83) || (unsigned __int64)v8 <= 1 )
  {
LABEL_4:
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
    return 0;
  }
  v9 = nullptr;
  v11 = 0;
  v10 = 0;
  ptr = nullptr;
  v6 = (char *)v7 + 1;
  v13 = 0;
  v4 = sub_7C2230(&v9, &v6, v8 - 1, *(unsigned __int8 *)v7);
  if ( !(_BYTE)v4 || v6 != (char *)v7 + (_QWORD)v8 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
    goto LABEL_4;
  }
  apply_metadata(*v2, &v9, 65537);
  netnode_delblob((unsigned int)v3, &stru_109000, 83);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v4;
}

