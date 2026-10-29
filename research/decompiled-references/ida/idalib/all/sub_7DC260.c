__int64 __fastcall sub_7DC260(_QWORD *a1)
{
  size_t v1; // rdx
  __int64 result; // rax
  _BYTE *v3; // rbp
  size_t v4; // rbp
  __int64 v5; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-79h]
  unsigned __int8 v7; // [rsp+Fh] [rbp-79h]
  unsigned __int8 v8; // [rsp+Fh] [rbp-79h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-70h]
  void *v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  void *ptr; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-30h]
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v12 = 0;
  v11 = nullptr;
  v13 = 0;
  ptr = nullptr;
  v15 = 0;
  if ( !calc_func_metadata(0, &v11, a1, 0) )
  {
LABEL_6:
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    return 0;
  }
  *(_OWORD *)n = 0;
  src = nullptr;
  sub_7E5510(&v11, &src, 6);
  v1 = n[0];
  if ( !n[0] )
    goto LABEL_4;
  v3 = src;
  if ( n[1] < n[0] + 1 )
  {
    src = (void *)qvector_reserve(&src, src, n[0] + 1, 1);
    v1 = n[0];
    v3 = src;
  }
  memmove(v3 + 1, v3, v1);
  *v3 = 6;
  v4 = n[0] + 1;
  n[0] = v4;
  if ( v4 > 0x400000 )
  {
LABEL_4:
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    goto LABEL_6;
  }
  v5 = ea2node(*a1);
  result = netnode_setblob(v5, src, v4, 1085440, 83);
  if ( src )
  {
    v6 = result;
    n[0] = 0;
    qfree(src);
    result = v6;
  }
  if ( ptr )
  {
    v7 = result;
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
    result = v7;
  }
  if ( v11 )
  {
    v8 = result;
    *(_QWORD *)&v12 = 0;
    qfree(v11);
    return v8;
  }
  return result;
}
