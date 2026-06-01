unsigned __int64 __fastcall sub_580D80(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  _BYTE *v2; // r12
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r12
  void *v8; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = a1[1];
  if ( v1 > 2 )
  {
    v2 = (_BYTE *)*a1;
    if ( *(_BYTE *)*a1 == 34 && v2[v1 - 2] == 34 )
    {
      v8 = nullptr;
      v9 = 0;
      if ( v1 == 3
        || (v8 = (void *)qvector_reserve(&v8, 0, v1 - 2, 1),
            *(_QWORD *)&v9 = v1 - 2,
            memmove(v8, v2 + 1, v1 - 3),
            *((char *)v8 + v1 - 3) = 0,
            !(_QWORD)v9) )
      {
        v4 = haystack;
      }
      else
      {
        v4 = (const char *)v8;
      }
      ptr = nullptr;
      v11 = 0;
      if ( v4 )
      {
        v5 = strlen(v4);
        v6 = v5 + 1;
        v7 = v5;
        ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
        *(_QWORD *)&v11 = v6;
        memmove(ptr, v4, v7);
        *((_BYTE *)ptr + v7) = 0;
      }
      user2qstr(a1, &ptr);
      if ( ptr )
      {
        *(_QWORD *)&v11 = 0;
        qfree(ptr);
      }
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v8);
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
