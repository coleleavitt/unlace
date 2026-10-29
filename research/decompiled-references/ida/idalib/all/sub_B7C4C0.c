signed __int64 __fastcall sub_B7C4C0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  result = *(_QWORD *)(a1 + 120);
  v4 = (result >> 2) & 1;
  if ( a2 )
  {
    if ( v4 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)result = a2;
      *(_QWORD *)(result + 8) = a3;
    }
    else
    {
      v6 = sub_B8C330(a1);
      v7 = sub_B7BC10((__int64 *)(v6 + 2352), 32, 3u);
      *(_OWORD *)v7 = 0;
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      v7 |= 4u;
      *(_QWORD *)(a1 + 120) = v7;
      result = v7 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)result = a2;
      *(_QWORD *)(result + 8) = a3;
    }
  }
  else if ( v4 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(result + 16) )
    {
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0;
    }
  }
  return result;
}
