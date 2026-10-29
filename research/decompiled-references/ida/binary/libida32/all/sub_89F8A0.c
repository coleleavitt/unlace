__int64 __fastcall sub_89F8A0(__int64 a1, const char *a2, int a3)
{
  __int64 v3; // r13
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r12
  unsigned int v8; // ebx
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-68h] BYREF
  char v11; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  int v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v15 = __readfsqword(0x28u);
  v11 = 91;
  v13 = 0;
  v10 = &off_2B15058;
  ptr = nullptr;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    *(_QWORD *)&v13 = v6;
    memmove(ptr, a2, v7);
    *((_BYTE *)ptr + v7) = 0;
  }
  v14 = a3;
  v8 = sub_89F820(v3, (char *)&v10);
  sub_8B1F20(&v10);
  return v8;
}

