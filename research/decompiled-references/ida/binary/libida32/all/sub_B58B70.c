unsigned __int64 __fastcall sub_B58B70(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rax

  result = (unsigned __int8)(a2 & 1) << 6;
  *(_BYTE *)(a1 + 82) = ((a2 & 1) << 6) | *(_BYTE *)(a1 + 82) & 0xBF;
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 83) & 8) != 0 )
    {
      result = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(result + 8LL * *(unsigned int *)result + 8) = a3;
    }
    else
    {
      v5 = sub_B685F0(a1);
      result = sub_B57ED0((__int64 *)(v5 + 2352), 16, 3u);
      *(_DWORD *)result = 0;
      *(_BYTE *)(result + 4) = 1;
      *(_QWORD *)(result + 8) = a3;
      *(_QWORD *)(a1 + 128) = result;
      *(_BYTE *)(a1 + 83) |= 8u;
    }
  }
  return result;
}

