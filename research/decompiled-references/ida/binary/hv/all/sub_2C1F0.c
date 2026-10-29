__int64 __fastcall sub_2C1F0(__int64 a1, int a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbp
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebp
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-58h] BYREF
  char v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+Ch] [rbp-4Ch]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13 = 47;
  v14 = a2;
  v12 = &off_161AD8;
  ptr = nullptr;
  v16 = 0;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)sub_96080(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v16 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v12);
  v10 = sub_2A6A0((_QWORD *)(a1 + 40), v7, 10, nullptr, v8, v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_3BDB0(&v12);
  return v10;
}

