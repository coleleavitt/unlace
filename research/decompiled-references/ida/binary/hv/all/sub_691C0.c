__int64 __fastcall sub_691C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  void *ptr; // [rsp+10h] [rbp-1068h] BYREF
  __int128 v16; // [rsp+18h] [rbp-1060h]
  char s[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v18; // [rsp+1038h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  sub_94D70(s);
  sub_97680(s, 92, 47);
  ptr = nullptr;
  v16 = 0;
  v5 = strlen(s);
  v6 = v5 + 1;
  v7 = v5;
  ptr = (void *)sub_96080(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v16 = v6;
  memmove(ptr, s, v7);
  *((_BYTE *)ptr + v7) = 0;
  v11 = sub_68C40(a1, (__int64)&ptr, 1, v8, v9, v10);
  if ( v11 )
    v12 = sub_7F1F0(a2, v11, a3, a4);
  else
    v12 = 0;
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    j__free(ptr);
  }
  return v12;
}

