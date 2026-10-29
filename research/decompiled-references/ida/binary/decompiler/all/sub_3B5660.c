__int64 __fastcall sub_3B5660(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // [rsp+Ch] [rbp-3Ch]
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 80) != 1 )
    return 0;
  if ( *(int *)(*(_QWORD *)(a2 + 88) + 8LL) <= 69 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v8 = 0;
    v9 = 0;
    if ( (unsigned __int8)sub_20E610(&v8, v4) )
    {
      v5 = v8;
      v6 = sub_388F20(a2 + 80);
      LOBYTE(result) = sub_392A40(a2, v6, v5, 1);
    }
    else
    {
      LOBYTE(result) = sub_20E430(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 88));
    }
    result = (unsigned __int8)result;
    if ( v8 )
    {
      v7 = (unsigned __int8)result;
      *(_QWORD *)&v9 = 0;
      qfree();
      return v7;
    }
  }
  return result;
}
