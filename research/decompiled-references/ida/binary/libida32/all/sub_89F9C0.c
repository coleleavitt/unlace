__int64 __fastcall sub_89F9C0(__int64 a1, const char *a2, int a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  unsigned int v7; // ebx
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+8h] [rbp-60h]
  void *v11; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  int v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v10 = 91;
  v12 = 0;
  v9 = &off_2B15058;
  v11 = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v11 = (void *)qvector_reserve(&v11, 0, v4 + 1, 1);
    *(_QWORD *)&v12 = v5;
    memmove(v11, a2, v6);
    *((_BYTE *)v11 + v6) = 0;
  }
  v13 = a3;
  v7 = sub_89F820(a1, (char *)&v9);
  sub_8B1F20(&v9);
  return v7;
}

