__int64 __fastcall sub_48DB30(__int64 *a1)
{
  __int64 v1; // rax
  void *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v1 = a1[1];
  v14 = __readfsqword(0x28u);
  v3 = (void *)a1[19];
  v4 = *(_DWORD *)(v1 + 28);
  if ( v3 )
  {
    a1[20] = 0;
    qfree(v3);
    a1[19] = 0;
    a1[21] = 0;
  }
  v5 = *a1;
  ptr = nullptr;
  v13 = 0;
  (*(void (__fastcall **)(__int64 *, void **, _QWORD))(v5 + 64))(a1, &ptr, v4);
  sub_48AA20(a1, &ptr, v4);
  v6 = (char *)ptr;
  if ( ptr )
  {
    v7 = v13;
    if ( (_QWORD)v13 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[24 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)ptr;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v6);
  }
  return merge_handler_perform_diff(a1);
}
