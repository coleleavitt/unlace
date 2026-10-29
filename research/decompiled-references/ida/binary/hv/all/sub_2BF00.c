__int64 __fastcall sub_2BF00(__int64 a1, _DWORD *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-78h] BYREF
  char v14; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v16; // [rsp+18h] [rbp-60h]
  bool v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v14 = 54;
  v16 = 0;
  v13 = &off_161C28;
  ptr = nullptr;
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
  v7 = *(_QWORD *)(a1 + 40);
  v17 = a2 != nullptr;
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v13);
  v11 = sub_2A6A0((_QWORD *)(a1 + 40), (__int64)v8, 55, nullptr, v9, v10);
  if ( !v11 && a2 )
    *a2 = v8[3];
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  sub_3BE30(&v13);
  return v11;
}

