bool __fastcall sub_7A6B10(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
    return 0;
  v2 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 )
    v3 = (_QWORD *)*v3;
  if ( !v3 )
    BUG();
  v4 = v3[8];
  if ( !v4 || (*(_BYTE *)(v4 + 10) & 0x20) == 0 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 25 > 1 )
    v5 = sub_B0D320(v5);
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11;
}

