char *__fastcall sub_1BC7B50(_QWORD *a1, _QWORD *a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rbp
  __int64 v8; // rbp
  char *v9; // r15
  __int64 v10; // rax
  char *v11; // r9
  __int64 v12; // rbx
  char *v13; // rax
  char *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  size_t v18; // rdx
  char *src; // [rsp+8h] [rbp-40h]

  v5 = (char *)a1;
  if ( a3 != 1 )
  {
    if ( a3 > a5 )
    {
      v8 = a3 / 2;
      v9 = (char *)&a1[a3 / 2];
      v10 = sub_1BC7B50(a1, v9, a3 / 2);
      v11 = (char *)v10;
      v12 = a3 - v8;
      if ( v12 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v9 + 64LL) )
        {
          v13 = v9;
        }
        else
        {
          v13 = v9;
          if ( !*(_DWORD *)(*(_QWORD *)v9 + 68LL) )
          {
            while ( 1 )
            {
              v13 += 8;
              if ( !--v12 )
                break;
              if ( *(_DWORD *)(*(_QWORD *)v13 + 64LL) || *(_DWORD *)(*(_QWORD *)v13 + 68LL) )
                goto LABEL_6;
            }
            v5 = &v11[v13 - v9];
            goto LABEL_7;
          }
        }
LABEL_6:
        src = v11;
        v13 = (char *)sub_1BC7B50(v13, a2, v12);
        v11 = src;
        v5 = &src[v13 - v9];
      }
      else
      {
        v5 = (char *)v10;
        v13 = v9;
      }
LABEL_7:
      sub_1BC7780(v11, v9, v13);
      return v5;
    }
    v15 = a4 + 8;
    *((_QWORD *)v15 - 1) = *a1;
    v16 = a1 + 1;
    if ( a1 + 1 == a2 )
    {
      v18 = 8;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( *(_DWORD *)(*v16 + 64LL) || *(_DWORD *)(v17 + 68) )
            break;
          ++v16;
          *a1++ = v17;
          if ( a2 == v16 )
            goto LABEL_20;
        }
        ++v16;
        *(_QWORD *)v15 = v17;
        v15 += 8;
      }
      while ( a2 != v16 );
LABEL_20:
      v5 = (char *)a1;
      v18 = v15 - a4;
    }
    if ( a4 != v15 )
      memmove(a1, a4, v18);
  }
  return v5;
}
