unsigned __int64 __fastcall sub_7D6630(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx

  result = *(_QWORD *)(a1 + 160);
  if ( !result || (result & 4) == 0 )
  {
    if ( !a2 )
      return result;
    goto LABEL_5;
  }
  result &= 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
LABEL_11:
    *(_DWORD *)(result + 8) = a2;
    return result;
  }
  if ( a2 )
  {
LABEL_5:
    v4 = sub_798D40(a1);
    v5 = *(_QWORD *)(v4 + 2192);
    *(_QWORD *)(v4 + 2272) += 16LL;
    v6 = v4;
    result = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v6 + 2200) >= result + 16 && v5 )
      *(_QWORD *)(v6 + 2192) = result + 16;
    else
      result = sub_7CF9B0(v6 + 2192, 16, 3);
    *(_QWORD *)result = 0;
    v7 = nullptr;
    *(_QWORD *)(result + 8) = 0;
    v8 = *(_QWORD *)(a1 + 160);
    if ( v8 )
    {
      v7 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v8 & 4) != 0 )
      {
        if ( v7 )
          v7 = (_QWORD *)*v7;
      }
    }
    *(_QWORD *)result = v7;
    *(_QWORD *)(a1 + 160) = result | 4;
    goto LABEL_11;
  }
  return result;
}

