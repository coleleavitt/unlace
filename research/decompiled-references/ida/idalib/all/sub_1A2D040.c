unsigned __int64 __fastcall sub_1A2D040(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  __int64 v11; // rax
  unsigned __int64 result; // rax

  *(_QWORD *)(a2 + 1592) = a3;
  v11 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v11 & 4) != 0 )
    result = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  else
    result = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
    result -= 64LL;
  *(_QWORD *)(a2 + 1584) = result;
  if ( a5 == 1 )
  {
    *(_DWORD *)(a2 + 1280) = 1;
  }
  else if ( a5 == 2 )
  {
    *(_DWORD *)(a2 + 1280) = 2;
  }
  *(_DWORD *)(a2 + 1624) = a6;
  *(_QWORD *)(a2 + 1616) = a4;
  *(_BYTE *)(a2 + 1633) = a7;
  *(_BYTE *)(a2 + 1632) = a8;
  return result;
}
