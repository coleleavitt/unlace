signed __int64 __fastcall sub_B7BD70(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax

  result = *(_QWORD *)(a1 + 56);
  v4 = (result >> 2) & 1;
  if ( a2 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    v6 = (_QWORD *)result;
    if ( !v4 )
    {
      v7 = sub_B8C330(a1);
      v8 = sub_B7BC10((__int64 *)(v7 + 2352), 56, 3u);
      *(_OWORD *)(v8 + 24) = 0;
      *(_OWORD *)v8 = 0;
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_DWORD *)(v8 + 48) = 0;
      *(_QWORD *)(a1 + 56) = v8 | 4;
      *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v6;
      result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      v6 = (_QWORD *)result;
    }
    *v6 = a2;
    v6[1] = a3;
  }
  else if ( v4 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = a3;
  }
  return result;
}
