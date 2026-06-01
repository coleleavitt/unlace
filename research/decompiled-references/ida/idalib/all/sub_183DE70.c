_BYTE *__fastcall sub_183DE70(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __m128 v9; // [rsp+0h] [rbp-98h] BYREF
  int v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+38h] [rbp-60h]

  result = (_BYTE *)sub_B8E180(a2 + 72);
  if ( !(_BYTE)result )
  {
    result = (_BYTE *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v6 = *(_QWORD *)result;
    if ( *(_BYTE *)(*(_QWORD *)result + 16LL) == 26 )
    {
      if ( (*(_BYTE *)(v6 + 19) & 0x1E) != 0 )
        return result;
LABEL_5:
      sub_A5E110(&v9, v6);
      v7 = *(_QWORD *)(a1 + 248);
      v11 = a2;
      v8 = *(_QWORD *)(v7 + 18632);
      v10 = 9;
      result = (_BYTE *)sub_A73610(v7, v8, nullptr, 0, (const __m128i *)&v9, 0);
      *(_QWORD *)(a2 + 48) = result;
      return result;
    }
    result = (_BYTE *)sub_F63050(*(_QWORD *)result, v6, v4, v5);
    v6 = (__int64)result;
    if ( (result[19] & 0x1E) == 0 )
      goto LABEL_5;
  }
  return result;
}
