__int64 __fastcall sub_5DF980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // dl
  __int64 result; // rax
  int v9; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v7 = sub_728190(&v9, a1, a3, 0, 0x7FFFFFFF);
  result = 3;
  if ( v7 )
  {
    *(_QWORD *)(a6 + 408) = v9;
    return 0;
  }
  return result;
}

