__int64 __fastcall sub_208DD90(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 128) = -1;
  v1 = sub_20CC3B0(a1);
  if ( v2 > 4 && *(_DWORD *)v1 == 1836477548 && *(_BYTE *)(v1 + 4) == 46 )
  {
    *(_BYTE *)(a1 + 33) |= 0x20u;
    result = sub_208F330(v1, v2);
    *(_DWORD *)(a1 + 36) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 32) &= 0xFFFFDFFFuLL;
    return 4294959103LL;
  }
  return result;
}
