__int64 __fastcall sub_2D3B0(__int64 a1, const char *a2, int a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-68h] BYREF
  char v14; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14 = 14;
  v16 = 0;
  v13 = &off_1614A8;
  ptr = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)sub_96080(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v16 = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v17 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v13);
  v11 = sub_2A6A0((_QWORD *)(a1 + 40), v8, 10, nullptr, v9, v10);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  sub_3BA70(&v13);
  return v11;
}

