__int64 __fastcall sub_615AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = (unsigned int)a2;
  v5 = a1;
  if ( a1 )
  {
    a2 = *(unsigned int *)(a1 + 1332);
    v6 = *(_DWORD *)(a1 + 1332);
  }
  else
  {
    v6 = -1;
  }
  v7 = a1 + 552;
  if ( (unsigned int)v3 > 0x63 )
    sub_60D510(a1, a2, a3);
  return sub_615840((__int64)&v5, (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)v3], a3, v3, 1);
}

