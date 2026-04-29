__int64 __fastcall sub_15CE0(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // rax
  __int64 result; // rax
  const char *v6; // rdx
  int v7; // ecx
  int v8; // r13d
  char *v9; // rbx
  int v10; // edx
  unsigned __int8 v11; // [rsp+Fh] [rbp-49h]
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = strlen(a2);
  if ( v4 <= 1 )
  {
    if ( !v4 )
      return 0;
    goto LABEL_17;
  }
  v6 = &a2[v4 - 2];
  v7 = *(unsigned __int8 *)v6;
  if ( v7 == 118 && v6[1] == 112 )
  {
    v8 = 0;
    if ( (*(_BYTE *)(a1 + 240) & 0x20) == 0 )
      return 0;
  }
  else
  {
    if ( v7 != 102 || v6[1] != 67 )
    {
LABEL_17:
      if ( a2[v4 - 1] != 70 || (*(_BYTE *)(a1 + 240) & 0x40) == 0 )
        return 0;
      v8 = 2;
      goto LABEL_8;
    }
    v8 = 1;
    if ( (*(_BYTE *)(a1 + 240) & 0x40) == 0 )
      return 0;
  }
LABEL_8:
  if ( (get_aflags(a3) & 0x800) != 0 )
    return 0;
  v13 = 0;
  s1 = nullptr;
  result = sub_9BF0(a1, (__int64 *)&s1, a2, 0);
  if ( (_BYTE)result )
  {
    if ( v8 == 1 )
    {
      result = sub_14970(a1, (__int64)&s1, a3, 1, 0.0);
    }
    else if ( v8 == 2 )
    {
      if ( (unsigned __int64)v13 > 0x24 )
      {
        v9 = s1;
        v10 = strncmp(s1, "reflection metadata field descriptor", 0x24u);
        result = 0;
        if ( !v10 )
          goto LABEL_14;
      }
      result = sub_14970(a1, (__int64)&s1, a3, 0, 0.0);
    }
    else
    {
      result = sub_146E0(a1, (__int64)&s1, a3, 0.0);
    }
  }
  v9 = s1;
LABEL_14:
  if ( v9 )
  {
    v11 = result;
    *(_QWORD *)&v13 = 0;
    qfree(v9);
    return v11;
  }
  return result;
}
