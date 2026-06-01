__int64 __fastcall sub_90F90(int a1, int a2, int a3, char *a4)
{
  int v5; // r9d
  __int64 v6; // r15
  char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rdx
  void *v15; // rdi
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v18; // [rsp+10h] [rbp-50h]
  unsigned __int64 v19; // [rsp+20h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  ptr = nullptr;
  sub_90CB0((__int64 *)&ptr, a4, 0);
  if ( !(_QWORD)v18 )
  {
    v11 = ptr;
    v9 = 0;
    if ( !ptr )
      return v9;
    goto LABEL_13;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = (char *)ptr + 24 * v6;
    v8 = haystack;
    if ( *((_QWORD *)v7 + 1) )
      v8 = *(const char **)v7;
    v9 = sub_94CC0(a1, a2, (_DWORD)v8, a3, 0, v5);
    if ( (unsigned __int8)sub_955B0(v9) )
      break;
    if ( ++v6 >= (unsigned __int64)v18 )
    {
      v9 = 0;
      break;
    }
  }
  v10 = (char *)ptr;
  v11 = ptr;
  if ( ptr )
  {
    v12 = v18;
    if ( (_QWORD)v18 )
    {
      v13 = 0;
      do
      {
        v14 = &v10[24 * v13];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          j__free(v15);
          v10 = (char *)ptr;
        }
        ++v13;
        v11 = v10;
      }
      while ( v12 != v13 );
    }
LABEL_13:
    *(_QWORD *)&v18 = 0;
    j__free(v11);
  }
  return v9;
}

