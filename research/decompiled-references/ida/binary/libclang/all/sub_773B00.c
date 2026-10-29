__int64 __fastcall sub_773B00(
        __int64 a1,
        unsigned __int8 (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned int v9; // ebx

  v8 = sub_798D40(a1);
  v9 = sub_76FAA0(a4, v8, a1, a2, a3, a5);
  if ( (_BYTE)v9 )
    sub_773780(a4);
  return v9;
}

