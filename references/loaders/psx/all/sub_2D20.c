bool __fastcall sub_2D20(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = qlread(a1, &v3, 4);
  result = 0;
  if ( v1 == 4 )
    return v3 == 38489676;
  return result;
}
