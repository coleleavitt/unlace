signed __int64 __fastcall sub_6141A0(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v5 = a1 + 552;
  v7 = a1;
  if ( a1 )
  {
    a1 = *(unsigned int *)(a1 + 1332);
    v8 = a1;
  }
  else
  {
    v8 = -1;
  }
  v9 = v5;
  if ( (unsigned int)a2 > 0x63 )
    sub_60D510(a1, a2, a3);
  return sub_613F40((__int64)&v7, (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a2], a3, a4, a5);
}

