__int64 __fastcall sub_632610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = (unsigned int)a2;
  v5 = a1;
  if ( a1 )
  {
    a2 = *(_QWORD *)(a1 + 1520);
    v6 = a2;
  }
  else
  {
    v6 = -1;
  }
  v7 = a1 + 640;
  if ( (unsigned int)v3 > 0x63 )
    sub_629970(a1, a2, a3);
  return sub_632390((__int64)&v5, (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)v3], a3, v3, 1);
}
