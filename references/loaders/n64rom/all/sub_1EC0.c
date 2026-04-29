bool __fastcall sub_1EC0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  char v3; // [rsp+0h] [rbp-1018h] BYREF
  char v4; // [rsp+1h] [rbp-1017h]
  unsigned __int64 v5; // [rsp+1008h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlread(a1, &v3, 4096);
  result = 0;
  if ( v1 == 4096 )
  {
    if ( v3 == (char)0x80 )
    {
      return v4 == 55;
    }
    else if ( v3 == 55 )
    {
      return v4 == (char)0x80;
    }
  }
  return result;
}
