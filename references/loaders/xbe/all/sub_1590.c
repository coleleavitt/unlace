bool __fastcall sub_1590(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  _DWORD v3[94]; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v4; // [rsp+178h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlread(a1, v3, 376);
  result = 0;
  if ( v1 == 376 )
    return v3[0] == 1212498520;
  return result;
}
