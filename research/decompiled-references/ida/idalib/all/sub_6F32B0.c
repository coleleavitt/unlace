void __fastcall __noreturn sub_6F32B0(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rbp
  void *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = v3;
  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  if ( a3 )
  {
    v5 = nullptr;
    if ( a3 != -1 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, a3 + 1, 1);
      v5 = ptr;
    }
    *(_QWORD *)&v7 = a3 + 1;
    memmove(v5, a2, a3);
    *((_BYTE *)ptr + a3) = 0;
  }
  sub_368890();
}
