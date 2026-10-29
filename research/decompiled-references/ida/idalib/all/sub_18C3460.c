__int64 __fastcall sub_18C3460(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  char v10; // cl
  __int64 v11; // rsi

  v7 = sub_BFAD70(a4);
  v8 = v7;
  if ( v7 && v7 != 15 )
  {
    sub_1A5B910(a1, v7, a2, a5);
    result = *(_QWORD *)(a1 + 232);
    if ( *(char *)(result + 1) >= 0 )
      return result;
  }
  else
  {
    result = *(_QWORD *)(a1 + 232);
    if ( *(char *)(result + 1) >= 0 )
      return result;
  }
  v10 = v8 - 16;
  if ( v8 - 16 <= 0x11 )
  {
    result = 1LL << v10;
    if ( ((1LL << v10) & 0x30003) != 0 )
    {
      v11 = 34;
      return sub_1A5B910(a1, v11, a2, a5);
    }
    v11 = 30;
    if ( (result & 0x8000) != 0 )
      return sub_1A5B910(a1, v11, a2, a5);
  }
  return result;
}
