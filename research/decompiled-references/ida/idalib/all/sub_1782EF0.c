void __fastcall sub_1782EF0(char *src, char *a2)
{
  char *v2; // r15
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  char *i; // r14
  __int64 v9; // rdi
  char *v10; // r13
  unsigned __int64 v11; // rbx
  char *v12; // [rsp+0h] [rbp-40h]

  if ( src != a2 )
  {
    v2 = src + 8;
    if ( a2 != src + 8 )
    {
      v12 = &src[8 * ((unsigned __int64)(a2 - 16 - src) >> 3) + 16];
      do
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)v2;
          v6 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)src + 16LL))(*(_QWORD *)src) >> 32;
          if ( (unsigned int)v6 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5) >> 32 )
            break;
          v7 = *(_QWORD *)v2;
          for ( i = v2; ; *((_QWORD *)i + 1) = *(_QWORD *)i )
          {
            v9 = *((_QWORD *)i - 1);
            v10 = i;
            i -= 8;
            v11 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) >> 32;
            if ( (unsigned int)v11 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) >> 32 )
              break;
          }
          *(_QWORD *)v10 = v7;
          v2 += 8;
          if ( v2 == v12 )
            return;
        }
        v4 = *(_QWORD *)v2;
        if ( src != v2 )
          memmove(src + 8, src, v2 - src);
        *(_QWORD *)src = v4;
        v2 += 8;
      }
      while ( v2 != v12 );
    }
  }
}
