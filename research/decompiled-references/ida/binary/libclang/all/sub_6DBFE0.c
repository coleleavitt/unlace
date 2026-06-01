__int64 __fastcall sub_6DBFE0(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int16 v10; // [rsp+Eh] [rbp-9Ah] BYREF
  __m128i v11[9]; // [rsp+10h] [rbp-98h] BYREF

  v4 = *(_WORD *)(a2 + 18);
  v10 = a3;
  v5 = a2;
  if ( v4 >> 3 != a3 )
  {
    if ( *(_BYTE *)(a2 + 16) == 25 )
    {
      v6 = sub_6C7100(a1, *(_QWORD *)(a2 + 24), (unsigned __int16 *)&v10);
    }
    else
    {
      v8 = a2 + 48;
      sub_6B29F0((__int64)v11, a2);
      v9 = *(_QWORD *)(a2 + 24);
      v11[0].m128i_i16[0] = v10;
      v6 = sub_6DB070(a1, v9, v8, (unsigned __int16)(*(_DWORD *)(v8 - 28) >> 6), v11, 0);
    }
    return *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
  return v5;
}

