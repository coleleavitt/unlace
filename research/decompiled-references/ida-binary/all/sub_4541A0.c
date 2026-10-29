__int64 __fastcall sub_4541A0(int a1, unsigned __int8 (__fastcall ***a2)(__int64, __int64, char **))
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int *v4; // rbp
  unsigned int v6; // r12d
  unsigned __int8 (__fastcall **v7)(__int64, __int64, char **); // rax
  char *v8; // rsi
  char is_valid_email; // al
  __int64 v10; // rdx
  unsigned __int8 (__fastcall **v12)(__int64, __int64, char **); // rax
  unsigned __int8 (__fastcall *v13)(__int64, __int64, char **); // rax
  unsigned __int8 v14; // al
  char *v15; // r12
  char *v16; // rdi
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v2 = (unsigned int)(a1 + 1);
  v21 = __readfsqword(0x28u);
  if ( (unsigned int)v2 > 7 )
    return 1;
  v3 = -222;
  if ( _bittest64(&v3, v2) )
    return 1;
  v4 = (unsigned int *)&unk_5EC790;
  while ( 1 )
  {
    v6 = *v4;
    v7 = *a2;
    s1 = nullptr;
    v18 = 0;
    v8 = (char *)v6;
    if ( !(*v7)((__int64)a2, v6, &s1) )
      goto LABEL_11;
    if ( (unsigned __int64)v18 <= 1 )
      goto LABEL_27;
    if ( v6 != 3 )
      break;
    is_valid_email = vault_is_valid_email(s1);
LABEL_10:
    if ( !is_valid_email )
      goto LABEL_27;
LABEL_11:
    if ( s1 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(s1, v8);
    }
    if ( ++v4 == (unsigned int *)&unk_5EC7A4 )
    {
      v10 = 1;
      goto LABEL_15;
    }
  }
  if ( v6 <= 3 )
  {
    if ( v6 != 1 )
      goto LABEL_11;
    v8 = (char *)&word_10;
    is_valid_email = vault_is_valid_name(s1, 16);
    goto LABEL_10;
  }
  if ( v6 - 5 > 1 )
    goto LABEL_11;
  v12 = *a2;
  s2 = nullptr;
  v20 = 0;
  v13 = *v12;
  if ( v6 == 5 )
  {
    v8 = &byte_6;
    v14 = v13((__int64)a2, 6, &s2);
  }
  else
  {
    v8 = &byte_5;
    v14 = v13((__int64)a2, 5, &s2);
  }
  v15 = s2;
  if ( v14 )
  {
    if ( (_QWORD)v20 )
    {
      v8 = s2;
      v16 = (char *)&::s1;
      if ( (_QWORD)v18 )
        goto LABEL_23;
LABEL_24:
      if ( strcmp(v16, v8) )
        goto LABEL_25;
    }
    else
    {
      v8 = (char *)&::s1;
      if ( (_QWORD)v18 )
      {
LABEL_23:
        v16 = s1;
        goto LABEL_24;
      }
    }
    if ( v15 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v15, v8);
    }
    goto LABEL_11;
  }
LABEL_25:
  if ( v15 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v15, v8);
  }
LABEL_27:
  if ( s1 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(s1, v8);
  }
  v10 = 0;
LABEL_15:
  (*a2)[11]((__int64)a2, 0, (char **)v10);
  return 1;
}
