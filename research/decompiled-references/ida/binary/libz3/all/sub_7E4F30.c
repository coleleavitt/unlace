__int64 __fastcall sub_7E4F30(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v2 )
    return (unsigned int)(2 * *(_DWORD *)(v2 + 28));
  v3 = *a2;
  if ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) )
  {
    v2 = *(_QWORD *)(v2 + 8 * v3);
    return (unsigned int)(2 * *(_DWORD *)(v2 + 28));
  }
  return 0;
}

