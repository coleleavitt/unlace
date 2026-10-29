__int64 __fastcall sub_3B1A40(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 std_dirtree; // rax
  _QWORD *v6; // r12
  const char *v7; // rdx
  const char *v8; // rsi
  void *v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v3 = (unsigned int)a2;
  v14 = __readfsqword(0x28u);
  std_dirtree = get_std_dirtree(5);
  v10 = nullptr;
  ptr = nullptr;
  v11 = 0;
  v13 = 0;
  if ( !a2 )
    return v3;
  v6 = (_QWORD *)std_dirtree;
  if ( *a2 == 47 )
  {
    sub_35A790((char **)&v10);
    if ( a3 )
      goto LABEL_4;
  }
  else
  {
    sub_35A790((char **)&v10);
    if ( a3 )
    {
LABEL_4:
      sub_35A790((char **)&ptr);
      v7 = haystack;
      if ( (_QWORD)v13 )
        LODWORD(v7) = (_DWORD)ptr;
      v8 = haystack;
      if ( (_QWORD)v11 )
        LODWORD(v8) = (_DWORD)v10;
      LOBYTE(v3) = (unsigned __int8)dirtree_rename(*v6, (int)v8, (int)v7) == 0;
      goto LABEL_9;
    }
  }
  v3 = 0;
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v3;
}
