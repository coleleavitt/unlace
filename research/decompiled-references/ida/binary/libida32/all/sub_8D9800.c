__int64 __fastcall sub_8D9800(int errnum, const char *src)
{
  int v2; // ebx
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  _BYTE *v9; // rsi
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  __int64 v13; // rbp
  size_t v14; // r12
  size_t v15; // r13
  _BYTE *v16; // rsi
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v2 = errnum;
  v20 = __readfsqword(0x28u);
  if ( errnum == -1 )
    v2 = *__errno_location();
  switch ( v2 )
  {
    case 2:
      set_error_string();
      return 3;
    case 17:
      set_error_string();
      return 2;
    case 1:
      set_error_string();
      return 22;
    default:
      dest = nullptr;
      v19 = 0;
      if ( src )
      {
        v3 = strlen(src);
        v4 = v3 + 1;
        v5 = v3;
        dest = (void *)qvector_reserve(&dest, 0, v3 + 1, 1);
        *(_QWORD *)&v19 = v4;
        *((_BYTE *)dest + v5) = 0;
        memmove(dest, src, v5);
        v6 = v19;
        if ( (_QWORD)v19 )
        {
          v7 = v19 + 1;
          v8 = v19 + 2;
          v6 = v19 - 1;
        }
        else
        {
          v8 = 3;
          v7 = 2;
        }
        v9 = dest;
        if ( *((_QWORD *)&v19 + 1) < v8 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v8, 1);
          v9 = dest;
        }
        *(_QWORD *)&v19 = v8;
        v9[v7] = 0;
        *(_WORD *)((char *)dest + v6) = 8250;
      }
      v10 = (const char *)qerrstr(v2);
      v11 = v10;
      if ( v10 )
      {
        v12 = strlen(v10);
        v13 = v19;
        v14 = v12;
        v15 = v12;
        if ( (_QWORD)v19 )
        {
          v13 = v19 - 1;
          v15 = v12 + v19 - 1;
        }
        v16 = dest;
        if ( *((_QWORD *)&v19 + 1) < v15 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v15 + 1, 1);
          v16 = dest;
        }
        *(_QWORD *)&v19 = v15 + 1;
        v16[v15] = 0;
        memmove((char *)dest + v13, v11, v14);
      }
      set_error_string();
      if ( dest )
      {
        *(_QWORD *)&v19 = 0;
        qfree(dest);
      }
      return 33;
  }
}

