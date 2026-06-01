void __fastcall sub_1477CB0(char *src, char *a2)
{
  char *v2; // rbx
  char *v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // ecx
  __int64 v6; // rdx
  char *v7; // rax

  if ( src != a2 )
  {
    v2 = src + 8;
    if ( a2 != src + 8 )
    {
      v3 = &src[8 * ((unsigned __int64)(a2 - 16 - src) >> 3) + 16];
      do
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)v2;
          v5 = *(_DWORD *)(*(_QWORD *)v2 + 24LL);
          if ( v5 < *(_DWORD *)(*(_QWORD *)src + 24LL) )
            break;
          v6 = *((_QWORD *)v2 - 1);
          v7 = v2 - 8;
          if ( v5 < *(_DWORD *)(v6 + 24) )
          {
            while ( 1 )
            {
              *((_QWORD *)v7 + 1) = v6;
              v6 = *((_QWORD *)v7 - 1);
              if ( *(_DWORD *)(v4 + 24) >= *(_DWORD *)(v6 + 24) )
                break;
              v7 -= 8;
            }
            *(_QWORD *)v7 = v4;
          }
          else
          {
            *(_QWORD *)v2 = v4;
          }
          v2 += 8;
          if ( v3 == v2 )
            return;
        }
        if ( src != v2 )
          memmove(src + 8, src, v2 - src);
        v2 += 8;
        *(_QWORD *)src = v4;
      }
      while ( v3 != v2 );
    }
  }
}
