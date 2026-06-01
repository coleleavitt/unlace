__int64 __fastcall sub_56FDE0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v8; // ecx

  v5 = a2;
  v8 = v5 + a4;
  if ( *(_DWORD *)(a1 + 8) < v8 )
    *(_DWORD *)(a1 + 8) = v8;
  patch_bytes(v5, a3, a4);
  return 1;
}

