__int64 __fastcall sub_A733D0(__int64 a1, int a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v10; // rax

  if ( *(_WORD *)(a1 + 4) )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  v8 = 0;
  if ( v7 && *(_DWORD *)v7 == 5 && *(_DWORD *)(v7 + 4) == a2 )
  {
    *a4 = *(_QWORD *)(a1 + 32);
    *a5 = *(_QWORD *)(a1 + 40);
    v10 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v10 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v8 = 1;
    *a3 = *(_DWORD *)v10;
  }
  return v8;
}

