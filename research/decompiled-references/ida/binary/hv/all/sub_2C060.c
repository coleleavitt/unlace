__int64 __fastcall sub_2C060(__int64 a1, __int64 *a2, const char *a3, int a4)
{
  size_t v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  __int64 v13; // rax
  int v14; // edx
  __int64 (__fastcall **v15)(); // [rsp+8h] [rbp-78h] BYREF
  char v16; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+18h] [rbp-68h] BYREF
  __int128 v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-50h]
  bool v20; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v16 = 52;
  v18 = 0;
  v15 = &off_161BC8;
  ptr = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    ptr = (void *)sub_96080(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v18 = v6 + 1;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v19 = a4;
  v20 = a2 != nullptr;
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v15);
  v11 = sub_2A6A0((_QWORD *)(a1 + 40), (__int64)v8, 53, nullptr, v9, v10);
  if ( !v11 )
  {
    v13 = operator new(0x18u);
    v14 = v8[3];
    *(_QWORD *)(v13 + 8) = a1 + 40;
    *(_QWORD *)v13 = &off_1612B0;
    *(_DWORD *)(v13 + 16) = v14;
    *a2 = v13;
  }
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  sub_3BDF0(&v15);
  return v11;
}

