unsigned __int64 __fastcall sub_48D900(__int64 *a1, const char *a2)
{
  _BYTE *v2; // rax
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r13
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  v2 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v2;
  *(_QWORD *)&v8 = 6;
  *(_DWORD *)v2 = 1735287122;
  v2[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  sub_4790E0(a1, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  ptr = nullptr;
  v8 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v8 = v4;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
  }
  sub_4790E0(a1, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
