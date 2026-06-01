__int64 __fastcall is_valid_typename(const char *src)
{
  __int64 v1; // r12
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v9; // [rsp+8h] [rbp-70h]
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-48h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( src )
  {
    ptr = nullptr;
    v11 = 0;
    v1 = qword_2CCB598;
    v9 = 0;
    v10[1] = 0x800000100LL;
    v10[0] = qword_2CCB598;
    v2 = strlen(src);
    v3 = v2 + 1;
    v4 = v2;
    ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v9 = v3;
    memmove(ptr, src, v4);
    *((_BYTE *)ptr + v4) = 0;
    LOBYTE(v5) = sub_4CBCA0(v1 + 928, &ptr, (__int64)v10);
    v6 = v5;
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
