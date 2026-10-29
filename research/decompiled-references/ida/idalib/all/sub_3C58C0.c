__int64 __fastcall sub_3C58C0(_QWORD *a1, unsigned __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( a2 != -1 )
    a2 = sub_3B9DC0(a1, a2);
  v5[0] = a2;
  v2 = sub_7BEFD0(v5, *a1, &v4, 15, 65);
  result = -1;
  if ( v2 )
    return v4 - 1;
  return result;
}
