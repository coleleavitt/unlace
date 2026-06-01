__int64 __fastcall sub_22612B0(_BYTE *a1, size_t a2, __int64 a3)
{
  unsigned int v4; // r14d
  size_t v5; // r12
  char *v6; // r13
  const void *v7; // rax
  size_t v8; // rdx
  _BYTE *v9; // rax
  size_t v10; // rdx
  size_t v11; // rdx
  void *v12; // r13
  size_t v13; // r12
  std::_V2 *v14; // rdi
  _QWORD v16[4]; // [rsp+0h] [rbp-88h] BYREF
  __int16 v17; // [rsp+20h] [rbp-68h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v21; // [rsp+50h] [rbp-38h]

  if ( a2 )
  {
    src = a1;
    n = a2;
    v21 = 261;
    if ( !(unsigned __int8)sub_228B020(&src, 1) )
    {
      v16[0] = a1;
      v17 = 261;
      v16[1] = a2;
      if ( !(unsigned __int8)sub_228B020(v16, 3) )
      {
        std::_V2::system_category((std::_V2 *)v16);
        return 0;
      }
    }
  }
  src = a1;
  v21 = 261;
  v4 = 1;
  n = a2;
  if ( !(unsigned __int8)sub_228B020(&src, 1) )
  {
    v4 = sub_2259FA0((__int64)a1, a2);
    if ( v4 != 3 )
      v4 = 2;
  }
  src = v20;
  sub_2259A00(&src, a1, (__int64)&a1[a2]);
  v5 = n;
  v6 = (char *)src;
  v7 = (const void *)sub_228ACC0(v4);
  if ( v5 < v8 || v8 && memcmp(&v6[v5 - v8], v7, v8) )
  {
    v9 = (_BYTE *)sub_228ACC0(v4);
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL - n )
      goto LABEL_23;
    sub_9EE560(&src, v9, v10);
  }
  v11 = *(_QWORD *)(a3 + 8);
  if ( v11 > 0x7FFFFFFFFFFFFFFFLL - n )
LABEL_23:
    std::__throw_length_error("basic_string::append");
  sub_9EE560(&src, *(_BYTE **)a3, v11);
  v12 = src;
  v13 = n;
  v14 = nullptr;
  *(_QWORD *)(a3 + 8) = 0;
  if ( v13 > *(_QWORD *)(a3 + 16) )
  {
    sub_2236E10(a3, (const void *)(a3 + 24), v13, 1);
    v14 = *(std::_V2 **)(a3 + 8);
  }
  if ( v13 )
  {
    memmove((char *)v14 + *(_QWORD *)a3, v12, v13);
    v14 = *(std::_V2 **)(a3 + 8);
  }
  *(_QWORD *)(a3 + 8) = (char *)v14 + v13;
  std::_V2::system_category(v14);
  if ( src != v20 )
    operator delete(src);
  return 0;
}
