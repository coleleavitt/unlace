char __fastcall sub_51CD00(__int64 a1)
{
  char result; // al
  char *v2; // rbx
  char v3; // bp
  char *v4; // rax
  char v5; // [rsp+Fh] [rbp-39h]
  char *s; // [rsp+10h] [rbp-38h] BYREF
  __int128 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 70) & 0x2F) != 0xD || !*(_QWORD *)(a1 + 32) )
    return 0;
  s = nullptr;
  v7 = 0;
  result = sub_51C8D0(a1, (__int64)&s, 0);
  v2 = s;
  if ( result )
  {
    v3 = *s;
    if ( *s != 36 )
    {
      v4 = strrchr(s, 58);
      if ( v4 )
        v3 = v4[1];
      result = v3 == 36;
    }
  }
  else
  {
    result = 1;
  }
  if ( v2 )
  {
    v5 = result;
    *(_QWORD *)&v7 = 0;
    qfree(v2);
    return v5;
  }
  return result;
}

