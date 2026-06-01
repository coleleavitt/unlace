__int64 __fastcall sub_3C2EB0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( a2 != -1 )
    a2 = sub_3B9DC0(a1, a2);
  v5[0] = a2;
  v2 = sub_7BE950(v5, *a1, 16, &v4, 4, 65);
  result = 0xFFFFFFFFLL;
  if ( v2 > 0 )
    return (unsigned int)(v4 - 1);
  return result;
}
