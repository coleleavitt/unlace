__int64 __fastcall sub_6160D0(__int64 a1, __int64 a2, const char *a3, size_t a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v6 = (unsigned int)a2;
  v8 = a1;
  if ( a1 )
  {
    a2 = *(unsigned int *)(a1 + 1332);
    v9 = *(_DWORD *)(a1 + 1332);
  }
  else
  {
    v9 = -1;
  }
  v10 = a1 + 552;
  if ( (unsigned int)v6 > 0x63 )
    sub_60D510(a1, a2, a3);
  return sub_615C80((const char *)&v8, (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)v6], a3, a4, v6, a6);
}

