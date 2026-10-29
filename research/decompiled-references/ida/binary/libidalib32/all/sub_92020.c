unsigned __int64 __fastcall sub_92020(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  size_t v6; // rax
  size_t v7; // rbp
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax
  char v12[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1008h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  idadir();
  qmakepath();
  if ( !(unsigned __int8)qfileexist() )
    sub_91F70((__int64)"The license.txt file is missing or unreadable, cannot continue", 4096, v2, v3, v4, v5, v12[0]);
  v6 = strlen(v12);
  v7 = v6;
  if ( v6 )
  {
    v9 = *(void **)a1;
    v10 = v6 + 1;
    if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
    {
      v11 = qvector_reserve();
      *(_QWORD *)a1 = v11;
      v9 = (void *)v11;
    }
    *(_QWORD *)(a1 + 8) = v10;
    memmove(v9, v12, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return v13 - __readfsqword(0x28u);
}

