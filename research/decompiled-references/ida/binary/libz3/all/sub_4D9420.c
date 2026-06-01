bool __fastcall sub_4D9420(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL);
  if ( v2 )
    LOBYTE(v2) = v1 == *(_DWORD *)(v2 - 4);
  else
    return v1 == 0;
  return v2;
}

