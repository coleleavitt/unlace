__int64 __fastcall sub_6E0F30(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  sub_150B150(a1 + 1040);
  v1 = *(_QWORD *)(a1 + 1144);
  if ( !v1 || (v2 = *(_DWORD *)(v1 - 4), v2 == *(_DWORD *)(v1 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 1144));
    v1 = *(_QWORD *)(a1 + 1144);
    v2 = *(_DWORD *)(v1 - 4);
  }
  *(_QWORD *)(v1 + 8LL * v2) = 0;
  *(_DWORD *)(v1 - 4) = v2 + 1;
  return 0;
}

