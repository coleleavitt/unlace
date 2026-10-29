__int64 __fastcall sub_641020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  const char *v5; // rsi
  bool v7; // zf
  char v8; // r13
  __int64 (__fastcall *v9)(); // r12
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  const char *v12; // rbp
  char *v13; // rax
  char *v14; // rdi
  void *v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  int v18; // r12d
  char *v19; // rdx
  void *v20; // rax
  unsigned int v21; // [rsp+0h] [rbp-80h]
  _QWORD v24[2]; // [rsp+18h] [rbp-68h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-40h]

  v5 = "procs";
  v27 = __readfsqword(0x28u);
  v24[0] = off_2B36F28;
  v24[1] = a4;
  ptr = nullptr;
  v26 = 0;
  if ( a5 )
    v5 = "loaders";
  get_ida_subdirs(&ptr, v5, 0);
  if ( !(_QWORD)v26 )
  {
    v15 = ptr;
    result = 0;
    if ( !ptr )
      return result;
    goto LABEL_23;
  }
  v7 = a5 == 0;
  v8 = a5;
  v9 = enumerate_files;
  if ( !v7 )
    v9 = sub_82EB60;
  v10 = 0;
  do
  {
    v12 = haystack;
    v13 = (char *)ptr + 24 * v10;
    if ( *((_QWORD *)v13 + 1) )
      v12 = *(const char **)v13;
    if ( v8 )
    {
      if ( (debug & 0x10) != 0 )
        sub_3879F0();
    }
    else if ( (debug & 8) != 0 )
    {
      sub_3879F0();
    }
    result = ((__int64 (__fastcall *)(__int64, __int64, const char *, __int64, _QWORD *))v9)(a1, a2, v12, a3, v24);
    if ( (_DWORD)result )
      break;
    ++v10;
  }
  while ( v10 < (unsigned __int64)v26 );
  v14 = (char *)ptr;
  v15 = ptr;
  if ( ptr )
  {
    v16 = v26;
    if ( (_QWORD)v26 )
    {
      v17 = 0;
      v18 = result;
      do
      {
        v19 = &v14[24 * v17];
        v20 = *(void **)v19;
        if ( *(_QWORD *)v19 )
        {
          *((_QWORD *)v19 + 1) = 0;
          qfree(v20);
          v14 = (char *)ptr;
        }
        ++v17;
        v15 = v14;
      }
      while ( v16 != v17 );
      LODWORD(result) = v18;
    }
LABEL_23:
    v21 = result;
    *(_QWORD *)&v26 = 0;
    qfree(v15);
    return v21;
  }
  return result;
}
