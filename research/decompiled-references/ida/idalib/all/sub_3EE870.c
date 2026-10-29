__int64 __fastcall sub_3EE870(__int64 a1, __int64 a2, char a3, __int64 a4, char *a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  char v8; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  result = 0;
  if ( *(_QWORD *)(a1 + 64) == a2 )
  {
    if ( a3 || a6 != 1 )
    {
      return 0;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
      v8 = *a5;
      sub_7BE7C0(a1 + 64, v7, a4, &v8, 1, 0);
      return 1;
    }
  }
  return result;
}
