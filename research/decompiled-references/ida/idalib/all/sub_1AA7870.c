__int64 __fastcall sub_1AA7870(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // r8
  __int64 v12; // rax

  if ( a4 )
  {
    v12 = sub_1AA5E80((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    return sub_1C36280(*a1, v12, a2, a9);
  }
  else
  {
    v10 = 0;
    if ( a10 && (*(_WORD *)a10 & 0x1FF) == 0xF5 )
    {
      v10 = *(_QWORD *)(a10 + 8);
      if ( (v10 & 1) != 0 )
        v10 = 0;
    }
    sub_1AA7040(a1, a3, a7, a8, v10, a6);
    return a10;
  }
}
