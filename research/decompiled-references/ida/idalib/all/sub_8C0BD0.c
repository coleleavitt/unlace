__int64 __fastcall sub_8C0BD0(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbp
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebp
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v11 = 17;
  v13 = 0;
  v10 = &off_2B3E218;
  ptr = nullptr;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v13 = v3;
    memmove(ptr, a2, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v10);
  v8 = sub_8BE300((_QWORD *)(a1 + 40), v5, 10, nullptr, v6, v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  sub_8D56C0(&v10);
  return v8;
}
