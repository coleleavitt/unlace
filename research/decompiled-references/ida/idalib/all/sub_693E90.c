unsigned __int64 __fastcall sub_693E90(__int64 *a1, __int64 a2)
{
  const char *v2; // rbp
  size_t v3; // rdx
  const char *v4; // rbp
  size_t v5; // rdx
  const char *v6; // rbp
  size_t v7; // rdx
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  __int128 v10; // [rsp+8h] [rbp-70h]
  void *v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+28h] [rbp-50h]
  void *ptr; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v9 = nullptr;
  v11 = nullptr;
  ptr = nullptr;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  serialize_tinfo(&v9, &v11, &ptr, a2, 272);
  v2 = byte_23ADD24;
  if ( (_QWORD)v10 )
    v2 = (const char *)v9;
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = &byte_22F0C30;
  }
  sub_693050(a1, v2, v3);
  v4 = byte_23ADD24;
  if ( (_QWORD)v12 )
    v4 = (const char *)v11;
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = &byte_22F0C30;
  }
  sub_693050(a1, v4, v5);
  v6 = byte_23ADD24;
  if ( (_QWORD)v14 )
    v6 = (const char *)ptr;
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = &byte_22F0C30;
  }
  sub_693050(a1, v6, v7);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v15 - __readfsqword(0x28u);
}
