__int64 __fastcall sub_184210(__int64 a1, char *a2, __int64 a3, char *a4)
{
  unsigned __int8 v5; // al
  char *v7; // rdi
  char v8; // r13
  unsigned int v9; // eax
  int v10; // ebp
  const char *v11; // rsi
  char *v12; // rdi
  char *v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v16; // rax
  char v17; // cl
  int v18; // edx
  char *v19; // rdi
  __int64 bytes; // rax
  char *v21; // rdi
  char v22; // dl
  char *v23; // rax
  char v24; // al
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v5 = *a4;
  v27 = __readfsqword(0x28u);
  if ( v5 != 4 )
  {
    if ( v5 <= 4u )
    {
      if ( v5 == 2 )
      {
        v10 = *((_DWORD *)a4 + 1);
        v16 = sub_32AEF0(*(_QWORD *)(*((_QWORD *)a4 + 1) + 16LL), (unsigned int)v10, 0);
        v17 = v16;
        if ( v10 <= 1 )
        {
LABEL_34:
          *a2 = v17;
          return (unsigned int)v10;
        }
        v18 = 1;
        while ( 1 )
        {
          v16 >>= 8;
          if ( v17 != (_BYTE)v16 )
            break;
          if ( v10 == ++v18 )
            goto LABEL_34;
        }
      }
      else if ( v5 == 3 )
      {
        v7 = *((char **)a4 + 1);
        s1 = v7 + 1;
        if ( !*v7 )
          sub_182DA0(v7);
        v8 = *v7;
        if ( *v7 == 92 )
        {
          v24 = back_char(&s1);
          v7 = *((char **)a4 + 1);
          v8 = v24;
        }
        s1 = nullptr;
        v26 = 0;
        v9 = sub_332320(v7, 0);
        sub_1837A0((__int64)&s1, v8, v9);
        v10 = v26;
        v11 = *((const char **)a4 + 1);
        v12 = (char *)::s1;
        v13 = s1;
        if ( (_QWORD)v26 )
          v12 = s1;
        if ( !strcmp(v12, v11) )
        {
          *a2 = v8;
          if ( v13 )
          {
            *(_QWORD *)&v26 = 0;
            qfree(v13);
          }
          return (unsigned int)v10;
        }
        if ( v13 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v13);
        }
      }
      return 0;
    }
    if ( v5 != 6 )
      return 0;
    v10 = *((_DWORD *)a4 + 1);
    v14 = *((_QWORD *)a4 + 1);
    if ( (unsigned __int8)is_spec_ea(v14) || (unsigned int)sub_3439A0(a1, v14) != 1 )
      return 0;
    s1 = nullptr;
    v19 = nullptr;
    v26 = 0;
    if ( v10 )
    {
      s1 = (char *)qvector_reserve(&s1, 0, v10, 1);
      memset(&s1[v26], 0, v10 - (_QWORD)v26);
      *(_QWORD *)&v26 = v10;
      v19 = s1;
    }
    bytes = get_bytes(v19, v10, v14, 0, 0);
    v21 = s1;
    if ( v10 == bytes )
    {
      v22 = *s1;
      if ( v10 <= 1 )
      {
LABEL_37:
        *a2 = v22;
LABEL_32:
        if ( v21 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v21);
        }
        return (unsigned int)v10;
      }
      v23 = s1 + 1;
      while ( v22 == *v23 )
      {
        if ( &s1[v10 - 2 + 2] == ++v23 )
          goto LABEL_37;
      }
    }
    v10 = 0;
    goto LABEL_32;
  }
  return sub_183FD0(a1, a2, a3, *((_QWORD *)a4 + 1));
}
