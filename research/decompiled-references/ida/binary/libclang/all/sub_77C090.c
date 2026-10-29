unsigned __int64 __fastcall sub_77C090(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 || (v1 & 4) == 0 || (result = v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v3 = sub_798D40(a1);
    v4 = *(_QWORD *)(v3 + 2192);
    *(_QWORD *)(v3 + 2272) += 72LL;
    v5 = v3;
    result = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v5 + 2200) >= result + 72 && v4 )
      *(_QWORD *)(v5 + 2192) = result + 72;
    else
      result = sub_779030(v5 + 2192, 72, 3);
    *(_QWORD *)(result + 8) = 0;
    *(_BYTE *)result &= 0xC0u;
    *(_BYTE *)(result + 20) &= ~1u;
    *(_DWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 88) = result | 4;
  }
  return result;
}

