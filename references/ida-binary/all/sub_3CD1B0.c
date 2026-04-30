unsigned __int64 __fastcall sub_3CD1B0(char *src, char *a2, __int64 (__fastcall *a3)(char *, char *))
{
  char *v3; // rbp
  char i; // al
  int v6; // ebx
  char *j; // rbx
  int v8; // eax
  int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    v3 = src + 4;
    if ( a2 != src + 4 )
    {
      for ( i = a3(v3, src); ; i = a3(v3, src) )
      {
        v6 = *(_DWORD *)v3;
        if ( i )
        {
          if ( v3 - src <= 4 )
          {
            if ( v3 - src == 4 )
              *(_DWORD *)v3 = *(_DWORD *)src;
          }
          else
          {
            memmove(src + 4, src, v3 - src);
          }
          v3 += 4;
          *(_DWORD *)src = v6;
          if ( a2 == v3 )
            return v11 - __readfsqword(0x28u);
        }
        else
        {
          v10 = *(_DWORD *)v3;
          for ( j = v3 - 4; (unsigned __int8)a3((char *)&v10, j); *((_DWORD *)j + 2) = v8 )
          {
            v8 = *(_DWORD *)j;
            j -= 4;
          }
          v3 += 4;
          *((_DWORD *)j + 1) = v10;
          if ( a2 == v3 )
            return v11 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
