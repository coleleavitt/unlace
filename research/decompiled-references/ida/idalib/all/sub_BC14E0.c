unsigned __int64 __fastcall sub_BC14E0(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 *v7; // rsi

  result = *(_QWORD *)(a1 + 120);
  if ( result )
  {
    if ( (result & 4) != 0 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
LABEL_4:
        *(_DWORD *)(result + 8) = a2;
        return result;
      }
    }
  }
  if ( a2 )
  {
    v4 = sub_B8C330(a1);
    result = sub_BC1250((__int64 *)(v4 + 2352), 16, 3u);
    v5 = 0;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
    {
      v7 = (unsigned __int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) != 0 )
      {
        v5 = 0;
        if ( v7 )
          v5 = *v7;
      }
    }
    *(_QWORD *)result = v5;
    *(_QWORD *)(a1 + 120) = result | 4;
    goto LABEL_4;
  }
  return result;
}
