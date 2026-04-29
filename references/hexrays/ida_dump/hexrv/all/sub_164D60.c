bool __fastcall sub_164D60(__int64 a1)
{
  bool result; // al
  __int64 v2; // rbx
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 76) != 4 || *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 7 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  result = sub_32BA00(v2) == 1 && (v3 = *(_QWORD *)(v2 + 56), *(_DWORD *)v3 == 55) && *(_BYTE *)(v3 + 32) == 7;
  return result;
}
