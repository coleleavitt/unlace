__int64 __fastcall sub_614760(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5)
{
  void **v5; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v5 = a2;
  v7 = a1;
  if ( a1 )
  {
    a2 = (void **)*(unsigned int *)(a1 + 1332);
    v8 = *(_DWORD *)(a1 + 1332);
  }
  else
  {
    v8 = -1;
  }
  v9 = a1 + 552;
  if ( (unsigned int)a3 > 0x63 )
    sub_60D510(a1, a2, a3);
  return sub_614540(
           (__int64)&v7,
           (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a3],
           v5,
           (__int64)qword_2B0AD60,
           a5);
}

