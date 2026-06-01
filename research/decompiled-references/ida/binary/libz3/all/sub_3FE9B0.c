void __fastcall sub_3FE9B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 112);
    if ( v3 < a2 )
      v3 = a2;
    *(_DWORD *)(v2 + 112) = v3;
  }
  *(_DWORD *)(a1 + 96) = a2;
}

