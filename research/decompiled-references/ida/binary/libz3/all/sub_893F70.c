bool __fastcall sub_893F70(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 664);
  v2 = *(_DWORD *)(a1 + 672);
  if ( v1 )
    LOBYTE(v1) = v2 != *(_DWORD *)(v1 - 4);
  else
    return v2 != 0;
  return v1;
}

