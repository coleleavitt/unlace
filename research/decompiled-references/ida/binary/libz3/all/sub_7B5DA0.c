__int64 __fastcall sub_7B5DA0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // rax

  v4 = sub_11B5190(a1[3], a2 >> 1);
  result = 0;
  if ( !v4 )
  {
    sub_7B5BA0(a1);
    v6 = a1[120];
    *(_DWORD *)(v6 + 4LL * a2) = a3;
    *(_DWORD *)(v6 + 4LL * (a2 ^ 1)) = a3 ^ 1;
    *(_DWORD *)(v6 + 4LL * a3) = a3;
    *(_DWORD *)(v6 + 4LL * (a3 ^ 1)) = a3 ^ 1;
    *(_BYTE *)(a1[121] + (a2 >> 1)) = 1;
    return 1;
  }
  return result;
}

