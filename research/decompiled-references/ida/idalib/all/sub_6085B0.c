unsigned __int64 __fastcall sub_6085B0(__int64 a1, __int64 *a2, __int64 a3, char **a4)
{
  __int64 v7; // rax
  char *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  char *v13; // rdi
  char *v14; // r13
  char *i; // r12
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  int v19; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a4[1] )
  {
    do
    {
      if ( sub_3792E0(0x7DFu, &v19, a3, a4) != 1 )
        break;
      v7 = v19;
      if ( v19 == -1 )
        break;
      if ( v19 == -2 )
      {
        v13 = *a4;
        if ( *a4 )
        {
          v14 = a4[1];
          if ( v14 )
          {
            for ( i = nullptr; i != v14; ++i )
            {
              v16 = &v13[80 * (_QWORD)i];
              clear_tinfo_t(v16 + 64);
              v17 = *((void **)v16 + 5);
              if ( v17 )
              {
                *((_QWORD *)v16 + 6) = 0;
                qfree(v17);
              }
              v18 = *((void **)v16 + 2);
              if ( v18 )
              {
                *((_QWORD *)v16 + 3) = 0;
                qfree(v18);
              }
              cleanup_argloc(v16);
              v13 = *a4;
            }
          }
          a4[1] = nullptr;
          qfree(v13);
          *a4 = nullptr;
          a4[2] = nullptr;
        }
        return v20 - __readfsqword(0x28u);
      }
      if ( v19 < 0 )
      {
        v7 = v19 & 0x7FFFFFFF;
        v19 &= ~0x80000000;
      }
      sub_607890(a1, a2, a3, (__int64)&(*a4)[80 * v7]);
      v8 = &(*a4)[80 * v19];
      clear_tinfo_t(v8 + 64);
      v9 = *((void **)v8 + 5);
      if ( v9 )
      {
        *((_QWORD *)v8 + 6) = 0;
        qfree(v9);
      }
      v10 = *((void **)v8 + 2);
      if ( v10 )
      {
        *((_QWORD *)v8 + 3) = 0;
        qfree(v10);
      }
      cleanup_argloc(v8);
      memmove(v8, v8 + 80, &(*a4)[80 * (_QWORD)a4[1]] - v8 - 80);
    }
    while ( a4[1]-- != (_BYTE *)&dword_0 + 1 );
  }
  return v20 - __readfsqword(0x28u);
}
