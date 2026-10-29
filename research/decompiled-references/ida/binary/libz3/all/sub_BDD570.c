__int64 __fastcall sub_BDD570(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( v2 )
    return (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
  else
    return 0xFFFFFFFFLL;
}

