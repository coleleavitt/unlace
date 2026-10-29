__int64 __fastcall sub_2ADE0(__int64 a1, const char *a2, int a3, const char *a4)
{
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbp
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // ebp
  __int64 (__fastcall **v17)(); // [rsp+0h] [rbp-88h] BYREF
  char v18; // [rsp+8h] [rbp-80h]
  void *v19; // [rsp+10h] [rbp-78h] BYREF
  __int128 v20; // [rsp+18h] [rbp-70h]
  int v21; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v18 = 81;
  v20 = 0;
  v17 = &off_162138;
  v19 = nullptr;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v19 = (void *)sub_96080(&v19, 0, v6 + 1, 1);
    *(_QWORD *)&v20 = v7;
    memmove(v19, a2, v8);
    *((_BYTE *)v19 + v8) = 0;
  }
  v21 = a3;
  ptr = nullptr;
  v23 = 0;
  if ( a4 )
  {
    v9 = strlen(a4);
    v10 = v9 + 1;
    v11 = v9;
    ptr = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
    *(_QWORD *)&v23 = v10;
    memmove(ptr, a4, v11);
    *((_BYTE *)ptr + v11) = 0;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v17);
  v15 = sub_2A6A0((_QWORD *)(a1 + 40), v12, 10, nullptr, v13, v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  sub_3C030(&v17);
  return v15;
}

