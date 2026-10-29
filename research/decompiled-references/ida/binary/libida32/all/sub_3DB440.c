void __fastcall sub_3DB440(char *src, char *a2)
{
  char *v3; // rbx
  char *v4; // r13
  unsigned int v5; // edx
  char v6; // cl
  unsigned int v7; // esi
  unsigned __int8 v8; // di
  char *i; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-34h]
  __int64 v12; // [rsp+0h] [rbp-34h]
  int v13; // [rsp+8h] [rbp-2Ch]
  int v14; // [rsp+8h] [rbp-2Ch]

  if ( src != a2 )
  {
    v3 = src + 12;
    if ( a2 != src + 12 )
    {
      v4 = &src[((a2 - 24 - src) & 0xFFFFFFFFFFFFFFFCLL) + 24];
      do
      {
        while ( 1 )
        {
          v6 = v3[4];
          if ( v6 < src[4] )
            break;
          v7 = *(_DWORD *)v3;
          if ( v6 <= src[4]
            && (v7 < *(_DWORD *)src || *(_DWORD *)src >= v7 && (unsigned __int8)v3[8] < (unsigned __int8)src[8]) )
          {
            break;
          }
          v8 = v3[8];
          v11 = *(_QWORD *)v3;
          v13 = *((_DWORD *)v3 + 2);
          for ( i = v3; ; i[20] = i[8] )
          {
            if ( v6 >= *(i - 8) )
            {
              if ( v6 > *(i - 8) )
                break;
              v5 = *((_DWORD *)i - 3);
              if ( v7 >= v5 && (v5 < v7 || v8 >= (unsigned __int8)*(i - 4)) )
                break;
            }
            v10 = *(_QWORD *)(i - 12);
            i -= 12;
            *(_QWORD *)(i + 12) = v10;
          }
          v3 += 12;
          *(_QWORD *)i = v11;
          i[8] = v13;
          if ( v3 == v4 )
            return;
        }
        v12 = *(_QWORD *)v3;
        v14 = *((_DWORD *)v3 + 2);
        if ( v3 - src <= 12 )
        {
          if ( v3 - src == 12 )
          {
            *(_QWORD *)v3 = *(_QWORD *)src;
            v3[8] = src[8];
          }
        }
        else
        {
          memmove(src + 12, src, v3 - src);
        }
        v3 += 12;
        *(_QWORD *)src = v12;
        src[8] = v14;
      }
      while ( v3 != v4 );
    }
  }
}

