__int64 __fastcall range_t_print(int *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // r12d
  const char *v6; // r13
  int v7; // r9d
  const char *v8; // rcx
  __int64 v9; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  void *v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = a1[1];
    v5 = *a1;
    ptr = nullptr;
    v16 = 0;
    if ( v4 != -1 )
    {
      sub_3573A0((char **)&ptr);
      goto LABEL_4;
    }
  }
  else
  {
    ptr = nullptr;
    v5 = -1;
    v16 = 0;
  }
  v11 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
  ptr = v11;
  *(_QWORD *)&v16 = 8;
  *v11 = 1094992194;
  *(_DWORD *)((char *)v11 + 3) = 1380205633;
  *((_BYTE *)ptr + 7) = 0;
LABEL_4:
  v6 = haystack;
  if ( (_QWORD)v16 )
    LODWORD(v6) = (_DWORD)ptr;
  v13 = nullptr;
  v14 = 0;
  if ( v5 == -1 )
  {
    v12 = (_DWORD *)qvector_reserve(&v13, 0, 8, 1);
    v13 = v12;
    *(_QWORD *)&v14 = 8;
    *v12 = 1094992194;
    *(_DWORD *)((char *)v12 + 3) = 1380205633;
    *((_BYTE *)v13 + 7) = 0;
  }
  else
  {
    sub_3573A0((char **)&v13);
  }
  v8 = haystack;
  if ( (_QWORD)v14 )
    LODWORD(v8) = (_DWORD)v13;
  v9 = (int)qsnprintf(a2, a3, (int)"%s..%s", (int)v8, (int)v6, v7, (char)v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v9;
}

