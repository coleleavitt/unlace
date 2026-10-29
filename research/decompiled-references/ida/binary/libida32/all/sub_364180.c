__int64 __fastcall sub_364180(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  int v4; // edx
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 == 0;
  v4 = v2 - 1;
  v5 = 0;
  if ( !v3 )
    v5 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

