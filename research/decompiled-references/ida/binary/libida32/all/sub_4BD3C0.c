__int64 __fastcall sub_4BD3C0(__int64 a1, char *a2, char a3, __int64 a4)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a2
    || !*a2
    || a3
    && ((*(_BYTE *)(*(_QWORD *)(a1 + 16) + 8LL) & 8) == 0 && (unsigned int)sub_656410() != -1
     || a4 && sub_4BD270(a1, a4, (__int64)a2, 3, 0xFFFFFFFF, 0xFFFFFFFF)) )
  {
    return 0;
  }
  ptr = nullptr;
  v11 = 0;
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v11 = v6;
  memmove(ptr, a2, v7);
  *((_BYTE *)ptr + v7) = 0;
  result = validate_name(&ptr, 2, 256);
  if ( (_BYTE)result )
    result = (unsigned int)is_c_keyword(a2) ^ 1;
  if ( ptr )
  {
    v9 = result;
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
    return v9;
  }
  return result;
}

