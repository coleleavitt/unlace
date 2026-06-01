__int64 __fastcall sub_568200(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    v2 = *(_QWORD *)(v1 - 16);
  else
    LODWORD(v2) = 0;
  return (unsigned int)(v2 + 16 * *(_DWORD *)(a1 + 136) + 8 * *(_DWORD *)(a1 + 168));
}

