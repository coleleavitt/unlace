void *__fastcall sub_8ECE80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  void *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v8 = nullptr;
  if ( ((_QWORD)a7 == 0) == (*((_QWORD *)&a7 + 1) == 0) )
  {
    if ( (_QWORD)a7 )
    {
      a2 = 5256;
      v8 = (void *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 5256);
    }
    else
    {
      v8 = malloc(0x1488u);
    }
    if ( v8 )
      sub_8ECDF0((__int64)v8, a2, v9, v10, v11, v12, a7, a8);
  }
  return v8;
}

