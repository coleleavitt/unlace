__int64 __fastcall sub_631490(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v6 = a2;
  v8 = a1;
  if ( a1 )
  {
    a2 = *(__int64 **)(a1 + 1520);
    v9 = (__int64)a2;
  }
  else
  {
    v9 = -1;
  }
  v10 = a1 + 640;
  if ( (unsigned int)a3 > 0x63 )
    sub_629970(a1, a2, a3);
  return sub_631310(
           &v8,
           (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a3],
           v6,
           (__int64)qword_2B34D20,
           a5,
           a6);
}
