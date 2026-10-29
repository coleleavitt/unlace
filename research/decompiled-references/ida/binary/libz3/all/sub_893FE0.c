bool __fastcall sub_893FE0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 640);
  v2 = *(_DWORD *)(a1 + 648);
  if ( v1 )
    LOBYTE(v1) = v2 != *(_DWORD *)(v1 - 4);
  else
    return v2 != 0;
  return v1;
}

