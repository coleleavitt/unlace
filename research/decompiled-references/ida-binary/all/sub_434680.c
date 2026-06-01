__int64 sub_434680()
{
  const char *v0; // rsi
  char v1; // al
  char *v2; // rbp
  unsigned int v3; // ebx
  char *v5; // r13
  char *v6; // r12
  char *v7; // rax
  char *v8; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v0 = "ScanOptions";
  v11 = __readfsqword(0x28u);
  s = nullptr;
  v10 = 0;
  v1 = reg_str_get(&s, "ScanOptions", 0);
  v2 = s;
  v3 = 7;
  if ( v1 )
  {
    v3 = 0;
    if ( (_QWORD)v10 )
    {
      v5 = strchr(s, 97);
      v6 = strchr(v2, 101);
      if ( v5 )
        v3 = v5 - v2 != -1;
      v7 = strchr(v2, 100);
      if ( v7 && v7 - v2 != -1 )
        v3 |= 2u;
      if ( v6 && v6 - v2 != -1 )
        v3 |= 4u;
      v0 = (_BYTE *)(&qword_70 + 3);
      v8 = strchr(v2, 115);
      if ( v8 && v8 - v2 != -1 )
        v3 |= 0x20u;
    }
  }
  if ( v2 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v2, v0);
  }
  return v3;
}
