char __fastcall sub_4D4430(__int64 a1, char *a2, char a3, __int64 a4)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  int v8; // eax
  char v10; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a2
    && *a2
    && (!a3
     || ((*(_BYTE *)(*(_QWORD *)(a1 + 16) + 8LL) & 8) != 0 || (unsigned int)sub_674200() == -1)
     && (!a4 || !sub_4D42D0(a1, a4, (__int64)a2, 3, -1, -1))) )
  {
    ptr = nullptr;
    v12 = 0;
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    *(_QWORD *)&v12 = v6;
    memmove(ptr, a2, v7);
    *((_BYTE *)ptr + v7) = 0;
    LOBYTE(v8) = validate_name(&ptr, 2, 256);
    if ( (_BYTE)v8 )
      v8 = is_c_keyword(a2) ^ 1;
    if ( ptr )
    {
      v10 = v8;
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
      LOBYTE(v8) = v10;
    }
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  return v8;
}
