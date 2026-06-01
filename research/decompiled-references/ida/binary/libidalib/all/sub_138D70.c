__int64 __fastcall sub_138D70(int a1, void (__fastcall ***a2)(__int64, __int64, __int64 *))
{
  void (__fastcall **v3)(__int64, __int64, __int64 *); // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a1 == -1 )
  {
    v3 = *a2;
    v6 = 0;
    v7 = 0;
    (*v3)((__int64)a2, 3, &v6);
    v5 = 4;
    if ( (unsigned __int64)v7 <= 1 )
      v5 = 3;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int64 *), __int64))(*a2)[6])(a2, v5);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  return 1;
}

