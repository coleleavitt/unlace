char __fastcall sub_78D600(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  char result; // al
  const char *v5; // rdi
  _BYTE *idc_gvar; // rax
  int idcv_class_name; // edx
  size_t v8; // rbx
  void *v9; // rax
  void *v10; // rsi
  _BYTE *v11; // [rsp+8h] [rbp-40h]
  char v12; // [rsp+8h] [rbp-40h]
  void *src; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)get_idcv_attr(a1, a2, a3, 0) == 0;
  if ( *a2 == 7 )
  {
    v5 = haystack;
    if ( *((_QWORD *)a2 + 2) )
      v5 = *((const char **)a2 + 1);
    v11 = a3;
    idc_gvar = (_BYTE *)find_idc_gvar(v5);
    a2 = idc_gvar;
    if ( !idc_gvar )
    {
      set_qerrno(1532);
      return 0;
    }
    a3 = v11;
    if ( *idc_gvar != 5 )
      return (unsigned int)get_idcv_attr(a1, a2, a3, 0) == 0;
  }
  else if ( *a2 != 5 )
  {
    return (unsigned int)get_idcv_attr(a1, a2, a3, 0) == 0;
  }
  if ( a3 && *a3 )
    return (unsigned int)get_idcv_attr(a1, a2, a3, 0) == 0;
  src = nullptr;
  *(_OWORD *)n = 0;
  idcv_class_name = get_idcv_class_name(&src);
  result = 0;
  if ( !idcv_class_name )
  {
    free_idcv(a1);
    v8 = n[0];
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw(v8);
      *(_QWORD *)(a1 + 8) = v9;
      v10 = src;
      *(_QWORD *)(a1 + 24) = v8;
      memcpy(v9, v10, v8);
      *(_QWORD *)(a1 + 16) = v8;
    }
    result = 1;
  }
  if ( src )
  {
    v12 = result;
    n[0] = 0;
    qfree(src);
    return v12;
  }
  return result;
}
