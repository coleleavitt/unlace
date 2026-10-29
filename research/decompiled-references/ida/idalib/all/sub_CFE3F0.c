__int64 __fastcall sub_CFE3F0(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 24) == 1 )
    return sub_CFE390(a1) * v1 + *(_QWORD *)(a1 + 40);
  else
    return v1 + *(_QWORD *)(a1 + 32);
}
