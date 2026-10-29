__int64 __fastcall sub_7AE590(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // edx

  v2 = (_DWORD *)sub_7AE510();
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    v2[10] = 0;
    v2[8] = v3;
    v2[13] = v3;
  }
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 8) = v2 != nullptr;
  return 0;
}

