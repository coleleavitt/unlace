unsigned __int64 __fastcall sub_34320(__int64 *a1, _BYTE *a2, unsigned __int64 a3)
{
  size_t v3; // r12
  void *v5; // rdi
  __int64 v7; // rax
  size_t v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v3 = a3;
  v5 = a1 + 2;
  v9 = __readfsqword(0x28u);
  *a1 = (__int64)v5;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v8 = a3;
  if ( a3 > 0xF )
  {
    v7 = std::string::_M_create(a1, &v8, 0);
    *a1 = v7;
    v5 = (void *)v7;
    a1[2] = v8;
    goto LABEL_10;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
LABEL_10:
    memcpy(v5, a2, v3);
    v3 = v8;
    v5 = (void *)*a1;
    goto LABEL_6;
  }
  *((_BYTE *)a1 + 16) = *a2;
LABEL_6:
  a1[1] = v3;
  *((_BYTE *)v5 + v3) = 0;
  return v9 - __readfsqword(0x28u);
}

