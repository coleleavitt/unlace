__int64 __fastcall sub_1837780(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r11
  __int64 result; // rax
  int v8; // eax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]

  v6 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( (*(_BYTE *)(v6 + 17) & 4) == 0 )
  {
    if ( a2 )
    {
      LOBYTE(v8) = sub_F67430(v6, *(_QWORD *)(a1 + 248), a3, a4, a5, a6);
      return v8 ^ 1u;
    }
    else
    {
      v10 = a5;
      v11 = a6;
      v9 = off_2BC6A58;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall ***)()))sub_1E65DF0)(
               a1,
               (unsigned int)a3,
               a4,
               &v9);
    }
  }
  return result;
}
