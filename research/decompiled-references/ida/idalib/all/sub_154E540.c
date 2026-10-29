bool __fastcall sub_154E540(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rcx
  bool result; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v8; // rcx

  v1 = *(_WORD *)(a1 + 32);
  v2 = a1 + 16;
  if ( v1 != 416 )
    goto LABEL_2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 2944);
  if ( v5 < *(unsigned int *)(v4 + 2912) )
  {
    v2 = *(_QWORD *)(v4 + 2904) + 24 * v5;
    v1 = *(_WORD *)(v2 + 16);
LABEL_2:
    result = 0;
    if ( v1 == 418 )
      return *(_DWORD *)(*(_QWORD *)(v2 + 8) + 32LL) == 6;
    return result;
  }
  v6 = sub_14180A0(v4, 1u);
  v7 = *(_WORD *)(v6 + 16);
  v8 = v6;
  result = 0;
  if ( v7 == 418 )
    return *(_DWORD *)(*(_QWORD *)(v8 + 8) + 32LL) == 6;
  return result;
}
