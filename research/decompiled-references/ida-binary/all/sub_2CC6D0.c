__int64 __fastcall sub_2CC6D0(__int64 a1, const char *a2, __int64 a3)
{
  char *v3; // rbp
  __int64 v5; // rdi
  const char *v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ebx
  const char *v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-60h] BYREF
  char *v12; // [rsp+8h] [rbp-58h] BYREF
  __int128 v13; // [rsp+10h] [rbp-50h]
  const char *v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h]
  unsigned __int64 v16; // [rsp+40h] [rbp-20h]

  v3 = (char *)a2;
  v11 = a3;
  v16 = __readfsqword(0x28u);
  v13 = 0;
  v12 = nullptr;
  if ( (unsigned int)get_utf8_char(&v11) == -1 )
  {
    v8 = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 728);
    v14 = nullptr;
    v15 = 0;
    (*(void (__fastcall **)(__int64, const char **))(*(_QWORD *)v5 + 40LL))(v5, &v14);
    v6 = &s1;
    if ( (_QWORD)v15 )
      v6 = v14;
    a2 = "UTF-8";
    v7 = convert_encoding(&v12, "UTF-8", v6, a3, v11 - a3, 0);
    v8 = 0;
    if ( v7 <= 0 || (_QWORD)v13 != 1 )
    {
      v9 = v14;
      if ( !v14 )
        goto LABEL_8;
      goto LABEL_7;
    }
    v9 = v14;
    v8 = 1;
    *v3 = *v12;
    if ( v9 )
    {
LABEL_7:
      *(_QWORD *)&v15 = 0;
      qfree(v9, "UTF-8");
    }
  }
LABEL_8:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, a2);
  }
  return v8;
}
