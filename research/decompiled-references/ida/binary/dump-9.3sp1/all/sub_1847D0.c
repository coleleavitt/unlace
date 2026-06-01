__int64 __fastcall sub_1847D0(__int64 a1, char *a2, __int64 a3, char *a4)
{
  unsigned __int8 v5; // al
  char *v7; // rdi
  char v8; // r13
  int v9; // eax
  int v10; // ebp
  const char *v11; // rsi
  char *v12; // rdi
  char *v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v16; // rax
  char v17; // cl
  int v18; // edx
  __int64 bytes; // rax
  char *v20; // rdi
  char v21; // dl
  char *v22; // rax
  char v23; // al
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v5 = *a4;
  v26 = __readfsqword(0x28u);
  if ( v5 != 4 )
  {
    if ( v5 <= 4u )
    {
      if ( v5 == 2 )
      {
        v10 = *((_DWORD *)a4 + 1);
        v16 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a4 + 1) + 16LL), (unsigned int)v10, 0);
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
          sub_183360(v7);
        v8 = *v7;
        if ( *v7 == 92 )
        {
          v23 = back_char();
          v7 = *((char **)a4 + 1);
          v8 = v23;
        }
        s1 = nullptr;
        v25 = 0;
        v9 = sub_331FE0(v7, 0);
        sub_183D60((__int64)&s1, v8, v9);
        v10 = v25;
        v11 = *((const char **)a4 + 1);
        v12 = (char *)::s1;
        v13 = s1;
        if ( (_QWORD)v25 )
          v12 = s1;
        if ( !strcmp(v12, v11) )
        {
          *a2 = v8;
          if ( v13 )
          {
            *(_QWORD *)&v25 = 0;
            qfree((__int64)v13);
          }
          return (unsigned int)v10;
        }
        if ( v13 )
        {
          *(_QWORD *)&v25 = 0;
          qfree((__int64)v13);
        }
      }
      return 0;
    }
    if ( v5 != 6 )
      return 0;
    v10 = *((_DWORD *)a4 + 1);
    v14 = *((_QWORD *)a4 + 1);
    if ( (unsigned __int8)is_spec_ea() || (unsigned int)sub_343460(a1, v14) != 1 )
      return 0;
    s1 = nullptr;
    v25 = 0;
    if ( v10 )
    {
      s1 = (char *)qvector_reserve((__int64)&s1, 0, v10, 1);
      memset(&s1[v25], 0, v10 - (_QWORD)v25);
      *(_QWORD *)&v25 = v10;
    }
    bytes = get_bytes();
    v20 = s1;
    if ( v10 == bytes )
    {
      v21 = *s1;
      if ( v10 <= 1 )
      {
LABEL_37:
        *a2 = v21;
LABEL_32:
        if ( v20 )
        {
          *(_QWORD *)&v25 = 0;
          qfree((__int64)v20);
        }
        return (unsigned int)v10;
      }
      v22 = s1 + 1;
      while ( v21 == *v22 )
      {
        if ( &s1[v10 - 2 + 2] == ++v22 )
          goto LABEL_37;
      }
    }
    v10 = 0;
    goto LABEL_32;
  }
  return sub_184590(a1, a2, a3, *((_QWORD *)a4 + 1));
}
