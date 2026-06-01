__int64 __fastcall sub_1E690(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  char *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 24);
  v15 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, void **, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 344LL))(
         v5,
         &ptr,
         a2,
         a3,
         a4);
  sub_1A410(a1, (unsigned int **)&ptr);
  v7 = (char *)ptr;
  if ( ptr )
  {
    v8 = v14;
    if ( (_QWORD)v14 )
    {
      v9 = 0;
      do
      {
        v10 = &v7[32 * v9];
        v11 = *((void **)v10 + 1);
        if ( v11 )
        {
          *((_QWORD *)v10 + 2) = 0;
          j__free(v11);
          v7 = (char *)ptr;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v14 = 0;
    j__free(v7);
  }
  return v6;
}

