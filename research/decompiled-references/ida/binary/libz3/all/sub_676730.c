bool __fastcall sub_676730(__int64 a1)
{
  bool result; // al
  _DWORD *v2; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    return !v2 || *v2 == -1;
  }
  return result;
}

