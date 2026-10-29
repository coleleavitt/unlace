__int64 *__fastcall sub_466140(__int64 *a1, unsigned __int64 a2, char a3)
{
  char *v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  char *v7; // rax
  void *v8; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  sub_464D10((__int64 *)&ptr, a2, a3);
  sub_40E680(a1, (__int64 *)&ptr, " ");
  v4 = (char *)ptr;
  if ( ptr )
  {
    v5 = v11;
    if ( (_QWORD)v11 )
    {
      v6 = 0;
      do
      {
        v7 = &v4[24 * v6];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v8);
          v4 = (char *)ptr;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v11 = 0;
    qfree(v4);
  }
  return a1;
}

