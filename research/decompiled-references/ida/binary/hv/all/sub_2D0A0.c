__int64 __fastcall sub_2D0A0(__int64 a1, const char *a2, const char *a3, char a4)
{
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r14
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebp
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-88h] BYREF
  char v19; // [rsp+8h] [rbp-80h]
  void *v20; // [rsp+10h] [rbp-78h] BYREF
  __int128 v21; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-60h] BYREF
  __int128 v23; // [rsp+30h] [rbp-58h]
  char v24; // [rsp+40h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v19 = 16;
  v21 = 0;
  v18 = &off_161508;
  v20 = nullptr;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v20 = (void *)sub_96080(&v20, 0, v6 + 1, 1);
    *(_QWORD *)&v21 = v7;
    memmove(v20, a2, v8);
    *((_BYTE *)v20 + v8) = 0;
  }
  ptr = nullptr;
  v23 = 0;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    ptr = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
    *(_QWORD *)&v23 = v10;
    memmove(ptr, a3, v11);
    *((_BYTE *)ptr + v11) = 0;
  }
  v12 = *(_QWORD *)(a1 + 40);
  v24 = a4;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v12 + 80))(a1 + 40, &v18);
  v16 = sub_2A6A0((_QWORD *)(a1 + 40), v13, 10, nullptr, v14, v15);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_3BAF0(&v18);
  return v16;
}

