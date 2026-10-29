__int64 __fastcall sub_728190(_DWORD *a1, void **a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  result = sub_727DF0(v6, a2, a3, a4, a5, 0);
  if ( (_BYTE)result )
    *a1 = v6[0];
  return result;
}

