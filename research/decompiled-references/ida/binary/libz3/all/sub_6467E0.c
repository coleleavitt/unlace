__int64 *__fastcall sub_6467E0(__int64 *a1, _QWORD *a2)
{
  size_t v3; // rbx
  unsigned __int64 v4; // rax
  _BYTE *v5; // rdi
  size_t v6; // rcx
  unsigned __int64 v8; // r8
  size_t v9; // r12
  _BYTE *v10; // rdi
  _BYTE *v11; // r12
  _BYTE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi

  v3 = a2[1];
  if ( !v3 )
  {
    v13 = a1 + 2;
    a1[1] = 0;
    *a1 = (__int64)v13;
    *v13 = 0;
    return a1;
  }
  v4 = v3 - 1;
  v5 = (_BYTE *)*a2;
  v6 = v3 - 1;
  do
  {
    if ( v5[v6] == 92 || v5[v6] == 47 )
      break;
  }
  while ( v6-- != 0 );
  while ( 1 )
  {
    v8 = v4--;
    if ( v5[v4 + 1] == 46 )
      break;
    if ( v4 == -1 )
    {
      v9 = v6 + 1;
      if ( v6 != -1 )
        goto LABEL_8;
      v9 = 0;
      goto LABEL_11;
    }
  }
  if ( v6 == -1 )
  {
    if ( v8 - 1 <= 0xFFFFFFFFFFFFFFFDLL && v3 > v8 )
      v3 = v8;
    v10 = a1 + 2;
    *a1 = (__int64)(a1 + 2);
    v11 = (_BYTE *)*a2;
    if ( v3 <= 0xF )
    {
      if ( v3 == 1 )
        goto LABEL_13;
      goto LABEL_19;
    }
  }
  else
  {
    v9 = v6 + 1;
    v4 = v8 - (v6 + 1);
    if ( v6 + 1 >= v8 )
      v4 = -1;
LABEL_8:
    if ( v3 < v9 )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    v3 -= v9;
    if ( v3 > v4 )
      v3 = v4;
LABEL_11:
    v10 = a1 + 2;
    *a1 = (__int64)(a1 + 2);
    v11 = (_BYTE *)(*a2 + v9);
    if ( v3 <= 0xF )
    {
      if ( v3 == 1 )
      {
LABEL_13:
        v3 = 1;
        *((_BYTE *)a1 + 16) = *v11;
LABEL_14:
        a1[1] = v3;
        v10[v3] = 0;
        return a1;
      }
      if ( !v3 )
        goto LABEL_14;
      goto LABEL_19;
    }
  }
  if ( (v3 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  if ( (__int64)(v3 + 1) < 0 )
    std::__throw_bad_alloc();
  v14 = operator new(v3 + 1);
  a1[2] = v3;
  *a1 = v14;
  v10 = (_BYTE *)v14;
LABEL_19:
  memcpy(v10, v11, v3);
  v15 = *a1;
  a1[1] = v3;
  *(_BYTE *)(v15 + v3) = 0;
  return a1;
}

