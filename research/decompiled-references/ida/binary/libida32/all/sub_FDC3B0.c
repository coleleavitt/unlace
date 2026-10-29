unsigned __int64 __fastcall sub_FDC3B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v14; // rax

  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 == v10 )
    return 0;
  while ( 1 )
  {
    if ( a2 & *(_QWORD *)(v11 - 32) | a3 & *(_QWORD *)(v11 - 24) )
    {
      v14 = sub_2219860(a1, *(_QWORD *)(v11 - 16), a4, a5, a7, a8, a9, a10);
      if ( (_DWORD)v14 )
        break;
    }
    v11 -= 32;
    if ( v10 == v11 )
      return 0;
  }
  return *(unsigned int *)(v11 - 8) | (unsigned __int64)(v14 << 32);
}

