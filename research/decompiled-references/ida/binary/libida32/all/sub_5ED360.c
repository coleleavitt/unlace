char __fastcall sub_5ED360(_QWORD *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1[2] + 4LL);
  LOBYTE(v2) = v1 != 15 && (unsigned int)(v1 - 12) > 1;
  if ( (_BYTE)v2 && !v1 )
    return (unsigned int)sub_615160(*a1, 3, 4) ^ 1;
  return v2;
}

