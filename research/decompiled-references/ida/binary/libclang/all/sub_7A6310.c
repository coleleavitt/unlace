__int64 __fastcall sub_7A6310(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
  {
    v1 = sub_798D40(a1);
    *(_QWORD *)(a1 + 168) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 18200) + 48LL))(
                              *(_QWORD *)(v1 + 18200),
                              *(_QWORD *)(a1 + 168) >> 1);
  }
  v2 = sub_80F120(*(_QWORD *)(**(_QWORD **)(a1 + 168) + 8LL));
  v3 = 0;
  if ( (*(_WORD *)v2 & 0x1FFu) - 114 <= 1 )
    return *(_QWORD *)(v2 + 16);
  return v3;
}

