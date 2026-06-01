bool __fastcall sub_4558A0(__int64 a1, __int64 a2)
{
  bool result; // al
  int *v3; // rax
  int v4; // eax

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
      v4 = *v3;
    else
      v4 = -1;
    return *(_DWORD *)(a1 + 16) == v4;
  }
  return result;
}

