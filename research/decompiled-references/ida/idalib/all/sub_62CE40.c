__int64 __fastcall sub_62CE40(const void **a1, char a2, char a3)
{
  unsigned int v5; // ebx
  _BYTE *v6; // rax
  size_t v7; // r14
  char *v8; // rbp
  char *v9; // r8
  int v10; // ebp
  __int64 v12; // r15
  char *v13; // r9
  void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  char *v17; // [rsp+0h] [rbp-88h]
  char *v18; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  void *v20[2]; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v5 = sub_62CC40((__int64)a1, a2, a3);
  *(_OWORD *)v20 = 0;
  src = nullptr;
  v6 = (_BYTE *)qvector_reserve(&src, 0, 6, 1);
  src = v6;
  v20[0] = &byte_6;
  *(_DWORD *)v6 = 2019913262;
  v6[4] = 116;
  *((_BYTE *)src + 5) = 0;
  v7 = (size_t)a1[1];
  ptr = nullptr;
  v22 = 0;
  if ( v7 )
  {
    v15 = (void *)qalloc_or_throw(v7);
    v16 = *a1;
    ptr = v15;
    *((_QWORD *)&v22 + 1) = v7;
    memcpy(v15, v16, v7);
    *(_QWORD *)&v22 = v7;
  }
  v8 = (char *)v20[0];
  if ( v20[0] )
  {
    v9 = (char *)v20[0] - 1;
    if ( v20[0] != (char *)&dword_0 + 1 )
    {
      v12 = v22;
      v13 = (char *)v20[0] - 1;
      if ( (_QWORD)v22 )
      {
        v12 = v22 - 1;
        v13 = &v9[v22 - 1];
        v8 = (char *)v20[0] + v22 - 1;
      }
      v14 = ptr;
      if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)v8 )
      {
        v18 = (char *)v20[0] - 1;
        v17 = v13;
        ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
        v9 = v18;
        v14 = ptr;
        v13 = v17;
      }
      *(_QWORD *)&v22 = v8;
      v13[(_QWORD)v14] = 0;
      memcpy((char *)ptr + v12, src, (size_t)v9);
    }
  }
  v10 = sub_62CC40((__int64)&ptr, a2, a3);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    v20[0] = nullptr;
    qfree(src);
  }
  return v10 | v5;
}
