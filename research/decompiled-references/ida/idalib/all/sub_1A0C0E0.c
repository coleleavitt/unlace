__int64 __fastcall sub_1A0C0E0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(result + 107) & 4) != 0 )
  {
    result = *a3;
    if ( (_DWORD)result == 19 || (_DWORD)result == 1 )
    {
      if ( (a3[8] & 4) != 0 )
      {
LABEL_7:
        v7 = *((_QWORD *)a3 + 2);
        v8.m128i_i32[0] = 32;
        v8.m128i_i64[1] = v7;
        return (__int64)sub_1A0C040(a2 + 8, &v8);
      }
    }
    else
    {
      result = (unsigned int)(result - 3);
      if ( (unsigned int)result <= 1 )
      {
        result = sub_F6AE00(*(_QWORD *)(*((_QWORD *)a3 + 2) & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)a3, a4, a5);
        if ( (_BYTE)result )
          goto LABEL_7;
      }
    }
  }
  return result;
}
