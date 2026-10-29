__int64 __fastcall sub_639F60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // rbp
  __int64 v11; // rbx

  v10 = a10;
  if ( a10 )
    v10 = *(_QWORD *)(a10 + 8);
  v11 = (unsigned int)sub_FEDDA0(v10, a9);
  return (v11 << 32) | (unsigned int)sub_FEDDA0(v10, a8);
}

