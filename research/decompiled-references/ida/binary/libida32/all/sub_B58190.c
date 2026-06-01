unsigned __int64 __fastcall sub_B58190(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 || (v1 & 4) == 0 || (result = v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v3 = sub_B685F0(a1);
    result = sub_B57ED0((__int64 *)(v3 + 2352), 72, 3u);
    *(_QWORD *)(result + 8) = 0;
    *(_BYTE *)result = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_BYTE *)(result + 20) &= ~1u;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 88) = result | 4;
  }
  return result;
}

