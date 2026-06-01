__int64 __fastcall sub_631AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v7 = a1;
  if ( a1 )
  {
    a3 = *(_QWORD *)(a1 + 1520);
    v8 = a3;
  }
  else
  {
    v8 = -1;
  }
  v9 = a1 + 640;
  if ( (unsigned int)a2 > 0x63 )
    sub_629970(a1, a2, a3);
  return sub_6317E0(&v7, (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a2], 0, a4, a5, a6);
}
