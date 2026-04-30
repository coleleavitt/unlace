__int64 __fastcall sub_3E10A0(__int64 *a1, __int64 *a2, const char *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  char **p_s1; // rsi
  __int64 v8; // r12
  unsigned int v9; // r14d
  char *v10; // rdi
  __int64 *v12; // r12
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v15; // rax
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = 0;
  if ( a2[1] )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *a2;
      p_s1 = &s1;
      s1 = nullptr;
      v19 = 0;
      v8 = 8 * v3;
      v9 = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(v6 + 8 * v3) + 16LL))(
             *(_QWORD *)(v6 + 8 * v3),
             &s1);
      if ( (_BYTE)v9 )
      {
        v10 = (char *)&::s1;
        if ( (_QWORD)v19 )
          v10 = s1;
        p_s1 = (char **)a3;
        if ( !strcmp(v10, a3) )
          break;
      }
      if ( s1 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(s1, (const char *)p_s1);
      }
      v3 = ++v5;
      if ( v5 >= (unsigned __int64)a2[1] )
        return 0;
    }
    v12 = (__int64 *)(*a2 + v8);
    v13 = (void (__fastcall ***)(_QWORD))*a1;
    if ( *a1 )
    {
      if ( (*((_DWORD *)v13 + 2))-- == 1 )
        (**(void (__fastcall ***)(__int64))*a1)(*a1);
    }
    v15 = *v12;
    *a1 = *v12;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    if ( s1 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(s1, a3);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
