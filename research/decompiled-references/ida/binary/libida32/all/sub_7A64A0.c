__int64 __fastcall sub_7A64A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  void *v8; // r14
  const char *v9; // rcx
  const char *v10; // rdx
  unsigned int v11; // ebp
  size_t v13; // r12
  void *v14; // r15
  _BYTE *v15; // rsi
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  ptr = nullptr;
  v7 = sub_79E140();
  v20 = 0;
  sub_7A5FF0(a1 + 8, (__int64)&ptr, 0);
  v8 = ptr;
  v9 = (const char *)ptr;
  if ( !(_QWORD)v20 )
    v9 = haystack;
  v10 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v10 = *(const char **)(a1 + 40);
  v11 = (*(__int64 (__fastcall **)(__int64, void **, const char *, const char *, __int64, __int64))(*(_QWORD *)v7 + 16LL))(
          v7,
          &src,
          v10,
          v9,
          a4,
          a3);
  if ( (_BYTE)v11 )
  {
    v13 = n[0];
    v14 = src;
    *(_QWORD *)(a2 + 8) = 0;
    v15 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < v13 + 1 )
    {
      v16 = qvector_reserve(a2, v15, v13 + 1, 1);
      *(_QWORD *)a2 = v16;
      v15 = (_BYTE *)v16;
    }
    *(_QWORD *)(a2 + 8) = v13 + 1;
    v15[v13] = 0;
    memmove(*(void **)a2, v14, v13);
  }
  if ( v8 )
    qfree(v8);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v11;
}

