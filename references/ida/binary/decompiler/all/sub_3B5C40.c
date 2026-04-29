__int64 __fastcall sub_3B5C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  char v5; // dl
  unsigned int v6; // [rsp+Ch] [rbp-44h]
  __int64 v7; // [rsp+18h] [rbp-38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+28h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  if ( a2 )
    return (unsigned __int8)sub_3AACF0(a2);
  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 == 10 )
  {
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64 *, __int64, _QWORD))callui)(
           199,
           1,
           a3,
           &v7,
           &v8,
           -1,
           0);
    result = 0;
    if ( v5 )
      result = (unsigned __int8)sub_3AB120(*(_QWORD *)(a1 + 16), v7, &v8);
    if ( v8 )
    {
      v6 = result;
      *(_QWORD *)&v9 = 0;
      qfree();
      return v6;
    }
  }
  else if ( v4 == 58 )
  {
    return (unsigned __int8)sub_3AADE0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 208));
  }
  else
  {
    return 0;
  }
  return result;
}
