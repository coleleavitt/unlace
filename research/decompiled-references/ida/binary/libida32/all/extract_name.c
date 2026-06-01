__int64 __fastcall extract_name(void **a1, _BYTE *a2, int a3)
{
  int v3; // ebx
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  char *v7; // rax
  unsigned int utf8_char; // eax
  _BYTE *v9; // rax
  _BYTE *v10; // r13
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  char v14; // al
  _BYTE *v15; // rdx
  char v16; // cl
  _BYTE *v17; // rdi
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // rbp
  size_t v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // [rsp+14h] [rbp-54h] BYREF
  void *src; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  v3 = a3;
  if ( a3 < 0 )
    return -1;
  v5 = qustrlen(a2);
  if ( v3 >= v5 )
  {
    v17 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v17);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    return 0;
  }
  else
  {
    src = a2;
    v6 = qword_2CA1698;
    skip_utf8(&src);
    v7 = (char *)src;
    if ( *(_BYTE *)src == 35 && (*(_DWORD *)(v6 + 904) & 0x3000) != 0x1000 )
    {
      v7 = (char *)src + 1;
      ++v3;
      src = (char *)src + 1;
    }
    v26[0] = v7;
    utf8_char = get_utf8_char(v26);
    v24 = utf8_char;
    if ( utf8_char == -1 )
    {
LABEL_6:
      v9 = src;
    }
    else
    {
      v14 = sub_4B6A10(*(_DWORD *)(v6 + 904), utf8_char);
      v15 = src;
      v16 = v14;
      v9 = src;
      if ( v16 && v3 > 0 )
      {
        while ( 1 )
        {
          v9 = v15;
          if ( a2 >= v15 )
            break;
          v26[0] = v15;
          if ( !(unsigned __int8)prev_utf8_char(&v24, &src, a2) )
            goto LABEL_6;
          if ( v24 == -1 || !sub_4B6A10(*(_DWORD *)(v6 + 904), v24) )
          {
            v9 = (_BYTE *)v26[0];
            src = (void *)v26[0];
            break;
          }
          if ( !--v3 )
          {
            v9 = src;
            v10 = src;
            goto LABEL_11;
          }
          v15 = src;
        }
      }
    }
    v10 = v9;
    if ( v3 < v5 )
    {
LABEL_11:
      while ( 1 )
      {
        v26[0] = v9;
        v24 = get_utf8_char(&src);
        if ( v24 == -1 || !sub_4B6A10(*(_DWORD *)(v6 + 904), v24) )
          break;
        ++v3;
        v9 = src;
        if ( v3 >= v5 )
          goto LABEL_13;
      }
      v9 = (_BYTE *)v26[0];
      src = (void *)v26[0];
LABEL_13:
      v22 = v9 - v10;
      v21 = v9 - v10 + 1;
    }
    else
    {
      v21 = 1;
      v22 = 0;
    }
    a1[1] = nullptr;
    v11 = *a1;
    if ( (unsigned __int64)a1[2] < v21 )
    {
      v18 = qvector_reserve(a1, v11, v21, 1);
      *a1 = (void *)v18;
      v11 = (_BYTE *)v18;
    }
    a1[1] = (void *)v21;
    v11[v22] = 0;
    memmove(*a1, v10, v22);
    v12 = (unsigned __int64)a1[1];
    if ( v12 > 1 )
    {
      v19 = (char *)*a1;
      v20 = v12 - 1;
      result = v12 - 1;
      if ( *((char *)*a1 + v12 - 2) != 58 )
        return result;
      if ( v20 <= 1 )
      {
        if ( !v19 )
          return result;
        a1[1] = nullptr;
        qfree(v19);
        *a1 = nullptr;
        v12 = (unsigned __int64)a1[1];
        a1[2] = nullptr;
      }
      else
      {
        if ( (unsigned __int64)a1[2] < v20 )
        {
          v23 = qvector_reserve(a1, v19, v12 - 1, 1);
          *a1 = (void *)v23;
          v19 = (char *)v23;
        }
        a1[1] = (void *)v20;
        v19[v12 - 2] = 0;
        v12 = (unsigned __int64)a1[1];
      }
    }
    result = v12 - 1;
    if ( !v12 )
      return 0;
  }
  return result;
}

